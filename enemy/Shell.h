#pragma once

#include <collision/ActorCollisionDrcTouchCallback.h>
#include <enemy/EnemyBoyoMgr.h>
#include <actor/EatData.h>
#include <effect/EffectObj.h>
#include <enemy/CarryEnemy.h>
#include <enemy/EnemyChibiYoshiEatData.h>

class ShellDrcTouchCB : public ActorCollisionDrcTouchCallback // vtbl Address: 0x100A6520
{
public:
    ShellDrcTouchCB()
        : _4(0)
    {
    }

    // Address: 0x024520F4
    bool ccSetTouchNormal(ActorCollisionCheck* cc, const sead::Vector2f& pos) override;
    // Address: 0x0245213C
    void ccOnTouch(ActorCollisionCheck* cc, const sead::Vector2f& pos) override;

protected:
    u32 _4;
};
static_assert(sizeof(ShellDrcTouchCB) == 4);

class Shell : public CarryEnemy // vtbl Address: 0x100A6578
{
    // getRuntimeTypeInfoStatic()::typeInfo initialization guard variable   Address: 0x101EA158
    // getRuntimeTypeInfoStatic()::typeInfo                                 Address: 0x101EA154
    SEAD_RTTI_OVERRIDE(Shell, CarryEnemy);

public:
    enum State : s32
    {
        cState_Invalid = -1,
        cState_InShell = 0,
        cState_Walking = 1,
        cState_Flying = 2,
    };

    // TODO: Name this
    struct ShellStruct
    {
        u8             _0;
        u8             _1[3]; // align
        sead::Vector2f _4;
        u32            _c;
    };
    static_assert(sizeof(ShellStruct) == 0x10, "ShellStruct size mismatch");

public:
    // Address: 0x024521A0
    Shell(const ActorCreateParam& param);
    // Address: 0x02459724
    virtual ~Shell();

protected:
    // Address: 0x02452EAC
    void postCreate(MainState state) override;
    // Address: 0x02452F34
    bool preExecute() override;
    // Address: 0x024536AC
    void postExecute(MainState state) override;

    // Address: 0x024561A4
    void blockHitInit_() override;

public:
    // Address: 0x02456948
    void setCarryFall(Actor*, s32) override;
    // Address: 0x02459650
    bool isSpinLiftUpEnable() override;

    // Address: 0x0245766C
    void allEnemyDeathEffSet() override;
    
    void waterSplashEffect(const sead::Vector3f&) override
    {
    }

    void yoganSplashEffect(const sead::Vector3f&) override
    {
    }

    void poisonSplashEffect(const sead::Vector3f&) override
    {
    }

    // Address: 0x024573D4
    virtual bool vf11C(); //! not sure
    // Address: 0x02457508
    virtual void vf124(); //! not sure
    // Address: 0x024596E4
    virtual bool vf12C(); //! not sure

    // Address: 0x02457550
    virtual void getRect(); //! not sure

    // Address: 0x024572C4
    bool vf18C() override; //! not sure

    // Address: 0x024562C4
    void setIceAnm() override;

    // Address: 0x0245634C
    void returnState_Ice() override;

    // Address: 0x02453824
    bool etcDamageCheck(ActorCollisionCheck* cc_self, ActorCollisionCheck* cc_other) override;

    // Address: 0x02455398
    void vsEnemyHitCheck_Normal(ActorCollisionCheck* cc_self, ActorCollisionCheck* cc_other) override;
    // Address: 0x02454D04
    void vsPlayerHitCheck_Normal(ActorCollisionCheck* cc_self, ActorCollisionCheck* cc_other) override;
    // Address: 0x02454D08
    void vsYoshiHitCheck_Normal(ActorCollisionCheck* cc_self, ActorCollisionCheck* cc_other) override;
    // Address: 0x024558CC
    void vsChibiYoshiHitCheck_Normal(ActorCollisionCheck* cc_self, ActorCollisionCheck* cc_other) override;

    // Address: 0x02455CE4
    bool hitCallback_Slip(ActorCollisionCheck* cc_self, ActorCollisionCheck* cc_other) override;
    // Address: 0x024557D8
    bool hitCallback_Spin(ActorCollisionCheck* cc_self, ActorCollisionCheck* cc_other) override;
    // Address: 0x024557BC
    bool hitCallback_HipAttk(ActorCollisionCheck* cc_self, ActorCollisionCheck* cc_other) override;
    // Address: 0x024557D4
    bool hitCallback_YoshiHipAttk(ActorCollisionCheck* cc_self, ActorCollisionCheck* cc_other) override;
    // Address: 0x02455E2C
    bool hitCallback_PenguinSlide(ActorCollisionCheck* cc_self, ActorCollisionCheck* cc_other) override;
    // Address: 0x024557F0
    bool hitCallback_Shell(ActorCollisionCheck* cc_self, ActorCollisionCheck* cc_other) override;
    // Address: 0x02455958
    bool hitCallback_ChibiYoshiLight(ActorCollisionCheck* cc_self, ActorCollisionCheck* cc_other) override;

    // Address: 0x02456674
    void fumiJumpSet(Actor* player) override;
    // Address: 0x02456750
    void fumiScoreSet(Actor* player) override;
    // Address: 0x0245963C
    void yoshiFumiScoreSet(Actor* player) override;
    // Address: 0x024567B4
    void fumiSE(Actor* player) override;

    // StateID_DieFall          Address: 0x10207350
    // initializeState_DieFall  Address: 0x024589F8
    // executeState_DieFall     Address: 0x02458B50
    // finalizeState_DieFall    Address: 0x02458C44
    DECLARE_STATE_VIRTUAL_ID_OVERRIDE(Shell, DieFall);

    // Address: 0x02456B04
    void setPutOnChangeState(Actor* player) override;
    // Address: 0x02456B20
    void setThrowChangeState(Actor* player, bool hard) override;

    // StateID_Carry            Address: 0x1020729C
    // initializeState_Carry    Address: 0x02457AE8
    // executeState_Carry       Address: 0x02457B90
    // finalizeState_Carry      Address: 0x02457CB4
    DECLARE_STATE_VIRTUAL_ID_OVERRIDE(Shell, Carry);
    // StateID_Sleep            Address: 0x10207278
    // initializeState_Sleep    Address: 0x024576E0
    // executeState_Sleep       Address: 0x02457788
    // finalizeState_Sleep      Address: 0x02457A90
    DECLARE_STATE_VIRTUAL_ID_OVERRIDE(Shell, Sleep);
    
    // Address: 0x02452A3C
    virtual void vf57C(Actor*);
    // Address: 0x02454E04
    virtual void vf584();
    // Address: 0x02455F5C
    virtual u32 vf58C(u32, f32);
    
    virtual void vf594()
    {
    }
    
    virtual void vf59C()
    {
    }
    
    virtual u32 vf5A4()
    {
        return 1;
    }
    
    virtual u32 vf5AC()
    {
        return 0;
    }
    
    // Address: 0x024564F0
    virtual bool vf5B4();
    
    virtual u32 vf5BC()
    {
        return 0;
    }
    
    virtual u32 vf5C4()
    {
        return 0;
    }
    
    // Address: 0x02456EE4
    virtual bool vf5CC();
    // Address: 0x024575AC
    virtual EffectID vf5DC();
    
    virtual EffectID vf5E4()
    {
        return RP_Cmn_WaterSplash_05;
    }
    virtual EffectID vf5EC()
    {
        return RP_Cmn_PoisonSplash_05;
    }
    virtual EffectID vf5F4()
    {
        return RP_Cmn_LavaSplash_05;
    }
    virtual EffectID vf5FC()
    {
        return RP_Enm_Collision_1;
    }
    // Address: 0x024575C0
    virtual EffectID vf604();
    
    // StateID_Slide            Address: 0x102072C0 // ! Hmmm. this should get checked over
    // initializeState_Slide    Address: 0x02457CE8 // ! Hmmm. this should get checked over
    // executeState_Slide       Address: 0x02457F60 // ! Hmmm. this should get checked over
    // finalizeState_Slide      Address: 0x02458368 // ! Hmmm. this should get checked over
    DECLARE_STATE_VIRTUAL_ID_OVERRIDE(Shell, Slide); // ! Hmmm. this should get checked over
    
    // Address: 0x02458614
    virtual void vf63C();
    // Address: 0x02458680
    virtual void vf644();

    virtual void vf64C()
    {
    }

    // Address: 0x02458754
    virtual void vf654();
    // Address: 0x02458794
    virtual void vf65C();

    virtual void vf664()
    {
    }

    // Address: 0x0245887C
    virtual void vf66C();
    // Address: 0x024588D8
    virtual void vf674();

    virtual void vf67C()
    {
    }

protected:
    State             mState;
    State             mPreviousState;
    sead::Vector3u    _18c0;
    u32               _18cc;
    u32               _18d0;
    u32               _18d4;
    u16               _18d8;
    bool              _18da;
    u8                _18db;
    u32               _18dc;
    bool              mBig;
    bool              _18e1;
    u8          	  _18e2;
    u8                _18e3;
    f32               _18e4;
    ActorUniqueID     _18e8;
    u32               _18ec;
    bool              _18f0;
    u8                _18f1;
    u8                _18f2;
    u8                _18f3;
    u32               _18f4;
    u32               _18f8;
    u32               _18fc;
    u32               _1900;
    u32               _1904;
    u32               _1908;
    u32               _190c;
    u32               _1910;
    EatData           mYoshiEatData;
    ChibiYoshiEatData mChibiYoshiEatData; // could be EnemyChibiYoshiEatData but idk
    ShellDrcTouchCB   mDrcTouchCallback;
    EnemyBoyoMgr      mBoyoMgr;
    u8                _1984;
    u8                _1985;
    u8                _1986;
    u8                _1987;
    u32               _1988;
    u8                _198c;
    u8                _198d;
    u8                _198e;
    u8                _198f;
    u32               _1990;
    u32               _1994;
    f32               _1998;
    f32               _199c;
    u8                _19a0;
    u8                _19a1;
    u8                _19a2;
    u8                _19a3;
    u32               _19a4;
    ShellStruct       _19a8;
    bool              _19b8;
    u8                _19b9;
    u8                _19ba;
    u8                _19bb;
    EffectObj         _19bc;
    EffectObj         _1a24;
    u8                _1a8c;
    u8                _1a8d;
    u8                _1a8e;
    u8                _1a8f;
};
static_assert(sizeof(Shell) == 0x1A90, "Shell size mismatch");
