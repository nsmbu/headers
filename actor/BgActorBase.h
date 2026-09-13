#pragma once

#include <actor/ActorState.h>
#include <graphics/AnimModel.h>
#include <collision/ActorBoxBgCollision.h>
#include <map_obj/Wave.h>

class BgActorBase : public ActorMultiState
{

public:
    BgActorBase(const ActorCreateParam& param);
    virtual ~BgActorBase();

public:
    // Address: 0x026F0E9C
    bool execute() override;

    const Wave& getWave() const
    {
        return mWave;
    }

    Wave& getWave()
    {
        return mWave;
    }

    void setOnlyRenderWaves(bool only_render)
    {
        mOnlyRenderWaves = only_render;
    }

protected:
    AnimModel*                  mModel;
    u8                          _17cc[4]; // Unknown values
    sead::Vector3f              _17d0;
    sead::Vector3f              _17dc;
    ActorBoxBgCollision         mRectCollider;
    BgCollision::LineInitArg    mColliderInfo;
    sead::Vector2f              _1a9c;
    u32                         _1aa4;
    u32                         _1aa8;
    f32                         _1aac;
    f32                         _1ab0;
    f32                         mWidth;
    f32                         mBaselineHeight;
    f32                         mEffectiveHeight;
    f32                         _1ac0;
    f32                         _1ac4;
    f32                         _1ac8;
    f32                         _1acc;
    u32                         _1ad0;
    u32                         _1ad4;
    u16                         _1ad8;
    u16                         _1ada;
    bool                        mOnlyRenderWaves;
    u8                          _1add;
    u8                          _1ade;
    u8                          _1adf;
    u32                         _1ae0;
    Wave                        mWave;
    sead::IDisposer             _11a30;
    u32                         _11a40;
    u8                          _11a44[4]; // Unknown values
    u32                         _11a48;
    u32                         _11a4c;
    u32                         _11a50;
    u32                         _11a54;
    u32                         _11a58;
    u32                         _11a5c;
    u32                         _11a60;
    f32                         _11a64;
    f32                         _11a68;
    u32                         _11a6c;
    u16                         _11a70;
    u8                          _11a72;
    u8                          _11a73;
    u8                          _11a74[4]; // Unknown values
};
static_assert(sizeof(BgActorBase) == 0x11A78, "BgActorBase size mismatch");
