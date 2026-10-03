#pragma once

#include <actor/ActorState.h>
#include <collision/ActorCollisionDrcTouchCallback.h>
#include <state/FStateVirtualID.h>
#include <audio/GameAudio.h>
#include <collision/BgCollisionCheckHitResult.h>
#include <map_obj/MaskDraw.h>
#include <actor/EatData.h>
#include <actor/ChibiYoshiEatData.h>
#include <effect/EffectObj.h>
#include <graphics/Light.h>

class FireBallBase : public ActorState // vtbl Address: 0x1003B0F4
{
    // getRuntimeTypeInfoStatic()::typeInfo initialization guard variable   Address: 0x101E9EF8
    // getRuntimeTypeInfoStatic()::typeInfo                                 Address: 0x101EA0AC
    SEAD_RTTI_OVERRIDE(FireBallBase, ActorState)

protected:
    class DrcTouchCB : public ActorCollisionDrcTouchCallback    // vtbl Address: 0x1003B09C
    {
    public:
        // Address: 0x0216F9F0
        bool ccSetTouchNormal(ActorCollisionCheck* cc, const sead::Vector2f& pos) override;
        // Address: 0x02171600
        void ccOnTouch(ActorCollisionCheck* cc, const sead::Vector2f& pos) override;
    };
    static_assert(sizeof(DrcTouchCB) == sizeof(ActorCollisionDrcTouchCallback));

public:
    // Address: 0x0216FED0
    FireBallBase(const ActorCreateParam& param);
    ~FireBallBase() override { }

    // Address: 0x0217001C
    Result create() override;
    // Address: 0x021701E0
    bool preExecute() override;
    // Address: 0x021703D0
    bool execute() override;
    // Address: 0x021706EC
    bool draw() override;
    // Address: 0x02170714
    Result doDelete() override;

    // Address: 0x02170750
    virtual void removeCollisionCheck() override;
    // Address: 0x021707b0
    virtual void reviveCollisionCheck() override;

    // StateID_Move         Address: 0x101F8044
    // initializeState_Move Address: 0x02171740
    // executeState_Move    Address: 0x02171744
    // finalizeState_Move   Address: 0x02171748
    DECLARE_STATE_VIRTUAL_ID_BASE(FireBallBase, Move)
    // StateID_Kill         Address: 0x101F8068
    // initializeState_Kill Address: 0x02170820
    // executeState_Kill    Address: 0x021708A4
    // finalizeState_Kill   Address: 0x0217174C
    DECLARE_STATE_VIRTUAL_ID_BASE(FireBallBase, Kill)
    // StateID_EatIn            Address: 0x101F808C
    // initializeState_EatIn    Address: 0x02171750
    // executeState_EatIn       Address: 0x021708C0
    // finalizeState_EatIn      Address: 0x02171754
    DECLARE_STATE_VIRTUAL_ID_BASE(FireBallBase, EatIn)
    // StateID_EatNow            Address: 0x101F80B0
    // initializeState_EatNow    Address: 0x02171758
    // executeState_EatNow       Address: 0x0217175C
    // finalizeState_EatNow      Address: 0x02171760
    DECLARE_STATE_VIRTUAL_ID_BASE(FireBallBase, EatNow)

    // Address: 0x02171764
    virtual void playDisappearSound()
    {
        GameAudio::getAudioObjMap()->startSound("SE_OBJ_EMY_FIRE_DISAPP", mPos);
    }

    // Address: 0x021717C4
    virtual void onDrcTouch()
    {
        playDisappearSound();
        kill();
        GameAudio::getAudioObjMap()->startSound("SE_EMY_CMN_TOUCH_DISAPPEAR", mPos, 
            nw::snd::OutputLine::OUTPUT_LINE_DRC|nw::snd::OutputLine::OUTPUT_LINE_MAIN);
    }

    // Address: 0x02171840
    virtual bool initialize()
    {
        return true;
    }

    // Address: 0x02171848
    virtual bool createCheck()
    {
        return true;
    }

    // Address: 0x02171850
    virtual void setCollisionCheck()
    {
    }

    // Address: 0x02170B08
    virtual void setBgCollision();

    // Address: 0x02171854
    virtual void changeZpos()
    {
    }

    // Address: 0x02170B2C
    virtual void fireEffect();

    // Address: 0x02170C08
    virtual void beginSplash(f32);

    // Address: 0x02170D00
    virtual void beginAirSplash(BgCollisionCheckHitResult*);

    // Address: 0x02170DF8
    virtual void beginYoganWaveSplash();

    // Address: 0x02170EA4
    virtual void beginPoisonSplash(f32);

    // Address: 0x02171858
    virtual f32 getLightRad()
    {
        return 120.0;
    }

    // Address: 0x02171864
    virtual u32 getKillTimer()
    {
        return 24;
    }

    // Address: 0x0217186C
    virtual void decFireBallCount()
    {
    }

    // Address: 0x02170F9C
    virtual void beginYoganSplash();

    // Address: 0x0216FC4C
    void kill();

protected:
    CircleLightMask             mLightMask;
    f32                         mLightRadius;
    EatData                     mEatData;
    ChibiYoshiEatData           mChibiEatData;
    sead::Vector3f              _183c;
    sead::Vector3f              _1848;
    bool                        mIsKill;
    u32                         mKillTimer;
    Angle3                      mEffectAngle;
    EffectObj                   mEffect;
    Light                       mLight;
    ActorCollisionCheck         mCollisionCheckDrcTouch;
    DrcTouchCB                  mDrcTouchCallback;
    BgCollisionCheckHitResult   mWaterHitResult;
    u8                          _1a54[4];
};
static_assert(sizeof(FireBallBase) == 0x1A58, "FireBallBase size mismatch");
