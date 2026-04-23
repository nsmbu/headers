#pragma once

#include <actor/ActorCreateParam.h>

#include <container/seadOffsetList.h>
#include <heap/seadHeap.h>
#include <prim/seadBitFlag.h>
#include <prim/seadRuntimeTypeInfo.h>

class ActorMgr;

/**
 * @brief Base interface class for all actors in the game. Lifecycle is handled by @c ActorMgr.
 * @par @c Size: 0x50
 * @par @c vtable Address: 0x100006C0
 */
class ActorBase
{
    // getRuntimeTypeInfoStatic()::typeInfo initialization guard variable   Address: 0x101E9CC4
    // getRuntimeTypeInfoStatic()::typeInfo                                 Address: 0x101E9CC8
    SEAD_RTTI_BASE(ActorBase)

public:
    /**
     * @brief Represents the execution state of a main operation, and whether it was skipped.
     * @details In the case of @c preX skipping the main callback, @c cState_None will be passed to @c postX. Otherwise, the signal is forwarded.
     */
    enum MainState
    {
        cState_None = 0,    ///< The operation was skipped.
        cState_Failed,      ///< The operation was cancelled.
        cState_Success,     ///< The operation was successful.
        cState_Wait         ///< The operation was stalled.
    };

    /**
     * @brief Defines signals to pass to ActorMgr when performing create and delete operations on the actor.
     */
    enum Result
    {
        cResult_Wait = 0,   ///< Stall the operation, tries to call again the next frame.
        cResult_Success,    ///< The operation was successful, continue execution.
        cResult_Failed      ///< Cancel the operation. This deletes the actor.
    };

public:
    typedef sead::OffsetList<ActorBase> List;

public:
    /**
     * @brief Whether this actor has been successfully created and is now active.
     */
    bool isActive() const
    {
        return mIsActive;
    }

    /**
     * @brief Schedule this actor for deletion on the next frame.
     */
    void deleteRequest()
    {
        mDeleteRequestFlag = true;
    }

    /**
     * @brief Whether this actor has been scheduled for deletion on the next frame.
     */
    bool isRequestedDelete() const
    {
        return mDeleteRequestFlag;
    }

    /**
     * @brief The unique identifier handle for this actor.
     */
    ActorUniqueID getActorUniqueID() const
    {
        return mActorUniqueID;
    }

    /**
     * @brief The specific profile ID which this actor was instantiated from.
     * @par Address: 0x02002C80
     */
    s32 getProfileID() const;

    /**
     * @brief The personal heap for this actor.
     */
    sead::Heap* getActorHeap() const
    {
        return mActorHeap;
    }

    /**
     * The parent actor pointer if this actor is a child, @c nullptr otherwise.
     */
    ActorBase* getParent() const
    {
        return mParent;
    }

    /**
     * @brief The parent actor pointer if this actor is a child, @c nullptr otherwise.
     * @tparam T The parent type to cast to, returns @c nullptr if the types are incompatible.
     */
    template <typename T>
    T* getParent() const
    {
        return sead::DynamicCast<T>(mParent);
    }

    /**
     * @brief Disconnects a child from this actor's family tree.
     * @param child The target actor to orphan.
     * @par Address: 0x02002C8C
     */
    void removeChild(ActorBase* child);

protected:
    /**
     * @brief Constructs an actor from configuration data.
     * @param param Parameters and user configuration to pass to the actor.
     * @par Address: 0x02002CE0
     */
    ActorBase(const ActorCreateParam& param);
    /**
     * @brief Destroys the actor and orphans all of its children.
     * @par Address: 0x02002E68
     */
    virtual ~ActorBase();

protected:
    /**
     * @brief Callback invoked before the @c create operation.
     * @return Whether to continue to the main @c create callback, rather than skip to @c postExecute().
     * @details Returns @c true by default.
     * @par Address: 0x02002F7C
     */
    virtual bool preCreate();
    /**
     * @brief Main initialization/setup callback for the actor.
     * @return A signal for how to handle the operation.
     * @details Returns @c cResult_Success by default.
     * @par Address: 0x02002F84
     */
    virtual Result create();
    /**
     * @brief Callback invoked unconditionally after the @c create phase completes. It executes even if @c preCreate() bypassed the main @c create() operation.
     * @param state The signal which @c create() returned, or @c cState_None if @c preCreate() skipped it.
     * @par Address: 0x02002F00
     */
    virtual void postCreate(MainState state);

    /**
     * @brief Callback invoked before the @c execute operation.
     * @return Whether to continue to the main @c execute callback, rather than skip to @c postExecute().
     * @details Returns @c true by default unless the game is paused or frozen. See @c EventMgr::isJoin().
     * @par Address: 0x02002F04
     */
    virtual bool preExecute();
    /**
     * @brief Main execution/logic callback for the actor. Called every frame (the game runs at exactly 60 FPS).
     * @return A signal for how to handle the operation. @c true / @c false imply @c cState_Success / @c cState_Failed.
     * @details Returns @c true by default.
     * @par Address: 0x02002F8C
     */
    virtual bool execute();
    /**
     * @brief Callback invoked unconditionally after the @c execute phase completes. It executes even if @c preExecute() bypassed the main @c execute() operation.
     * @param state The signal which @c execute() returned, or @c cState_None if @c preExecute() skipped it.
     * @par Address: 0x02002F34
     */
    virtual void postExecute(MainState state);
    /**
     * @brief Callback which is called after all other actors have finished executing for this frame.
     * @details The actor must subscribe to the @c finalUpdate signal on a per-frame basis via @c ActorMgr::addToFinalUpdate().
     * @par Address: 0x02002F94
     */
    virtual void finalUpdate();

    /**
     * @brief Callback invoked before the @c draw operation.
     * @return Whether to continue to the main @c draw callback, rather than skip to @c postDraw().
     * @details Returns @c true by default.
     */
    virtual bool preDraw();
    /**
     * @brief Main rendering callback for the actor. Called every frame (the game runs at exactly 60 FPS).
     * @note This is only for scheduling deferred render tasks; actual rendering may not be performed at this stage.
     * @return A signal for how to handle the operation. @c true / @c false imply @c cState_Success / @c cState_Failed. However, signaling failure does not delete the actor.
     * @details Returns @c true by default.
     * @par Address 0x02002FA0
     */
    virtual bool draw();
    /**
     * @brief Callback invoked unconditionally after the @c draw phase completes. It executes even if @c preDraw() bypassed the main @c draw() operation.
     * @param state The signal which @c draw() returned, or @c cState_None if @c preDraw() skipped it.
     * @par Address 0x02002F38
     */
    virtual void postDraw(MainState state);

    /**
     * @brief Callback invoked before the @c delete operation.
     * @return Whether to continue to the main @c doDelete callback.
     * @details Returns @c true by default.
     * @par Address: 0x02002FA8
     */
    virtual bool preDelete();
    /**
     * @brief Main deletion callback for the actor.
     * @return A signal for how to handle the operation.
     * @details @c Failure and @c Success both result in deletion. Only @c Wait results in a stall.
     * @par Address: 0x02002FB0
     */
    virtual Result doDelete();
    /**
     * @brief Unconditionally called callback for after the @c delete operation.
     * @param state The signal which @c doDelete() returned, or @c cState_None if @c preDelete() skipped it.
     * @note The actor has still technically not been deleted yet at this point, that occurs right after this call.
     * @par Address: 0x02002F3C
     */
    virtual void postDelete(MainState state);

protected:
    void setActive_(bool active)
    {
        mIsActive = active;
    }

protected:
    sead::Heap*     mActorHeap;             ///< Personal heap for this actor of type @c sead::FrameHeap. Capacity of @c 0x20200, but profiles in the player whitelist get @c 0x1A0200.
    ActorUniqueID   mActorUniqueID;         ///< The unique identifier handle for this actor.
    Profile*        mActorProfile;          ///< The specific profile which this actor was instantiated from.
    bool            mCreateImmediately;     ///< Whether the actor was created with @c ActorMgr::createImmediately(), rather than deferred with @c ActorMgr::createLater().
    bool            mIsMapActor;            ///< Whether the actor was spawned from the level with @c ActorCreateMgr, rather than dynamically spawned by another actor.
    bool            mIsActive;              ///< Whether the @c create operation has completed and the actor is executing.
    bool            mDeleteRequestFlag;     ///< Whether to delete this actor on the next frame.
    u32             mParam0;                ///< Level designer configuration. Also known as "nybbles" or "spritedata".
    u32             mParam1;                ///< Level designer configuration. Also known as "nybbles" or "spritedata".
    ActorParamEx1   mParamEx;               ///< Extra level designer configuration. Also known as "nybbles" or "spritedata".
    List            mChildList;             ///< @c sead::OffsetList used for holding child actors spawned by this actor. Managed automatically if @c param.parent_id is set when spawning.
    sead::ListNode  mChildNode;             ///< Implementation detail. Used to track our position in the parent's @c mChildList.
    ActorBase*      mParent;                ///< The parent actor if this actor is a child. Automatically set to @c nullptr if orphaned.
    sead::ListNode  mExecuteNode;           ///< Implementation detail. Used to track our position in @c ActorMgr lists.
    sead::ListNode  mDrawNode;              ///< Implementation detail. Used to track our position in @c ActorMgr `mDrawManage` list.
    sead::BitFlag32 mFlag;

    friend class ActorMgr;
};
static_assert(sizeof(ActorBase) == 0x50);

template <typename T>
ActorBase* TActorFactory(const ActorCreateParam& param)
{
    return new T(param);
}
