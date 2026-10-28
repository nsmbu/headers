#pragma once

#include <actor/UniqueID.h>

#include <container/seadListImpl.h>
#include <heap/seadDisposer.h>
#include <math/seadVector.h>
#include <prim/seadBitFlag.h>

// vtbl Address: 0x10001340
class AttentionInfo : public sead::IDisposer
{
public:
    enum DistType
    {
        cDistance_10_blocks = 0,
        cDistance_15_blocks,
        cDistance_32_blocks,
        cDistance_16_blocks,
        cDistance_Num
    };

public:
    // Address: 0x0200CA58
    AttentionInfo(UniqueID owner_id);
    // Address: Deleted
    AttentionInfo(UniqueID owner_id, sead::Vector2f pos, DistType max_dist_type, sead::BitFlag32 flag);
    // Address: 0x0200CB10
    ~AttentionInfo() override;

    // Address: Deleted
    bool operator()(const AttentionInfo&);

    const UniqueID& getOwnerID() const
    {
        return mOwnerID;
    }

    sead::Vector2f& getPos()
    {
        return mPos;
    }

    const sead::Vector2f& getPos() const
    {
        return mPos;
    }

    void setMaxDistType(DistType distance)
    {
        mMaxDistType = distance;
    }

    DistType getMaxDistType() const
    {
        return mMaxDistType;
    }

    // TODO: Figure out flags and do this properly
    sead::BitFlag32& getFlag()
    {
        return mFlag;
    }

    const sead::BitFlag32& getFlag() const
    {
        return mFlag;
    }

protected:
    UniqueID        mOwnerID;
    sead::Vector2f  mPos;
    DistType        mMaxDistType; ///< Maximum distance to catch player's attention
    sead::BitFlag32 mFlag;
    sead::ListNode  mListNode;

    friend class AttentionMgr;
};
static_assert(sizeof(AttentionInfo) == 0x2C, "AttentionInfo size mismatch");
