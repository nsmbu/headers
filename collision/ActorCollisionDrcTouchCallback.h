#pragma once

#include <math/seadVector.h>

class Actor;
class ActorCollisionCheck;
class BgCollision;

class ActorCollisionDrcTouchCallback
{
public:
    // Address: 0x0219E7E8
    virtual bool ccSetTouchDamage(ActorCollisionCheck* cc, const sead::Vector2f& pos);
    virtual bool ccSetTouchNormal(ActorCollisionCheck* cc, const sead::Vector2f& pos) { return false; }
    // Address: 0x0219E8A4
    virtual void ccOnTouch(ActorCollisionCheck* cc, const sead::Vector2f& pos);
    virtual void ccOnHold(ActorCollisionCheck* cc, const sead::Vector2f& pos) { }
    virtual void ccOnRelease(ActorCollisionCheck* cc) { }

    // Address: 0x0219E8B8
    virtual bool bcSetTouchDamage(BgCollision* bg_collision, const sead::Vector2f& pos);
    virtual bool bcSetTouchNormal(BgCollision* bg_collision, const sead::Vector2f& pos) { return false; }
    // Address: 0x0219E974
    virtual void bcOnTouch(BgCollision* bg_collision, const sead::Vector2f& pos);
    virtual void bcOnHold(BgCollision* bg_collision, const sead::Vector2f& pos) { }
    virtual void bcOnRelease(BgCollision* bg_collision) { }
};
static_assert(sizeof(ActorCollisionDrcTouchCallback) == 4);
