#pragma once

#include <utility/Angle.h>

class RotShake
{
public:
    struct Arg
    {
        Angle   cInitialSpeed;
        Angle   cInitialRotation;
        s32     cFrameCount;
        Angle   cDampening;
        Angle   cSpeed;
        Angle   cMinimumAngle;
        Angle   cMaximumAngle;
        Angle   cAmplitude;
 
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
            : cInitialSpeed(field_0)
            , cInitialRotation(field_4)
            , cFrameCount(field_8)
            , cDampening(field_c)
            , cSpeed(field_10)
            , cMinimumAngle(field_14)
            , cMaximumAngle(field_18)
            , cAmplitude(field_1c)
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
