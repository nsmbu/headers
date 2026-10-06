#pragma once

#include <map_obj/ChangeBlockCoinBase.h>
#include <graphics/AnimModel.h>
#include <actor/EatData.h>

// vtbl Address: 0x100F1AF0
class ActorCoinBase : public ChangeBlockCoinBase
{
    // getRuntimeTypeInfoStatic()::typeInfo initialization guard variable   Address: 0x101EA3B4
    // getRuntimeTypeInfoStatic()::typeInfo                                 Address: 0x101EA3B8
    SEAD_RTTI_OVERRIDE(ActorCoinBase, ChangeBlockCoinBase)

public:
    // Address: 0x026BF78C
    ActorCoinBase(const ActorCreateParam& param);
    // Address: 0x026C1DE8
    ~ActorCoinBase() override { }

protected:
    // Address: 0x026BF9D0
    bool execute() override;
    // Address: 0x026BFB9C
    bool draw() override;

public:
    // Address: 0x026C0104
    void createModel();
    // Address: 0x026C01F0
    void incrementYRotation();

    // Address: 0x026C0E24
    void initCollider(u32);
    // Address: 0x026BFF4C
    void init();
    // Address: 0x026C0070
    void initMover();
    
    // Address: 0x026BF900
    void updateModel();

    // Address: 0x026C1C08
    virtual u32 vf2D4()
    {
        return 1;
    }
    // Address: 0x026BFD40
    virtual void vf2DC();
    // Address: 0x026C0F7C;
    virtual void vf2E4();
    // Address: 0x026C1084
    virtual void vf2EC();
    // Address: 0x026C1DCC
    virtual void vf2F4();
    // Address: 0x026C11F8
    virtual void vf2FC();
    // Address: 0x026C1300;
    virtual void vf304();
    // Address: 0x026C1DD0
    virtual void vf30C();

    // StateID_EatIn          Address: 0x1021F09C
    // initializeState_EatIn  Address: 0x026C1DD4
    // executeState_EatIn     Address: 0x026C1510
    // finalizeState_EatIn    Address: 0x026C1DD8
    DECLARE_STATE_ID(ActorCoinBase, EatIn);
    // StateID_EatNow         Address: 0x1021F0BC
    // initializeState_EatNow Address: 0x026C1DDC
    // executeState_EatNow    Address: 0x026C1DE0
    // finalizeState_EatNow   Address: 0x026C1DE4
    DECLARE_STATE_ID(ActorCoinBase, EatNow);

protected:
    AnimModel*      mModel;
    sead::Vector2f  mDrawPosOffset;
    sead::Vector2f  _1cb4;
    f32             _1cbc;
    u32             _1cc0;
    u16             isNotTile;
    u32             _1cc8;
    u32             _1ccc;
    u32             _1cd0;
    u32             _1cd4; // zOrderRelated
    u32             _1cd8;
    u8              _1cdc;
    u8              _1cdd;
    u8              _1cde;
    u8              _1cdf;
    u8              _1ce0;
    u8              _1ce1;
    u8              _1ce2;
    u8              _1ce3;
    u8              _1ce4;
    u8              _1ce5;
    u8              _1ce6;
    u8              _1ce7;
    f32             _1ce8;
    f32             _1cec;
    u8              _1cf0;
    EatData         mEatData;
    u8              _1d18;
    u8              _1d19;
    u8              _1d1a;
    u8              _1d1b;
    u8              _1d1c;
    u8              _1d1d;
    u8              _1d1e;
    u8              _1d1f;
    u8              _1d20;
    u8              _1d21;
    u8              _1d22;
    u8              _1d23;
    f32             _1d24;
    u8              _1d28;
    u8              _1d2c;
};
static_assert(sizeof(ActorCoinBase) == 0x1D30, "ActorCoinBase size mismatch");
