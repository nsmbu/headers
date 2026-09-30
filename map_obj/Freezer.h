#pragma once

#include <actor/ActorState.h>
#include <graphics/AnimModel.h>
#include <collision/ActorBoxBgCollision.h>

class Freezer : public ActorState
{
    // getRuntimeTypeInfoStatic()::typeInfo initialization guard variable   Address: 0x101EAB74
    // getRuntimeTypeInfoStatic()::typeInfo                                 Address: 0x101EAB78
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
    AnimModel*              mIceChunkModel;
    ShaderParamAnimation*   mIceChunkShaderAnim;
    u8                      _17d4[4];
    ActorBoxBgCollision     mBoxCollision;
    sead::Vector3f          _1a68;
    u32                     _1a74;
    u32                     mIsMelting;
    u32                     _1a7c;
    u8                      mIceEfMaker[0x234]; // TODO: IceEfMaker
    u8                      _1cb4[4];
};
static_assert(sizeof(Freezer) == 0x1CB8);
