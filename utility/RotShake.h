#pragma once

#include <utility/Angle.h>

class RotShake
{
public:
    struct Arg
    {
        Angle initial_speed = 0;
        Angle initial_rotation = 0;
        s32   frame_count = 32;
        Angle dampening = 0x00020000;
        Angle speed = 0x08000000;
        Angle minimum_angle = 0x00080000;
        Angle maximum_angle = 0x00800000;
        Angle amplitude = 0x00400000;
    };
    static_assert(sizeof(Arg) == 0x20);

public:
    RotShake()
        : mArg()
        , _20(false)
    {
    }

    // Address: 0x029E2CE8
    void init(const Arg& arg);
    // Address: 0x029E2D34
    int move();

    Arg& getArg()
    {
        return mArg;
    }

    const Arg& getArg() const
    {
        return mArg;
    }

protected:
    Arg     mArg;
    bool    _20;
};
static_assert(sizeof(RotShake) == 0x24);
