#pragma once

#include <heap/seadDisposer.h>
#include <heap/seadFrameHeap.h>
#include <math/seadVector.h>
#include <prim/seadSafeString.h>

#include <effect/EffectID.h>

// vtbl Address: 0x100B6098
class FragmentMgr
{
    // createInstance()                             Address: 0x024B0FBC
    // deleteInstance()                             Address: Deleted
    // sInstance                                    Address: 0x101D155C
    // SingletonDisposer_::~SingletonDisposer_()    Address: 0x024B1A70
    // SingletonDisposer_::sStaticDisposer          Address: 0x101D1560
    // SingletonDisposer_::vtbl                     Address: 0x100b6088
    SEAD_SINGLETON_DISPOSER(FragmentMgr)

public:
    // Address: 0x024B12EC
    void createBlockFragment(const sead::Vector3f& pos, u32, s8 player_no = -1);
    // Address: 0x024B13C8
    void createIceFragment(const sead::Vector3f& pos, u32, const sead::Vector3f& scale = sead::Vector3f::ones, const sead::Vector3f& = sead::Vector3f::zero);
    // Address: 0x024B14AC
    void createIceFragment(const sead::Vector3f& pos, u32, const sead::Vector3f& scale = sead::Vector3f::ones);
    // Address: 0x024B15AC
    void createWaterSplash(const sead::Vector3f& pos, u8 layer, EffectID effect_id);
    // Address: 0x024B1688
    void createIcicleDew(const sead::Vector3f& pos);
    // Address: 0x024B1828
    void createChainFragment(const sead::Vector3f& pos, s8);
    // Address: 0x024B1754
    void createBigBlockFragment(const sead::Vector3f& pos, s8);

public:
    // Address: 0x024B10B0
    void update();

protected:
    // Address: 0x024B12A8
    sead::FrameHeap* createHeap_(const sead::SafeString& name);

protected:
    // sead lists...
};
//static_assert(sizeof(FragmentMgr) == 0x3C, "FragmentMgr size mismatch");
