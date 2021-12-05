#include "level.h"
#include "../../level_themes/Mars/theme.h"
#include "sk64/skelatool_defs.h"
#include <ultra64.h>

Vtx Curiosity_Grid_001_color[] = {
    {{{-5122, 0, 3359}, 0, {-405, 14}, {203, 96, 95, 255}}},
    {{{-5709, 466, 3665}, 0, {-205, 1098}, {203, 96, 95, 255}}},
    {{{-4252, 466, 7242}, 0, {1118, 1111}, {202, 93, 92, 255}}},
    {{{-3563, 0, 6460}, 0, {716, 11}, {202, 93, 92, 255}}},
    {{{-5709, 466, 3665}, 0, {-205, 1098}, {203, 96, 95, 255}}},
    {{{-6069, 466, 0}, 0, {-1529, 1085}, {203, 98, 97, 255}}},
    {{{-6956, 466, 0}, 0, {-1523, 1983}, {203, 98, 97, 255}}},
    {{{-6459, 466, 3832}, 0, {-26, 2003}, {203, 96, 95, 255}}},
    {{{-1781, 0, 6226}, 0, {2357, -10}, {202, 93, 92, 255}}},
    {{{-2126, 466, 7030}, 0, {2560, 1092}, {202, 93, 92, 255}}},
    {{{0, 466, 5091}, 0, {4001, 1073}, {202, 92, 91, 255}}},
    {{{0, 0, 4056}, 0, {3999, -32}, {202, 92, 91, 255}}},
    {{{5003, 0, 886}, 0, {-405, 14}, {203, 96, 95, 255}}},
    {{{3563, 0, 3555}, 0, {716, 11}, {202, 93, 92, 255}}},
    {{{4252, 466, 4429}, 0, {1118, 1111}, {202, 93, 92, 255}}},
    {{{5448, 466, 1301}, 0, {-205, 1098}, {203, 96, 95, 255}}},
    {{{2126, 466, 4604}, 0, {2560, 1092}, {202, 93, 92, 255}}},
    {{{0, 466, 5091}, 0, {4001, 1073}, {202, 92, 91, 255}}},
    {{{0, 466, 6393}, 0, {4004, 1992}, {202, 92, 91, 255}}},
    {{{2569, 466, 5583}, 0, {2737, 2008}, {202, 93, 92, 255}}},
    {{{1781, 0, 3718}, 0, {2357, -10}, {202, 93, 92, 255}}},
    {{{0, 0, 4056}, 0, {3999, -32}, {202, 92, 91, 255}}},
    {{{0, 466, 5091}, 0, {4001, 1073}, {202, 92, 91, 255}}},
    {{{2126, 466, 4604}, 0, {2560, 1092}, {202, 93, 92, 255}}},
    {{{-5122, 0, -2390}, 0, {-405, 14}, {203, 96, 95, 255}}},
    {{{-3563, 0, -4780}, 0, {716, 11}, {202, 93, 92, 255}}},
    {{{-4252, 466, -5561}, 0, {1118, 1111}, {202, 93, 92, 255}}},
    {{{-5709, 466, -2780}, 0, {-205, 1098}, {203, 96, 95, 255}}},
    {{{-2126, 466, -5561}, 0, {2560, 1092}, {202, 93, 92, 255}}},
    {{{0, 466, -6829}, 0, {4001, 1073}, {202, 92, 91, 255}}},
    {{{0, 466, -7190}, 0, {4004, 1992}, {202, 92, 91, 255}}},
    {{{-2569, 466, -6393}, 0, {2737, 2008}, {202, 93, 92, 255}}},
    {{{-1781, 0, -4780}, 0, {2357, -10}, {202, 93, 92, 255}}},
    {{{0, 0, -6302}, 0, {3999, -32}, {202, 92, 91, 255}}},
    {{{0, 466, -6829}, 0, {4001, 1073}, {202, 92, 91, 255}}},
    {{{-2126, 466, -5561}, 0, {2560, 1092}, {202, 93, 92, 255}}},
    {{{5003, 0, -3893}, 0, {-405, 14}, {203, 96, 95, 255}}},
    {{{5448, 466, -4260}, 0, {-205, 1098}, {203, 96, 95, 255}}},
    {{{4252, 466, -6693}, 0, {1118, 1111}, {202, 93, 92, 255}}},
    {{{3563, 0, -6005}, 0, {716, 11}, {202, 93, 92, 255}}},
    {{{5448, 466, -4260}, 0, {-205, 1098}, {203, 96, 95, 255}}},
    {{{6227, 466, -1574}, 0, {-1529, 1085}, {203, 98, 97, 255}}},
    {{{7114, 466, -1574}, 0, {-1523, 1983}, {203, 98, 97, 255}}},
    {{{5936, 466, -4646}, 0, {-26, 2003}, {203, 96, 95, 255}}},
    {{{1781, 0, -6428}, 0, {2357, -10}, {202, 93, 92, 255}}},
    {{{2126, 466, -7104}, 0, {2560, 1092}, {202, 93, 92, 255}}},
    {{{0, 466, -6829}, 0, {4001, 1073}, {202, 92, 91, 255}}},
    {{{0, 0, -6302}, 0, {3999, -32}, {202, 92, 91, 255}}},
    {{{-5709, 466, -2780}, 0, {-205, 1098}, {203, 96, 95, 255}}},
    {{{-4252, 466, -5561}, 0, {1118, 1111}, {202, 93, 92, 255}}},
    {{{-5139, 466, -6393}, 0, {1470, 2024}, {202, 93, 92, 255}}},
    {{{-6459, 466, -3196}, 0, {-26, 2003}, {203, 96, 95, 255}}},
    {{{2126, 466, -7104}, 0, {2560, 1092}, {202, 93, 92, 255}}},
    {{{4252, 466, -6693}, 0, {1118, 1111}, {202, 93, 92, 255}}},
    {{{5139, 466, -7379}, 0, {1470, 2024}, {202, 93, 92, 255}}},
    {{{2569, 466, -7788}, 0, {2737, 2008}, {202, 93, 92, 255}}},
    {{{5448, 466, 1301}, 0, {-205, 1098}, {203, 96, 95, 255}}},
    {{{4252, 466, 4429}, 0, {1118, 1111}, {202, 93, 92, 255}}},
    {{{5139, 466, 5407}, 0, {1470, 2024}, {202, 93, 92, 255}}},
    {{{5936, 466, 1746}, 0, {-26, 2003}, {203, 96, 95, 255}}},
    {{{-2126, 466, 7030}, 0, {2560, 1092}, {202, 93, 92, 255}}},
    {{{-4252, 466, 7242}, 0, {1118, 1111}, {202, 93, 92, 255}}},
    {{{-5139, 466, 8073}, 0, {1470, 2024}, {202, 93, 92, 255}}},
    {{{-2569, 466, 7810}, 0, {2737, 2008}, {202, 93, 92, 255}}},
    {{{-3563, 0, -4780}, 0, {716, 11}, {202, 93, 92, 255}}},
    {{{-1781, 0, -4780}, 0, {2357, -10}, {202, 93, 92, 255}}},
    {{{-2126, 466, -5561}, 0, {2560, 1092}, {202, 93, 92, 255}}},
    {{{-4252, 466, -5561}, 0, {1118, 1111}, {202, 93, 92, 255}}},
    {{{3563, 0, -6005}, 0, {716, 11}, {202, 93, 92, 255}}},
    {{{4252, 466, -6693}, 0, {1118, 1111}, {202, 93, 92, 255}}},
    {{{2126, 466, -7104}, 0, {2560, 1092}, {202, 93, 92, 255}}},
    {{{1781, 0, -6428}, 0, {2357, -10}, {202, 93, 92, 255}}},
    {{{5538, 0, -1574}, 0, {-1526, 16}, {203, 98, 97, 255}}},
    {{{6227, 466, -1574}, 0, {-1529, 1085}, {203, 98, 97, 255}}},
    {{{5448, 466, -4260}, 0, {-205, 1098}, {203, 96, 95, 255}}},
    {{{5003, 0, -3893}, 0, {-405, 14}, {203, 96, 95, 255}}},
    {{{5538, 0, -1574}, 0, {-1526, 16}, {203, 98, 97, 255}}},
    {{{5003, 0, 886}, 0, {-405, 14}, {203, 96, 95, 255}}},
    {{{5448, 466, 1301}, 0, {-205, 1098}, {203, 96, 95, 255}}},
    {{{6227, 466, -1574}, 0, {-1529, 1085}, {203, 98, 97, 255}}},
    {{{3563, 0, 3555}, 0, {716, 11}, {202, 93, 92, 255}}},
    {{{1781, 0, 3718}, 0, {2357, -10}, {202, 93, 92, 255}}},
    {{{2126, 466, 4604}, 0, {2560, 1092}, {202, 93, 92, 255}}},
    {{{4252, 466, 4429}, 0, {1118, 1111}, {202, 93, 92, 255}}},
    {{{-3563, 0, 6460}, 0, {716, 11}, {202, 93, 92, 255}}},
    {{{-4252, 466, 7242}, 0, {1118, 1111}, {202, 93, 92, 255}}},
    {{{-2126, 466, 7030}, 0, {2560, 1092}, {202, 93, 92, 255}}},
    {{{-1781, 0, 6226}, 0, {2357, -10}, {202, 93, 92, 255}}},
    {{{-5380, 0, 0}, 0, {-1526, 16}, {203, 98, 97, 255}}},
    {{{-6069, 466, 0}, 0, {-1529, 1085}, {203, 98, 97, 255}}},
    {{{-5709, 466, 3665}, 0, {-205, 1098}, {203, 96, 95, 255}}},
    {{{-5122, 0, 3359}, 0, {-405, 14}, {203, 96, 95, 255}}},
    {{{-5380, 0, 0}, 0, {-1526, 16}, {203, 98, 97, 255}}},
    {{{-5122, 0, -2390}, 0, {-405, 14}, {203, 96, 95, 255}}},
    {{{-5709, 466, -2780}, 0, {-205, 1098}, {203, 96, 95, 255}}},
    {{{-6069, 466, 0}, 0, {-1529, 1085}, {203, 98, 97, 255}}},
};


Vtx Curiosity_Grid_color[] = {
    {{{-5838, 0, 1924}, 0, {4708, -357}, {202, 93, 92, 255}}},
    {{{-7842, 0, 517}, 0, {6397, 409}, {202, 93, 92, 255}}},
    {{{-9730, 0, 3206}, 0, {7164, -1278}, {202, 93, 92, 255}}},
    {{{-7725, 0, 4613}, 0, {5475, -2046}, {202, 93, 92, 255}}},
    {{{2180, 0, 7551}, 0, {-2046, -3427}, {204, 100, 91, 255}}},
    {{{175, 0, 6144}, 0, {-357, -2660}, {202, 93, 92, 255}}},
    {{{-1711, 0, 8833}, 0, {409, -4349}, {202, 93, 92, 255}}},
    {{{292, 0, 10240}, 0, {-1278, -5116}, {202, 93, 92, 255}}},
    {{{-1828, 0, 4737}, 0, {1331, -1892}, {210, 115, 90, 255}}},
    {{{-3716, 0, 7427}, 0, {2098, -3581}, {202, 93, 92, 255}}},
    {{{-3833, 0, 3330}, 0, {3019, -1125}, {222, 142, 86, 255}}},
    {{{-5720, 0, 6020}, 0, {3787, -2813}, {202, 93, 92, 255}}},
    {{{9730, 0, -3206}, 0, {-5116, 3326}, {202, 93, 92, 255}}},
    {{{7725, 0, -4613}, 0, {-3427, 4094}, {202, 93, 92, 255}}},
    {{{5838, 0, -1924}, 0, {-2660, 2405}, {246, 188, 76, 255}}},
    {{{7842, 0, -517}, 0, {-4349, 1638}, {203, 96, 92, 255}}},
    {{{3950, 0, 765}, 0, {-1892, 716}, {222, 142, 86, 255}}},
    {{{5955, 0, 2172}, 0, {-3581, -50}, {202, 93, 92, 255}}},
    {{{2063, 0, 3454}, 0, {-1125, -971}, {202, 93, 92, 255}}},
    {{{4067, 0, 4861}, 0, {-2813, -1739}, {242, 182, 78, 255}}},
    {{{5720, 0, -6020}, 0, {-1739, 4861}, {202, 93, 92, 255}}},
    {{{3833, 0, -3330}, 0, {-971, 3173}, {209, 112, 90, 255}}},
    {{{1946, 0, -641}, 0, {-204, 1484}, {205, 102, 91, 255}}},
    {{{58, 0, 2048}, 0, {563, -204}, {202, 94, 92, 255}}},
    {{{3716, 0, -7427}, 0, {-50, 5629}, {202, 93, 92, 255}}},
    {{{1828, 0, -4737}, 0, {716, 3940}, {240, 178, 79, 255}}},
    {{{-58, 0, -2048}, 0, {1484, 2252}, {225, 149, 84, 255}}},
    {{{-1946, 0, 641}, 0, {2252, 563}, {204, 100, 91, 255}}},
    {{{1711, 0, -8833}, 0, {1638, 6397}, {228, 154, 83, 255}}},
    {{{-175, 0, -6144}, 0, {2405, 4708}, {218, 134, 87, 255}}},
    {{{-2063, 0, -3454}, 0, {3173, 3019}, {202, 93, 92, 255}}},
    {{{-3950, 0, -765}, 0, {3940, 1331}, {202, 93, 92, 255}}},
    {{{-292, 0, -10240}, 0, {3326, 7164}, {237, 174, 80, 255}}},
    {{{-2180, 0, -7551}, 0, {4094, 5475}, {226, 151, 84, 255}}},
    {{{-4067, 0, -4861}, 0, {4861, 3787}, {202, 93, 92, 255}}},
    {{{-5955, 0, -2172}, 0, {5629, 2098}, {202, 93, 92, 255}}},
};


Gfx Curiosity_model_gfx[] = {
    // Material Rock
    gsSPDisplayList(Mars_Rock),
    // End Material Rock
    gsSPVertex(&Curiosity_Grid_001_color[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&Curiosity_Grid_001_color[32], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&Curiosity_Grid_001_color[28], 4, 0),
    gsSPVertex(&Curiosity_Grid_001_color[40], 4, 4),
    gsSPVertex(&Curiosity_Grid_001_color[49], 2, 8),
    gsSPVertex(&Curiosity_Grid_001_color[52], 5, 10),
    gsSPVertex(&Curiosity_Grid_001_color[59], 1, 15),
    gsSPVertex(&Curiosity_Grid_001_color[64], 16, 16),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(8, 0, 3, 0, 8, 3, 9, 0),
    gsSP2Triangles(1, 10, 13, 0, 1, 13, 2, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(11, 4, 7, 0, 11, 7, 12, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(5, 14, 15, 0, 5, 15, 6, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&Curiosity_Grid_001_color[4], 4, 0),
    gsSPVertex(&Curiosity_Grid_001_color[16], 4, 4),
    gsSPVertex(&Curiosity_Grid_001_color[48], 1, 8),
    gsSPVertex(&Curiosity_Grid_001_color[51], 1, 9),
    gsSPVertex(&Curiosity_Grid_001_color[57], 2, 10),
    gsSPVertex(&Curiosity_Grid_001_color[60], 4, 12),
    gsSPVertex(&Curiosity_Grid_001_color[80], 16, 16),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(10, 4, 7, 0, 10, 7, 11, 0),
    gsSP2Triangles(5, 12, 15, 0, 5, 15, 6, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(13, 0, 3, 0, 13, 3, 14, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(1, 8, 9, 0, 1, 9, 2, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    // Material Ground
    gsSPDisplayList(Mars_Ground),
    // End Material Ground
    gsSPVertex(&Curiosity_Grid_color[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(5, 8, 9, 0, 5, 9, 6, 0),
    gsSP2Triangles(8, 10, 11, 0, 8, 11, 9, 0),
    gsSP2Triangles(10, 0, 3, 0, 10, 3, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(15, 14, 16, 0, 15, 16, 17, 0),
    gsSP2Triangles(17, 16, 18, 0, 17, 18, 19, 0),
    gsSP2Triangles(19, 18, 5, 0, 19, 5, 4, 0),
    gsSP2Triangles(13, 20, 21, 0, 13, 21, 14, 0),
    gsSP2Triangles(14, 21, 22, 0, 14, 22, 16, 0),
    gsSP2Triangles(16, 22, 23, 0, 16, 23, 18, 0),
    gsSP2Triangles(18, 23, 8, 0, 18, 8, 5, 0),
    gsSP2Triangles(20, 24, 25, 0, 20, 25, 21, 0),
    gsSP2Triangles(21, 25, 26, 0, 21, 26, 22, 0),
    gsSP2Triangles(22, 26, 27, 0, 22, 27, 23, 0),
    gsSP2Triangles(23, 27, 10, 0, 23, 10, 8, 0),
    gsSP2Triangles(24, 28, 29, 0, 24, 29, 25, 0),
    gsSP2Triangles(25, 29, 30, 0, 25, 30, 26, 0),
    gsSP2Triangles(26, 30, 31, 0, 26, 31, 27, 0),
    gsSP2Triangles(27, 31, 0, 0, 27, 0, 10, 0),
    gsSPVertex(&Curiosity_Grid_color[0], 2, 0),
    gsSPVertex(&Curiosity_Grid_color[28], 8, 2),
    gsSP2Triangles(2, 6, 7, 0, 2, 7, 3, 0),
    gsSP2Triangles(3, 7, 8, 0, 3, 8, 4, 0),
    gsSP2Triangles(4, 8, 9, 0, 4, 9, 5, 0),
    gsSP2Triangles(5, 9, 1, 0, 5, 1, 0, 0),
    // Begin decor
    gsSPDisplayList(Mars_Crate),
    gsSPMatrix((Mtx*)MATRIX_TRANSFORM_SEGMENT_ADDRESS + 13, G_MTX_MODELVIEW | G_MTX_MUL | G_MTX_PUSH),
    gsSPDisplayList(Mars_CrateDisplayList),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPMatrix((Mtx*)MATRIX_TRANSFORM_SEGMENT_ADDRESS + 26, G_MTX_MODELVIEW | G_MTX_MUL | G_MTX_PUSH),
    gsSPDisplayList(Mars_CrateDisplayList),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPMatrix((Mtx*)MATRIX_TRANSFORM_SEGMENT_ADDRESS + 25, G_MTX_MODELVIEW | G_MTX_MUL | G_MTX_PUSH),
    gsSPDisplayList(Mars_CrateDisplayList),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPMatrix((Mtx*)MATRIX_TRANSFORM_SEGMENT_ADDRESS + 24, G_MTX_MODELVIEW | G_MTX_MUL | G_MTX_PUSH),
    gsSPDisplayList(Mars_CrateDisplayList),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPMatrix((Mtx*)MATRIX_TRANSFORM_SEGMENT_ADDRESS + 23, G_MTX_MODELVIEW | G_MTX_MUL | G_MTX_PUSH),
    gsSPDisplayList(Mars_CrateDisplayList),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPMatrix((Mtx*)MATRIX_TRANSFORM_SEGMENT_ADDRESS + 22, G_MTX_MODELVIEW | G_MTX_MUL | G_MTX_PUSH),
    gsSPDisplayList(Mars_CrateDisplayList),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPMatrix((Mtx*)MATRIX_TRANSFORM_SEGMENT_ADDRESS + 21, G_MTX_MODELVIEW | G_MTX_MUL | G_MTX_PUSH),
    gsSPDisplayList(Mars_CrateDisplayList),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPMatrix((Mtx*)MATRIX_TRANSFORM_SEGMENT_ADDRESS + 20, G_MTX_MODELVIEW | G_MTX_MUL | G_MTX_PUSH),
    gsSPDisplayList(Mars_CrateDisplayList),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPMatrix((Mtx*)MATRIX_TRANSFORM_SEGMENT_ADDRESS + 19, G_MTX_MODELVIEW | G_MTX_MUL | G_MTX_PUSH),
    gsSPDisplayList(Mars_CrateDisplayList),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPMatrix((Mtx*)MATRIX_TRANSFORM_SEGMENT_ADDRESS + 18, G_MTX_MODELVIEW | G_MTX_MUL | G_MTX_PUSH),
    gsSPDisplayList(Mars_CrateDisplayList),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPMatrix((Mtx*)MATRIX_TRANSFORM_SEGMENT_ADDRESS + 17, G_MTX_MODELVIEW | G_MTX_MUL | G_MTX_PUSH),
    gsSPDisplayList(Mars_CrateDisplayList),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPMatrix((Mtx*)MATRIX_TRANSFORM_SEGMENT_ADDRESS + 16, G_MTX_MODELVIEW | G_MTX_MUL | G_MTX_PUSH),
    gsSPDisplayList(Mars_CrateDisplayList),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPMatrix((Mtx*)MATRIX_TRANSFORM_SEGMENT_ADDRESS + 15, G_MTX_MODELVIEW | G_MTX_MUL | G_MTX_PUSH),
    gsSPDisplayList(Mars_CrateDisplayList),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPMatrix((Mtx*)MATRIX_TRANSFORM_SEGMENT_ADDRESS + 14, G_MTX_MODELVIEW | G_MTX_MUL | G_MTX_PUSH),
    gsSPDisplayList(Mars_CrateDisplayList),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPMatrix((Mtx*)MATRIX_TRANSFORM_SEGMENT_ADDRESS + 27, G_MTX_MODELVIEW | G_MTX_MUL | G_MTX_PUSH),
    gsSPDisplayList(Mars_CrateDisplayList),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPMatrix((Mtx*)MATRIX_TRANSFORM_SEGMENT_ADDRESS + 28, G_MTX_MODELVIEW | G_MTX_MUL | G_MTX_PUSH),
    gsSPDisplayList(Mars_CrateDisplayList),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPMatrix((Mtx*)MATRIX_TRANSFORM_SEGMENT_ADDRESS + 29, G_MTX_MODELVIEW | G_MTX_MUL | G_MTX_PUSH),
    gsSPDisplayList(Mars_CrateDisplayList),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPMatrix((Mtx*)MATRIX_TRANSFORM_SEGMENT_ADDRESS + 30, G_MTX_MODELVIEW | G_MTX_MUL | G_MTX_PUSH),
    gsSPDisplayList(Mars_CrateDisplayList),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPMatrix((Mtx*)MATRIX_TRANSFORM_SEGMENT_ADDRESS + 31, G_MTX_MODELVIEW | G_MTX_MUL | G_MTX_PUSH),
    gsSPDisplayList(Mars_CrateDisplayList),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPMatrix((Mtx*)MATRIX_TRANSFORM_SEGMENT_ADDRESS + 32, G_MTX_MODELVIEW | G_MTX_MUL | G_MTX_PUSH),
    gsSPDisplayList(Mars_CrateDisplayList),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPMatrix((Mtx*)MATRIX_TRANSFORM_SEGMENT_ADDRESS + 33, G_MTX_MODELVIEW | G_MTX_MUL | G_MTX_PUSH),
    gsSPDisplayList(Mars_CrateDisplayList),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPMatrix((Mtx*)MATRIX_TRANSFORM_SEGMENT_ADDRESS + 34, G_MTX_MODELVIEW | G_MTX_MUL | G_MTX_PUSH),
    gsSPDisplayList(Mars_CrateDisplayList),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPMatrix((Mtx*)MATRIX_TRANSFORM_SEGMENT_ADDRESS + 4, G_MTX_MODELVIEW | G_MTX_MUL | G_MTX_PUSH),
    gsSPDisplayList(Mars_CrateDisplayList),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPMatrix((Mtx*)MATRIX_TRANSFORM_SEGMENT_ADDRESS + 35, G_MTX_MODELVIEW | G_MTX_MUL | G_MTX_PUSH),
    gsSPDisplayList(Mars_CrateDisplayList),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPDisplayList(Mars_Rock),
    gsSPMatrix((Mtx*)MATRIX_TRANSFORM_SEGMENT_ADDRESS + 56, G_MTX_MODELVIEW | G_MTX_MUL | G_MTX_PUSH),
    gsSPDisplayList(Mars_Rock001DisplayList),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPMatrix((Mtx*)MATRIX_TRANSFORM_SEGMENT_ADDRESS + 39, G_MTX_MODELVIEW | G_MTX_MUL | G_MTX_PUSH),
    gsSPDisplayList(Mars_Rock001DisplayList),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPMatrix((Mtx*)MATRIX_TRANSFORM_SEGMENT_ADDRESS + 43, G_MTX_MODELVIEW | G_MTX_MUL | G_MTX_PUSH),
    gsSPDisplayList(Mars_Rock001DisplayList),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPMatrix((Mtx*)MATRIX_TRANSFORM_SEGMENT_ADDRESS + 49, G_MTX_MODELVIEW | G_MTX_MUL | G_MTX_PUSH),
    gsSPDisplayList(Mars_Rock002DisplayList),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPMatrix((Mtx*)MATRIX_TRANSFORM_SEGMENT_ADDRESS + 48, G_MTX_MODELVIEW | G_MTX_MUL | G_MTX_PUSH),
    gsSPDisplayList(Mars_Rock002DisplayList),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPMatrix((Mtx*)MATRIX_TRANSFORM_SEGMENT_ADDRESS + 47, G_MTX_MODELVIEW | G_MTX_MUL | G_MTX_PUSH),
    gsSPDisplayList(Mars_Rock002DisplayList),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPMatrix((Mtx*)MATRIX_TRANSFORM_SEGMENT_ADDRESS + 40, G_MTX_MODELVIEW | G_MTX_MUL | G_MTX_PUSH),
    gsSPDisplayList(Mars_Rock002DisplayList),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPMatrix((Mtx*)MATRIX_TRANSFORM_SEGMENT_ADDRESS + 55, G_MTX_MODELVIEW | G_MTX_MUL | G_MTX_PUSH),
    gsSPDisplayList(Mars_Rock003DisplayList),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPMatrix((Mtx*)MATRIX_TRANSFORM_SEGMENT_ADDRESS + 50, G_MTX_MODELVIEW | G_MTX_MUL | G_MTX_PUSH),
    gsSPDisplayList(Mars_Rock003DisplayList),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPMatrix((Mtx*)MATRIX_TRANSFORM_SEGMENT_ADDRESS + 51, G_MTX_MODELVIEW | G_MTX_MUL | G_MTX_PUSH),
    gsSPDisplayList(Mars_Rock003DisplayList),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPMatrix((Mtx*)MATRIX_TRANSFORM_SEGMENT_ADDRESS + 41, G_MTX_MODELVIEW | G_MTX_MUL | G_MTX_PUSH),
    gsSPDisplayList(Mars_Rock003DisplayList),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPMatrix((Mtx*)MATRIX_TRANSFORM_SEGMENT_ADDRESS + 52, G_MTX_MODELVIEW | G_MTX_MUL | G_MTX_PUSH),
    gsSPDisplayList(Mars_Rock003DisplayList),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPMatrix((Mtx*)MATRIX_TRANSFORM_SEGMENT_ADDRESS + 53, G_MTX_MODELVIEW | G_MTX_MUL | G_MTX_PUSH),
    gsSPDisplayList(Mars_Rock003DisplayList),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPMatrix((Mtx*)MATRIX_TRANSFORM_SEGMENT_ADDRESS + 54, G_MTX_MODELVIEW | G_MTX_MUL | G_MTX_PUSH),
    gsSPDisplayList(Mars_Rock003DisplayList),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPMatrix((Mtx*)MATRIX_TRANSFORM_SEGMENT_ADDRESS + 42, G_MTX_MODELVIEW | G_MTX_MUL | G_MTX_PUSH),
    gsSPDisplayList(Mars_Rock004DisplayList),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPMatrix((Mtx*)MATRIX_TRANSFORM_SEGMENT_ADDRESS + 44, G_MTX_MODELVIEW | G_MTX_MUL | G_MTX_PUSH),
    gsSPDisplayList(Mars_Rock004DisplayList),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPMatrix((Mtx*)MATRIX_TRANSFORM_SEGMENT_ADDRESS + 45, G_MTX_MODELVIEW | G_MTX_MUL | G_MTX_PUSH),
    gsSPDisplayList(Mars_Rock004DisplayList),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPMatrix((Mtx*)MATRIX_TRANSFORM_SEGMENT_ADDRESS + 46, G_MTX_MODELVIEW | G_MTX_MUL | G_MTX_PUSH),
    gsSPDisplayList(Mars_Rock004DisplayList),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPDisplayList(Mars_SetTextures1),
    gsSPMatrix((Mtx*)MATRIX_TRANSFORM_SEGMENT_ADDRESS + 2, G_MTX_MODELVIEW | G_MTX_MUL | G_MTX_PUSH),
    gsSPDisplayList(Mars_Broken_BaseDisplayList),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPMatrix((Mtx*)MATRIX_TRANSFORM_SEGMENT_ADDRESS + 7, G_MTX_MODELVIEW | G_MTX_MUL | G_MTX_PUSH),
    gsSPDisplayList(Mars_Broken_BaseDisplayList),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPMatrix((Mtx*)MATRIX_TRANSFORM_SEGMENT_ADDRESS + 8, G_MTX_MODELVIEW | G_MTX_MUL | G_MTX_PUSH),
    gsSPDisplayList(Mars_Broken_BaseDisplayList),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPMatrix((Mtx*)MATRIX_TRANSFORM_SEGMENT_ADDRESS + 36, G_MTX_MODELVIEW | G_MTX_MUL | G_MTX_PUSH),
    gsSPDisplayList(Mars_ConsolesDisplayList),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPMatrix((Mtx*)MATRIX_TRANSFORM_SEGMENT_ADDRESS + 37, G_MTX_MODELVIEW | G_MTX_MUL | G_MTX_PUSH),
    gsSPDisplayList(Mars_ConsolesDisplayList),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPMatrix((Mtx*)MATRIX_TRANSFORM_SEGMENT_ADDRESS + 3, G_MTX_MODELVIEW | G_MTX_MUL | G_MTX_PUSH),
    gsSPDisplayList(Mars_ConsolesDisplayList),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPMatrix((Mtx*)MATRIX_TRANSFORM_SEGMENT_ADDRESS + 9, G_MTX_MODELVIEW | G_MTX_MUL | G_MTX_PUSH),
    gsSPDisplayList(Mars_ConsolesDisplayList),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPMatrix((Mtx*)MATRIX_TRANSFORM_SEGMENT_ADDRESS + 10, G_MTX_MODELVIEW | G_MTX_MUL | G_MTX_PUSH),
    gsSPDisplayList(Mars_ConsolesDisplayList),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPMatrix((Mtx*)MATRIX_TRANSFORM_SEGMENT_ADDRESS + 0, G_MTX_MODELVIEW | G_MTX_MUL | G_MTX_PUSH),
    gsSPDisplayList(Mars_DishDisplayList),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPMatrix((Mtx*)MATRIX_TRANSFORM_SEGMENT_ADDRESS + 1, G_MTX_MODELVIEW | G_MTX_MUL | G_MTX_PUSH),
    gsSPDisplayList(Mars_DishDisplayList),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPMatrix((Mtx*)MATRIX_TRANSFORM_SEGMENT_ADDRESS + 38, G_MTX_MODELVIEW | G_MTX_MUL | G_MTX_PUSH),
    gsSPDisplayList(Mars_DishDisplayList),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPMatrix((Mtx*)MATRIX_TRANSFORM_SEGMENT_ADDRESS + 5, G_MTX_MODELVIEW | G_MTX_MUL | G_MTX_PUSH),
    gsSPDisplayList(Mars_DishBaseDisplayList),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPMatrix((Mtx*)MATRIX_TRANSFORM_SEGMENT_ADDRESS + 11, G_MTX_MODELVIEW | G_MTX_MUL | G_MTX_PUSH),
    gsSPDisplayList(Mars_DishBaseDisplayList),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPMatrix((Mtx*)MATRIX_TRANSFORM_SEGMENT_ADDRESS + 6, G_MTX_MODELVIEW | G_MTX_MUL | G_MTX_PUSH),
    gsSPDisplayList(Mars_SearchlightDisplayList),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPMatrix((Mtx*)MATRIX_TRANSFORM_SEGMENT_ADDRESS + 12, G_MTX_MODELVIEW | G_MTX_MUL | G_MTX_PUSH),
    gsSPDisplayList(Mars_SearchlightDisplayList),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPEndDisplayList(),
};
struct BaseDefinition Curiosity_Bases[] = {
    {.position = {-1338.58, -1560.67}, .startingTeam = TEAM(0)},
    {.position = {1277.82, -1557.45}, .startingTeam = TEAM(1)},
    {.position = {-1275.78, 656.092}, .startingTeam = TEAM(2)},
    {.position = {1322.85, 760.711}, .startingTeam = TEAM(3)},
    {.position = {-558.25, -5136.89}, .startingTeam = TEAM_NONE},
    {.position = {-3726.82, 1063.65}, .startingTeam = TEAM_NONE},
    {.position = {3205.99, -2288.34}, .startingTeam = TEAM_NONE},
    {.position = {-1991.68, -3423.73}, .startingTeam = TEAM_NONE},
    {.position = {969.889, 2616.82}, .startingTeam = TEAM_NONE},
    {.position = {-3189.39, 5272.8}, .startingTeam = TEAM_NONE},
    {.position = {3161.07, -5662.91}, .startingTeam = TEAM_NONE},
    {.position = {-4953.27, -220.38}, .startingTeam = TEAM_NONE},
};

struct Vector2 Curiosity_StartingPositions[] = {
    {-1338.58, -1560.67},
    {1277.82, -1557.45},
    {-1275.78, 656.092},
    {1322.85, 760.711},
};

struct SceneBoundary Curiosity_Boundary[] = {
    {{-5465.91, -487.959}, {0.994075, 0.108696}, 2427.95},
    {{-5202, -2901.52}, {0.840859, 0.541255}, 2870.35},
    {{-3648.41, -5315.08}, {-0, 1}, 1798.9},
    {{-1849.51, -5315.08}, {0.642961, 0.765899}, 2348.75},
    {{-50.6061, -6825.23}, {0.0733063, 0.99731}, 1803.75},
    {{1748.3, -6957.46}, {-0.228153, 0.973625}, 1847.63},
    {{3547.2, -6535.92}, {-0.830802, 0.556569}, 2566.45},
    {{4975.6, -4403.7}, {-0.973779, 0.227497}, 2404.35},
    {{5522.59, -2062.4}, {-0.976636, -0.2149}, 2545.29},
    {{4975.6, 423.419}, {-0.883558, -0.468321}, 3050.06},
    {{3547.2, 3118.33}, {-0.0906859, -0.99588}, 1806.34},
    {{1748.3, 3282.14}, {-0.188039, -0.982161}, 1831.57},
    {{-50.6061, 3626.55}, {-0.76884, -0.639441}, 2813.24},
    {{-1849.51, 5789.48}, {-0.126863, -0.99192}, 1813.55},
    {{-3648.41, 6019.55}, {0.89528, -0.445503}, 3487.27},
    {{-5202, 2897.47}, {0.996975, -0.0777187}, 3395.7},
};

struct DecorDefinition Curiosity_Decor[] = {
    {{-2629.64, -82.0216, 5173.04}, {-2.98023e-08, 0.776712, 2.98023e-08, 0.629856}, 0.708047, DISH_DECOR_ID},
    {{-2300.37, -82.0216, -4393.88}, {-1.49012e-08, 0.990722, -1.49012e-07, -0.135905}, 0.708047, DISH_DECOR_ID},
    {{-4099.59, 12.5957, -2360.2}, {-5.96046e-08, 0.236046, 2.23517e-08, 0.971742}, 0.479371, BROKEN_BASE_DECOR_ID},
    {{1013.51, 12.5957, -3810.76}, {-8.9407e-08, -0.564233, -5.96046e-08, 0.825615}, 0.479371, CONSOLES_DECOR_ID},
    {{-2292.02, 0.163686, 794.545}, {8.9407e-08, -1.86265e-09, -0.0211762, 0.999776}, 0.479371, CRATE_DECOR_ID},
    {{-2131.22, 12.5957, -3794.49}, {0, 0, 0, 1}, 0.479371, DISHBASE_DECOR_ID},
    {{329.857, 12.5957, -1954.75}, {-7.45058e-09, 0.996448, -1.19209e-07, -0.0842118}, 0.479371, SEARCHLIGHT_DECOR_ID},
    {{-3715.92, 12.5957, -2705.56}, {2.11596e-06, 0.713483, -2.20537e-06, 0.700672}, 0.479371, BROKEN_BASE_DECOR_ID},
    {{-689.272, 12.5957, 2585.57}, {4.47035e-08, 0.868483, -8.9407e-08, 0.495718}, 0.479371, BROKEN_BASE_DECOR_ID},
    {{1588.26, 12.5957, -3810.76}, {-8.9407e-08, 0.564233, 5.96046e-08, 0.825615}, 0.479371, CONSOLES_DECOR_ID},
    {{1181.13, 12.5957, 2938.31}, {-2.98023e-08, -0.0139695, -4.65661e-10, 0.999902}, 0.479371, CONSOLES_DECOR_ID},
    {{1842.35, 12.5957, 2245.52}, {0, 0, 0, 1}, 0.479371, DISHBASE_DECOR_ID},
    {{-277.916, 12.5957, 547.216}, {8.9407e-08, 0.184693, -2.23517e-08, 0.982796}, 0.479371, SEARCHLIGHT_DECOR_ID},
    {{-2013.06, 0.163686, 502.394}, {0.00916237, -0.432575, -0.0190914, 0.901349}, 0.479371, CRATE_DECOR_ID},
    {{-2013.06, 0.163686, 717.244}, {0.00916237, -0.432575, -0.0190914, 0.901349}, 0.479371, CRATE_DECOR_ID},
    {{-2179.41, 0.163686, 860.895}, {0.0147527, -0.696514, 0.0151917, -0.717231}, 0.479371, CRATE_DECOR_ID},
    {{-2463.26, 0.163686, 573.497}, {-0.00672743, 0.317617, -0.0200792, 0.947983}, 0.479371, CRATE_DECOR_ID},
    {{-2248.51, 0.163686, 579.792}, {-0.00672743, 0.317617, -0.0200792, 0.947983}, 0.479371, CRATE_DECOR_ID},
    {{2530.63, 0.163686, 664.816}, {8.9407e-08, -1.86265e-09, -0.0211762, 0.999776}, 0.479371, CRATE_DECOR_ID},
    {{2809.59, 0.163686, 372.666}, {0.00916237, -0.432575, -0.0190914, 0.901349}, 0.479371, CRATE_DECOR_ID},
    {{2809.59, 0.163686, 587.516}, {0.00916237, -0.432575, -0.0190914, 0.901349}, 0.479371, CRATE_DECOR_ID},
    {{2643.24, 0.163686, 731.166}, {0.0147527, -0.696514, 0.0151917, -0.717231}, 0.479371, CRATE_DECOR_ID},
    {{2359.39, 0.163686, 443.769}, {-0.00672743, 0.317617, -0.0200792, 0.947983}, 0.479371, CRATE_DECOR_ID},
    {{2574.15, 0.163686, 450.064}, {-0.00672743, 0.317617, -0.0200792, 0.947983}, 0.479371, CRATE_DECOR_ID},
    {{2586.87, 0.163686, -2868.19}, {8.9407e-08, -1.86265e-09, -0.0211762, 0.999776}, 0.479371, CRATE_DECOR_ID},
    {{2865.82, 0.163686, -3160.34}, {0.00916237, -0.432575, -0.0190914, 0.901349}, 0.479371, CRATE_DECOR_ID},
    {{2865.82, 0.163686, -2945.49}, {0.00916237, -0.432575, -0.0190914, 0.901349}, 0.479371, CRATE_DECOR_ID},
    {{2699.48, 0.163686, -2801.84}, {0.0147527, -0.696514, 0.0151917, -0.717231}, 0.479371, CRATE_DECOR_ID},
    {{2415.63, 0.163686, -3089.24}, {-0.00672743, 0.317617, -0.0200792, 0.947983}, 0.479371, CRATE_DECOR_ID},
    {{2630.38, 0.163686, -3082.94}, {-0.00672743, 0.317617, -0.0200792, 0.947983}, 0.479371, CRATE_DECOR_ID},
    {{1390.44, 0.163686, -5531.94}, {8.9407e-08, -1.86265e-09, -0.0211762, 0.999776}, 0.479371, CRATE_DECOR_ID},
    {{1669.4, 0.163686, -5824.09}, {0.00916237, -0.432575, -0.0190914, 0.901349}, 0.479371, CRATE_DECOR_ID},
    {{1669.4, 0.163686, -5609.24}, {0.00916237, -0.432575, -0.0190914, 0.901349}, 0.479371, CRATE_DECOR_ID},
    {{1503.05, 0.163686, -5465.59}, {0.0147527, -0.696514, 0.0151917, -0.717231}, 0.479371, CRATE_DECOR_ID},
    {{1219.2, 0.163686, -5752.99}, {-0.00672743, 0.317617, -0.0200792, 0.947983}, 0.479371, CRATE_DECOR_ID},
    {{1433.96, 0.163686, -5746.69}, {-0.00672743, 0.317617, -0.0200792, 0.947983}, 0.479371, CRATE_DECOR_ID},
    {{-3813.34, 12.5957, 3048.88}, {-8.9407e-08, -0.564233, -5.96046e-08, 0.825615}, 0.479371, CONSOLES_DECOR_ID},
    {{-3238.6, 12.5957, 3048.88}, {-8.9407e-08, 0.564233, 5.96046e-08, 0.825615}, 0.479371, CONSOLES_DECOR_ID},
    {{3499.12, 5.03175, 93.532}, {0.203536, -0.714587, 0.41752, 0.523083}, 0.479371, DISH_DECOR_ID},
    {{-5130.35, 12.5957, -2976.56}, {2.98023e-08, -0.707107, 8.9407e-08, 0.707107}, 0.889947, ROCK001_DECOR_ID},
    {{-3805.8, 12.5957, 38.013}, {-2.98023e-08, 0.165653, 0, 0.986184}, 0.603924, ROCK002_DECOR_ID},
    {{-50.6061, 12.5957, -487.959}, {5.96046e-08, -0.238156, 2.23517e-08, 0.971227}, 0.875722, ROCK003_DECOR_ID},
    {{-2289.48, 12.5957, 3955.03}, {-1.19209e-07, 0.250646, 1.49012e-08, 0.968079}, 0.766752, ROCK004_DECOR_ID},
    {{3694.57, 12.5957, 1785.66}, {0, 0.516941, 2.98023e-08, 0.856021}, 0.949417, ROCK001_DECOR_ID},
    {{-2747.22, -62.3665, 3955.03}, {-2.98023e-08, -0.0293529, -1.86265e-09, 0.999569}, 0.479371, ROCK004_DECOR_ID},
    {{2203.89, 12.5957, -4640.62}, {-2.98023e-08, -0.238459, -7.45058e-09, 0.971153}, 0.818169, ROCK004_DECOR_ID},
    {{1952.07, -62.3665, -5022.86}, {-1.49012e-07, -0.4999, -2.98023e-08, 0.866083}, 0.636276, ROCK004_DECOR_ID},
    {{-3572.54, 12.5957, -218.682}, {-5.96046e-08, -0.231786, 1.49012e-08, 0.972767}, 0.793725, ROCK002_DECOR_ID},
    {{3350.75, 12.5957, -1188.82}, {-2.2471e-05, -0.706542, -2.24411e-05, 0.707671}, 0.765297, ROCK002_DECOR_ID},
    {{3545.1, 12.5957, -1545.64}, {8.9407e-08, -0.374878, 2.98023e-08, 0.927074}, 0.826097, ROCK002_DECOR_ID},
    {{-2385.71, 12.5957, 1855.16}, {-2.98023e-08, 0.277883, 1.49012e-08, 0.960615}, 0.725086, ROCK003_DECOR_ID},
    {{-1728.42, 12.5957, 1799.79}, {1.49012e-07, 0.752289, -1.19209e-07, 0.658833}, 0.651232, ROCK003_DECOR_ID},
    {{-2930.74, 12.5957, 1513.23}, {2.98023e-08, -0.388668, 2.98023e-08, 0.921378}, 0.569899, ROCK003_DECOR_ID},
    {{-901.81, 12.5957, -3805.69}, {-8.9407e-08, -0.0740645, -7.45058e-09, 0.997253}, 0.79113, ROCK003_DECOR_ID},
    {{-367.817, 12.5957, -3418.46}, {-8.9407e-08, 0.475743, 4.47035e-08, 0.879584}, 0.704993, ROCK003_DECOR_ID},
    {{-1091.38, 12.5957, -4420.54}, {-8.64267e-07, -0.685221, -7.45058e-07, 0.728335}, 0.53682, ROCK003_DECOR_ID},
    {{4940.21, 12.5957, -3530.53}, {-2.98023e-08, 0.725336, 0, 0.688395}, 0.895346, ROCK001_DECOR_ID},
};
struct Vector3 Curiosity_PathingNodes[] = {
    {-1278.24, 0.0f, 681.038},
    {-1317.33, 0.0f, -1559.23},
    {1274.75, 0.0f, -1559.23},
    {1323.61, 0.0f, 749.445},
    {981.576, 0.0f, 2606.22},
    {-1981.86, 0.0f, -3425.78},
    {3199.93, 0.0f, -2282.39},
    {3171.78, 0.0f, -5659.77},
    {-988.557, 0.0f, 3549.07},
    {-2128.42, 0.0f, 4660.78},
    {-3296.43, 0.0f, 4703},
    {-3155.7, 0.0f, 5237.75},
    {-4422.22, 0.0f, 2324.77},
    {-3723.61, 0.0f, 1064.65},
    {-4956.97, 0.0f, -236.404},
    {-3669.35, 0.0f, -1204.66},
    {1370.52, 0.0f, -6090.38},
    {-543.323, 0.0f, -5119.39},
    {-1735.59, 0.0f, -4844.74},
    {-833.761, 0.0f, 1846.31},
    {-2213.64, 0.0f, 167.996},
};
char Curiosity_BasesPathNodes[] = {
    1,
    2,
    0,
    3,
    17,
    13,
    6,
    5,
    4,
    11,
    7,
    14,
};
unsigned short Curiosity_NodeDistances[] = {
    0, 2240, 4832, 2602, 4490, 4221, 6168, 9350, 2956, 4549, 5717, 6270, 4263, 2822, 4615, 3067, 9031, 6885, 5662, 1247, 1066, 
    2240, 0, 2592, 4843, 6731, 1981, 4648, 7110, 5197, 6789, 7958, 8511, 6504, 5063, 3989, 2378, 6791, 4644, 3421, 3487, 3307, 
    4832, 2592, 0, 2309, 4197, 3753, 2056, 4518, 6381, 7973, 9142, 9695, 9096, 7655, 6581, 4970, 6143, 3997, 5193, 4729, 5899, 
    2602, 4843, 2309, 0, 1888, 6062, 3565, 6827, 4072, 5664, 6833, 7386, 6866, 5425, 7218, 5670, 8452, 6306, 7502, 2420, 3669, 
    4490, 6731, 4197, 1888, 0, 7950, 5453, 8715, 2184, 3776, 4945, 5498, 5829, 7270, 8445, 7558, 10340, 8194, 9390, 3893, 5557, 
    4221, 1981, 3753, 6062, 7950, 0, 5810, 6661, 7178, 8771, 9648, 10201, 7016, 6193, 4400, 2789, 4809, 2663, 1440, 5469, 4790, 
    6168, 4648, 2056, 3565, 5453, 5810, 0, 3377, 7637, 9229, 10398, 10951, 10432, 8991, 8638, 7027, 5229, 6054, 7250, 5985, 7235, 
    9350, 7110, 4518, 6827, 8715, 6661, 3377, 0, 10899, 12491, 13660, 14213, 13614, 12173, 11062, 9451, 1852, 3998, 5221, 9247, 10417, 
    2956, 5197, 6381, 4072, 2184, 7178, 7637, 10899, 0, 1592, 2761, 3313, 3645, 5086, 6261, 6024, 11988, 9842, 8619, 1709, 4023, 
    4549, 6789, 7973, 5664, 3776, 8771, 9229, 12491, 1592, 0, 1168, 1721, 3800, 5240, 6416, 7616, 13580, 11434, 10211, 3302, 5616, 
    5717, 7958, 9142, 6833, 4945, 9648, 10398, 13660, 2761, 1168, 0, 552, 2631, 4072, 5247, 6858, 14457, 12311, 11088, 4470, 5828, 
    6270, 8511, 9695, 7386, 5498, 10201, 10951, 14213, 3313, 1721, 552, 0, 3184, 4625, 5800, 7411, 15010, 12864, 11641, 5023, 6381, 
    4263, 6504, 9096, 6866, 5829, 7016, 10432, 13614, 3645, 3800, 2631, 3184, 0, 1440, 2616, 4227, 11826, 9680, 8457, 5355, 3196, 
    2822, 5063, 7655, 5425, 7270, 6193, 8991, 12173, 5086, 5240, 4072, 4625, 1440, 0, 1792, 3403, 11002, 8856, 7633, 4070, 1756, 
    4615, 3989, 6581, 7218, 8445, 4400, 8638, 11062, 6261, 6416, 5247, 5800, 2616, 1792, 0, 1611, 9210, 7064, 5840, 5862, 3548, 
    3067, 2378, 4970, 5670, 7558, 2789, 7027, 9451, 6024, 7616, 6858, 7411, 4227, 3403, 1611, 0, 7599, 5453, 4229, 4314, 2000, 
    9031, 6791, 6143, 8452, 10340, 4809, 5229, 1852, 11988, 13580, 14457, 15010, 11826, 11002, 9210, 7599, 0, 2146, 3369, 10278, 9599, 
    6885, 4644, 3997, 6306, 8194, 2663, 6054, 3998, 9842, 11434, 12311, 12864, 9680, 8856, 7064, 5453, 2146, 0, 1223, 8132, 7453, 
    5662, 3421, 5193, 7502, 9390, 1440, 7250, 5221, 8619, 10211, 11088, 11641, 8457, 7633, 5840, 4229, 3369, 1223, 0, 6909, 6230, 
    1247, 3487, 4729, 2420, 3893, 5469, 5985, 9247, 1709, 3302, 4470, 5023, 5355, 4070, 5862, 4314, 10278, 8132, 6909, 0, 2314, 
    1066, 3307, 5899, 3669, 5557, 4790, 7235, 10417, 4023, 5616, 5828, 6381, 3196, 1756, 3548, 2000, 9599, 7453, 6230, 2314, 0, 
};
char Curiosity_NextNode[] = {
    0, 1, 1, 3, 3, 1, 3, 1, 19, 19, 19, 19, 20, 20, 20, 20, 1, 1, 1, 19, 20, 
    0, 1, 2, 0, 0, 5, 2, 2, 0, 0, 0, 0, 0, 0, 15, 15, 5, 5, 5, 0, 0, 
    1, 1, 2, 3, 3, 5, 6, 7, 3, 3, 3, 3, 1, 1, 1, 1, 17, 17, 5, 3, 1, 
    0, 0, 2, 3, 4, 2, 6, 2, 4, 4, 4, 4, 0, 0, 0, 0, 2, 2, 2, 19, 0, 
    3, 3, 3, 3, 4, 3, 3, 3, 8, 8, 8, 8, 8, 8, 8, 3, 3, 3, 3, 8, 3, 
    1, 1, 2, 2, 2, 5, 2, 18, 1, 1, 15, 15, 15, 15, 15, 15, 18, 18, 18, 1, 15, 
    3, 2, 2, 3, 3, 2, 6, 7, 3, 3, 3, 3, 3, 3, 2, 2, 7, 2, 2, 3, 3, 
    2, 2, 2, 2, 2, 16, 6, 7, 2, 2, 2, 2, 2, 2, 16, 16, 16, 16, 16, 2, 2, 
    19, 19, 4, 4, 4, 19, 4, 4, 8, 9, 9, 9, 12, 12, 12, 19, 19, 19, 19, 19, 19, 
    8, 8, 8, 8, 8, 8, 8, 8, 8, 9, 10, 10, 10, 10, 10, 8, 8, 8, 8, 8, 8, 
    9, 9, 9, 9, 9, 12, 9, 9, 9, 9, 10, 11, 12, 12, 12, 12, 12, 12, 12, 9, 12, 
    10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 11, 10, 10, 10, 10, 10, 10, 10, 10, 10, 
    13, 13, 13, 13, 8, 14, 13, 13, 8, 10, 10, 10, 12, 13, 14, 14, 14, 14, 14, 8, 13, 
    20, 20, 20, 20, 12, 14, 20, 20, 12, 12, 12, 12, 12, 13, 14, 14, 14, 14, 14, 20, 20, 
    13, 15, 15, 13, 12, 15, 15, 15, 12, 12, 12, 12, 12, 13, 14, 15, 15, 15, 15, 13, 13, 
    20, 1, 1, 20, 20, 5, 1, 5, 20, 20, 14, 14, 14, 14, 14, 15, 5, 5, 5, 20, 20, 
    17, 17, 17, 17, 17, 17, 7, 7, 17, 17, 17, 17, 17, 17, 17, 17, 16, 17, 17, 17, 17, 
    18, 18, 2, 2, 2, 18, 2, 16, 18, 18, 18, 18, 18, 18, 18, 18, 16, 17, 18, 18, 18, 
    5, 5, 5, 5, 5, 5, 5, 17, 5, 5, 5, 5, 5, 5, 5, 5, 17, 17, 18, 5, 5, 
    0, 0, 3, 3, 8, 0, 3, 3, 8, 8, 8, 8, 8, 0, 0, 0, 0, 0, 0, 19, 0, 
    0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 13, 13, 13, 13, 13, 15, 15, 15, 15, 0, 20, 
};
struct LevelDefinition Curiosity_Definition = {
    .maxPlayerCount = 4,
    .playerStartLocations = Curiosity_StartingPositions,
    .baseCount = 12,
    .decorCount = 57,
    .bases = Curiosity_Bases,
    .decor = Curiosity_Decor,
    .levelBoundaries = {{-5465.91, -6957.46}, {5522.59, 6019.55}},
    .sceneRender = Curiosity_model_gfx,
    .theme = &MarsTheme,
    .staticScene = {Curiosity_Boundary, 16},
    .pathfinding = {.nodeCount = 21, .baseNodes = Curiosity_BasesPathNodes, .nodeDistances = Curiosity_NodeDistances, .nodePositions = Curiosity_PathingNodes, .nextNode = Curiosity_NextNode},
    .aiDifficulty = 0.7,
};

