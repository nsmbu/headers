#pragma once

#include <heap/seadDisposer.h>

class CourseSelectCacheMgr
{
    // createInstance()                             Address: 0x021B3EB4
    // deleteInstance()                             Address: Deleted
    // sInstance                                    Address: 0x101C9660
    // SingletonDisposer_::~SingletonDisposer_()    Address: 0x021B5F44
    // SingletonDisposer_::sStaticDisposer          Address: 0x101C9664
    // SingletonDisposer_::vtbl                     Address: 0x100432C0
    SEAD_SINGLETON_DISPOSER(CourseSelectCacheMgr)

public:
    sead::Heap* getCacheHeapA() const
    {
        return mCacheHeapA;
    }

    sead::Heap* getCacheHeapB() const
    {
        return mCacheHeapB;
    }

    sead::Heap* getActorInstanceHeap() const
    {
        return mActorInstanceHeap;
    }

    sead::Heap* getErrorViewerHeap() const
    {
        return mErrorViewerHeap;
    }

protected:
    u32         _10[(0x6AC - 0x10) / sizeof(u32)];
    sead::Heap* mMainHeap;
    sead::Heap* mCacheHeapA;
    sead::Heap* mCacheHeapB;
    sead::Heap* mActorInstanceHeap;
    sead::Heap* mErrorViewerHeap;
};
static_assert(sizeof(CourseSelectCacheMgr) == 0x6C0, "CourseSelectCacheMgr size mismatch");
