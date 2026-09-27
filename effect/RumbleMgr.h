#pragma once

#include <heap/seadDisposer.h>

class RumbleMgr
{
    // Instance: 0x101D1660
    SEAD_SINGLETON_DISPOSER(RumbleMgr)

public:
    // Address: 0x024C4D3C
    void rumble(s32 intensity, s8 = 3, s8 = 0, s8 = 0);

};
