#pragma once

#include <utility/Angle.h>

class RotShake
{
public:
    struct Arg
    {
        Angle   mInitialSpeed;
        Angle   mInitialRotation;
        s32     mFrameCount;
        Angle   mDampening;
        Angle   mSpeed;
        Angle   mMinimumAngle;
        Angle   mMaximumAngle;
        Angle   mAmplitude;
 
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
            : mInitialSpeed(field_0)
            , mInitialRotation(field_4)
            , mFrameCount(field_8)
            , mDampening(field_c)
            , mSpeed(field_10)
            , mMinimumAngle(field_14)
            , mMaximumAngle(field_18)
            , mAmplitude(field_1c)
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
