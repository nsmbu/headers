#pragma once

#include <player/PlayerBase.h>
#include <player/PlayerObject.h>

class Yoshi : public PlayerBase // vtbl Address: 0x10171B28
{
    // getRuntimeTypeInfoStatic()::typeInfo initialization guard variable   Address: 0x101E9ECC
    // getRuntimeTypeInfoStatic()::typeInfo                                 Address: 0x101E9ED0
    SEAD_RTTI_OVERRIDE(Yoshi, PlayerBase)

public:
    // ...
    bool setDamage(Actor* actor, DamageType type) override;
    // ...
    
    /**
     * @brief Returns the player which is riding the Yoshi, or @c nullptr if there is none.
     * @par Address 0x0296B3C4
     */
    PlayerObject* getPlayerRideOn() const;
    
    // ...
};
