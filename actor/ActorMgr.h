#pragma once

#include <actor/ActorBase.h>
#include <actor/ActorPtrCache.h>

#include <container/seadOffsetList.h>
#include <container/seadPtrArray.h>
#include <container/seadRingBuffer.h>
#include <heap/seadDisposer.h>
#include <heap/seadUnitHeap.h>
#include <heap/seadFrameHeap.h>

class ActorMgr
{
    // createInstance()                             Address: 0x02008CB4
    // deleteInstance()                             Address: Deleted
    // sInstance                                    Address: 0x101C30C8
    // SingletonDisposer_::~SingletonDisposer_()    Address: 0x02009FA8
    // SingletonDisposer_::sStaticDisposer          Address: 0x101C30CC
    // SingletonDisposer_::vtbl                     Address: 0x10000CD0
    SEAD_SINGLETON_DISPOSER(ActorMgr)

public:
    enum ImmediatelyType
    {
        cImmediatelyType_ActiveLater = 0,
        cImmediatelyType_ActiveImmediately,
        // Anything else other than above:
      //cImmediatelyType_Independent (most likely unintentional)
    };

public:
    typedef ActorPtrCache::iterator iterator;
    typedef ActorPtrCache::ActorForEachParam ActorForEachParam;
    typedef ActorPtrCache::ActorForEachCallback ActorForEachCallback;

public:
    // Address: 0x02008AB0
    ActorMgr();
    // Address: 0x02009000
    ~ActorMgr();

private:
    // Address: 0x020090CC
    ActorBase* constructActor_(const ActorCreateParameter& param, bool create_immediately);
    // Address: 0x02009218
    ActorBase::MainState createActor_(ActorBase* actor);

    // Address: 0x0200932C
    static void delete_(ActorBase* actor);
    // Address: 0x02009338
    void moveActorToDestroyList_(ActorBase* actor);

    // Address: 0x0200940C
    void insertToExecuteAndDrawList_(ActorBase* actor);

    // Address: 0x02009590
    bool isValidExec_(const ActorBase& actor);

    // Address: 0x02008D34
    void moveCreateToDestroyList_();
    // Address: 0x02008DC8
    void procDestroy_(bool destroy);

public:
    // Address: 0x0200959C
    void prepare(sead::Heap* heap);

    // Address: 0x02009648
    void createAdditionalHeap(sead::FrameHeap** heap);
    // Address: 0x020096B0
    void destroyAdditionalHeap(sead::FrameHeap** heap);

    // Address: 0x020098A8
    void areaOut();

    // Address: 0x02009954
    void createLater(const ActorCreateParameter& param);
    // Address: 0x02009A58
    ActorBase* createImmediately(const ActorCreateParameter& param, ImmediatelyType option = cImmediatelyType_ActiveLater);

public:
    // Address: 0x02009B6C
    iterator find(s32 i_profile_id, iterator it_begin) const;
    iterator find(s32 i_profile_id) const
    {
        return find(i_profile_id, getActorBegin());
    }

    // Address: 0x02009BA4
    u32 count(s32 i_profile_id) const;

    iterator find(ActorFindFunc& io_find_func, iterator it_begin) const
    {
        return mActorPtrCache.find(io_find_func, it_begin);
    }

    iterator find(ActorFindFunc& io_find_func) const
    {
        return mActorPtrCache.find(io_find_func);
    }

    iterator getActorBegin() const
    {
        return mActorPtrCache.getActorBegin();
    }

    iterator getActorEnd() const
    {
        return mActorPtrCache.getActorEnd();
    }

    ActorBase* getActorPtr(UniqueID id) const
    {
        return mActorPtrCache.getActorPtr(id);
    }

    template <typename T>
    T* getActorPtr(UniqueID id) const
    {
        return static_cast<T*>(mActorPtrCache.getActorPtr(id));
    }

    u32 count(ActorFindFunc& io_find_func) const
    {
        return mActorPtrCache.count(io_find_func);
    }

    void forEach(ActorForEachCallback callback, ActorForEachParam param) const
    {
        return mActorPtrCache.forEach(callback, param);
    }

private:
    // Address: 0x02009BDC
    void calcCreate();
    // procCreate_() is inlined into the above in NSMBU

public:
    // Address: 0x02009D58
    void calc();

    // Address: 0x02009EA0
    void entryLastExecute(ActorBase* actor);

    // Address: 0x02009ECC
    void draw(/* const agl::lyr::RenderInfo* renderInfo */);

private:
    sead::UnitHeap*                                 mPlayerUnitHeap;
    sead::UnitHeap*                                 mActorUnitHeap;
    sead::FixedRingBuffer<ActorCreateParameter, 520> mDeferredActorCreate;
    ActorBase::List                                 mCreateManage;
    ActorBase::List                                 mDeleteManage;
    ActorBase::List                                 mExecuteManage;
    ActorBase::List                                 mDrawManage;
    sead::FixedPtrArray<sead::Heap, 520>            mActorDeleteHeap;
    sead::FixedPtrArray<ActorBase, 520>             mActorFinalUpdate;
    ActorPtrCache                                   mActorPtrCache;
    UniqueID                                        mActorCreateID;
    bool                                            mActorCreateImmediately;
    u8                                              _6a3d[3];
    bool                                            mActorDrawDone;
    u8                                              _6a41[3];

    friend class ActorBase;
};
static_assert(sizeof(ActorMgr) == 0x6A44, "ActorMgr size mismatch");
