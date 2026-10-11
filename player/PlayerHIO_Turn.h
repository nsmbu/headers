#pragma once

#include <player/PlayerTurnData.h>

class PlayerMgr;

class PlayerHIO_Turn
{
public:
    /**
     * @brief [mario/luigi(/toadette/toadette star/nabbit/nabbit star in NSMBUDX)]
     * @par Address: 0x1016AA7C
     */
    static const PlayerTurnData cData[2];

public:
    // Address: 0x02914ABC
    PlayerHIO_Turn(PlayerMgr& mgr);
};
static_assert(sizeof(PlayerHIO_Turn) == 1, "PlayerHIO_Turn size mismatch");
