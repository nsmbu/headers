#pragma once

#include <collision/ActorBgCollisionCheck.h>

class ActorBgCollisionCheckUtil
{
public:
    // Address: 0x02191C74
    static bool getHSensorSideOffset(const ActorBgCollisionCheck::Sensor& sensor, f32* side1, f32* side2);
    // Address: 0x02191C4C
    static bool getHSensorCenterOffset(const ActorBgCollisionCheck::Sensor& sensor, sead::Vector2f& out);
    // Address: 0x02191CCC
    static bool getVSensorCenterOffset(const ActorBgCollisionCheck::Sensor& sensor, sead::Vector2f& out);
};
