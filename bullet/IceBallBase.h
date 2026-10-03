#pragma once

#include <actor/ActorState.h>
#include <collision/ActorCollisionDrcTouchCallback.h>
#include <state/FStateVirtualID.h>
#include <audio/GameAudio.h>
#include <actor/EatData.h>
#include <actor/ChibiYoshiEatData.h>
#include <map_obj/MaskDraw.h>
#include <effect/EffectObj.h>
#include <graphics/Light.h>

class IceBallBase : public ActorState // vtbl Address: 0x1003EA18
{
    // getRuntimeTypeInfoStatic()::typeInfo initialization guard variable   Address: 0x101E9fAC
    // getRuntimeTypeInfoStatic()::typeInfo                                 Address: 0x101EA0B0
    SEAD_RTTI_OVERRIDE(IceBallBase, ActorState)

protected:
    class DrcTouchCB : public ActorCollisionDrcTouchCallback    // vtbl Address: 0x1003E9C0
    {
    public:
        // Address: 0x0217F5D4
        bool ccSetTouchNormal(ActorCollisionCheck* cc, const sead::Vector2f& pos) override;
        // Address: 0x02171600
        void ccOnTouch(ActorCollisionCheck* cc, const sead::Vector2f& pos) override;
    };
    static_assert(sizeof(DrcTouchCB) == sizeof(ActorCollisionDrcTouchCallback));

public:
    // Address: 0x0217FA5C
    IceBallBase(const ActorCreateParam& param);
    ~IceBallBase() override { }

    // Address: 0x0217FB8C
    Result create() override;
    // Address: 0x0217FD34
    bool execute() override;
    // Address: 0x02180028
    bool draw() override;
    // Address: 0x02180C04
    Result doDelete() override;

    // Address: 0x02180050
    virtual void removeCollisionCheck() override;
    // Address: 0x021800B0
    virtual void reviveCollisionCheck() override;

    // StateID_Move         Address: 0x101F85B4
    // initializeState_Move Address: 0x02180120
    // executeState_Move    Address: 0x02180130
    // finalizeState_Move   Address: 0x02180C0C
    DECLARE_STATE_VIRTUAL_ID_BASE(IceBallBase, Move)
    // StateID_Kill         Address: 0x101F85D8
    // initializeState_Kill Address: 0x02180234
    // executeState_Kill    Address: 0x021802B8
    // finalizeState_Kill   Address: 0x02180C10
    DECLARE_STATE_VIRTUAL_ID_BASE(IceBallBase, Kill)
    // StateID_EatIn            Address: 0x101F85FC
    // initializeState_EatIn    Address: 0x02180C14
    // executeState_EatIn       Address: 0x021802D4
    // finalizeState_EatIn      Address: 0x02180C18
    DECLARE_STATE_VIRTUAL_ID_BASE(IceBallBase, EatIn)
    // StateID_EatNow            Address: 0x101F8620
    // initializeState_EatNow    Address: 0x02180C1C
    // executeState_EatNow       Address: 0x02180C20
    // finalizeState_EatNow      Address: 0x02180C24
    DECLARE_STATE_VIRTUAL_ID_BASE(IceBallBase, EatNow)

    // Address: 0x02180C28
    virtual void onDrcTouch()
    {
        if (!isState(StateID_Kill)) {
            removeCollisionCheck();
            setDeleteEffect();
            changeState(StateID_Kill);
        }
        GameAudio::getAudioObjMap()->startSound("SE_OBJ_PNGN_ICEBALL_DISAPP", mPos);
        GameAudio::getAudioObjMap()->startSound("SE_EMY_CMN_TOUCH_DISAPPEAR", mPos,
        nw::snd::OutputLine::OUTPUT_LINE_DRC|nw::snd::OutputLine::OUTPUT_LINE_MAIN);
    }

    // Address: 0x02180D44
    virtual bool initialize()
    {
        return true;
    }

    // Address: 0x02180D4C
    virtual void setInitialSpeed();

    // Address: 0x021802F0
    virtual bool checkDeleteBg();

    // Address: 0x02180D7C
    virtual bool iceEffect()
    {
        return mEffect.createEffect(RP_Cmn_Iceball_0, &mPos);
    }

    // Address: 0x02180D94
    virtual u32 getKillTimer()
    {
        return 24;
    }

    // Address: 0x02180D9C
    virtual f32 getLightRad()
    {
        return 120.0;
    }

    // Address: 0x0217FCD0
    void setDeleteEffect();

protected:
    WaterType                   mWaterType;
    u32                         _17cc;
    sead::Vector3f              _17d0;
    u32                         mKillTimer;
    EatData                     mEatData;
    ChibiYoshiEatData           mChibiEatData;
    CircleLightMask             mLightMask;
    f32                         mLightRadius;
    Angle3                      mEffectAngle;
    EffectObj                   mEffect;
    Light                       mLight;
    ActorCollisionCheck         mCollisionCheckDrcTouch;
    DrcTouchCB                  mDrcTouchCallback;
    u8                          _1a40[4];
};
static_assert(sizeof(IceBallBase) == 0x1A40, "IceBallBase size mismatch");
