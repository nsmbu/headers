#pragma once

#include <actor/ActorBase.h>
#include <actor/ActorCulling.h>
#include <collision/ActorCollisionCheck.h>
#include <effect/EffectID.h>
#include <fukidashi/FukidashiType.h>
#include <map/WaveType.h>
#include <utility/Angle3.h>
#include <utility/Direction.h>

#define ACTOR_DEFAULT_GRAVITY                   -0.1875f
#define ACTOR_DEFAULT_MAX_FALL_SPEED            -4.0f

class ActorBgCollisionCheck;
class BgCollision;
class ChibiYoshiAwaData;
class ChibiEatCallback;
class EatCallback;
class PropelParts;

// vtbl Address: 0x10000268
class Actor : public ActorBase
{
    // getRuntimeTypeInfoStatic()::typeInfo initialization guard variable   Address: 0x101E9CBC
    // getRuntimeTypeInfoStatic()::typeInfo                                 Address: 0x101E9CC0
    SEAD_RTTI_OVERRIDE(Actor, ActorBase)

public:
    enum ActorKind
    {
        cActorKind_Generic  = 0,
        cActorKind_Player,
        cActorKind_Yoshi,
        cActorKind_Enemy,
        cActorKind_ChibiYoshi
    };

    enum CarryFlag
    {
        cCarryFlag_Release      = 1 << 0,
        cCarryFlag_Throw        = 1 << 1, // Otherwise if unset, put on ground
        cCarryFlag_ThrowHard    = 1 << 2,

        cCarryFlag_None         = 0,
        cCarryFlag_All          = cCarryFlag_Release | cCarryFlag_Throw | cCarryFlag_ThrowHard
    };
    
    /**
     * @brief Flags to pass to `actorExecCullCheck` to skip checks or actions during the evaluation.
     */
    enum ExecCullFlag : u16
    {
        cExecCullFlag_SkipNone           = 0,      ///< Perform all checks and delete the actor if they pass.
        cExecCullFlag_SkipDeletion       = 1 << 1, ///< Skip deleting the actor if the checks do pass. 
        cExecCullFlag_SkipCameraCheck    = 1 << 2, ///< Skip checking if the actor is outside of the visible camera.
        cExecCullFlag_SkipRideCheck      = 1 << 3, ///< Skip checking if the actor is riding another actor/platform.
        cExecCullFlag_SkipTottenCheck    = 1 << 4  ///< Skip checking if Nabbit has passed to the right of the actor's visible range.
    };

public:
    virtual void setPlrNo(s32 id)
    {
        mPlayerNo = id;
    }

    s8 getPlrNo() const
    {
        return mPlayerNo;
    }

    // Address: 0x020002CC
    virtual void removeCc();
    // Address: 0x02000328
    virtual void reviveCc();

    virtual const ActorBgCollisionCheck* getBcConstPtr() const
    {
        return nullptr;
    }

    virtual void setCarryFall(Actor*, s32)
    {
    }

    virtual bool isSpinLiftUpEnable() const
    {
        return true;
    }

    virtual void setSpinLiftUpActor(Actor* player)
    {
    }

    /**
     * @brief Called by Group Controller when "activating" the target group.
     */
    virtual void startGroupid()
    {
    }

    /**
     * @brief Called by Group Controller when "deactivating" the target group.
     */
    virtual void stopGroupid()
    {
    }

    // Address: 0x02000394
    bool checkCarried(s32* player_no) const;

    s32 getComboCnt() const
    {
        return mComboCnt;
    }

    // Address: 0x02000418
    void clrComboCnt();
    // Address: 0x0200042C
    void incComboCnt();

    // Address: 0x02000454
    void slideComboSE(s32 combo_cnt, bool combo_type_2);

    // Address: 0x020005A4
    s32 searchNearPlayer(sead::Vector2f* out) const; // Returns -1 if no player found

    // Address: 0x020005EC
    DirType getDir2PlayerLR(const sead::Vector3f& position) const;
    // Address: 0x020006B4
    DirType getDir2PlayerUD(const sead::Vector3f& position) const;

    DirType getDir2PlayerLR()
    {
        return getDir2PlayerLR(mPos);
    }

    DirType getDir2PlayerUD()
    {
        return getDir2PlayerUD(mPos);
    }
    
    /**
     * @brief Checks if the actor is out of gameplay and optionally deletes it.
     * @param flag Specify checks to skip, and whether to delete the actor if they all passed. See @c ExecCullFlag
     * @return Whether the actor is out of gameplay.
     * @details The actor is considered "out of gameplay" if:
     * * It has not been eaten.
     * * It is not riding another actor/platform (unless skipped by flag).
     * * Nabbit has passed to the **right** of the actor's visible range.
     * * The actor is out of the zone bounds OR the actor is outside of the visible camera.
     * @par Address: 0x020007A0
     */
    bool actorExecCullCheck(u16 flag);

    // Address: 0x02002AD8
    virtual void allEnemyDeathEffSet(); // Spawn burst effect at instances where all enemies die (such as touching goal pole or defeating boss), called if profile flag bit 4, 5 or 7 is set
    // Address: 0x02002ADC
    virtual void waterSplashEffect(const sead::Vector3f& pos);
    // Address: 0x02002AE0
    virtual void yoganSplashEffect(const sead::Vector3f& pos);
    // Address: 0x02000960
    virtual void yoganWaveSplashEffect(const sead::Vector3f& pos);
    // Address: 0x02002AE4
    virtual void poisonSplashEffect(const sead::Vector3f& pos);

    // Address: 0x02000970
    f32 getEffectZpos_() const;

    // Address: 0x02000A70
    bool checkEatenYoshi() const;

    /**
     * @brief Schedule this actor for deletion on the next frame.
     * @param manual_deleted Prevents respawning.
     * @par Address: 0x02000774
     */
    void deleteActor_(bool manual_deleted);

public:
    ActorCollisionCheck& getCollisionCheck()
    {
        return mCollisionCheck;
    }

    const ActorCollisionCheck& getCollisionCheck() const
    {
        return mCollisionCheck;
    }

    bool isExecEnable() const
    {
        return mIsExecEnable;
    }

    bool isDrawEnable() const
    {
        return mIsDrawEnable;
    }

    DirType getDirection() const
    {
        return mDirection;
    }

    void setDirection(DirType dir)
    {
        mDirection = dir;
    }

    u8 getLayer() const
    {
        return mLayer;
    }

    sead::BitFlag8 getCollisionMask() const
    {
        return mCollisionMask;
    }
    
    f32 getMaxSpeedF() const
    {
        return mMaxSpeedF;
    }
    
    void setMaxSpeedF(f32 maxSpeedF)
    {
        mMaxSpeedF = maxSpeedF;
    }
    
    f32 getMaxFallSpeed() const
    {
        return mMaxFallSpeed;
    }
    
    void setMaxFallSpeed(f32 maxFallSpeed)
    {
        mMaxFallSpeed = maxFallSpeed;
    }

    /**
     * @brief The current vertical acceleration.
     */
    f32 getGravity() const
    {
        return mGravity;
    }

    void setGravity(f32 gravity)
    {
        mGravity = gravity;
    }

    /**
     * @brief The current horizontal acceleration.
     */
    f32 getPow() const
    {
        return mPow;
    }
    
    void setPow(f32 pow)
    {
        mPow = pow;
    }

    sead::Vector3f& getPos()
    {
        return mPos;
    }

    const sead::Vector3f& getPos() const
    {
        return mPos;
    }

    sead::Vector2f& getPos2D()
    {
        return reinterpret_cast<sead::Vector2f&>(mPos.x);
    }

    const sead::Vector2f& getPos2D() const
    {
        return reinterpret_cast<const sead::Vector2f&>(mPos.x);
    }

    sead::Vector3f getCenterPos() const
    {
        return getPos() + mCenterOffset;
    }

    sead::Vector2f getCenterPos2D() const
    {
        return getPos2D() + reinterpret_cast<const sead::Vector2f&>(mCenterOffset.x);
    }

    f32 getCenterX() const
    {
        return mPos.x + mCenterOffset.x;
    }

    f32 getCenterY() const
    {
        return mPos.y + mCenterOffset.y;
    }

    f32 getCenterZ() const
    {
        return mPos.z + mCenterOffset.z;
    }

    sead::Vector3f& getSpeedVec()
    {
        return mSpeed;
    }

    const sead::Vector3f& getSpeedVec() const
    {
        return mSpeed;
    }
    
    sead::Vector3f& getSpeedMaxVec()
    {
        return mSpeedMax;
    }
    
    const sead::Vector3f& getSpeedMaxVec() const
    {
        return mSpeedMax;
    }

    sead::Vector3f& getScale()
    {
        return mScale;
    }

    const sead::Vector3f& getScale() const
    {
        return mScale;
    }

    Angle3& getAngle()
    {
        return mAngle;
    }

    const Angle3& getAngle() const
    {
        return mAngle;
    }

    const sead::Vector2f& getPosDelta() const
    {
        return mPosDelta;
    }

    ActorKind getKind() const
    {
        return ActorKind(mActorKind);
    }

    void setKind(ActorKind kind)
    {
        mActorKind = kind;
    }

    bool getManualDeletedFlag() const
    {
        return mManualDeletedFlag;
    }

    CarryFlag getCarryFlag() const
    {
        return CarryFlag(mCarryFlag);
    }

    u8 getSwitchFlag0() const
    {
        return mSwitchFlag0;
    }

    u8 getSwitchFlag1() const
    {
        return mSwitchFlag1;
    }

    u32 getBlockHitTimer() const
    {
        return mBlockHitTimer;
    }

    DirType getBlockHitDirection() const
    {
        return mBlockHitDirection;
    }

    void setBlockHitTimer(u32 time)
    {
        mBlockHitTimer = time;
    }

    void setBlockHitDirection(DirType dir)
    {
        mBlockHitDirection = dir;
    }

    u32 getProfFlag() const
    {
        return mProfFlag;
    }

    f32 getSpeedF() const
    {
        return mSpeedF;
    }

    void setSpeedF(f32 speedF)
    {
        mSpeedF = speedF;
    }

    f32 getAddSpeedF() const
    {
        return mAddSpeedF;
    }

    void setAddSpeedF(f32 speedF)
    {
        mAddSpeedF = speedF;
    }

protected:
    // Address: 0x02000AC8
    Actor(const ActorCreateParameter& param);
    // Address: 0x02000F18
    ~Actor() override;

protected:
    // Address: 0x02000FB8
    void postCreate(MainState state) override;

    // Address: 0x02000FE8
    bool preExecute() override;
    // Address: 0x020010BC
    void postExecute(MainState state) override;

    // Address: 0x020011A0
    bool preDraw() override;

    // Address: 0x02001254
    virtual bool actorDrawCullCheck();

    virtual void blockHitInit()
    {
    }

    // Address: 0x02001304
    void waterSplashCommon_(const sead::Vector3f& pos, s32 effect_id, WaveType wave_type, const char* sound_label);

    // Address: 0x020013D4
    void setAreaNo_();

    // Address: 0x020013E8
    void calcSpeedX_();
    // Address: 0x02001430
    void calcSpeedY_(f32 accel_y, f32 speed_max_y);
    void calcSpeedY_() { calcSpeedY_(mGravity, mSpeedMax.y); }

    void calcSpeedF_(f32 accelF, f32 max_speedF) { sead::Mathf::chase(&mSpeedF, max_speedF, accelF); }
    void calcSpeedF_() { calcSpeedF_(mPow, mMaxSpeedF); }
    // Address: 0x0200144C
    void calcFallSpeed_(f32 accel_y, f32 max_fall_speed);
    void calcFallSpeed_() { calcFallSpeed_(mGravity, mMaxFallSpeed); }

    void posMove_(sead::Vector3f& delta)
    {
        mPos += delta;
    }

    void posMove_(sead::Vector2f& delta_xy, f32 delta_z)
    {
        getPos2D() += delta_xy;
        mPos.z += delta_z;
    }

    void posMove_()
    {
        posMove_(mSpeed);
    }

    // Address: 0x02001A28
    void carryFukidashiCheck_(FukidashiType action);
    // Address: 0x02001490
    void carryFukidashiCheck_(FukidashiType action, const sead::Vector2f& range);
    // Address: 0x02001A64
    void carryFukidashiCancel_(FukidashiType action, s32 player_no);

    // Address: 0x02001DC4
    bool checkPressBgLR_(const ActorBgCollisionCheck& bc);
    // Address: 0x0200222C
    bool checkPressBgUD_(const ActorBgCollisionCheck& bc);

    // Address: 0x02002594
    bool setBreakPressObjBgLR_(const ActorBgCollisionCheck& bc);
    // Address: 0x02002664
    bool setBreakPressObjBgUD_(const ActorBgCollisionCheck& bc);

    // Address: 0x0200272C
    bool checkInternalIceBlock_(const ActorBgCollisionCheck& bc);

    // Address: 0x02002390
    bool setEnemyIceBreakReq_(const BgCollision* bg_collision);
    // Address: 0x020024E0
    bool setDrcBlockBreakReq_(const BgCollision* bg_collision);

    void setPosSuddenly_(const sead::Vector3f& position)
    {
        mPos.set(position);
        mPosPrev.set(position);
        mPosPrev2.set(position);
    }

protected:
    Actor* searchCarryFukidashiPlayer_(FukidashiType action) const;

    // Address: 0x02001AF4
    bool isEnablePressObjBg_(const BgCollision* bg_collision) const;

    // Address: 0x02001C08
    bool checkPressBgWall_(const ActorBgCollisionCheck& bc, DirType direction) const;
    // Address: 0x02002098
    bool checkPressBgHead_(const ActorBgCollisionCheck& bc) const;
    // Address: 0x02001F04
    bool checkPressBgFoot_(const ActorBgCollisionCheck& bc) const;

    // Address: 0x02001B2C
    bool isBreakPressObjBg_(const BgCollision* bgcol_approaching_side, const BgCollision* bgcol_fixed_side) const;

    // Address: 0x02000720
    u32 checkAvailableCullCheckOnQuest(const sead::BoundBox2f& src_range);

protected:
    DirType                 mDirection;
    s8                      mPlayerNo;
    s8                      mControllerLytPlayerNo;
    u8                      mLayer;                     // Inited to ActorCreateParameter::layer
    sead::BitFlag8          mCollisionMask;
    f32                     mSpeedF;                    // Horizontal speed
    f32                     mMaxSpeedF;                 // Maximum horizontal speed
    f32                     mMaxFallSpeed;              // Maximum fall speed
    f32                     mGravity;                   // Vertical acceleration
    f32                     mPow;                       // Horizontal acceleration
    sead::Vector3f          mPos;
    sead::Vector3f          mSpeed;
    sead::Vector3f          mSpeedMax;
    sead::Vector3f          mScale;
    Angle3                  mAngle;
    Angle3                  mAnglePrev;
    sead::Vector2f          mPosDelta;                  // At start of every frame
    ActorCollisionCheck     mCollisionCheck;
    sead::Vector2f          mVisibleAreaOffset;         // Inited to ActorData::spawn_range.offset
    sead::Vector2f          mVisibleAreaSize;           // Inited to ActorData::spawn_range.half_size * 2
    sead::Vector2f          mSize;
    ActorCulling::ActorCullUsable mCullLimit;           // Inited to { 256.0 + ActorData::cull_range.up,
                                                        //             256.0 + ActorData::cull_range.down,
                                                        //              80.0 + ActorData::cull_range.left,
                                                        //              80.0 + ActorData::cull_range.right }
    u8                      mAreaNo;
    u8                      mActorKind;                 // ActorKind
    bool                    mIsExecEnable;
    bool                    mIsDrawEnable;
    bool                    mManualDeletedFlag;
    u8                      _211;
    u8                      mCarryFlag;                 // CarryFlag
    u8                      mSwitchFlag0;
    u8                      mSwitchFlag1;
    u16                     mCreateFlag;                // Inited to ActorData::flag
    u32                     mBlockHitTimer;
    DirType                 mBlockHitDirection;
    u8                      _220;
    DirType                 mCarryDirection;
    u32                     mThrowPlayerNo;
    s32                     mComboCnt;
    u32                     mProfFlag;                  // Inited to Profile::mFlag
    sead::Vector3f          mCenterOffset;
    sead::Vector3f          mPosPrev;                   // At frame start
    sead::Vector3f          mPosPrevPostExec;
    sead::Vector3f          mPosPrev2;                  // At frame end
    EatCallback*            mEatCallbackPtr;
    ChibiEatCallback*       mChibiEatCallbackPtr;
    PropelParts*            mPropelParts;
    u8*                     _270;                       // Inited to ActorCreateParameter::_28
    f32                     mAddSpeedF;
    ChibiYoshiAwaData*      mChibiYoshiAwaDataPtr;
};
static_assert(sizeof(Actor) == 0x27C, "Actor size mismatch");
