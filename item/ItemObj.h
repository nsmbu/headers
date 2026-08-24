#pragma once

#include <item/ItemBase.h>

class ItemObj : public ItemBase
{
    SEAD_RTTI_OVERRIDE(ItemObj, ItemBase)

public:
    // Address: 0x0251EBFC
    ItemObj(const ActorCreateParam& param);
    // Address: 0x0251FE04
    virtual ~ItemObj();

    // Address: 0x0251FAF0
    void setPlayerNo(s8 ID) override;
    // Address: 0x0251FB1C
    ActorBgCollisionCheck* getBgCheck() override;
    // Address: 0x0251FAF8
    void setCarryFall(Actor*, s32) override;
    // Address: 0x0251FAFC
    bool isSpinLiftUpEnable() override;
    // Address: 0x0251FB04
    void setSpinLiftUpActor(Actor* player) override;

    // Address: 0x0251D8FC
    void blockHitInit_() override;
    // Address: 0x0251FB14
    void setWaterFunsui_(bool enable) override;
    // Address: 0x0251FC54
    void beginFunsui_() override;
    // Address: 0x0251FC58
    void endFunsui_(f32 speed_y) override;
    // Address: 0x0251FC5C
    bool isFunsui_() const override;
    // Address: 0x0251FC4C
    bool isQuakeEnable_() override;

    // Address: 0x0251D918
    bool setTouchDrcDamage_(const sead::Vector3f& pos) override;
    // Address: 0x0251FB2C
    void setFunsuiPos_(sead::Vector2f dst) override;
    // Address: 0x0251FB40
    void setFunsuiSpeedY_(f32 speed) override;
    // Address: 0x0251FB48
    bool smokeDamageEnable_Yogan_(f32 surface_pos_y) override;
    // Address: 0x0251FB50
    bool smokeDamageEnable_Poison_(f32 surface_pos_y)override;
    // Address: 0x0251FBC4
    void changeState(const StateID& state_id) override;

    void vf18C() override;                      
    void playBlockReleaseUpAnim() override;     
    void playBlockReleaseDownAnim() override;
    void playIdleAnim() override;               
    void playFloatAnim() override;              
    void vf1B4() override;                      

    u32  vf1C4() override;

    void vf1FC() override;

    // Address: 0x0251FDEC
    virtual void vf29C();                       
    // Address: 0x0251FDF0
    virtual void vf2A4();                     
    // Address: 0x0251EC6C
    virtual void vf2AC();
    
public:
    DECLARE_STATE_ID(ItemObj, PowerupState1);  
    DECLARE_STATE_ID(ItemObj, PowerupState2);  
    DECLARE_STATE_ID(ItemObj, PowerupState3);  
    DECLARE_STATE_ID(ItemObj, PowerupState4);  

protected:
    u32 _1a90[(0x1A98 - 0x1A90) / sizeof(u32)];
};
static_assert(sizeof(ItemObj) == 0x1A98);