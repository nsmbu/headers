#pragma once

#include <collision/ActorBgCollisionCheck.h>

class ActorBgCollisionEnemyCheck : public ActorBgCollisionCheck // vtbl Address: 0x1004147C
{
    // getRuntimeTypeInfoStatic()::typeInfo initialization guard variable   Address: Deleted
    // getRuntimeTypeInfoStatic()::typeInfo                                 Address: Deleted
    SEAD_RTTI_OVERRIDE(ActorBgCollisionEnemyCheck, ActorBgCollisionCheck)

public:
    // Address: 0x02191CF4
    ActorBgCollisionEnemyCheck();

    // Address: 0x02191D48
    void checkBg() override;

    Actor* getOwnerAtRevCheck(f32 bg_collision_pos_y) const override
    {
        return mOwner;
    }

    Actor* getOwnerAtHit(const BgCollision& bg_collision, u8 direction) const override
    {
        return mOwner;
    }

    s8* vf4C(f32) const override
    {
        return mFollowArg.player_no;
    }

    // Address: 0x02192044
    void vf54() override;
    // Address: 0x021920FC
    void checkFoot_() override;
    // Address: 0x0219215C
    void checkHead_() override;
    // Address: 0x021921BC
    void checkWall_(u8 direction) override;
};
static_assert(sizeof(ActorBgCollisionEnemyCheck) == sizeof(ActorBgCollisionCheck));
