#pragma once

#include <player/PlayerObject.h>
#include <actor/ActorState.h>

// vtbl Address: 0x10106424
class CarryObjBase : public ActorState
{
    // getRuntimeTypeInfoStatic()::typeInfo initialization guard variable   Address: 0x101EA8CC
    // getRuntimeTypeInfoStatic()::typeInfo                                 Address: 0x101EA8D0
    SEAD_RTTI_OVERRIDE(CarryObjBase, ActorState);

public:
    struct FukidashiInfo
    {
        s32            action;
        sead::Vector2f range;
        bool           enable;
    };
    static_assert(sizeof(FukidashiInfo) == 0x10, "FukidashiInfo size mismatch");

public:
    // Address: 0x02721B68
    CarryObjBase(const ActorCreateParam& param, const FukidashiInfo& fukidashi_info);
    // Address: 0x02722AE4
    ~CarryObjBase() override { }

protected:
    // Address: 0x02721D48
    bool preExecute() override;
    // Address: 0x02721E7C
    void postExecute(MainState state) override;
    // Address: 0x02721F04
    Result doDelete() override;
    // Address: 0x027224AC
    void blockHitInit_() override;

public:
    // Address: 0x02721E38
    void carryFukidashiCancel(const FukidashiInfo& fukidashi_info, s32 player_no);
    // Address: 0x02721DF4
    void carryFukidashiCheck(const FukidashiInfo& fukidashi_info);

    // Address: 0x02721C94
    PlayerBase* getCarryPlayer();
    // Address: 0x027221E8
    PlayerObject* getCarryPlayerObject();
    // Address: 0x02721F30
    void processBc();
    // Address: 0x02722484
    void reverseDirection();

    // Address: 0x027228BC
    ActorBgCollisionCheck* getBgCheck() override;

    // Address: 0x0272243C
    void setCarryFall(Actor*, s32) override;
    // Address: 0x02722AD0
    bool isSpinLiftUpEnable() override;
    // Address: 0x0272218C
    void setSpinLiftUpActor(Actor* player) override;

    // Address: 0x02722ADC
    bool isQuakeEnable_() override;
    // Address: 0x027224DC
    void setQuake_(QuakeType type) override;
    
    // StateID_Idle             Address: 0x10220B9C
    // initializeState_Idle     Address: 0x02721F38
    // executeState_Idle        Address: 0x02721F70
    // finalizeState_Idle       Address: 0x02721FE4
    DECLARE_STATE_VIRTUAL_ID_BASE(CarryObjBase, Idle);
    // StateID_Carry            Address: 0x10220BC0
    // initializeState_Carry    Address: 0x02721FFC
    // executeState_Carry       Address: 0x02722AC8
    // finalizeState_Carry      Address: 0x02722020
    DECLARE_STATE_VIRTUAL_ID_BASE(CarryObjBase, Carry);
    // StateID_Thrown           Address: 0x10220BE4
    // initializeState_Thrown   Address: 0x027220CC
    // executeState_Thrown      Address: 0x02722ACC
    // finalizeState_Thrown     Address: 0x027220E4
    DECLARE_STATE_VIRTUAL_ID_BASE(CarryObjBase, Thrown);
    // StateID_Unknown          Address: 0x10220C08
    // initializeState_Unknown  Address: 0x02722124
    // executeState_Unknown     Address: 0x02722150
    // finalizeState_Unknown    Address: 0x02722154
    DECLARE_STATE_VIRTUAL_ID_BASE(CarryObjBase, Unknown);

    // Address: 0x02722338
    virtual void playerThrown(PlayerBase*);
    /**
     * @brief When thrown with a spin jump, the actor continuously rotates along the Y-axis.
     * @par Address: 0x02722394
     */
    virtual void changeThrownRot();
    
public:
    bool checkCarried() const
    {
        return mFlag & (1 << 2);
    }

    FukidashiInfo getFukidashiInfo() const
    {
        return mFukidashiInfo;
    }

    void setFukidashiInfo(FukidashiInfo fukidashi_info)
    {
        mFukidashiInfo = fukidashi_info;
    }
    
protected:
    FukidashiInfo mFukidashiInfo;
    u32           _17d8[(0x17E0 - 0x17D8) / sizeof(u32)];
    u32           mFlag;
    u32           _17E4[(0x17F4 - 0x17E4) / sizeof(u32)];
};
static_assert(sizeof(CarryObjBase) == 0x17F8, "CarryObjBase size mismatch");
