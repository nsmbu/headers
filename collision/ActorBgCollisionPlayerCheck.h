#pragma once

#include <collision/ActorBgCollisionCheck.h>

class ActorBgCollisionPlayerCheck : public ActorBgCollisionCheck    // vtbl Address: 0x
{
    // getRuntimeTypeInfoStatic()::typeInfo initialization guard variable   Address: Deleted
    // getRuntimeTypeInfoStatic()::typeInfo                                 Address: Deleted
    SEAD_RTTI_OVERRIDE(ActorBgCollisionPlayerCheck, ActorBgCollisionCheck)

public:
    enum VineType
    {
        cVineType_None  = 0,
        cVineType_Ivy,
        cVineType_Rock,
        cVineType_Wire
    };
    static_assert(sizeof(VineType) == 4);

public:
    // Address: 0x021934C0
    ActorBgCollisionPlayerCheck();
    // Address: 0x021936A8
    virtual ~ActorBgCollisionPlayerCheck();

    // Address: 0x02193714
    void process() override;
    // Address: 0x02193718
    void reset() override;
    // Address: 0x0219371C
    void atFrameStart() override;
    // Address: 0x0219587C
    Actor* getOwnerAtRevCheck(f32 bg_collision_pos_y) const override;
    // Address: 0x021958E8
    Actor* getOwnerAtHit(const BgCollision& bg_collision, u8 direction) const override;
    // Address: 0x02195830
    s8* vf4C(f32) const override;

    VineType getVineType() const
    {
        return mVineType;
    }

    BgCollision* getVineBgCollision() const
    {
        return mpVineBgCollision;
    }

private:
    List::Node      _14e0;
    s8              mPlayerNo;
    sead::BitFlag16 _14ee;
    u8              _14f0;
    VineType        mVineType;
    BgCollision*    mpVineBgCollision;
    u32             _14fc[(0x15A0 - 0x14FC) / sizeof(u32)];
};
static_assert(sizeof(ActorBgCollisionPlayerCheck) == 0x15A0);
