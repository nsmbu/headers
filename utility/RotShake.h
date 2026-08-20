#pragma once

#include <utility/Angle.h>

class RotShake
{
public:
    struct Arg
    {
        Angle initial_speed;
        Angle initial_rotation;
        s32   frame_count;
        Angle dampening;
        Angle speed;
        Angle minimum_angle;
        Angle maximum_angle;
        Angle amplitude;
 
        Arg(
            const Angle& field_0 = 0,
            const Angle& field_4 = 0,
            s32 field_8 = 32,
            const Angle& field_c = 0x00020000,
            const Angle& field_10 = 0x08000000,
            const Angle& field_14 = 0x00080000,
            const Angle& field_18 = 0x00800000,
            const Angle& field_1c = 0x00400000
        )
            : initial_speed(field_0)
            , initial_rotation(field_4)
            , frame_count(field_8)
            , dampening(field_c)
            , speed(field_10)
            , minimum_angle(field_14)
            , maximum_angle(field_18)
            , amplitude(field_1c)
        {
        }
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
