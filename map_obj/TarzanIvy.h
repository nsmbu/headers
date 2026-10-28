#pragma once

#include <actor/Actor.h>
#include <collision/PoleRopeBgCollision.h>
#include <utility/RotShake.h>

// vtbl Address: 0x1015682C
class TarzanIvyBase : public Actor
{
    static const s32 cNodeMax = 16;

    struct SubStruct
    {
        RotShake rot_shake;
        f32      _24;
        f32      _28;
        u8       _2c;
        s8       player_no;
    };
    static_assert(sizeof(SubStruct) == 0x30);

public:
    [[clang::noinline]]
    TarzanIvyBase(const ActorCreateParameter& param)
        : Actor(param)
    {
        _2c4 = 0;
    }

protected:
    virtual bool isKusari_() const
    {
        return false;
    }

    // Address: 0x0288F748
    virtual void createMdl_();

    // Address: 0x028907C8
    Result create() override;
    // Address: 0x02890A74
    bool execute() override;
    // Address: 0x02890C50
    bool draw() override;

protected:
    u32                                      _27c[(0x2C4 - 0x27C) / sizeof(u32)];
    u32                                      _2c4;
    u32                                      _2c8[(0x2D8 - 0x2C8) / sizeof(u32)];
    PoleRopeBgCollision                      mRopeBgCollision;
    RotShake                                 mRotShake;
    u32                                      _4b4[(0x4F4 - 0x4B4) / sizeof(u32)];
    sead::UnsafeArray<SubStruct,  cNodeMax>  _4f4;
    sead::UnsafeArray<SubStruct*, cNodeMax>  _7f4;
    sead::Vector2f                           _834[17];                               // Unused
    f32                                      _8bc;
    sead::UnsafeArray<Angle, cNodeMax>       mNodeAngle;
    sead::UnsafeArray<Angle, 64>             _900;
    u32                                      _a00[(0xA08 - 0xA00) / sizeof(u32)];
};
static_assert(sizeof(TarzanIvyBase) == 0xA08);

// vtbl Address: 0x101565E8
class TarzanIvy : public TarzanIvyBase
{
public:
    TarzanIvy(const ActorCreateParameter& param)
        : TarzanIvyBase(param)
    {
        _2c4 = 0;
    }
};
static_assert(sizeof(TarzanIvy) == sizeof(TarzanIvyBase));
