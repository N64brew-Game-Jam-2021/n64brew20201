#ifndef _CUTSCENE_H
#define _CUTSCENE_H

#include "../data/cutscenes/geometry.h"
#include "sk64/skelatool_animator.h"
#include "graphics/render_state.h"
#include "scene/camera.h"

struct Cutscene {
    struct SKAnimator animator;
    struct Transform* rootTransforms;
    struct Camera camera;
};

extern struct Cutscene gCutscene;

void cutsceneInit(struct Cutscene* cutscene, unsigned animationIndex);
void cutsceneUpdate(struct Cutscene* cutscene);
void cutsceneRender(struct Cutscene* cutscene, struct RenderState* renderState);

#endif