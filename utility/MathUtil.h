#pragma once

#include <math/seadMathCalcCommon.h>

class MathUtil
{
    // NSMBW: sLib & dGameCom

public:
    template <typename T>
    static T calcTimer(T* value);

    static u32 absAngle(s32 value);

    // Address: 0x029E11FC
    static f32 addCalc(f32*, f32, f32, f32, f32);

    // Address: 0x029E1718
    static void getGlbPosToLyt(sead::Vector3f& pos);
};

template <typename T>
T MathUtil::calcTimer(T* value)
{
    if (*value != 0)
        (*value)--;
    return *value;
}

inline u32 MathUtil::absAngle(s32 value)
{
    if (value >= 0)
        return value;
    else if (value == -sead::Mathi::cHalfRoundIdx)
        return sead::Mathu::cHalfRoundIdx;
    else
        return -value;
}
