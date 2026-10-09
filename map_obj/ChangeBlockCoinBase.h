#pragma once

#include <collision/ActorCollisionDrcTouchCallback.h>
#include <map/UnitID.h>
#include <map_obj/BlockCoinBase.h>
#include <map_obj/ObjBgCollisionCullCheck.h>
#include <map_obj/ParentMovementMgr.h>

class ChangeBlockCoinBase : public BlockCoinBase
{
    SEAD_RTTI_OVERRIDE(ChangeBlockCoinBase, BlockCoinBase)

public:
    class DrcTouchCB : public ActorCollisionDrcTouchCallback
    {
    public:
        bool bcSetTouchNormal(BgCollision* bg_collision, const sead::Vector2f& pos) override;
    };
    static_assert(sizeof(DrcTouchCB) == 4);

public:
    enum Form : u32
    {
        cForm_Coin = 0,
        cForm_Block = 1
    };
    static_assert(sizeof(Form) == 4);

public:
    ChangeBlockCoinBase(const ActorCreateParam& param);
    virtual ~ChangeBlockCoinBase() { }

    // Address: 0x02726610
    void spawnItemUp() override;
    // Address: 0x02726634
    void spawnItemDown() override;
    u32 getMultiCoinState() override;

    virtual void vf29C()
    {
    }

    virtual void setTileFlag();

    virtual u32 vf2AC()
    {
        return 0;
    }

    virtual void vf2B4()
    {
    }

    virtual void vf2BC()
    {
    }

    // TODO: inline
    // Address: 0x02727998
    virtual bool vf2C4(); // Checks if current state is StateID_Wait or equivalent

    // Address: 0x02726654
    virtual void onDrcTouch();

    // Address: 0x02726760
    bool registerColliderActiveInfo();

    DrcTouchCB getDrcTouchCallback() const
    {
        return mDrcTouchCallback;
    }

    const sead::Vector3f& getPosForState() const
    {
        return mPosForState;
    }

protected:
    ActorBgCollisionCheck::Sensor   mFootSensor;
    sead::Vector3f                  mPosForState;
    ParentMovementMgr               mParentMovementMgr;
    ObjBgCollisionCullCheck         mColliderActiveInfo;
    sead::Vector2f                  mColliderActiveAreaSize;
    Form                            mForm;
    bool                            mPSwitchTransformed;
    UnitID                          mUnitID;
    ParentMovementType              mParentMovementType;
    u32                             mParentMovementID;
    u8                              _1c7c[0x1C88 - 0x1C7C];
    bool                            mDisablePSwitchTransform;
    bool                            mIsCoin;
    u8                              _1c8a[0x1C90 - 0x1C8A];
    s32                             mCoinCollectPlayerNo;
    u16                             _1c94;
    u8                              _1c96[0x1CA0 - 0x1C98];
    DrcTouchCB                      mDrcTouchCallback;
  //u32                             _1ca4[4 / sizeof(u32)]; // Alignment???
};
static_assert(sizeof(ChangeBlockCoinBase) == 0x1CA8);
