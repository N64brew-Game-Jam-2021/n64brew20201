#include "level.h"
#include "../../level_themes/Space/theme.h"
#include "sk64/skelatool_defs.h"
#include <ultra64.h>

Vtx Taurus_GeometryWall_color[] = {
    {{{-7202, 833, 2382}, 0, {-12056, 12}, {195, 235, 251, 255}}},
    {{{-7202, 0, 2382}, 0, {-12056, 2035}, {195, 235, 251, 255}}},
    {{{-7216, 0, -3217}, 0, {15105, 2035}, {195, 235, 251, 255}}},
    {{{-7216, 833, -3217}, 0, {15105, 12}, {195, 235, 251, 255}}},
    {{{-981, 0, -3217}, 0, {-6551, 2035}, {195, 235, 251, 255}}},
    {{{1318, 0, -1081}, 0, {4604, 2035}, {195, 235, 251, 255}}},
    {{{1318, 833, -1081}, 0, {4604, 12}, {195, 235, 251, 255}}},
    {{{-981, 833, -3217}, 0, {-6551, 12}, {195, 235, 251, 255}}},
    {{{8381, 0, -1084}, 0, {4756, 2035}, {198, 236, 251, 255}}},
    {{{8381, 0, 1081}, 0, {-5750, 2035}, {195, 235, 251, 255}}},
    {{{8381, 833, 1081}, 0, {-5750, 12}, {195, 235, 251, 255}}},
    {{{8381, 833, -1084}, 0, {4756, 12}, {195, 235, 251, 255}}},
    {{{8381, 0, 1081}, 0, {18386, 2035}, {195, 235, 251, 255}}},
    {{{1299, 0, 1081}, 0, {-15963, 2035}, {195, 235, 251, 255}}},
    {{{1299, 833, 1081}, 0, {-15963, 12}, {195, 235, 251, 255}}},
    {{{8381, 833, 1081}, 0, {18386, 12}, {195, 235, 251, 255}}},
    {{{1318, 833, -1081}, 0, {-15875, 12}, {195, 235, 251, 255}}},
    {{{1318, 0, -1081}, 0, {-15875, 2035}, {195, 235, 251, 255}}},
    {{{8381, 0, -1084}, 0, {18386, 2035}, {198, 236, 251, 255}}},
    {{{8381, 833, -1084}, 0, {18386, 12}, {195, 235, 251, 255}}},
    {{{-186, 833, 2381}, 0, {-2692, 12}, {195, 235, 251, 255}}},
    {{{1299, 833, 1081}, 0, {4516, 12}, {195, 235, 251, 255}}},
    {{{1299, 0, 1081}, 0, {4516, 2035}, {195, 235, 251, 255}}},
    {{{-186, 0, 2381}, 0, {-2692, 2035}, {195, 235, 251, 255}}},
    {{{-7216, 0, -3217}, 0, {-14646, 2035}, {195, 235, 251, 255}}},
    {{{-981, 0, -3217}, 0, {15592, 2035}, {195, 235, 251, 255}}},
    {{{-981, 833, -3217}, 0, {15592, 12}, {195, 235, 251, 255}}},
    {{{-7216, 833, -3217}, 0, {-14646, 12}, {195, 235, 251, 255}}},
    {{{-7202, 0, 2382}, 0, {-14579, 2035}, {195, 235, 251, 255}}},
    {{{-7202, 833, 2382}, 0, {-14579, 12}, {195, 235, 251, 255}}},
    {{{-186, 833, 2381}, 0, {19451, 12}, {195, 235, 251, 255}}},
    {{{-186, 0, 2381}, 0, {19451, 2035}, {195, 235, 251, 255}}},
};


Vtx Taurus_GeometryFloor_color[] = {
    {{{8381, 0, 1081}, 0, {10236, 2712}, {255, 255, 255, 255}}},
    {{{8381, 0, -1084}, 0, {10236, 159}, {255, 255, 255, 255}}},
    {{{1318, 0, -1081}, 0, {1912, 162}, {255, 255, 255, 255}}},
    {{{1299, 0, 1081}, 0, {1890, 2712}, {255, 255, 255, 255}}},
    {{{-981, 0, -3217}, 0, {-798, -2354}, {255, 255, 255, 255}}},
    {{{-186, 0, 2381}, 0, {139, 4244}, {255, 255, 255, 255}}},
    {{{-7216, 0, -3217}, 0, {-8144, -2354}, {255, 255, 255, 255}}},
    {{{-7202, 0, 2382}, 0, {-8128, 4244}, {255, 255, 255, 255}}},
};


Gfx Taurus_model_gfx[] = {
    // Material SSWall
    gsSPDisplayList(Space_SSWall),
    // End Material SSWall
    gsSPVertex(&Taurus_GeometryWall_color[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    // Material SSFloor
    gsSPDisplayList(Space_SSFloor),
    // End Material SSFloor
    gsSPVertex(&Taurus_GeometryFloor_color[0], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(3, 2, 4, 0, 3, 4, 5, 0),
    gsSP2Triangles(4, 6, 7, 0, 4, 7, 5, 0),
    // Begin decor
    gsSPDisplayList(Space_SSCrate),
    gsSPMatrix((Mtx*)MATRIX_TRANSFORM_SEGMENT_ADDRESS + 2, G_MTX_MODELVIEW | G_MTX_MUL | G_MTX_PUSH),
    gsSPDisplayList(Space_CrateDisplayList),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPMatrix((Mtx*)MATRIX_TRANSFORM_SEGMENT_ADDRESS + 8, G_MTX_MODELVIEW | G_MTX_MUL | G_MTX_PUSH),
    gsSPDisplayList(Space_CrateDisplayList),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPMatrix((Mtx*)MATRIX_TRANSFORM_SEGMENT_ADDRESS + 9, G_MTX_MODELVIEW | G_MTX_MUL | G_MTX_PUSH),
    gsSPDisplayList(Space_CrateDisplayList),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPDisplayList(Space_SetTextures2),
    gsSPMatrix((Mtx*)MATRIX_TRANSFORM_SEGMENT_ADDRESS + 16, G_MTX_MODELVIEW | G_MTX_MUL | G_MTX_PUSH),
    gsSPDisplayList(Space_ChairDisplayList),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPMatrix((Mtx*)MATRIX_TRANSFORM_SEGMENT_ADDRESS + 15, G_MTX_MODELVIEW | G_MTX_MUL | G_MTX_PUSH),
    gsSPDisplayList(Space_ChairDisplayList),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPMatrix((Mtx*)MATRIX_TRANSFORM_SEGMENT_ADDRESS + 14, G_MTX_MODELVIEW | G_MTX_MUL | G_MTX_PUSH),
    gsSPDisplayList(Space_ChairDisplayList),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPMatrix((Mtx*)MATRIX_TRANSFORM_SEGMENT_ADDRESS + 13, G_MTX_MODELVIEW | G_MTX_MUL | G_MTX_PUSH),
    gsSPDisplayList(Space_ChairDisplayList),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPMatrix((Mtx*)MATRIX_TRANSFORM_SEGMENT_ADDRESS + 12, G_MTX_MODELVIEW | G_MTX_MUL | G_MTX_PUSH),
    gsSPDisplayList(Space_ChairDisplayList),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPMatrix((Mtx*)MATRIX_TRANSFORM_SEGMENT_ADDRESS + 17, G_MTX_MODELVIEW | G_MTX_MUL | G_MTX_PUSH),
    gsSPDisplayList(Space_ChairDisplayList),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPMatrix((Mtx*)MATRIX_TRANSFORM_SEGMENT_ADDRESS + 18, G_MTX_MODELVIEW | G_MTX_MUL | G_MTX_PUSH),
    gsSPDisplayList(Space_ChairDisplayList),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPMatrix((Mtx*)MATRIX_TRANSFORM_SEGMENT_ADDRESS + 19, G_MTX_MODELVIEW | G_MTX_MUL | G_MTX_PUSH),
    gsSPDisplayList(Space_ChairDisplayList),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPMatrix((Mtx*)MATRIX_TRANSFORM_SEGMENT_ADDRESS + 6, G_MTX_MODELVIEW | G_MTX_MUL | G_MTX_PUSH),
    gsSPDisplayList(Space_ChairDisplayList),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPMatrix((Mtx*)MATRIX_TRANSFORM_SEGMENT_ADDRESS + 5, G_MTX_MODELVIEW | G_MTX_MUL | G_MTX_PUSH),
    gsSPDisplayList(Space_ChairDisplayList),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPMatrix((Mtx*)MATRIX_TRANSFORM_SEGMENT_ADDRESS + 20, G_MTX_MODELVIEW | G_MTX_MUL | G_MTX_PUSH),
    gsSPDisplayList(Space_ChairDisplayList),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPMatrix((Mtx*)MATRIX_TRANSFORM_SEGMENT_ADDRESS + 0, G_MTX_MODELVIEW | G_MTX_MUL | G_MTX_PUSH),
    gsSPDisplayList(Space_ChairDisplayList),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPMatrix((Mtx*)MATRIX_TRANSFORM_SEGMENT_ADDRESS + 21, G_MTX_MODELVIEW | G_MTX_MUL | G_MTX_PUSH),
    gsSPDisplayList(Space_ConsoleDisplayList),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPMatrix((Mtx*)MATRIX_TRANSFORM_SEGMENT_ADDRESS + 1, G_MTX_MODELVIEW | G_MTX_MUL | G_MTX_PUSH),
    gsSPDisplayList(Space_ConsoleDisplayList),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPMatrix((Mtx*)MATRIX_TRANSFORM_SEGMENT_ADDRESS + 7, G_MTX_MODELVIEW | G_MTX_MUL | G_MTX_PUSH),
    gsSPDisplayList(Space_ConsoleDisplayList),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPMatrix((Mtx*)MATRIX_TRANSFORM_SEGMENT_ADDRESS + 3, G_MTX_MODELVIEW | G_MTX_MUL | G_MTX_PUSH),
    gsSPDisplayList(Space_Food_DishesDisplayList),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPMatrix((Mtx*)MATRIX_TRANSFORM_SEGMENT_ADDRESS + 11, G_MTX_MODELVIEW | G_MTX_MUL | G_MTX_PUSH),
    gsSPDisplayList(Space_TableDisplayList),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPMatrix((Mtx*)MATRIX_TRANSFORM_SEGMENT_ADDRESS + 10, G_MTX_MODELVIEW | G_MTX_MUL | G_MTX_PUSH),
    gsSPDisplayList(Space_TableDisplayList),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPMatrix((Mtx*)MATRIX_TRANSFORM_SEGMENT_ADDRESS + 4, G_MTX_MODELVIEW | G_MTX_MUL | G_MTX_PUSH),
    gsSPDisplayList(Space_TableDisplayList),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPEndDisplayList(),
};
struct BaseDefinition Taurus_Bases[] = {
    {.position = {-6510.13, -2344.12}, .startingTeam = TEAM(1)},
    {.position = {205.864, -1028.39}, .startingTeam = TEAM_NONE},
    {.position = {92.4434, 330.183}, .startingTeam = TEAM_NONE},
    {.position = {-6291.32, 991.669}, .startingTeam = TEAM(2)},
    {.position = {7652.43, -434.253}, .startingTeam = TEAM(0)},
    {.position = {1642.58, -75.6168}, .startingTeam = TEAM_NONE},
    {.position = {4062.32, 196.604}, .startingTeam = TEAM_NONE},
};

struct Vector2 Taurus_StartingPositions[] = {
    {7652.43, -434.253},
    {-6510.13, -2344.12},
    {-6291.32, 991.669},
};

struct SceneBoundary Taurus_Boundary[] = {
    {{-7202.41, 2382.02}, {0.999997, -0.0024598}, 5600.02},
    {{-7216.18, -3217.98}, {-0, 1}, 6234.34},
    {{-981.844, -3217.98}, {-0.680524, 0.732726}, 3138.96},
    {{1318.16, -1081.84}, {0.000356048, 1}, 7063.69},
    {{8381.84, -1084.36}, {-1, 0}, 2166.15},
    {{8381.84, 1081.79}, {-1.60822e-05, -1}, 7081.84},
    {{1300, 1081.9}, {-0.658377, -0.752689}, 1974.55},
    {{-186.225, 2381.9}, {-1.62153e-05, -1}, 7016.18},
};

struct DecorDefinition Taurus_Decor[] = {
    {{-3833.74, 0, -826.393}, {0, 0.614527, 2.98023e-08, 0.788895}, 1, CHAIR_DECOR_ID},
    {{7829.11, 0, 860.365}, {2.84217e-14, 1, -1.49012e-07, 3.13916e-07}, 1, CONSOLE_DECOR_ID},
    {{-6736.89, 0, 1948}, {0, 0, 0, 1}, 2, CRATE_DECOR_ID},
    {{-429.636, 0, 2193.06}, {0, 0, 0, 1}, 1, FOOD_DISHES_DECOR_ID},
    {{-5516.5, 0, -545.762}, {2.13163e-14, 1, -1.49012e-07, 1.94707e-07}, 1, TABLE_DECOR_ID},
    {{-4233.66, 0, -834.834}, {1.49012e-07, 0.757059, -2.38419e-07, 0.653346}, 1, CHAIR_DECOR_ID},
    {{-4638.92, 0, -826.393}, {5.96046e-08, 0.794688, -5.96046e-08, 0.607017}, 1, CHAIR_DECOR_ID},
    {{7216.48, 0, 860.365}, {2.84217e-14, 1, -1.49012e-07, 3.13916e-07}, 1, CONSOLE_DECOR_ID},
    {{-6682.97, 0, 1660.94}, {0, 0, 0, 1}, 2, CRATE_DECOR_ID},
    {{-6452.62, 0, 1945.9}, {0, 0, 0, 1}, 2, CRATE_DECOR_ID},
    {{-4232.02, 0, -530.639}, {5.96046e-08, -0.707106, 8.9407e-08, 0.707107}, 1, TABLE_DECOR_ID},
    {{-2900.16, 0, -545.762}, {2.13163e-14, 1, -1.49012e-07, 1.94707e-07}, 1, TABLE_DECOR_ID},
    {{-4645.59, 0, -224.246}, {-5.96046e-08, 0.788895, -8.9407e-08, -0.614527}, 1, CHAIR_DECOR_ID},
    {{-4245.66, 0, -215.805}, {8.9407e-08, -0.653346, 5.96046e-08, 0.757059}, 1, CHAIR_DECOR_ID},
    {{-3840.41, 0, -224.246}, {8.9407e-08, -0.607018, 5.96046e-08, 0.794688}, 1, CHAIR_DECOR_ID},
    {{-2630.19, 0, -148.942}, {8.9407e-08, -0.123297, 7.45058e-09, 0.99237}, 1, CHAIR_DECOR_ID},
    {{-2621.75, 0, -548.865}, {-5.96046e-08, 0.0733362, 0, 0.997307}, 1, CHAIR_DECOR_ID},
    {{-2630.19, 0, -954.122}, {-8.9407e-08, 0.132703, 0, 0.991156}, 1, CHAIR_DECOR_ID},
    {{-5815.38, 0, -970.577}, {1.11759e-08, 0.99237, -1.49012e-07, 0.123297}, 1, CHAIR_DECOR_ID},
    {{-5823.82, 0, -570.654}, {-7.45058e-09, 0.997307, -8.9407e-08, -0.073336}, 1, CHAIR_DECOR_ID},
    {{-5815.38, 0, -165.398}, {-1.49012e-08, 0.991156, -1.49012e-07, -0.132703}, 1, CHAIR_DECOR_ID},
    {{6586.33, 0, 860.365}, {2.84217e-14, 1, -1.49012e-07, 3.13916e-07}, 1, CONSOLE_DECOR_ID},
};
struct Vector3 Taurus_PathingNodes[] = {
    {1629.81, 0.0f, -87.0911},
    {4111.45, 0.0f, 190.078},
    {7655.46, 0.0f, -436.28},
    {54.4615, 0.0f, 341.405},
    {218.298, 0.0f, -1070.11},
    {-6549.41, 0.0f, -2355.6},
    {-6322.56, 0.0f, 1047.16},
    {-2201.44, 0.0f, -1019.7},
    {-2251.85, 0.0f, -17.7756},
    {1231.56, 0.0f, -737.396},
};
char Taurus_BasesPathNodes[] = {
    5,
    4,
    3,
    6,
    2,
    0,
    1,
};
unsigned short Taurus_NodeDistances[] = {
    0, 2497, 6035, 1632, 1720, 8608, 8048, 4140, 3966, 2786, 
    2497, 0, 3598, 4059, 4092, 10980, 10475, 6512, 6393, 5158, 
    6035, 3598, 0, 7658, 7497, 14386, 14074, 9917, 9992, 6430, 
    1632, 4059, 7658, 0, 1420, 7183, 6415, 2634, 2334, 1596, 
    1720, 4092, 7497, 1420, 0, 6888, 6892, 2420, 2684, 1066, 
    8608, 10980, 14386, 7183, 6888, 0, 3410, 4548, 5551, 7955, 
    8048, 10475, 14074, 6415, 6892, 3410, 0, 5210, 4207, 7959, 
    4140, 6512, 9917, 2634, 2420, 4548, 5210, 0, 1003, 3486, 
    3966, 6393, 9992, 2334, 2684, 5551, 4207, 1003, 0, 3751, 
    2786, 5158, 6430, 1596, 1066, 7955, 7959, 3486, 3751, 0, 
};
char Taurus_NextNode[] = {
    0, 1, 2, 3, 4, 4, 3, 4, 3, 4, 
    0, 1, 2, 3, 4, 4, 3, 4, 3, 4, 
    0, 1, 2, 1, 9, 9, 1, 9, 1, 9, 
    0, 1, 1, 3, 4, 7, 6, 7, 8, 9, 
    0, 1, 9, 3, 4, 5, 8, 7, 8, 9, 
    4, 4, 4, 7, 4, 5, 6, 7, 7, 4, 
    3, 3, 3, 3, 8, 5, 6, 8, 8, 8, 
    4, 4, 4, 3, 4, 5, 8, 7, 8, 4, 
    3, 3, 3, 3, 4, 7, 6, 7, 8, 4, 
    4, 4, 2, 3, 4, 4, 4, 4, 4, 9, 
};
struct LevelDefinition Taurus_Definition = {
    .maxPlayerCount = 3,
    .playerStartLocations = Taurus_StartingPositions,
    .baseCount = 7,
    .decorCount = 22,
    .song = SOUNDS_LEVELMUSIC_HUNTERSEEKER_MASTERED,
    .bases = Taurus_Bases,
    .decor = Taurus_Decor,
    .levelBoundaries = {{-7216.18, -3217.98}, {8381.84, 2382.02}},
    .sceneRender = Taurus_model_gfx,
    .theme = &SpaceTheme,
    .staticScene = {Taurus_Boundary, 8},
    .pathfinding = {.nodeCount = 10, .baseNodes = Taurus_BasesPathNodes, .nodeDistances = Taurus_NodeDistances, .nodePositions = Taurus_PathingNodes, .nextNode = Taurus_NextNode},
    .aiDifficulty = 0.1,
};

