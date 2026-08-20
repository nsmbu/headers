#pragma once

#include <utility/Angle.h>

class RotShake
{
public:
    struct Arg
    {
        Angle   cArg_InitialSpeed;
        Angle   cArg_InitialRotation;
        s32     cArg_FrameCount;
        Angle   cArg_Dampening;
        Angle   cArg_Speed;
        Angle   cArg_MinimumAngle;
        Angle   cArg_MaximumAngle;
        Angle   cArg_Amplitude;
 
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
            : cArg_InitialSpeed(field_0)
            , cArg_InitialRotation(field_4)
            , cArg_FrameCount(field_8)
            , cArg_Dampening(field_c)
            , cArg_Speed(field_10)
            , cArg_MinimumAngle(field_14)
            , cArg_MaximumAngle(field_18)
            , cArg_Amplitude(field_1c)
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
