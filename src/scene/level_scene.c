
#include <stdbool.h>
#include "level_scene.h"
#include "util/memory.h"
#include "controls/controller.h"
#include "util/time.h"
#include "collision/dynamicscene.h"
#include "assert.h"
#include "graphics/gfx.h"
#include "../data/menu/menu.h"
#include "../data/models/characters.h"
#include "graphics/sprite.h"
#include "menu/basecommandmenu.h"
#include "menu/playerstatusmenu.h"
#include "menu/gbfont.h"
#include "minimap.h"
#include "audio/dynamic_music.h"
#include "events.h"
#include "collision/collisionlayers.h"
#include "levels/themedefinition.h"
#include "sk64/skelatool_defs.h"

#include "collision/polygon.h"
#include "math/vector3.h"

static Vp gSplitScreenViewports[4];
static Vp gFullScreenVP = {
  .vp = {
    .vscale = {SCREEN_WD*2, SCREEN_HT*2, G_MAXZ/2, 0},	/* scale */
    .vtrans = {SCREEN_WD*2, SCREEN_HT*2, G_MAXZ/2, 0},	/* translate */
  }
};
static unsigned short gClippingRegions[4 * 4];

struct ViewportLayout {
    unsigned short viewportLocations[4][4];
    unsigned short minimapLocation[4];
};

struct DynamicMarker gIntensityMarkers[] = {
    {0, {127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}},
    {25, {127, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}},
    {50, {127, 0, 127, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}},
    {75, {127, 0, 127, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}},
};

#define MINIMAP_SIZE    64

struct ViewportLayout gViewportPosition[] = {
    // Single player
    {
        .viewportLocations = {
            {0, 0, SCREEN_WD, SCREEN_HT},
            {0, 0, 0, 0},
            {0, 0, 0, 0},
            {0, 0, 0, 0},
        },
        .minimapLocation = {SCREEN_WD - MINIMAP_SIZE - 32, SCREEN_HT - MINIMAP_SIZE - 32, SCREEN_WD - 32, SCREEN_HT - 32},
    },
    // Two player
    {
        .viewportLocations = {
            {0, 0, SCREEN_WD/2-1, SCREEN_HT},
            {SCREEN_WD/2+1, 0, SCREEN_WD, SCREEN_HT},
            {0, 0, 0, 0},
            {0, 0, 0, 0},
        },
        .minimapLocation = {(SCREEN_WD - MINIMAP_SIZE) / 2, SCREEN_HT - MINIMAP_SIZE - 32, (SCREEN_WD + MINIMAP_SIZE) / 2, SCREEN_HT - 32},
    },
    // Three player
    {
        .viewportLocations = {
            {0, 0, SCREEN_WD/2-1, SCREEN_HT/2-1},
            {SCREEN_WD/2+1, 0, SCREEN_WD, SCREEN_HT/2-1},
            {0, SCREEN_HT/2+1, SCREEN_WD/2-1, SCREEN_HT},
            {0, 0, 0, 0},
        },
        .minimapLocation = {SCREEN_WD * 3 / 4 - SCREEN_HT / 4 + 16, SCREEN_HT / 2 + 16, SCREEN_WD * 3 / 4 + SCREEN_HT / 4 - 16, SCREEN_HT - 16},
    },
    // Four player
    {
        .viewportLocations = {
            {0, 0, SCREEN_WD/2-1, SCREEN_HT/2-1},
            {SCREEN_WD/2+1, 0, SCREEN_WD, SCREEN_HT/2-1},
            {0, SCREEN_HT/2+1, SCREEN_WD/2-1, SCREEN_HT},
            {SCREEN_WD/2+1, SCREEN_HT/2+1, SCREEN_WD, SCREEN_HT},
        },
        .minimapLocation = {(SCREEN_WD - MINIMAP_SIZE) / 2, (SCREEN_HT - MINIMAP_SIZE) / 2, (SCREEN_WD + MINIMAP_SIZE) / 2, (SCREEN_HT + MINIMAP_SIZE) / 2},
    },
};

void levelSceneInit(struct LevelScene* levelScene, struct LevelDefinition* definition, unsigned int playercount, unsigned char humanPlayerCount) {
    levelScene->definition = definition;
    dynamicSceneInit(&gDynamicScene);
    initGBFont();

    levelScene->levelDL = definition->sceneRender;

    levelScene->baseCount = definition->baseCount;
    levelScene->bases = malloc(sizeof(struct LevelBase) * definition->baseCount);
    for (unsigned i = 0; i < definition->baseCount; ++i) {
        levelBaseInit(&levelScene->bases[i], &definition->bases[i], (unsigned char)i, definition->bases[i].startingTeam >= playercount);
    }
    
    levelScene->playerCount = playercount;

    //initializing player controlled characters 
    for(unsigned i = 0; i < humanPlayerCount; ++i){
        playerInit(&levelScene->players[i], i, i, &definition->playerStartLocations[i]);
        controlsScramblerInit(&levelScene->scramblers[i]);
        cameraInit(&levelScene->cameras[i], 45.0f, 100.0f, 18000.0f);
        vector3AddScaled(&levelScene->players[i].transform.position, &gForward, SCENE_SCALE * 2.0f, &levelScene->cameras[i].transform.position);
        vector3AddScaled(&levelScene->cameras[i].transform.position, &gUp, SCENE_SCALE * 2.0f, &levelScene->cameras[i].transform.position);
        baseCommandMenuInit(&levelScene->baseCommandMenu[i]);
        
    }
    //initializing AI controlled characters
    unsigned numBots = playercount - humanPlayerCount;
    levelScene->botsCount = numBots;
    if(numBots > 0){
        levelScene->bots = malloc(sizeof(struct AIController) * numBots);
        for (unsigned i = humanPlayerCount; i < playercount; ++i) {
            playerInit(&levelScene->players[i], i, i, &definition->playerStartLocations[i]);
            //struct LevelBase* startBase = levelGetClosestBase(&levelScene->players[i].transform.position, levelScene, i);
            struct LevelBase* startBase = getClosestUncapturedBase(levelScene->bases, levelScene->baseCount, &levelScene->players[i].transform.position, i);

            InitAI(&levelScene->bots[i - humanPlayerCount], i, i);
            setTargetBase(&levelScene->bots[i - humanPlayerCount], startBase);
        }
    }
    
    quatAxisAngle(&gRight, -M_PI * 0.3333f, &levelScene->cameras[0].transform.rotation);

    levelScene->decorMatrices = malloc(sizeof(Mtx) * definition->decorCount);

    for (unsigned i = 0; i < definition->decorCount; ++i) {
        struct Transform decorTransform;
        decorTransform.position = definition->decor[i].position;
        decorTransform.rotation = definition->decor[i].rotation;
        decorTransform.scale = gOneVec;
        transformToMatrixL(&decorTransform, &levelScene->decorMatrices[i]);

        unsigned id = definition->decor[i].decorID;

        if (definition->theme->decorShapes[id]) {
            struct Vector2 pos2D;
            pos2D.x = decorTransform.position.x;
            pos2D.y = decorTransform.position.z;
            struct DynamicSceneEntry* entry = dynamicSceneNewEntry(definition->theme->decorShapes[id], 0, &pos2D, 0, 0, CollisionLayersTangible | CollisionLayersStatic);
            dynamicEntrySetRotation3D(entry, &decorTransform.rotation);
        }
    }

    levelScene->minionCount = definition->baseCount * MAX_MINIONS_PER_BASE;
    levelScene->lastMinion = 0;
    levelScene->minions = malloc(sizeof(struct Minion) * levelScene->minionCount);
    for (unsigned i = 0; i < levelScene->minionCount; ++i) {
        levelScene->minions[i].minionFlags = 0;
    }

    for (unsigned finderIndex = 0; finderIndex < TARGET_FINDER_COUNT; ++finderIndex) {
        targetFinderInit(&levelScene->targetFinders[finderIndex], (levelScene->minionCount / TARGET_FINDER_COUNT) * finderIndex);
    }

    itemDropsInit(&levelScene->itemDrops);

    levelScene->humanPlayerCount = humanPlayerCount;

    // 4 numbers per viewport, 4 viewports per slot
    struct ViewportLayout* viewprtLayout = &gViewportPosition[levelScene->humanPlayerCount - 1];
    
    for (unsigned i = 0; i < levelScene->humanPlayerCount; ++i) {
        unsigned l = viewprtLayout->viewportLocations[i][0];
        unsigned t = viewprtLayout->viewportLocations[i][1];
        unsigned r = viewprtLayout->viewportLocations[i][2];
        unsigned b = viewprtLayout->viewportLocations[i][3];

        gSplitScreenViewports[i].vp.vscale[0] = (r - l) * 4 / 2;
        gSplitScreenViewports[i].vp.vscale[1] = (b - t) * 4 / 2;
        gSplitScreenViewports[i].vp.vscale[2] = G_MAXZ/2;
        gSplitScreenViewports[i].vp.vscale[3] = 0;

        gSplitScreenViewports[i].vp.vtrans[0] = (r + l) * 4 / 2;
        gSplitScreenViewports[i].vp.vtrans[1] = (b + t) * 4 / 2;
        gSplitScreenViewports[i].vp.vtrans[2] = G_MAXZ/2;
        gSplitScreenViewports[i].vp.vtrans[3] = 0;

        gClippingRegions[i * 4 + 0] = l;
        gClippingRegions[i * 4 + 1] = t;
        gClippingRegions[i * 4 + 2] = r;
        gClippingRegions[i * 4 + 3] = b;
    }

    levelScene->state = LevelSceneStatePlaying;
    levelScene->winningTeam = TEAM_NONE;

    // dynamicMusicUseMarkers(gIntensityMarkers, sizeof(gIntensityMarkers) / sizeof(*gIntensityMarkers));

    osWritebackDCache(&gSplitScreenViewports[0], sizeof(gSplitScreenViewports));
}
/*
struct LevelBase* levelGetClosestBase(struct Vector3* closeTo, struct LevelScene* levelScene, unsigned team ){
    struct LevelBase* bases = levelScene->bases;
    struct Vector3 basePos;
    basePos.x = bases[0].position.x;
    basePos.y = bases[0].position.y;
    basePos.z = bases[0].position.z;
    
    float minDist = vector3DistSqrd(&basePos, closeTo);
    unsigned int minIndex = 0;
    for(unsigned int i = 1; i < levelScene->baseCount; i++){
        if(levelBaseGetFactionID(&bases[i]) == team) continue;
        basePos.x = bases[i].position.x;
        basePos.y = bases[i].position.y;
        basePos.z = bases[i].position.z;
        float currDist = vector3DistSqrd(&basePos, closeTo);
        if(currDist < minDist){
            minIndex = i;
            minDist = currDist;
        }
    }
    struct LevelBase* outBase = &bases[minIndex];
    return outBase;
}
*/
void levelSceneRender(struct LevelScene* levelScene, struct RenderState* renderState) {
    spriteSetLayer(renderState, LAYER_SOLID_COLOR, gUseSolidColor);
    spriteSetLayer(renderState, LAYER_COMMAND_BUTTONS, gUseCommandIcons);
    spriteSetLayer(renderState, LAYER_GB_FONT, gUseFontTexture);
    spriteSetLayer(renderState, LAYER_UPGRADE_ICONS, gUseUpgradeIcons);

    // render minions
    Gfx* minionGfx = renderStateAllocateDLChunk(renderState, MINION_GFX_PER_MINION * levelScene->minionCount + 2);
    Gfx* prevDL = renderStateReplaceDL(renderState, minionGfx);
    gSPDisplayList(renderState->dl++, mat_Minion_f3d_material);
    for (unsigned int minionIndex = 0; minionIndex < levelScene->minionCount; ++minionIndex) {
        if (levelScene->minions[minionIndex].minionFlags & MinionFlagsActive) {
            minionRender(&levelScene->minions[minionIndex], renderState);
        }
    }
    gSPEndDisplayList(renderState->dl++);
    Gfx* minionEnd = renderStateReplaceDL(renderState, prevDL);
    assert(minionEnd <= minionGfx + MINION_GFX_PER_MINION * levelScene->minionCount + 1);

    // render bases
    Gfx* baseGfx = renderStateAllocateDLChunk(renderState, BASE_GFX_PER_BASE * levelScene->baseCount + 1);
    prevDL = renderStateReplaceDL(renderState, baseGfx);
    for (unsigned int i = 0; i < levelScene->baseCount; ++i) {
        levelBaseRender(&levelScene->bases[i], renderState);
    }
    gSPEndDisplayList(renderState->dl++);
    Gfx* baseEnd = renderStateReplaceDL(renderState, prevDL);
    assert(baseEnd <= baseGfx + MINION_GFX_PER_MINION * levelScene->baseCount + 1);

    // render players
    Gfx* playerGfx = renderStateAllocateDLChunk(renderState, PLAYER_GFX_PER_PLAYER * levelScene->playerCount + 3);
    prevDL = renderStateReplaceDL(renderState, playerGfx);
    for (unsigned int i = 0; i < levelScene->playerCount; ++i) {
        playerRender(&levelScene->players[i], renderState);
    }
    gDPPipeSync(renderState->dl++);
	gDPSetTextureLUT(renderState->dl++, G_TT_NONE);
    gSPEndDisplayList(renderState->dl++);
    Gfx* playerEnd = renderStateReplaceDL(renderState, prevDL);
    assert(playerEnd <= playerGfx + PLAYER_GFX_PER_PLAYER * levelScene->playerCount + 1);

    Gfx* itemDropsGfx = itemDropsRender(&levelScene->itemDrops, renderState);

    gSPEndDisplayList(renderState->transparentDL++);

    for (unsigned int i = 0; i < levelScene->playerCount; ++i) {
        Vp* viewport = &gSplitScreenViewports[i];
        cameraSetupMatrices(
            &levelScene->cameras[i], 
            renderState, 
            (float)viewport->vp.vscale[0] / (float)viewport->vp.vscale[1],
            controlsScramblerGetCameraRotation(&levelScene->scramblers[i])
        );
        gSPViewport(renderState->dl++, osVirtualToPhysical(viewport));
        gDPSetScissor(
            renderState->dl++, 
            G_SC_NON_INTERLACE, 
            gClippingRegions[i * 4 + 0],
            gClippingRegions[i * 4 + 1],
            gClippingRegions[i * 4 + 2],
            gClippingRegions[i * 4 + 3]
        );
        gDPPipeSync(renderState->dl++);
        gDPSetRenderMode(renderState->dl++, G_RM_ZB_OPA_SURF, G_RM_ZB_OPA_SURF2);
        gSPSegment(renderState->dl++, MATRIX_TRANSFORM_SEGMENT, levelScene->decorMatrices);
        gSPDisplayList(renderState->dl++, levelScene->levelDL);
        gSPDisplayList(renderState->dl++, baseGfx);
        gSPDisplayList(renderState->dl++, playerGfx);
        gSPDisplayList(renderState->dl++, minionGfx);
        gSPDisplayList(renderState->dl++, itemDropsGfx);
        gSPDisplayList(renderState->dl++, renderState->transparentQueueStart);

        baseCommandMenuRender(
            &levelScene->baseCommandMenu[i], 
            renderState, 
            &gClippingRegions[i * 4]
        );
        playerStatusMenuRender(&levelScene->players[i], renderState, levelScene->winningTeam, &gClippingRegions[i * 4]);
    }

    gSPViewport(renderState->dl++, osVirtualToPhysical(&gFullScreenVP));
    gDPSetScissor(
        renderState->dl++, 
        G_SC_NON_INTERLACE, 
        0,
        0,
        SCREEN_WD,
        SCREEN_HT
    );

    minimapRender(levelScene, renderState, gViewportPosition[levelScene->humanPlayerCount-1].minimapLocation);

    spriteFinish(renderState);
}

void leveSceneUpdateCamera(struct LevelScene* levelScene, unsigned playerIndex) {
    struct Vector3 target = levelScene->players[playerIndex].transform.position;
    vector3AddScaled(&target, &gUp, 2.0f * SCENE_SCALE, &target);

    if (levelScene->cameras[playerIndex].mode == CameraModeFollow) {
        struct Vector3 velocityLeader;
        vector3Scale(&levelScene->players[playerIndex].velocity, &velocityLeader, SCENE_SCALE * 0.5f);
        velocityLeader.y = 0.0f;
        vector3Add(&target, &velocityLeader, &target);
    }

    if (controllerGetButtonDown(playerIndex, Z_TRIG)) {
        cameraSetLockedMode(&levelScene->cameras[playerIndex], &levelScene->players[playerIndex].transform.rotation);
    } else if (controllerGetButtonUp(playerIndex, Z_TRIG)) {
        cameraSetFollowMode(&levelScene->cameras[playerIndex]);
    }

    cameraUpdate(&levelScene->cameras[playerIndex], &target, 15.0f * SCENE_SCALE, 5.0f * SCENE_SCALE);
}

unsigned short levelSceneCaluclateIntensity() {
    if (gTimePassed - gLastDeathTime < 5.0f) {
        return 75;
    } else if (gTimePassed - gLastDamageTime < 5.0f) {
        return 50;
    } else if (gTimePassed - gLastCaptureTime < 5.0f) {
        return 25;
    } else {
        return 0;
    }
}

void levelSceneUpdateMusic(struct LevelScene* levelScene) {
    unsigned short targetIntensity = levelSceneCaluclateIntensity();
    unsigned short currentIntesnity = dynamicMusicGetIntensity();

    if (targetIntensity < currentIntesnity) {
        dynamicMusicSetIntensity(currentIntesnity - 1);
    } else if (targetIntensity > currentIntesnity) {
        dynamicMusicSetIntensity(currentIntesnity + 1);
    }
}

void levelSceneCollectBotPlayerInput(struct LevelScene* levelScene, unsigned playerIndex, struct PlayerInput* playerInput) {
    unsigned botIndex = playerIndex - levelScene->humanPlayerCount;

    //if current target base has been captured by our team, tell the team leadr to switch to another base
    if(levelScene->bots[botIndex].targetBase != NULL && 
    levelBaseGetFactionID(levelScene->bots[botIndex].targetBase) == levelScene->players[playerIndex].team.teamNumber){
        struct LevelBase* newBase = getClosestUncapturedBase(levelScene->bases, levelScene->baseCount, 
        &levelScene->players[playerIndex].transform.position, 
        playerIndex);
        if(newBase != NULL) setTargetBase(&levelScene->bots[botIndex], newBase);
    }

    //if the player just got hit 
    if(levelScene->bots[botIndex].attackTarget == NULL && levelScene->players[playerIndex].damageHandler.damageTimer > 0.0f){
        float minionDist;
        float playerDist;

        struct Player* playerEnt = levelGetClosestEnemyPlayer(levelScene,
        &levelScene->players[playerIndex].transform.position,
        playerIndex,
        &playerDist);

        struct Minion* minionEnt = levelGetClosestEnemyMinion(levelScene,
        &levelScene->players[playerIndex].transform.position,
        playerIndex,
        &minionDist);
        if(minionDist < playerDist) {
            if(minionEnt->team.teamNumber != levelScene->players[playerIndex].team.teamNumber)
            levelScene->bots[botIndex].attackTarget = (struct TeamEntity*)minionEnt;
        }
        else {
            if(playerEnt->team.teamNumber != levelScene->players[playerIndex].team.teamNumber)
            levelScene->bots[botIndex].attackTarget = (struct TeamEntity*)playerEnt;
        }
    }

    moveAItowardsTarget(&levelScene->bots[botIndex], 
    &levelScene->players[playerIndex].transform.position, playerInput);

    if(playerInput->targetWorldDirection.x == 0 && playerInput->targetWorldDirection.y == 0 && playerInput->targetWorldDirection.z == 0){
        playerInputNoInput(playerInput);
        levelScene->players[playerIndex].velocity.x = 0;
        levelScene->players[playerIndex].velocity.y = 0;
        levelScene->players[playerIndex].velocity.z = 0;
    } 
}

void levelSceneCollectHumanPlayerInput(struct LevelScene* levelScene, unsigned playerIndex, struct PlayerInput* playerInput) {
    if (baseCommandMenuIsShowing(&levelScene->baseCommandMenu[playerIndex])) {
        playerInputNoInput(playerInput);
    } else {
        struct Quaternion cameraRotation;
        float cameraRoll = controlsScramblerGetCameraRotation(&levelScene->scramblers[playerIndex]);

        if (cameraRoll) {
            struct Quaternion roll;
            quatAxisAngle(&gForward, cameraRoll, &roll);
            quatMultiply(&levelScene->cameras[playerIndex].transform.rotation, &roll, &cameraRotation);
        } else {
            cameraRotation = levelScene->cameras[playerIndex].transform.rotation;
        }

        playerInputPopulateWithJoystickData(
            controllersGetControllerData(playerIndex), 
            &cameraRotation,
            controlsScramblerIsActive(&levelScene->scramblers[playerIndex], ControlsScramblerDPADSwap) ? PlayerInputFlagsSwapJoystickAndDPad : 0,
            playerInput
        );
    }
}

void levelSceneCollectPlayerInput(struct LevelScene* levelScene, unsigned playerIndex, struct PlayerInput* playerInput) {
    if (levelScene->state == LevelSceneStatePlaying) {
        if (playerIndex < levelScene->humanPlayerCount) {
            levelSceneCollectHumanPlayerInput(levelScene, playerIndex, playerInput);
        } else {
            levelSceneCollectBotPlayerInput(levelScene, playerIndex, playerInput);
        }
    } else {
        playerInputNoInput(&levelScene->scramblers[playerIndex].playerInput);
        baseCommandMenuHide(&levelScene->baseCommandMenu[playerIndex]);
    }
}

void levelSceneUpdate(struct LevelScene* levelScene) {
    levelScene->winningTeam = levelSceneFindWinningTeam(levelScene);

    if (levelScene->winningTeam != TEAM_NONE) {
        levelScene->state = LevelSceneStateDone;
    }

    for (unsigned playerIndex = 0; playerIndex < levelScene->playerCount; ++playerIndex) {
        struct PlayerInput* playerInput = &levelScene->scramblers[playerIndex].playerInput;

        controlsScramblerUpdate(&levelScene->scramblers[playerIndex]);

        levelSceneCollectPlayerInput(levelScene, playerIndex, playerInput);

        if (!playerIsAlive(&levelScene->players[playerIndex])) {
            baseCommandMenuHide(&levelScene->baseCommandMenu[playerIndex]);
        }

        controlsScramblerApply(&levelScene->scramblers[playerIndex]);

        baseCommandMenuUpdate(&levelScene->baseCommandMenu[playerIndex], playerIndex);
        playerUpdate(&levelScene->players[playerIndex], playerInput);
        leveSceneUpdateCamera(levelScene, playerIndex);
    }


    for (unsigned int minionIndex = 0; minionIndex < levelScene->minionCount; ++minionIndex) {
        if (levelScene->minions[minionIndex].minionFlags & MinionFlagsActive) {
            minionUpdate(&levelScene->minions[minionIndex]);
        }
    }

    for (unsigned int baseIndex = 0; baseIndex < levelScene->baseCount; ++baseIndex) {
        levelBaseUpdate(&levelScene->bases[baseIndex]);
    }

    for (unsigned finderIndex = 0; finderIndex < TARGET_FINDER_COUNT; ++finderIndex) {
        targetFinderUpdate(&levelScene->targetFinders[finderIndex]);
    }

    itemDropsUpdate(&levelScene->itemDrops);

    dynamicSceneCollide();
    levelSceneUpdateMusic(levelScene);
}

void levelSceneSpawnMinion(struct LevelScene* levelScene, enum MinionType type, struct Transform* at, unsigned char baseId, unsigned team, enum MinionCommand defualtCommand, unsigned followPlayer) {
    unsigned searchStart = levelScene->lastMinion;

    do {
        if (!(levelScene->minions[levelScene->lastMinion].minionFlags & MinionFlagsActive)) {
            minionInit(&levelScene->minions[levelScene->lastMinion], type, at, baseId, team, defualtCommand, followPlayer);
            break;
        }
        levelScene->lastMinion = (levelScene->lastMinion + 1) % levelScene->minionCount;
    } while (searchStart != levelScene->lastMinion);
    
}

void levelBaseDespawnMinions(struct LevelScene* levelScene, unsigned char baseId) {
    for (unsigned i = 0; i < levelScene->minionCount; ++i) {
        if (levelScene->minions[i].sourceBaseId == baseId) {
            minionCleanup(&levelScene->minions[i]);
        }
    }
}

void levelSceneIssueMinionCommand(struct LevelScene* levelScene, unsigned followingPlayer, enum MinionCommand command) {
    for (unsigned i = 0; i < levelScene->minionCount; ++i) {
        struct Minion* minion = &levelScene->minions[i];
        if (minion->followingPlayer == followingPlayer && (minion->minionFlags & MinionFlagsActive) != 0 && minion->currentCommand == MinionCommandFollow) {
            minionIssueCommand(minion, command, followingPlayer);
        }
    }
}

struct Vector3* levelSceneFindRespawnPoint(struct LevelScene* levelScene, struct Vector3* closeTo, unsigned team) {
    struct Vector3* result = 0;
    float score = 0.0;

    for (unsigned i = 0; i < levelScene->baseCount; ++i) {
        struct LevelBase* base = &levelScene->bases[i];

        if (base->team.teamNumber == team && base->state != LevelBaseStateNeutral) {
            float baseScore = vector3DistSqrd(closeTo, &base->position);

            if (!result || baseScore < score) {
                result = &base->position;
                score = baseScore;
            }
        }
    }

    return result;
}

int levelSceneFindWinningTeam(struct LevelScene* levelScene) {
    int result = -1;

    for (unsigned i = 0; i < levelScene->baseCount; ++i) {
        if (levelScene->bases[i].state != LevelBaseStateNeutral &&
            levelScene->bases[i].team.teamNumber != result) {
            if (result == -1) {
                result = levelScene->bases[i].team.teamNumber;
            } else {
                return TEAM_NONE;
            }
        }
    }

    for (unsigned i = 0; i < levelScene->playerCount; ++i) {
        if (playerIsAlive(&levelScene->players[i]) &&
            levelScene->players[i].team.teamNumber != result) {
            if (result == -1) {
                result = levelScene->players[i].team.teamNumber;
            } else {
                return TEAM_NONE;
            }
        }
    }

    for (unsigned i = 0; i < levelScene->minionCount; ++i) {
        if (minionIsAlive(&levelScene->minions[i]) &&
            levelScene->minions[i].team.teamNumber != result) {
            if (result == -1) {
                result = levelScene->minions[i].team.teamNumber;
            } else {
                return TEAM_NONE;
            }
        }
    }

    return result;
}

void levelSceneApplyScrambler(struct LevelScene* levelScene, unsigned fromTeam, enum ControlsScramblerType scambler) {
    for (unsigned i = 0; i < levelScene->playerCount; ++i) {
        if (levelScene->players[i].team.teamNumber != fromTeam) {
            controlsScramblerTrigger(&levelScene->scramblers[i], scambler);
        }
    }
}

struct Player* levelGetClosestEnemyPlayer(struct LevelScene* forScene, struct Vector3* closeTo, unsigned team, float* outDist){
    struct Vector3* currPos = &forScene->players[0].transform.position;
    float minDist = vector3DistSqrd(currPos, closeTo);
    unsigned int minIndex = 0;

        for(unsigned entInd = 1; entInd < forScene->playerCount; ++entInd){
        if(forScene->players[entInd].team.teamNumber != team){
            currPos = &forScene->players[entInd].transform.position;
            float thisDist = vector3DistSqrd(currPos, closeTo);
            if(thisDist < minDist){
                minIndex = entInd;
                minDist = thisDist;
            }
        }
    }

    *outDist = minDist;
    return &forScene->players[minIndex];
}

struct Minion* levelGetClosestEnemyMinion(struct LevelScene* forScene, struct Vector3* closeTo, unsigned team, float* outDist){
    struct Vector3* currPos = &forScene->minions[0].transform.position;
    float minDist = vector3DistSqrd(currPos, closeTo);
    unsigned int minIndex = 0;

    for(unsigned entInd = 1; entInd < forScene->minionCount; ++entInd){
        if(forScene->minions[entInd].team.teamNumber != team){
            currPos = &forScene->minions[entInd].transform.position;
            float thisDist = vector3DistSqrd(currPos, closeTo);
            if(thisDist < minDist){
                minIndex = entInd;
                minDist = thisDist;
            }
        }
    }

    *outDist = minDist;
    return &forScene->minions[minIndex];
}