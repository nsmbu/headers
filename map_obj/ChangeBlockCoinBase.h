#pragma once

#include <collision/ActorCollisionDrcTouchCallback.h>
#include <map/UnitID.h>
#include <map_obj/BlockCoinBase.h>
#include <map_obj/ObjBgCollisionCullCheck.h>
#include <map_obj/ParentMovementMgr.h>

class ChangeBlockCoinDrcTouchCB : public ActorCollisionDrcTouchCallback
{
public:
    bool bcSetTouchNormal(BgCollision* bg_collision, const sead::Vector2f& pos) override;
};
static_assert(sizeof(ChangeBlockCoinDrcTouchCB) == 4);

class ChangeBlockCoinBase : public BlockCoinBase
{
    SEAD_RTTI_OVERRIDE(ChangeBlockCoinBase, BlockCoinBase)

public:
    enum Form : u32 {
        cForm_Coin = 0,
        cForm_Block = 1
    };
    static_assert(sizeof(Form) == 4);

public:
    ChangeBlockCoinBase(const ActorCreateParam& param);
    virtual ~ChangeBlockCoinBase() { }

    void spawnItemUp() override;
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
    virtual bool vf2C4(); // Checks if current state is StateID_Wait or equivalent
    virtual void vf2CC();

    // Address: 0x02726760
    bool registerColliderActiveInfo();

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
    u8                              _1c89[0x1CA0 - 0x1C89];
    ChangeBlockCoinDrcTouchCB       mDrcTouchCallback;
  //u32                             _1ca4[4 / sizeof(u32)]; // Alignment???
};
static_assert(sizeof(ChangeBlockCoinBase) == 0x1CA8);
