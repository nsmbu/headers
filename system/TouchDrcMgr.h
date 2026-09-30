#pragma once

#include <effect/EffectObjBase.h>
#include <heap/seadDisposer.h>
#include <math/seadVector.h>

class TouchDrcMgr
{
    // createInstance() Address: 0x02893DE4
    // deleteInstance() Address: Deleted
    // sInstance        Address: 0x101E10C0
    SEAD_SINGLETON_DISPOSER(TouchDrcMgr);
    
public:
    // Address: 0x02893990
    TouchDrcMgr();

    // Address: 0x02895BE8
    bool isFeverMode();
    // Address: 0x02896D70
    void update();

    void setFeverMode(bool fever_mode)
    {
        mFeverMode = fever_mode;
    }

private:
    sead::Vector2f  _10;
    sead::Vector2f  _18;
    sead::Vector2f  _20;
    u32             _28;
    u32             _2c;
    u32             _30;
    f32             _34;
    f32             _38;
    f32             _3c;
    f32             _40;
    f32             _44;
    f32             _48;
    f32             _4c;
    f32             _50;
    f32             _54;
    f32             _58;
    u32             _5c;
    u32             _60;
    u32             _64;
    u32             _68;
    u32             _6c;
    u32             _70;
    u32             _74;
    u32             _78;
    u32             _7c;
    u32             _80;
    u32             _84;
    u8              _88;
    u8              _8c;
    u8              _90;
    u8              _91;
    u8              _92;
    u8              _93;
    u8              _94;
    u8              _95;
    u8              _96;
    u8              _97;
    u8              _98;
    u8              _99;
    u8              _9a;
    u8              _9b;
    bool            mFeverMode;
    u8              _9d;
    u8              _9e;
    u8              _9f;
    u8              _a0;
    u8              _a1;
    u8              _a2;
    u8              _a3;
    u8              _a4[16]; // struct
    u8              _b4[10]; // struct
    u8              _be;
    u8              _bf;
    u8              _c0[80]; // struct
    u8              _110[80]; // struct
    u8              _160[1200]; // struct
    u8              _610[12]; // struct
    u8              _61c[112]; // struct
    u8              _68c[80]; // struct
    u8              _6dc[48]; // struct
    u8              _70c[48]; // struct
    u32             _73c;
    EffectObjBase   mEffect;
    u8              mSysControllerWrapper[0x194]; // struct
};
static_assert(sizeof(TouchDrcMgr) == 0x93C, "TouchDrcMgr size mismatch");
