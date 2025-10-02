#pragma once

#include <collision/ActorCollisionDrcTouchCallback.h>

class PlayerDrcTouchCB : public ActorCollisionDrcTouchCallback  // vtbl Address: 0x101693FC
{
public:
    // Address: 0x029117C0
    bool ccSetTouchNormal(ActorCollisionCheck* cc, const sead::Vector2f& pos) override;
    void ccOnTouch(ActorCollisionCheck* cc, const sead::Vector2f& pos) override { }

    bool bcSetTouchNormal(BgCollision* bg_collision, const sead::Vector2f& pos) override { return false; }
};
static_assert(sizeof(PlayerDrcTouchCB) == sizeof(ActorCollisionDrcTouchCallback));
