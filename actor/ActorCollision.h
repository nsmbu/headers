#pragma once

#include <actor/Actor.h>
#include <collision/ActorBgCollisionObjCheck.h>
#include <collision/BgCollisionCheckParam.h>

// vtbl Address: 0x1000084C
class ActorCollision : public Actor
{
    // getRuntimeTypeInfoStatic()::typeInfo initialization guard variable   Address: 0x101E9CD4
    // getRuntimeTypeInfoStatic()::typeInfo                                 Address: 0x101E9CD8
    SEAD_RTTI_OVERRIDE(ActorCollision, Actor)

protected:
    enum BgCheckFlag
    {
        cBgCheckFlag_Foot = 1 << 0,
        cBgCheckFlag_Head = 1 << 1,
        cBgCheckFlag_Wall = 1 << 2,

        cBgCheckFlag_None = 0
    };

    enum WaterCalcType
    {
        cWaterCalcType_Normal = 0,
        cWaterCalcType_EnablePreCheck,
        cWaterCalcType_ForceOut
    };

    enum QuakeType
    {
        cQuakeType_Normal = 0,
        cQuakeType_Big,
        cQuakeType_Small        // Used in NSMB2, but NSMBU no longer uses it
    };

    /**
     * @brief -0.0625f
     * @par Address: 0x1000081C
     */
    static const f32 cWaterGravity;
    /**
     * @brief 1.5f
     * @par Address: 0x10000814
     */
    static const f32 cWaterSpeedYMax;
    /**
     * @brief -1.5f
     * @par Address: 0x10000818
     */
    static const f32 cWaterFallSpeedMax;

protected:
    friend BgCheckFlag operator|(const BgCheckFlag& lhs, const BgCheckFlag& rhs)
    {
        return (BgCheckFlag)((u32)lhs | (u32)rhs);
    }

    friend BgCheckFlag& operator|=(BgCheckFlag& lhs, const BgCheckFlag& rhs)
    {
        lhs = lhs | rhs;
        return lhs;
    }

protected:
    // Address: 0x02002FB8
    ActorCollision(const ActorCreateParameter& param);

    // Address: 0x0200354C
    void postCreate(MainState state) override;

    // Address: 0x020035FC
    bool preExecute() override;
    // Address: 0x020036D8
    void postExecute(MainState state) override;

    // Address: 0x02003724
    Result destroy() override;

public:
    virtual void setFunsuiFlag(bool enable)
    {
        mFunsuiFlag = enable;
    }

    // Address: Deleted
    virtual bool getFunsuiFlag() const
    {
        return mFunsuiFlag;
    }

    virtual void beginFunsui()
    {
    }

    virtual void endFunsui(f32 speed_y)
    {
    }

    virtual bool isFunsui() const
    {
        return false;
    }

    // Address: Deleted
    virtual void setFunsuiJump(f32 speed)
    {
        mSpeed.y = speed;
    }

    const ActorBgCollisionCheck* getBcConstPtr() const override
    {
        return &mBgCheckObj;
    }

protected:
    /**
     * @brief Determines whether @c setQuake_() should be called.
     * @details Returns @c false by default.
     * @par Address: 0x02004008
     */
    virtual bool isReactQuake();
    // Address: 0x0200375C
    virtual void reactQuake(QuakeType type);

    // Address: 0x02003760
    virtual void setDeathInfoSmoke(const Actor* actor);

    virtual bool setDrcTouchActorDeath(const sead::Vector3f& pos)
    {
        return false;
    }

public:
    virtual void setFunsuiPos(const sead::Vector2f& dst)
    {
        getPos2D() = dst;
    }

    virtual void setFunsuiSpeedY(f32 speed)
    {
        mSpeed.y = speed;
    }

protected:
    virtual bool checkLavaDamage_(f32 surface_pos_y)
    {
        return true;
    }

    virtual bool checkPoisonDamage_(f32 surface_pos_y)
    {
        return false;
    }

    virtual void getDrawRange(sead::BoundBox2f* box)
    {
        box->set(
            mPos.x - 16.0f, mPos.y,
            mPos.x + 16.0f, mPos.y + 32.0f
        );
    }

    // Address: 0x020037F4
    BgCheckFlag actorBgNormalCheck();
    // Address: 0x02003764
    bool actorBgNormalCheckFoot() const;   // Must call checkBg() of mBgCheckObj before calling this, or just use bgCheck_()
    // Address: 0x02003770
    bool actorBgNormalCheckWall() const;   // ^^^

    // Address: 0x02003878
    void resetObjBgPos(BgCollision& bg_collision);

    // Address: 0x020038D8
    bool checkRideActor(const BgCollision& bg_collision) const;

    // Address: 0x020039AC
    void calcSpeedY_();
    // Address: 0x020039F0
    void calcFallSpeed_();
    // Address: 0x02003AE4
    void posMove_();
    // Address: 0x02003A70
    void calcLiftSpeed();
    // Address: 0x02003C10
    void checkLiftSpeed();

    // Address: 0x02003C58
    WaterType checkWaterByWaterCheckPos(f32* surface_pos_y);
    // Address: 0x02003120
    void onWaterFlag();

    // Address: 0x02003C9C
    bool checkPressBg_();

    // Address: 0x02003E58
    void landFoot(f32 y_check_distance, const ActorBgCollisionCheck::Sensor* foot_sensor);
    // Address: 0x02003EA0
    void landFootSimple(f32 y_check_distance, const ActorBgCollisionCheck::Sensor* foot_sensor, bool extended, bool force);

    // Address: 0x02003EA4
    void registerAlphaCheckAreaHUD();

    bool checkForSuitableGround_(const sead::Vector2f& offset) const
    {
        BgCollisionCheckParam param = { 0 };
        param.layer = mLayer;
        param.collision_mask = mCollisionMask;

        BasicBgCollisionCheck tile_check(param);

        const sead::Vector2f& a = getPos2D();
        sead::Vector2f b(a + offset);

        return tile_check.checkArea(nullptr, a, b, 1 << cDirType_Down);
    }

private:
    // Address: 0x0200339C
    void calcWaterCheck();

    // Address: 0x02003148
    WaterType waterLineProc(f32* surface_pos_y, const sead::Vector3f& check_pos/*, f32 unused? */);
    // Address: 0x020030F4
    void adjustSpeedYInWater();

    // Address: 0x02003590
    void calcBGBeltSpeed();

    // Address: 0x02003A34
    f32 generalXSpeedCalc(f32 value, f32 step) const;

    // Address: 0x02003BDC
    bool checkLiftFoot() const;

    // Address: 0x02003D14
    void landFoot_(f32 y_check_distance, const ActorBgCollisionCheck::Sensor* foot_sensor, bool extended, bool force);

protected:
  //u32                         _27c[4 / sizeof(u32)];  // Alignment???
    ActorBgCollisionObjCheck    mBgCheckObj;
    f32                         mJumpSpeedF;
    f32                         mJumpAccelF;
    sead::Vector3f*             mWaterCheckPos;
    bool                        mUseWaterTypeOverride;
    WaterType                   mWaterTypeOverride;
    f32                         _1774;
    sead::Vector2f              mBgSpeed;
    sead::Vector2f              mBgSpeedPrev;
    f32                         mWaterSpeedMaxY;        // Maximum ascension speed
    f32                         mWaterMaxFallSpeed;
    f32                         mWaterGravity;
    bool                        mCheckWaterNeeded;
    bool                        mIsInQuicksand;
    bool                        mIsSubmerged;
    bool                        mNoWaterCalc;
    u8                          mWaterCalcType;
    u8                          mNoLavaSplashTimer;
    bool                        mFunsuiFlag;
    bool                        mIsOnGround;
    u32                         mJumpFrame;
};
static_assert(sizeof(ActorCollision) == 0x17A0, "ActorCollision size mismatch");
