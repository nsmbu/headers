#pragma once

#include <heap/seadDisposer.h>
#include <prim/seadBitFlag.h>

class CourseTimer
{
    // createInstance()                             Address: 0x024C12C4
    // deleteInstance()                             Address: Deleted
    // sInstance                                    Address: 0x101D15F4
    // SingletonDisposer_::~SingletonDisposer_()    Address: 0x024C15C8
    // SingletonDisposer_::sStaticDisposer          Address: 0x101D15F8
    // SingletonDisposer_::vtbl                     Address: 0x100B74B8
    SEAD_SINGLETON_DISPOSER(CourseTimer)

public:
    void onStopTimer(s32 player_no)
    {
        mStopTimerInfo.setBit(player_no);
    }

    void offStopTimer(s32 player_no)
    {
        mStopTimerInfo.resetBit(player_no);
    }

    void onFreezeFrame()
    {
        mFreezeTime++;
    }
    
    // Address: 0x024C14C0
    void addTimeLimitSeconds(u32 seconds);
    
    // Address: 0x024C134C
    void setTimer(u32 seconds);
    
    // Address: 0x024C1344
    [[nodiscard]]
    u32 toUnits(u32 seconds);
    
    [[nodiscard]]
    u32 getTime() const
    {
        return mTime;
    }

    /**
     * @brief The value which the bonus time animation is loaded with and will add to the clock when it's done.
     */
    void setBonusTime(u16 time)
    {
        mBonusTime = time;
    }

protected:
    u32             mFreezeTime;
    u32             mTime;          // seconds << 12
    u32             mBeginTime;
    bool            mIsHurryUp;
    sead::BitFlag8  mStopTimerInfo;
    u16             mBonusTime;     ///< The value which the bonus time animation is loaded with and will add to the clock when it's done.
};
static_assert(sizeof(CourseTimer) == 0x20, "CourseTimer size mismatch");
