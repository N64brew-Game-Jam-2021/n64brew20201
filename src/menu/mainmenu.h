#ifndef _MAIN_MENU_H
#define _MAIN_MENU_H

#include "graphics/render_state.h"
#include "scene/camera.h"
#include "sk64/skelatool_animator.h"
#include "sk64/skelatool_armature.h"
#include "game_defs.h"
#include "endgamemenu.h"
#include "titlescreen.h"
#include "optionsmenu.h"

enum MainMenuState {
    MainMenuStateSelectingTitleScreen,
    MainMenuStateSelectingPlayerCount,
    MainMenuStateSelectingOptions,
    MainMenuStateSelectingFaction,
    MainMenuStateSelectingLevel,
    MainMenuStateStarting,
    MainMenuStatePostGame,
};

enum MainMenuFactionFlags {
    MainMenuFactionFlagsAI = (1 << 0),
    MainMenuFactionFlagsSelected = (1 << 1),
};

struct MainMenuFactionSelector {
    struct SKAnimator animator;
    struct SKArmature armature;
    struct Transform transform;
    unsigned short selectedFaction;
    unsigned short flags;
    float rotateLerp;
};

struct MainMenuSelections {
    enum MainMenuState menuState;
    enum MainMenuState targetMenuState;
    unsigned short selectedPlayerCount;
    unsigned short selectedLevel;
};

struct MainMenu {
    struct Camera camera;
    struct Transform marsTransform;
    struct MainMenuSelections selections;
    struct LevelMetadata** filteredLevels;
    unsigned short levelCount;
    unsigned short unlockedLevelCount;
    struct MainMenuFactionSelector factionSelection[MAX_PLAYERS];
    struct EndGameMenu endGameMenu;
    struct TitleScreen titleScreen;
    struct OptionsMenu optionsMenu;
    Gfx* showingWireframe;
    unsigned showWireframeDelay;
    SoundID musicSoundID;
};

void mainMenuInitSelections(struct MainMenu* mainMenu);
void mainMenuInit(struct MainMenu* mainMenu);
void mainMenuUpdate(struct MainMenu* mainMenu);
void mainMenuRender(struct MainMenu* mainMenu, struct RenderState* renderState);
int mainMenuGetPlayerCount(struct MainMenu* menu);
void mainMenuStartLevel(struct MainMenu* mainMenu);

#endif