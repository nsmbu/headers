#pragma once

#include <map_obj/CarryObjBase.h>

// vtbl Address: 0x10105988
class CarryBlockBase : public CarryObjBase
{
    // getRuntimeTypeInfoStatic()::typeInfo initialization guard variable   Address: 0x101EA8D4
    // getRuntimeTypeInfoStatic()::typeInfo                                 Address: 0x101EA8D8
    SEAD_RTTI_OVERRIDE(CarryBlockBase, CarryObjBase)

public:
    // Address: 0x0271DB3C
    CarryBlockBase(const ActorCreateParam& param, ActorBoxBgCollision& bg_collision, s32 fukidashi_action);
    // Address: 0x0271F260
    ~CarryBlockBase() override { }

protected:
    // Address: 0x0271DC5C
    bool preExecute() override;
    // Address: 0x0271DCB4
    bool execute() override;
    // Address: 0x02721E7C
    void postExecute(MainState state) override;
    // Address: 0x0271F244
    void finalUpdate() override;

public:
    // Address: 0x0271F010
    ActorBgCollisionCheck* getBgCheck() override;

    // Address: 0x0271E884
    void setCarryFall(Actor*, s32) override;
    // Address: 0x0271F0B0
    bool isSpinLiftUpEnable() override;
    // Address: 0x0271E6DC
    void setSpinLiftUpActor(Actor* player) override;

    // StateID_Carry           Address: 0x10220A94
    // initializeState_Carry   Address: 0x0271EB14
    // executeState_Carry      Address: 0x0271EB60
    // finalizeState_Carry     Address: 0x0271EBF0
    DECLARE_STATE_VIRTUAL_ID_OVERRIDE(CarryObjBase, Carry);
    // StateID_Thrown          Address: 0x10220A70
    // initializeState_Thrown  Address: 0x0271E970
    // executeState_Thrown     Address: 0x0271E9AC
    // finalizeState_Thrown    Address: 0x0271EAE0
    DECLARE_STATE_VIRTUAL_ID_OVERRIDE(CarryObjBase, Thrown);
    // StateID_Unknown         Address: 0x10220AB8
    // initializeState_Unknown Address: 0x0271EC3C
    // executeState_Unknown    Address: 0x0271EC74
    // finalizeState_Unknown   Address: 0x0271EC78
    DECLARE_STATE_VIRTUAL_ID_OVERRIDE(CarryObjBase, Unknown);

    // Address: 0x0271E744
    void playerThrown(PlayerBase*) override;
    
    // Address: 0x0271F240
    virtual void vf1FC()
    {
    }
    // Address: 0x0271F254
    virtual void vf204()
    {
    }
    // Address: 0x0271E37C
    virtual void vf20C();
    // Address: 0x0271E380
    virtual void vf214();
    // Address: 0x0271E390
    virtual void vf21C();
    // Address: 0x0271E394
    virtual void vf224();
    // Address: 0x0271E404
    virtual void vf22C(PlayerBase*);
    // Address: 0x0271E4C0
    virtual void vf234();
    // Address: 0x0271E4D0
    virtual void vf23C();
    // Address: 0x0271E4D4
    virtual void vf244();
    // Address: 0x0271E4D8
    virtual void vf24C(u32, DirType);
    // Address: 0x0271E578
    virtual void vf254();
    // Address: 0x0271E588
    virtual void vf25C();
    // Address: 0x0271E58C
    virtual void vf264();
    // Address: 0x0271F258
    virtual u32 vf26C();
    // Address: Deleted
    virtual void vf274();

protected:
    ActorBoxBgCollision* mBoxBgCollision;
    s32                  _17fc;
};
static_assert(sizeof(CarryBlockBase) == 0x1800, "CarryBlockBase size mismatch");
