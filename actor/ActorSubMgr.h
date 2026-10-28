#pragma once

#include <heap/seadDisposer.h>

class Actor;

class ActorSubMgr
{
    // createInstance()                             Address: 0x0200C154
    // deleteInstance()                             Address: Deleted
    // sInstance                                    Address: 0x101C30D0
    // SingletonDisposer_::~SingletonDisposer_()    Address: 0x0200C1D4
    // SingletonDisposer_::sStaticDisposer          Address: 0x101C30D4
    // SingletonDisposer_::vtbl                     Address: 0x100012F4
    SEAD_SINGLETON_DISPOSER(ActorSubMgr)

public:
    void incKuribo()
    {
        mKuriboNum++;
    }

    void decKuribo()
    {
        mKuriboNum--;
    }

    void validateKuriboNum()
    {
        if (mKuriboNum < 0)
            mKuriboNum = 0;
    }

    void incKakibo()
    {
        mKakiboNum++;
    }

    void decKakibo()
    {
        mKakiboNum--;
    }

    void validateKakiboNum()
    {
        if (mKakiboNum < 0)
            mKakiboNum = 0;
    }

    s32 getQuakeComboCount() const
    {
        return mQuakeComboCount;
    }

    // Address: 0x0200BC34
    void reset_();

    // Address: 0x0200B7E8
    void clearKillerCount();

    // Address: Deleted
    void clearKotonCount();

    // Address: 0x0200B6CC
    void update();

    // Address: 0x0200B6D0
    void killOldestFireBall(s32 player_no);

    // Address: 0x0200B318
    void calcJimenPakkunZpos();

    // Address: 0x0200B7F8
    f32 getZposAndCountWakiMagnumSearchKiller();

    // Address: 0x0200B854
    f32 getZposBigTeresa();

    // Address: 0x0200B8B0
    f32 getZposCloudEffect();

    // Address: 0x0200B904
    void incQuakeComboCount(s32 = 0);

    // Address: 0x0200B95C
    s32 getChorobonArrayIndex() const;

    // Address: 0x0200B7A4
    s32 getIgaKuriboArrayIndex() const;

    // Address: 0x0200B9FC
    s32 getKotonCount() const;

    // Address: 0x0200B9A0
    void calcSanboMikanTime();
    
    // Address: 0x0200B9A8
    void setTotalCollectionCount();

    // Address: 0x0200BA98
    void deathAriaInCheck(const Actor*);

    // Address: 0x0200BAF4
    void allEnemyDeathCheck();

protected:
    u32 _10[(0xAC - 0x10) / sizeof(u32)];
    s32 mKuriboNum;
    s32 mKakiboNum;
    u32 _b4[(0xF0 - 0xB4) / sizeof(u32)];
    s32 mQuakeComboCount;
    u32 _f4[(0x9F4 - 0xF4) / sizeof(u32)];
};
static_assert(sizeof(ActorSubMgr) == 0x9F4, "ActorSubMgr size mismatch");
