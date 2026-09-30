#pragma once

#include "types.h"
#include <actor/ActorState.h>
#include <graphics/AnimModel.h>
#include <collision/ActorBoxBgCollision.h>

class Freezer : public ActorState
{
    SEAD_RTTI_OVERRIDE(Freezer, ActorState)
public:
    // Address: 0x02779968
    Freezer(const ActorCreateParam& param);

    u32 getIsMelting() const
    {
        return mIsMelting;
    }

protected:
    AnimModel*              mIceModel;
    AnimModel*              mCoinModel;
    ShaderParamAnimation*   mCoinShaderAnim;
    u8                      _17D4[4];
    ActorBoxBgCollision     mBoxCollision;
    sead::Vector3f          _1A68;
    u32                     _1A74;
    u32                     mIsMelting;
    u32                     _1A7C;
    u8                      mIceEfMaker[0x234];
    u8                      _1CB4[4];
};
static_assert(sizeof(Freezer) == 0x1CB8);
