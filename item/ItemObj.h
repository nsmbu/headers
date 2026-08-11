#pragma once

#include <item/ItemBase.h>

class ItemObj : public ItemBase
{
    SEAD_RTTI_OVERRIDE(ItemObj, ItemBase)

public:
    ItemObj(const ActorCreateParam& param);
    virtual ~ItemObj();

    void setPlayerNo(s8 ID)override;
    ActorBgCollisionCheck* getBgCheck()override;
    void setCarryFall(Actor*, s32)override;
    bool isSpinLiftUpEnable()override;
    void setSpinLiftUpActor(Actor* player)override;
    void vfC4()override;
    void vfCC()override;

    void blockHitInit_()override;
    void setWaterFunsui_(bool enable)override;
    void beginFunsui_()override;
    void endFunsui_(f32 speed_y)override;
    bool isFunsui_()const override;
    bool vf13C()override;

    bool setTouchDrcDamage_(const sead::Vector2f& pos)override;
    void setFunsuiPos_(sead::Vector2f dst)override;
    void setFunsuiSpeedY_(f32 speed)override;
    bool smokeDamageEnable_Yogan_(f32 surface_pos_y)override;
    bool smokeDamageEnable_Poison_(f32 surface_pos_y)override;
    void changeState(const StateID& state_id)override;

    void vf18C() override;                      
    void playBlockReleaseUpAnim() override;     
    void playBlockReleaseDownAnim() override;
    void playIdleAnim() override;               
    void playFloatAnim() override;              
    void vf1B4() override;                      

    u32  vf1C4() override;

    void vf1FC() override;

    virtual void vf29C();                       
    virtual void vf2A4();                     
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
