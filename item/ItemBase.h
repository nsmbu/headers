#pragma once

#include <actor/ActorState.h>
#include <state/FStateVirtualID.h>
#include <graphics/AnimModel.h>
#include <actor/EatData.h>
#include <collision/BgCollisionCheckHitResult.h>

class Yoshi;

class ItemBase : public ActorMultiState
{
    SEAD_RTTI_OVERRIDE(ItemBase, ActorMultiState)

protected:
    enum ItemType
    {
        cItemType_Mushroom = 0,
        cItemType_FireFlower,
        cItemType_Star,
        cItemType_IceFlower,
        cItemType_LifeMushroom,
        cItemType_PropellerMushroom,
        cItemType_MiniMushroom,
        cItemType_PenguinMushroom,
        cItemType_SquirrelMushroom,
        cItemType_LifeMoon = 0xC,
        cItemType_DRCStar = 0xD
    };

public:
    ItemBase(const ActorCreateParam& param);
    virtual ~ItemBase();

    // Address: 0x025176EC
    bool draw() override;

    void setPlayerNo(s8 ID) override;
    ActorBgCollisionCheck* getBgCheck() override;
    void setCarryFall(Actor*, s32) override;
    bool isSpinLiftUpEnable() override;
    void setSpinLiftUpActor(Actor* player) override;
    // Address: 0x02517BD0
    void allEnemyDeathEffSet() override;
    // Address: 0x02517C20
    void waterSplashEffect(const sead::Vector3f& pos) override;
    // Address: 0x02517D5C
    void yoganSplashEffect(const sead::Vector3f& pos) override;
    // Address: 0x02517E18
    void yoganWaveSplashEffect(const sead::Vector3f& pos) override;
    // Address: 0x02517ED4
    void poisonSplashEffect(const sead::Vector3f& pos) override;
    void blockHitInit_() override;

    void setWaterFunsui_(bool enable) override;
    void beginFunsui_() override;
    void endFunsui_(f32 speed_y) override;
    bool isFunsui_() const override;
    bool isQuakeEnable_() override;
    // Address: 0x0251771C
    void setQuake_(QuakeType type) override;
    
    bool setTouchDrcDamage_(const sead::Vector3f& pos) override;
    void setFunsuiPos_(sead::Vector2f dst) override;
    void setFunsuiSpeedY_(f32 speed) override;
    bool smokeDamageEnable_Yogan_(f32 surface_pos_y) override;
    bool smokeDamageEnable_Poison_(f32 surface_pos_y) override;
    void changeState(const StateID& state_id) override;

    virtual void vf18C();                       // nullsub
    virtual void playBlockReleaseUpAnim();      // nullsub
    virtual void playBlockReleaseDownAnim();    // nullsub
    virtual void playIdleAnim();                // nullsub
    virtual void playFloatAnim();                // nullsub
    virtual void vf1B4();                       // nullsub
    // Address: 0x0251784C
    virtual void initHitboxes();
    virtual u32  vf1C4(); // Player collision
    // Address: 0x025178C0
    virtual void vf1CC();
    // Address: 0x02517908
    virtual void vf1D4();
    // Address: 0x02517950
    virtual void vf1DC();
    // Address: 0x02517A40
    virtual void vf1E4();
    // Address: 0x02517A84
    virtual void vf1EC();
    // Address: 0x02517B3C
    virtual void vf1F4();
    virtual void vf1FC(); // nullsub
    // Address: 0x02517B4C
    virtual u32  vf204();

    DECLARE_STATE_VIRTUAL_ID_BASE(ItemBase, ItemBaseState12);
    DECLARE_STATE_VIRTUAL_ID_BASE(ItemBase, ItemBaseState13); // unknown state
    DECLARE_STATE_VIRTUAL_ID_BASE(ItemBase, ItemBaseState14); // unknown state
    DECLARE_STATE_VIRTUAL_ID_BASE(ItemBase, ItemBaseState15); // unknown state
    DECLARE_STATE_VIRTUAL_ID_BASE(ItemBase, ItemBaseState16); // unknown state
    DECLARE_STATE_VIRTUAL_ID_BASE(ItemBase, SpatByYoshi);

    DECLARE_STATE_ID(ItemBase, BlockReleaseUp);
    DECLARE_STATE_ID(ItemBase, BlockReleaseDown);
    DECLARE_STATE_ID(ItemBase, ItemBaseState3);          // unknown state
    DECLARE_STATE_ID(ItemBase, RingRewardRelease);
    DECLARE_STATE_ID(ItemBase, ItemBaseState5);          // unknown state
    DECLARE_STATE_ID(ItemBase, ItemBaseState6);          // unknown state
    DECLARE_STATE_ID(ItemBase, ItemBaseState7);          // unknown state
    DECLARE_STATE_ID(ItemBase, ItemBaseState8);          // unknown state
    DECLARE_STATE_ID(ItemBase, ItemBaseState9);          // unknown state
    DECLARE_STATE_ID(ItemBase, BeforeYoshiYongue);
    DECLARE_STATE_ID(ItemBase, InYoshiTongue);

    // Address: 0x02518470
    void spawnMethod();
    // Address: 0x02519130
    void spawnDustParticles();
    // Address: 0x02517F90
    void init();
    // Address: 0x02518A4C
    void updateModel();
    // Address: 0x02518F94
    void despawnRelated();
    // Address: 0x025183AC
    void setLogAndWigglerColToFalse();
    // Address: 0x025196E8
    u32 trySetPlayerPowerUp(void*, u32 PowerUp, u32);

    // Address: 0x02519580
    bool handleCollectResponse(u32, u32 Player);

    Yoshi* getEatenByYoshi() const;

protected:
    sead::Vector2f                  _17c8;                                    
    sead::Vector3f                  mPos;                                      
    sead::Vector3f                  mEffectPos;                                
    u8                              _17e8[0x1800 - 0x17E8];                    
    AnimModel*                      mItemModel;                                
    Animation*                      mItemAnim;                                 
    ItemType                        mItemType;                             
    u32                             _180c;                                    
    u32                             mAnimIDX;                            
    u32                             _1814;                                    
    u32                             mUnkPlayerID;                             
    u8                              _181c[0x1827 - 0x181C];                    
    bool                            mOnCreateCalled;                          
    bool                            mCollidedWithLog;                        
    u8                              _1829[0x1830 - 0x1829];                    
    s32                             mCollidingPlayerID;                        
    u8                              _1834[0x1858 - 0x1834];                 
    u16                             _1858;                                  
    s8                              mYoshiEatenPlayerID;                      
    u8                              _185B;                                     
    u16                             _185c;                                
    u8                              _185e;                               
    bool                            mCollidedWithGiantWiggler;                 
    u8                              _1860[0x1864 - 0x1860];                  
    EatData                         mEatData;                    
    u8                              _1888[0x188C - 0x1888]; 
    u8                              mScaler[0x20];
    ActorCollisionCheck             mACollider2;  
    BgCollisionCheckHitResult       mAirWaterHitRes;
    u8                              _19e4[0x1A00 - 0x19E4];
    u8                              mEffect[0x68];
    u8                              _1a6c[0x1A7E - 0x1A6C];
    bool                            mParentIsFlyingQBlockSpawner;
    u8                              _1a7f;
    sead::Vector3f                  _1a80;
    void*                           mCallbackTable;
};

static_assert(sizeof(ItemBase) == 0x1A90);