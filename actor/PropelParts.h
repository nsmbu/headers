#pragma once

#include <effect/EffectObj.h>
#include <utility/Angle.h>

#include <container/seadSafeArray.h>

class Actor;

class PropelParts
{
public:
    class PropelEffect
    {
    public:
        enum EffectType
        {
        };

        // Address: 0x020271B8
        PropelEffect();

        // Address: 0x020272CC
        void initialize(EffectType type, bool is_player, s32 player_no);

        // Address: 0x02027660
        void createEffect();

        // Address: 0x0202766C
        void update(const sead::Vector3f& position);

    private:
        s32         mIndex;
        u32         _4;
        EffectObj   mEffectObj;
        s32         mPlayerNo;
        bool        mIsForPlayer;
        u8          _75;
    };
    static_assert(sizeof(PropelEffect) == 0x78);

public:
    enum Mode
    {
        cMode_Num = 7
    };

    // Address: 0x0202722C
    PropelParts();

    virtual ~PropelParts()
    {
    }

    // Address: 0x020272DC
    void create(Actor* owner);

    // Address: 0x02027390
    void update();

    // Address: 0x02027790
    void updateEffect(const sead::Matrixf& mtx);

    // Address: 0x02027868
    bool isMode(Mode mode);

    // Address: 0x0202787C
    void finalizePropelFly(Angle angle);

private:
    Actor*                              mOwner;
    Mode                                mMode;
    Angle                               mRollSpeed;
    f32                                 mScale;
    sead::SafeArray<PropelEffect, 3>    mPropelEffect;
};
static_assert(sizeof(PropelParts) == 0x17C, "PropelParts size mismatch");
