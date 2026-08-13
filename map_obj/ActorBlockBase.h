#pragma once

#include <map_obj/ChangeBlockCoinBase.h>

class ActorBlockBase : public ChangeBlockCoinBase
{
    SEAD_RTTI_OVERRIDE(ActorBlockBase, ChangeBlockCoinBase)

public:
    /**
     * @brief Defines the type of block.
     */
    enum Type
    {
        cType_Hatena    = 0, ///< Question Block
        cType_Renga     = 1, ///< Brick Block
        cType_Hit       = 2, ///< Used Block
        cType_Clear     = 3  ///< Invisible Block
    };

public:
    ActorBlockBase(const ActorCreateParam& param);
    ~ActorBlockBase() override { }

    // Address: 0x0269F6C8
    bool init(bool register_collider, bool set_revision_wall_callback);
    // Address: 0x0269FB30
    void initMover();

    Type getBlockType() const
    {
        return mType;
    }

    void forceSpawnItemUp(u8 player_no_2, s32 hit_player_no)
    {
        mPlayerNo2 = player_no_2;
        mHitPlayerNo = hit_player_no;
        mSpawnDirection = cDirType_Up;

        preSpawnItem();
        spawnItemUp();
    }

protected:
    // Address: 0x0269E6C4
    bool execute() override;
    // Address: 0x0269E77C
    bool draw() override;

public:
    void onDownMove_DiffStart() override;
    void spawnItemUp() override;
    void spawnItemDown() override;
    void onDownMove_DiffEnd() override;
    void onMove_Diff() override;

    bool vf2C4() override;

    /**
     * @brief Restores the persistent state of the block across scene transitions, so that a destroyed/hit block stays that way.
     * @return Whether the block should still be active as opposed to destroyed.
     */
    virtual bool restoreState();

    virtual void vf2DC()
    {
    }

    virtual u8 getContentIndex() const
    {
        return (mParam1 >> 28 & 1) << 4 | (mParam1 & 0xF);
    }

    virtual void preSpawnItem();

    virtual sead::Vector3f getItemCreatePos() const
    {
        return mPos;
    }

    virtual void updateMovement();
    virtual void destroy();
    virtual void destroy2();

    virtual void updateLiquidEffects()
    {
    }

    virtual void onBumpDiff()
    {
    }

    virtual void postBump()
    {
    }

    virtual u32 vf32C()
    {
        return 0;
    }

    DECLARE_STATE_VIRTUAL_ID_BASE(ActorBlockBase, Wait)
    DECLARE_STATE_VIRTUAL_ID_BASE(ActorBlockBase, HitWait)

protected:
    void preSpawnItem_PropellerOrCoin_();

protected:
    f32     mItemCreateZPos;
    f32     mItemCreateYOffsetUpSingle;
    f32     mItemCreateYOffsetDownSingle;
    f32     mItemCreateYOffsetUpMulti;
    f32     mItemCreateYOffsetDownMulti;
    Type    mType;
    u32     _1cc0;
    u8      _1cc4;
    u8      _1cc5;
    u8      _1cc6;
    u32     _1cc8;
    bool    mScreenOutCheckEnable;      // Initialized to true
    u8      _1ccd;
};
static_assert(sizeof(ActorBlockBase) == 0x1CD0);
