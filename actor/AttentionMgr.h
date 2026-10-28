#pragma once

#include <actor/AttentionInfo.h>

#include <container/seadOffsetList.h>

class Actor;

// vtbl Address: 0x10001364
class AttentionMgr
{
    // createInstance()                             Address: 0x0200CC0C
    // deleteInstance()                             Address: Deleted
    // sInstance                                    Address: 0x101C30E8
    // SingletonDisposer_::~SingletonDisposer_()    Address: 0x0200CE60
    // SingletonDisposer_::sStaticDisposer          Address: 0x101C30EC
    // SingletonDisposer_::vtbl                     Address: 0x10001354
    SEAD_SINGLETON_DISPOSER(AttentionMgr)

public:
    // Address: 0x0200CB88
    AttentionMgr();

    virtual ~AttentionMgr()
    {
    }

    // Address: 0x0200CC8C
    void entry(AttentionInfo* info);
    // Address: 0x0200CCD0
    void release(AttentionInfo* info);

    // Address: 0x0200CD2C
    const AttentionInfo* searchActor(const Actor* actor_self, const sead::Vector2f& pos_self) const;

protected:
    sead::OffsetList<AttentionInfo>   mLookatList;

    /**
     * @brief Square of maximum possible value of all max-distances (square of 32 blocks = 262144 sq units)
     * @details 262144.0f
     * @par Address: 0x10001350
     */
    static const f32 cMaxDistanceSqMax;

    // Address: 0x101C30D8
    static f32 sMaxDistanceSq[AttentionInfo::cDistance_Num];
};
static_assert(sizeof(AttentionMgr) == 0x24, "AttentionMgr size mismatch");
