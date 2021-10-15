
#include "transform.h"
#include <assert.h>

void transformInitIdentity(struct Transform* in) {
    in->position = gZeroVec;
    quatIdent(&in->rotation);
    in->scale = gOneVec;
}

void transformToMatrix(struct Transform* in, float mtx[4][4]) {
    quatToMatrix(&in->rotation, mtx);

    mtx[0][0] *= in->scale.x; mtx[0][1] *= in->scale.x; mtx[0][2] *= in->scale.x;
    mtx[1][0] *= in->scale.y; mtx[1][1] *= in->scale.y; mtx[1][2] *= in->scale.y;
    mtx[2][0] *= in->scale.z; mtx[2][1] *= in->scale.z; mtx[2][2] *= in->scale.z;

    mtx[3][0] = in->position.x;
    mtx[3][1] = in->position.y;
    mtx[3][2] = in->position.z;
}


void transformToMatrixL(struct Transform* in, Mtx* mtx) {
    float mtxf[4][4];
    transformToMatrix(in, mtxf);
    guMtxF2L(mtxf, mtx);
}

void transformInvert(struct Transform* in, struct Transform* out) {
    assert(in != out);

    float uniformScale = 1.0f;

    if (in->scale.x != 1.0f || in->scale.y != 1.0f || in->scale.z != 1.0f) {
        uniformScale = 1.0f / sqrtf(vector3MagSqrd(&in->scale));
    }

    // order of transforms forward scale -> rotate -> translate
    // order of transforms inverse translate^-1 -> rotate^-1 -> scale^-1

    if (uniformScale == 1.0f) {
        out->scale.x = in->scale.x;
        out->scale.y = in->scale.y;
        out->scale.z = in->scale.z;
    } else {
        out->scale.x = 1.0f / in->scale.x;
        out->scale.y = 1.0f / in->scale.y;
        out->scale.z = 1.0f / in->scale.z;
    }

    quatConjugate(&in->rotation, &out->rotation);
    vector3Negate(&in->position, &out->position);
    quatMultVector(&out->rotation, &out->position, &out->position);

    if (uniformScale != 1.0f) {
        vector3Scale(&out->position, &out->position, 1.0f / uniformScale);
    }
}