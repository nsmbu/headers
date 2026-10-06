#pragma once

#include <collision/BgHitCheckCallback.h>

class ActorBgCollisionCheck;

// vtbl Address: 0x10041A30
class ActorBgHitCheckCallback : public BgHitCheckCallback
{
public:
    ActorBgHitCheckCallback(ActorBgCollisionCheck* bc)
        : mBgCollisionCheck(bc)
    {
    }

    // Address: 0x02197C14
    bool hit(const BgCollisionCheckResultPoint& hit_res) override /* { return true; } */ ;
    // Address: 0x02197B4C
    bool hit(const BgCollisionCheckResultArea& hit_res) override;

protected:
    ActorBgCollisionCheck*  mBgCollisionCheck;
};
static_assert(sizeof(ActorBgHitCheckCallback) == 8);
