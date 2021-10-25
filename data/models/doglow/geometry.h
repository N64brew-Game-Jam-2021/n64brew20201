#ifndef _doglow_H
#define _doglow_H

#include <ultra64.h>
#include "math/transform.h"
#include "sk64/skelatool_clip.h"

extern Gfx doglow_model_gfx[];
#define DOGLOW_ROOT_BONE 0
#define DOGLOW_SHOULDER1_BONE 1
#define DOGLOW_ARM1_BONE 2
#define DOGLOW_THIGH1_BONE 3
#define DOGLOW_BOOT1_BONE 4
#define DOGLOW_HEAD_BONE 5
#define DOGLOW_TAIL_BONE 6
#define DOGLOW_SHOULDER2_BONE 7
#define DOGLOW_ARM2_BONE 8
#define DOGLOW_THIGH2_BONE 9
#define DOGLOW_BOOT2_BONE 10
#define DOGLOW_DEFAULT_BONES_COUNT 11
extern struct Transform doglow_default_bones[];
extern unsigned short doglow_bone_parent[];
#define DOGLOW_DOGLOW_ARMATURE_001_IDLE_INDEX 0
#define DOGLOW_DOGLOW_ARMATURE_001_JUMP_INDEX 1
#define DOGLOW_DOGLOW_ARMATURE_001_PUNCH_001_INDEX 2
#define DOGLOW_DOGLOW_ARMATURE_001_PUNCH_002_INDEX 3
extern struct SKAnimationHeader doglow_animations[];

#endif