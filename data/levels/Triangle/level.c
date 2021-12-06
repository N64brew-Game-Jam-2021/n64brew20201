#include "level.h"
#include "../../level_themes/Mars/theme.h"
#include "sk64/skelatool_defs.h"
#include <ultra64.h>

Vtx Triangle_Grid_001_color[] = {
    {{{-4414, 0, 2672}, 0, {716, 11}, {202, 93, 92, 255}}},
    {{{-5189, 524, 3327}, 0, {1118, 1111}, {202, 93, 92, 255}}},
    {{{-116, 524, 4407}, 0, {4001, 1073}, {202, 92, 91, 255}}},
    {{{-116, 0, 3729}, 0, {3999, -32}, {202, 92, 91, 255}}},
    {{{-3854, 524, -2688}, 0, {1118, 1111}, {202, 93, 92, 255}}},
    {{{-5189, 524, 3327}, 0, {1118, 1111}, {202, 93, 92, 255}}},
    {{{-4414, 0, 2672}, 0, {716, 11}, {202, 93, 92, 255}}},
    {{{-3078, 0, -2033}, 0, {716, 11}, {202, 93, 92, 255}}},
    {{{4472, 0, 2672}, 0, {716, 11}, {202, 93, 92, 255}}},
    {{{-116, 0, 3729}, 0, {3999, -32}, {202, 92, 91, 255}}},
    {{{-116, 524, 4407}, 0, {4001, 1073}, {202, 92, 91, 255}}},
    {{{5247, 524, 3327}, 0, {1118, 1111}, {202, 93, 92, 255}}},
    {{{-3854, 524, -2688}, 0, {1118, 1111}, {202, 93, 92, 255}}},
    {{{0, 524, -6157}, 0, {4001, 1073}, {202, 92, 91, 255}}},
    {{{-2, 524, -7268}, 0, {4004, 1992}, {202, 92, 91, 255}}},
    {{{-4851, 1748, -3385}, 0, {1470, 2024}, {202, 93, 92, 255}}},
    {{{-6187, 524, 4024}, 0, {1470, 2024}, {202, 93, 92, 255}}},
    {{{-118, 1748, 5243}, 0, {4004, 1992}, {202, 92, 91, 255}}},
    {{{-116, 524, 4407}, 0, {4001, 1073}, {202, 92, 91, 255}}},
    {{{-5189, 524, 3327}, 0, {1118, 1111}, {202, 93, 92, 255}}},
    {{{-3078, 0, -2033}, 0, {716, 11}, {202, 93, 92, 255}}},
    {{{0, 0, -5149}, 0, {3999, -32}, {202, 92, 91, 255}}},
    {{{0, 524, -6157}, 0, {4001, 1073}, {202, 92, 91, 255}}},
    {{{-3854, 524, -2688}, 0, {1118, 1111}, {202, 93, 92, 255}}},
    {{{3970, 524, -2339}, 0, {1118, 1111}, {202, 93, 92, 255}}},
    {{{5247, 524, 3327}, 0, {1118, 1111}, {202, 93, 92, 255}}},
    {{{-116, 524, 4407}, 0, {4001, 1073}, {202, 92, 91, 255}}},
    {{{-118, 1748, 5243}, 0, {4004, 1992}, {202, 92, 91, 255}}},
    {{{6245, 524, 4024}, 0, {1470, 2024}, {202, 93, 92, 255}}},
    {{{4967, 1748, -3037}, 0, {1470, 2024}, {202, 93, 92, 255}}},
    {{{-2, 524, -7268}, 0, {4004, 1992}, {202, 92, 91, 255}}},
    {{{0, 524, -6157}, 0, {4001, 1073}, {202, 92, 91, 255}}},
    {{{3194, 0, -1684}, 0, {716, 11}, {202, 93, 92, 255}}},
    {{{3970, 524, -2339}, 0, {1118, 1111}, {202, 93, 92, 255}}},
    {{{0, 524, -6157}, 0, {4001, 1073}, {202, 92, 91, 255}}},
    {{{0, 0, -5149}, 0, {3999, -32}, {202, 92, 91, 255}}},
    {{{4472, 0, 2672}, 0, {716, 11}, {202, 93, 92, 255}}},
    {{{5247, 524, 3327}, 0, {1118, 1111}, {202, 93, 92, 255}}},
    {{{3970, 524, -2339}, 0, {1118, 1111}, {202, 93, 92, 255}}},
    {{{3194, 0, -1684}, 0, {716, 11}, {202, 93, 92, 255}}},
};


Vtx Triangle_Grid_color[] = {
    {{{-2127, 0, 1614}, 0, {-2019, 3828}, {202, 93, 92, 255}}},
    {{{-4254, 0, 1539}, 0, {-4957, 3725}, {202, 93, 92, 255}}},
    {{{-4588, 0, 2788}, 0, {-5418, 5450}, {202, 93, 92, 255}}},
    {{{-2294, 0, 3417}, 0, {-2249, 6319}, {202, 93, 92, 255}}},
    {{{2182, 0, 1640}, 0, {3933, 3865}, {202, 93, 92, 255}}},
    {{{0, 0, 1689}, 0, {918, 3932}, {202, 93, 92, 255}}},
    {{{0, 0, 4046}, 0, {918, 7188}, {202, 93, 92, 255}}},
    {{{2342, 0, 3388}, 0, {4154, 6279}, {202, 93, 92, 255}}},
    {{{1863, 0, -1853}, 0, {3492, -960}, {202, 93, 92, 255}}},
    {{{0, 0, -3025}, 0, {918, -2578}, {202, 93, 92, 255}}},
    {{{0, 0, -667}, 0, {918, 677}, {202, 93, 92, 255}}},
    {{{2023, 0, -106}, 0, {3713, 1452}, {202, 93, 92, 255}}},
    {{{-1793, 0, -1991}, 0, {-1557, -1151}, {202, 93, 92, 255}}},
    {{{-3586, 0, -958}, 0, {-4034, 275}, {202, 93, 92, 255}}},
    {{{-3920, 0, 290}, 0, {-4495, 2000}, {202, 93, 92, 255}}},
    {{{-1960, 0, -188}, 0, {-1788, 1338}, {202, 93, 92, 255}}},
    {{{-1626, 0, -3794}, 0, {-1327, -3641}, {202, 93, 92, 255}}},
    {{{-3252, 0, -2207}, 0, {-3573, -1449}, {202, 93, 92, 255}}},
    {{{1703, 0, -3601}, 0, {3272, -3374}, {202, 93, 92, 255}}},
    {{{0, 0, -5382}, 0, {918, -5833}, {202, 93, 92, 255}}},
    {{{4046, 0, 454}, 0, {6507, 2227}, {202, 93, 92, 255}}},
    {{{4365, 0, 1592}, 0, {6948, 3798}, {202, 93, 92, 255}}},
    {{{3407, 0, -1820}, 0, {5625, -914}, {202, 93, 92, 255}}},
    {{{3727, 0, -682}, 0, {6066, 656}, {202, 93, 92, 255}}},
    {{{4685, 0, 2730}, 0, {7389, 5370}, {202, 93, 92, 255}}},
};


Gfx Triangle_model_gfx[] = {
    // Material Rock
    gsSPDisplayList(Mars_Rock),
    // End Material Rock
    gsSPVertex(&Triangle_Grid_001_color[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 12, 14, 0),
    gsSP2Triangles(12, 15, 16, 0, 16, 17, 18, 0),
    gsSP2Triangles(19, 16, 18, 0, 12, 16, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(25, 26, 27, 0, 28, 25, 27, 0),
    gsSP2Triangles(25, 28, 29, 0, 29, 30, 31, 0),
    gsSP2Triangles(24, 29, 31, 0, 29, 24, 25, 0),
    gsSPVertex(&Triangle_Grid_001_color[32], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    // Material Ground
    gsSPDisplayList(Mars_Ground),
    // End Material Ground
    gsSPVertex(&Triangle_Grid_color[0], 25, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 13, 0, 16, 13, 12, 0),
    gsSP2Triangles(18, 19, 9, 0, 18, 9, 8, 0),
    gsSP2Triangles(11, 10, 5, 0, 11, 5, 4, 0),
    gsSP2Triangles(15, 14, 1, 0, 15, 1, 0, 0),
    gsSP2Triangles(10, 15, 0, 0, 10, 0, 5, 0),
    gsSP2Triangles(20, 11, 4, 0, 20, 4, 21, 0),
    gsSP2Triangles(22, 18, 8, 0, 22, 8, 23, 0),
    gsSP2Triangles(19, 16, 12, 0, 19, 12, 9, 0),
    gsSP2Triangles(9, 12, 15, 0, 9, 15, 10, 0),
    gsSP2Triangles(23, 8, 11, 0, 23, 11, 20, 0),
    gsSP2Triangles(21, 4, 7, 0, 21, 7, 24, 0),
    gsSP2Triangles(5, 0, 3, 0, 5, 3, 6, 0),
    // Begin decor
    gsSPDisplayList(Mars_Crate),
    gsSPMatrix((Mtx*)MATRIX_TRANSFORM_SEGMENT_ADDRESS + 2, G_MTX_MODELVIEW | G_MTX_MUL | G_MTX_PUSH),
    gsSPDisplayList(Mars_CrateDisplayList),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPDisplayList(Mars_Rock),
    gsSPMatrix((Mtx*)MATRIX_TRANSFORM_SEGMENT_ADDRESS + 0, G_MTX_MODELVIEW | G_MTX_MUL | G_MTX_PUSH),
    gsSPDisplayList(Mars_Rock003DisplayList),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPMatrix((Mtx*)MATRIX_TRANSFORM_SEGMENT_ADDRESS + 4, G_MTX_MODELVIEW | G_MTX_MUL | G_MTX_PUSH),
    gsSPDisplayList(Mars_Rock003DisplayList),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPMatrix((Mtx*)MATRIX_TRANSFORM_SEGMENT_ADDRESS + 5, G_MTX_MODELVIEW | G_MTX_MUL | G_MTX_PUSH),
    gsSPDisplayList(Mars_Rock003DisplayList),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPDisplayList(Mars_SetTextures1),
    gsSPMatrix((Mtx*)MATRIX_TRANSFORM_SEGMENT_ADDRESS + 1, G_MTX_MODELVIEW | G_MTX_MUL | G_MTX_PUSH),
    gsSPDisplayList(Mars_ConsoleBDisplayList),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPMatrix((Mtx*)MATRIX_TRANSFORM_SEGMENT_ADDRESS + 3, G_MTX_MODELVIEW | G_MTX_MUL | G_MTX_PUSH),
    gsSPDisplayList(Mars_SearchlightDisplayList),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPMatrix((Mtx*)MATRIX_TRANSFORM_SEGMENT_ADDRESS + 6, G_MTX_MODELVIEW | G_MTX_MUL | G_MTX_PUSH),
    gsSPDisplayList(Mars_SearchlightDisplayList),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPMatrix((Mtx*)MATRIX_TRANSFORM_SEGMENT_ADDRESS + 7, G_MTX_MODELVIEW | G_MTX_MUL | G_MTX_PUSH),
    gsSPDisplayList(Mars_SearchlightDisplayList),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPEndDisplayList(),
};
struct BaseDefinition Triangle_Bases[] = {
    {.position = {3464.1, 2000}, .startingTeam = TEAM(0)},
    {.position = {0, -4000}, .startingTeam = TEAM(1)},
    {.position = {-3464.1, 2000}, .startingTeam = TEAM(2)},
    {.position = {-562.772, -3052.71}, .startingTeam = TEAM_NONE},
    {.position = {573.003, -3052.71}, .startingTeam = TEAM_NONE},
    {.position = {-2953.91, 1052.85}, .startingTeam = TEAM_NONE},
    {.position = {-2386.02, 2036.46}, .startingTeam = TEAM_NONE},
    {.position = {2910.37, 1012.52}, .startingTeam = TEAM_NONE},
    {.position = {2342.48, 1996.14}, .startingTeam = TEAM_NONE},
};

struct Vector2 Triangle_StartingPositions[] = {
    {3464.1, 2000},
    {0, -4000},
    {-3464.1, 2000},
};

struct SceneBoundary Triangle_Boundary[] = {
    {{3192.44, -1687.32}, {-0.959614, 0.281319}, 4541.61},
    {{4470.08, 2670.88}, {-0.22521, -0.97431}, 4707.03},
    {{-116.024, 3730.95}, {0.240127, -0.970742}, 4424.33},
    {{-4410.91, 2668.55}, {0.962076, 0.27278}, 4888.47},
    {{-3077.43, -2034.53}, {0.710588, 0.703608}, 4384.1},
    {{7.26223, -5149.82}, {-0.735965, 0.677019}, 4704.71},
};

struct DecorDefinition Triangle_Decor[] = {
    {{622.776, 0, -25.782}, {-8.9407e-08, -0.164306, 0, 0.986409}, 1, ROCK003_DECOR_ID},
    {{-2230.03, 0, -1540.64}, {2.98023e-08, -0.245444, 0, 0.969411}, 1, CONSOLEB_DECOR_ID},
    {{470.893, 0, 2616.97}, {0, 0, 0, 1}, 1, CRATE_DECOR_ID},
    {{1533.82, 0, -2371.42}, {-8.9407e-08, 0.211374, 7.45058e-09, 0.977405}, 1, SEARCHLIGHT_DECOR_ID},
    {{65.2839, 0, -397.443}, {-8.9407e-08, 0.326475, 1.49012e-08, 0.945206}, 0.849032, ROCK003_DECOR_ID},
    {{-492.208, 0, 299.422}, {5.96046e-08, 0.821982, -8.9407e-08, 0.569514}, 1.01141, ROCK003_DECOR_ID},
    {{2161, 0, -1535.19}, {-8.9407e-08, 0.211374, 7.45058e-09, 0.977405}, 1, SEARCHLIGHT_DECOR_ID},
    {{2695.26, 0, -536.346}, {-8.9407e-08, 0.211374, 7.45058e-09, 0.977405}, 1, SEARCHLIGHT_DECOR_ID},
};
struct Vector3 Triangle_PathingNodes[] = {
    {-2381.79, 0.0f, 2013.87},
    {-3478.71, 0.0f, 1997.74},
    {-2978.64, 0.0f, 1062.14},
    {-570.455, 0.0f, -3045.3},
    {554.59, 0.0f, -3057.56},
    {2328.5, 0.0f, 1981.61},
    {2909.22, 0.0f, 997.611},
    {3457.68, 0.0f, 2013.87},
    {12.2841, 0.0f, -4003.38},
};
char Triangle_BasesPathNodes[] = {
    7,
    8,
    1,
    3,
    4,
    2,
    0,
    6,
    5,
};
unsigned short Triangle_NodeDistances[] = {
    0, 1097, 1123, 5373, 6498, 4710, 5387, 5840, 6495, 
    1097, 0, 1060, 5822, 6488, 5807, 6484, 6937, 6943, 
    1123, 1060, 0, 4761, 5427, 5386, 6511, 6515, 5882, 
    5373, 5822, 4761, 0, 1125, 6467, 5334, 6488, 1121, 
    6498, 6488, 5427, 1125, 0, 5342, 4689, 5844, 1090, 
    4710, 5807, 5386, 6467, 5342, 0, 1142, 1129, 6432, 
    5387, 6484, 6511, 5334, 4689, 1142, 0, 1154, 5779, 
    5840, 6937, 6515, 6488, 5844, 1129, 1154, 0, 6934, 
    6495, 6943, 5882, 1121, 1090, 6432, 5779, 6934, 0, 
};
char Triangle_NextNode[] = {
    0, 1, 2, 3, 3, 5, 6, 5, 3, 
    0, 1, 2, 2, 2, 0, 0, 0, 2, 
    0, 1, 2, 3, 4, 5, 0, 5, 3, 
    0, 2, 2, 3, 4, 4, 6, 6, 8, 
    3, 2, 2, 3, 4, 5, 6, 6, 8, 
    0, 0, 2, 4, 4, 5, 6, 7, 4, 
    0, 0, 0, 3, 4, 5, 6, 7, 4, 
    5, 5, 5, 6, 6, 5, 6, 7, 6, 
    3, 3, 3, 3, 4, 4, 4, 4, 8, 
};
struct LevelDefinition Triangle_Definition = {
    .maxPlayerCount = 3,
    .playerStartLocations = Triangle_StartingPositions,
    .baseCount = 9,
    .decorCount = 8,
    .song = SOUNDS_LEVELMUSIC_FERMIPARADOX_MASTERED,
    .bases = Triangle_Bases,
    .decor = Triangle_Decor,
    .levelBoundaries = {{-4410.91, -5149.82}, {4470.08, 3730.95}},
    .sceneRender = Triangle_model_gfx,
    .theme = &MarsTheme,
    .staticScene = {Triangle_Boundary, 6},
    .pathfinding = {.nodeCount = 9, .baseNodes = Triangle_BasesPathNodes, .nodeDistances = Triangle_NodeDistances, .nodePositions = Triangle_PathingNodes, .nextNode = Triangle_NextNode},
    .aiDifficulty = 0.6,
};

