#pragma once

#include <effect/EffectObj.h>
#include <graphics/AnimModel.h>
#include <actor/ActorState.h>

// vtbl Address: 0x1014F3CC
class RingBase : public ActorMultiState
{
    // getRuntimeTypeInfoStatic()::typeInfo initialization guard variable   Address: 0x101EB264
    // getRuntimeTypeInfoStatic()::typeInfo                                 Address: 0x101EB268
    SEAD_RTTI_OVERRIDE(RingBase, ActorMultiState)

public:
    // Address: 0x02871254
    RingBase(const ActorCreateParam& param);
    // Address: 0x02872288
    ~RingBase() override { }

protected:
    // Address: 0x0287142C
    Result create() override;
    // Address: 0x0287163C
    bool execute() override;
    // Address: 0x0287168C
    bool draw() override;

public:
    // Address: 0x02871864
    bool isPlayerWithinRange(s32 player_no);
    // Address: 0x02871700
    void calcDeltaFromPlayerPos(s32 player_no);
    // Address: 0x02871388
    void updateModel();

    // Address: 0x02872124
    virtual void vf18C()
    {
    }
    // Address: 0x02872128
    virtual void loadActorRes()
    {
    }
    // Address: 0x0287212C
    virtual void vf19C()
    {
    }
    // Address: 0x02872130
    virtual void playTexAnim()
    {
    }
    // Address: 0x02872134
    virtual bool createParticles();
    // Address: 0x02872138
    virtual void onCollect()
    {
    }
    // Address: 0x0287213C
    virtual void vf1BC()
    {
    }
    // Address: 0x028716BC
    virtual void collectSetSwitchFlag();
    // Address: 0x02872140
    virtual void vf1CC()
    {
    }

    // StateID_Wait            Address: 0x102275A8
    // initializeState_Wait    Address: 0x02872280
    // executeState_Wait       Address: 0x028718E0
    // finalizeState_Wait      Address: 0x02871B94
    DECLARE_STATE_ID(RingBase, Wait)
    // StateID_Collect         Address: 0x102275C8
    // initializeState_Collect Address: 0x02871C34
    // executeState_Collect    Address: 0x02871C4C
    // finalizeState_Collect   Address: 0x02872284
    DECLARE_STATE_ID(RingBase, Collect)

protected:
    u32            _17c8;
    sead::Vector3f mEffectPos;
    EffectObj      mEffect1;
    EffectObj      mEffect2;
    AnimModel*     mModel;
    u32            _18ac;
    u16            mCounter1;
    sead::Vector2f mPlayerDeltaPos[4];
    u32            _18d4;
};
static_assert(sizeof(RingBase) == 0x18D8, "RingBase size mismatch");
