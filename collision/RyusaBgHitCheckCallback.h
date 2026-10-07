#pragma once

#include <collision/BgHitCheckCallback.h>

// vtbl Address: 0x100428A8
class RyusaBgHitCheckCallback : public BgHitCheckCallback
{
public:
    // Address: 0x021AF6AC
    bool hit(const BgCollisionCheckResultPoint& hit_res) override;
    // Address: 0x021AF6E0
    bool hit(const BgCollisionCheckResultArea& hit_res) override;
};
