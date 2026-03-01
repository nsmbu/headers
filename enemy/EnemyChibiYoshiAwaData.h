#pragma once

#include <map_obj/ChibiYoshiAwaData.h>

class EnemyChibiYoshiAwaData : public ChibiYoshiAwaData // vtbl Address: 0x1007262C
{
public:
    // Address: 0x0232AB90
    EnemyChibiYoshiAwaData(ActorUniqueID owner_id);

    // Address: 0x0232ABFC
    void setAwaHit(Actor* awa) override;
    // Address: 0x0232AC3C
    void awaCatchMove(Actor* awa) override;
    // Address: 0x0232AC7C
    void setAwaCatchEnd(Actor* awa) override;
    // Address: 0x0232ACBC
    void setAwaInvalid(Actor* awa) override;
};
static_assert(sizeof(EnemyChibiYoshiAwaData) == sizeof(ChibiYoshiAwaData));
