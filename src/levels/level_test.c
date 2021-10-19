
#include "level_test.h"
#include "../data/levels/test/test.h"
#include "game_defs.h"

struct BaseDefinition gLevelTestBases[] = {
    {
        .position = {0 * SCENE_SCALE, 0 * SCENE_SCALE},
        .startingFaction = TEAM(0),
    }
};

struct Vector2 gLevelTestPlayerStart[] = {
    {0 * SCENE_SCALE, 0 * SCENE_SCALE},
    {0 * SCENE_SCALE, 10 * SCENE_SCALE},
};

struct LevelDefinition gLevelTest = {
    .maxPlayerCount = 2,
    .playerStartLocations = gLevelTestPlayerStart,
    .baseCount = 1,
    .bases = gLevelTestBases,
    .sceneRender = test_level_geometry,
};