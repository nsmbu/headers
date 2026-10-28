#pragma once

#include <actor/ActorState.h>
#include <graphics/AnimModel.h>
#include <collision/ActorBoxBgCollision.h>
#include <map_obj/Wave.h>
#include <state/FStateVirtualID.h>

// vtbl Address: 0x100FCF48
class BgActorBase : public ActorMultiState
{
public:
    // Address: 0x026F0A88
    BgActorBase(const ActorCreateParameter& param);
    // Address: 0x026F36E8
    ~BgActorBase() override;

    // StateID_NonMove                          Address: 0x1021FF98
    // initializeState_NonMove                  Address: 0x026F36A4
    // executeState_NonMove                     Address: 0x026F36A8
    // finalizeState_NonMove                    Address: 0x026F36AC
    DECLARE_STATE_ID(BgActorBase, NonMove)
    // StateID_Switch                           Address: 0x1021FFB8
    // initializeState_Switch                   Address: 0x026F36B0
    // executeState_Switch                      Address: 0x026F1800
    // finalizeState_Switch                     Address: 0x026F36B4
    DECLARE_STATE_ID(BgActorBase, Switch)
    // StateID_WaitAutoScroll                   Address: 0x1021FFD8
    // initializeState_WaitAutoScroll           Address: 0x026F1914
    // executeState_WaitAutoScroll              Address: 0x026F1938
    // finalizeState_WaitAutoScroll             Address: 0x026F36B8
    DECLARE_STATE_ID(BgActorBase, WaitAutoScroll)
    // StateID_SwitchAutoScrDownWait            Address: 0x1021FFF8
    // initializeState_SwitchAutoScrDownWait    Address: 0x026F1D18
    // executeState_SwitchAutoScrDownWait       Address: 0x026F1E18
    // finalizeState_SwitchAutoScrDownWait      Address: 0x026F36BC
    DECLARE_STATE_ID(BgActorBase, SwitchAutoScrDownWait)
    // StateID_SwitchAutoScrReserveUp           Address: 0x10220018
    // initializeState_SwitchAutoScrReserveUp   Address: 0x026F36C0
    // executeState_SwitchAutoScrReserveUp      Address: 0x026F1F00
    // finalizeState_SwitchAutoScrReserveUp     Address: 0x026F36C4
    DECLARE_STATE_ID(BgActorBase, SwitchAutoScrReserveUp)
    // StateID_SwitchAutoScrUpMove              Address: 0x10220038
    // initializeState_SwitchAutoScrUpMove      Address: 0x026F1F9C
    // executeState_SwitchAutoScrUpMove         Address: 0x026F1FBC
    // finalizeState_SwitchAutoScrUpMove        Address: 0x026F36C8
    DECLARE_STATE_ID(BgActorBase, SwitchAutoScrUpMove)
    // StateID_SwitchAutoScrUpWait              Address: 0x10220058
    // initializeState_SwitchAutoScrUpWait      Address: 0x026F2074
    // executeState_SwitchAutoScrUpWait         Address: 0x026F2130
    // finalizeState_SwitchAutoScrUpWait        Address: 0x026F36CC
    DECLARE_STATE_ID(BgActorBase, SwitchAutoScrUpWait)
    // StateID_SwitchAutoScrReserveDown         Address: 0x10220078
    // initializeState_SwitchAutoScrReserveDown Address: 0x026F36D0
    // executeState_SwitchAutoScrReserveDown    Address: 0x026F21FC
    // finalizeState_SwitchAutoScrReserveDown   Address: 0x026F36D4
    DECLARE_STATE_ID(BgActorBase, SwitchAutoScrReserveDown)
    // StateID_SwitchAutoScrDownMove            Address: 0x10220098
    // initializeState_SwitchAutoScrDownMove    Address: 0x026F22A0
    // executeState_SwitchAutoScrDownMove       Address: 0x026F22C0
    // finalizeState_SwitchAutoScrDownMove      Address: 0x026F36D8
    DECLARE_STATE_ID(BgActorBase, SwitchAutoScrDownMove)
    // StateID_WaterDownDemo                    Address: 0x102200B8
    // initializeState_WaterDownDemo            Address: 0x026F232C
    // executeState_WaterDownDemo               Address: 0x026F233C
    // finalizeState_WaterDownDemo              Address: 0x026F36DC
    DECLARE_STATE_ID(BgActorBase, WaterDownDemo)

    // Address: 0x026F106C
    void initial();
    // Address: 0x026F0FC4
    void initialFixation();
    // Address: 0x026F0D60
    void calcModel();

    // Address: 0x026F0E9C
    bool execute() override;
    // Address: 0x026F0F54
    bool draw() override;

    // Address: 0x026F1268
    void createWaterFaceLineSet(f32 y_pos);
    // Address: 0x026F1278
    void moveWaterFaceLineSet(f32 y_pos);
    // Address: 0x026F12C8
    void setMotionState(u8 state);
    // Address: 0x026F1500
    void autoScroolSpeedSet();
    // Address: 0x026F15AC
    void switchBitCheck();
    // Address: 0x026F1618
    void autoWaveMove();
    // Address: 0x026F1688
    void shakeMove();

    // Address: 0x026F3558
    virtual void createVariableZposSet();
    // Address: 0x026F355C
    virtual void createFixationZposSet();
    // Address: 0x026F3560
    virtual void calcModelHeat();
    // Address: 0x026F3564
    virtual void drawHeat();

    // StateID_AutoScroll               Address: 0x102200DC
    // initializeState_AutoScroll       Address: 0x026F2478
    // executeState_AutoScroll          Address: 0x026F248C
    // finalizeState_AutoScroll         Address: 0x026F36E0
    DECLARE_STATE_VIRTUAL_ID_BASE(BgActorBase, AutoScroll)
    // StateID_DispSuckAround           Address: 0x10220100
    // initializeState_DispSuckAround   Address: 0x026F24F8
    // executeState_DispSuckAround      Address: 0x026F2504
    // finalizeState_DispSuckAround     Address: 0x026F36E4
    DECLARE_STATE_VIRTUAL_ID_BASE(BgActorBase, DispSuckAround)

public:
    const Wave& getWave() const
    {
        return mWave;
    }

    Wave& getWave()
    {
        return mWave;
    }

    void setOnlyRenderWaves(bool only_render)
    {
        mOnlyRenderWaves = only_render;
    }

public:
    /**
     * @brief 32.0f
     * @par Address: 0x100FCF44
    */
    static const f32 cHeatYposDiffer;
    /**
     * @brief 45 degrees
     * @par Address: 0x102200D8
    */
    static const u32 cShakeAngleAdd = 0x2000000;
    /**
     * @brief 8.0f
     * @par Address: 0x100FCF3C
     */
    static const f32 cWaveYpos;

protected:
    AnimModel*               mModel;
    u8                       _17cc[4]; // Unknown values
    sead::Vector3f           _17d0;
    sead::Vector3f           _17dc;
    ActorBoxBgCollision      mCollider;
    BgCollision::LineInitArg mColliderInfo;
    sead::Vector2f           _1a9c;
    u32                      _1aa4;
    u32                      _1aa8;
    f32                      _1aac;
    f32                      _1ab0;
    f32                      _1ab4; // used to call it mWidth
    f32                      _1ab8; // used to call it mBaselineHeight
    f32                      _1abc; // used to call it mEffectiveHeight
    f32                      _1ac0;
    f32                      _1ac4;
    f32                      _1ac8;
    f32                      _1acc;
    u32                      _1ad0;
    u32                      _1ad4;
    u16                      _1ad8;
    u16                      _1ada;
    bool                     mOnlyRenderWaves;
    u8                       _1add;
    u8                       _1ade;
    u8                       _1adf;
    u32                      _1ae0;
    Wave                     mWave;
    sead::IDisposer          _11a30;
    u32                      _11a40;
    u8                       _11a44[4]; // Unknown values
    u32                      _11a48;
    u32                      _11a4c;
    u32                      _11a50;
    u32                      _11a54;
    u32                      _11a58;
    u32                      _11a5c;
    u32                      _11a60;
    f32                      _11a64;
    f32                      _11a68;
    u32                      _11a6c;
    u16                      _11a70;
    u8                       _11a72;
    u8                       _11a73;
    u8                       _11a74[4]; // Unknown values
};
static_assert(sizeof(BgActorBase) == 0x11A78, "BgActorBase size mismatch");
