#pragma once

#include <player/PlayerBase.h>

class Yoshi : public PlayerBase
{
    SEAD_RTTI_OVERRIDE(Yoshi, PlayerBase)

public:
    // ...
    bool setDamage(Actor* actor, DamageType type) override;
    // ...
};
