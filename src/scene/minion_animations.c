
#include "minion_animations.h"

unsigned short minion_attack[] = {
    0x0020, 0x0001, 0x0003, 0x0000, 0x0001, 0x0007, 0x0000, 0x0014, 0x0000, 0x00d2, 0x0000, 0x0000, 0x0100, 0x00ff, 0x00ff, 0x0001, 
    0x0001, 0x0002, 0x0033, 0x0000, 0x0000, 0x000b, 0x0001, 0x0005, 0x0000, 0x0055, 0xffd7, 0x0100, 0x0100, 0x0100, 0x0000, 0x0000, 
    0x0020, 0x0002, 0x0001, 0x0002, 0x0001, 0x0002, 0xfe89, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
    0x0020, 0x0004, 0x0001, 0x0004, 0x0001, 0x0002, 0xfc1e, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
    0x0020, 0x0005, 0x0001, 0x0005, 0x0001, 0x0002, 0xf940, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
    0x0020, 0x0006, 0x0001, 0x0006, 0x0001, 0x0002, 0xf63c, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
    0x0020, 0x0007, 0x0001, 0x0007, 0x0001, 0x0002, 0xf360, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
    0x0020, 0x0009, 0x0001, 0x0009, 0x0001, 0x0002, 0xf0f9, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
    0x0020, 0x000a, 0x0001, 0x000a, 0x0001, 0x0002, 0xef52, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
    0x0020, 0x000b, 0x0001, 0x000b, 0x0001, 0x0002, 0xeeb4, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
    0x0020, 0x000c, 0x0001, 0x000c, 0x0001, 0x0007, 0x0000, 0x0050, 0xfff2, 0xff03, 0x0000, 0x0000, 0x0124, 0x0124, 0x0124, 0x0000, 
    0x0030, 0x000e, 0x0001, 0x000e, 0x0001, 0x0007, 0x0000, 0x004b, 0x000c, 0x0f55, 0x0000, 0x0000, 0x0149, 0x0149, 0x0149, 0x0000, 
    0x0020, 0x000f, 0x0003, 0x000f, 0x0001, 0x0002, 0x0eea, 0x0000, 0x0000, 0x0013, 0x0001, 0x0004, 0x012f, 0x012f, 0x012f, 0x001a, 
    0x0001, 0x0001, 0x0000, 0x0014, 0x0000, 0x0000, 0x0000, 0x0000, 0x0020, 0x0010, 0x0001, 0x0010, 0x0001, 0x0002, 0x0dcf, 0x0000, 
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0020, 0x0011, 0x0001, 0x0011, 0x0001, 0x0002, 0x0c30, 0x0000, 
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0020, 0x0013, 0x0001, 0x0013, 0x0001, 0x0002, 0x0a38, 0x0000, 
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0020, 0x0015, 0x0002, 0x0015, 0x0001, 0x0002, 0x05ee, 0x0000, 
    0x0000, 0x0016, 0x0001, 0x0004, 0x010f, 0x010f, 0x010f, 0x0000, 0x0020, 0x0016, 0x0001, 0x0016, 0x0001, 0x0002, 0x03f4, 0x0000, 
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0020, 0x0018, 0x0002, 0x0018, 0x0001, 0x0002, 0x0254, 0x0000, 
    0x0000, 0x001a, 0x0001, 0x0004, 0x0100, 0x00ff, 0x00ff, 0x0000, 0x0020, 0x0019, 0x0001, 0x0019, 0x0001, 0x0002, 0x013a, 0x0000, 
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xffff, 0x0001, 0x001a, 0x0001, 0x0002, 0x00d2, 0x0000, 
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
};

unsigned short minion_idle[] = {
    0x0020, 0x004d, 0x0003, 0x0000, 0x0001, 0x0007, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0100, 0x0100, 0x0100, 0x004d, 
    0x0001, 0x0001, 0x0000, 0x0048, 0x0000, 0x0095, 0x0001, 0x0006, 0x0000, 0x0000, 0x0000, 0x0100, 0x0100, 0x0100, 0x0000, 0x0000, 
    0x0000, 0xffff, 0x0001, 0x0095, 0x0001, 0x0001, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
};

struct SKAnimationHeader minion_animations[] = {
    {64, 30, 148, (struct SKAnimationChunk*)minion_idle},
    {64, 30, 26, (struct SKAnimationChunk*)minion_attack},
};
