#pragma once

#include <actor/ActorCreateParam.h>

#include <container/seadOffsetList.h>
#include <heap/seadHeap.h>
#include <prim/seadBitFlag.h>
#include <prim/seadRuntimeTypeInfo.h>

class ActorMgr;

/**
 * @brief Base interface class for all actors in the game. Lifecycle is handled by `ActorMgr`.
 * @endcode
 * ---
 * vtbl Address: 0x100006C0
 */
class ActorBase
{
    // getRuntimeTypeInfoStatic()::typeInfo initialization guard variable   Address: 0x101E9CC4
    // getRuntimeTypeInfoStatic()::typeInfo                                 Address: 0x101E9CC8
    SEAD_RTTI_BASE(ActorBase)

public:
    /**
     * @brief Defines which signal was returned from the main operation callback, and whether it was skipped.
     * @details In the case of `preX` skipping the main callback, `cState_None` will be passed to `postX`. Otherwise, the signal is forwarded.
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
     * @return Whether this actor has been successfuly created and is now active.
     */
    bool isActive() const
    {
        return mIsActive;
    }

    /**
     * @brief Requests this actor to be deleted on the next frame.
     */
    void deleteRequest()
    {
        mDeleteRequestFlag = true;
    }

    /**
     * @brief Whether this actor is about to be deleted on the next frame.
     */
    bool isRequestedDelete() const
    {
        return mDeleteRequestFlag;
    }

    /**
     * @return The unique identifier handle for this actor.
     */
    ActorUniqueID getActorUniqueID() const
    {
        return mActorUniqueID;
    }

    /**
     * @return The specific profile ID which this actor was instanciated from.
     * @endcode
     * ---
     * Address: 0x02002C80
     */
    s32 getProfileID() const;

    sead::Heap* getActorHeap() const
    {
        return mActorHeap;
    }

    ActorBase* getParent() const
    {
        return mParent;
    }

    template <typename T>
    T* getParent() const
    {
        return sead::DynamicCast<T>(mParent);
    }

    // Address: 0x02002C8C
    void removeChild(ActorBase* child);

protected:
    // Address: 0x02002CE0
    ActorBase(const ActorCreateParam& param);
    // Address: 0x02002E68
    virtual ~ActorBase();

protected:
    /**
     * @return Whether to continue to the main `create` callback, rather than skip to `postExecute()`.
     * @details Returns `true` by default.
     * @endcode
     * ---
     * Address: 0x02002F7C
     */
    virtual bool preCreate();
    /**
     * @brief Main initialization/setup callback for the actor.
     * @return A signal for how to handle the operation.
     * @details Returns `cResult_Success` by default.
     * @endcode
     * ---
     * Address: 0x02002F84
     */
    virtual Result create();
    /**
     * @brief Unconditionally called callback for after the `create` operation.
     * @param state The signal which `create()` returned, or `cState_None` if `preCreate()` skipped it.
     * @endcode
     * ---
     * Address: 0x02002F00
     */
    virtual void postCreate(MainState state);

    /**
     * @return Whether to continue to the main `execute` callback, rather than skip to `postExecute()`.
     * @details Returns `true` by default unless the game is paused or frozen. See `EventMgr::isJoin()`.
     * @endcode
     * ---
     * Address: 0x02002F04
     */
    virtual bool preExecute();
    /**
     * @brief Main execution/logic callback for the actor. Called every frame (the game runs at exactly 60 FPS).
     * @return A signal for how to handle the operation. `true`/`false` imply `cState_Success`/`cState_Failed`.
     * @details Returns `true` by default.
     * @endcode
     * ---
     * Address: 0x02002F8C
     */
    virtual bool execute();
    /**
     * @brief Unconditionally called callback for after the `execute` operation.
     * @param state The signal which `execute()` returned, or `cState_None` if `preExecute()` skipped it.
     * @endcode
     * ---
     * Address: 0x02002F34
     */
    virtual void postExecute(MainState state);
    /**
     * @brief Callback which is called after all other actors have finished executing for this frame.
     * @details The actor must subscribe to the `finalUpdate` signal on a per-frame basis via `ActorMgr::addToFinalUpdate()`.
     * @endcode
     * ---
     * Address: 0x02002F94
     */
    virtual void finalUpdate();

    /**
     * @return Whether to continue to the main `draw` callback, rather than skip to `postDraw()`.
     * @details Returns `true` by default.
     * @endcode
     * ---
     * Address: 0x02002F98
     */
    virtual bool preDraw();
    /**
     * @brief Main rendering callback for the actor. Called every frame (the game runs at exactly 60 FPS).
     * @note This is only for scheduling deferred render tasks; actual rendering may not be performed at this stage.
     * @return A signal for how to handle the operation. `true`/`false` imply `cState_Success`/`cState_Failed`.
     * @details Returns `true` by default.
     * @endcode
     * ---
     * Address: 0x02002FA0
     */
    virtual bool draw();
    /**
     * @brief Unconditionally executed callback for after the `execute` operation.
     * @param state The signal which `draw()` returned, or `cState_None` if `preDraw()` skipped it.
     * @endcode
     * ---
     * 0x02002F38
     */
    virtual void postDraw(MainState state);

    /**
     * @return Whether to continue to the main `doDelete` callback.
     * @details Returns `true` by default.
     * @endcode
     * ---
     * Address: 0x02002FA8
     */
    virtual bool preDelete();
    /**
     * @brief Main deletion callback for the actor.
     * @return A signal for how to handle the operation.
     * @details `Failure` and `Success` both result in deletion. Only `Wait` results in a stall.
     * @endcode
     * ---
     * Address: 0x02002FB0
     */
    virtual Result doDelete();
    /**
     * @brief Unconditionally executed callback for after the `delete` operation.
     * @param state The signal which `doDelete()` returned, or `cState_None` if `preDelete()` skipped it.
     * @note The actor has still technically not been deleted yet at this point, that occurs right after this call.
     * @endcode
     * ---
     * Address: 0x02002F3C
     */
    virtual void postDelete(MainState state);

protected:
    void setActive_(bool active)
    {
        mIsActive = active;
    }

protected:
    sead::Heap*     mActorHeap;         ///< Personal heap for this actor of type `sead::FrameHeap`. Capacity of `0x20200`, but profiles in the player whitelist get `0x1A0200`.
    ActorUniqueID   mActorUniqueID;     ///< The unique identifier handle for this actor.
    Profile*        mActorProfile;      ///< The specific profile which this actor was instanciated from.
    bool            mCreateImmediately; ///< Whether the actor was created with `ActorMgr::createImmediately()`, rather than deferred with `ActorMgr::createLater()`.
    bool            mIsMapActor;        ///< Whether the actor was spawned from the map with `ActorCreateMgr`, rather than spawned by another actor.
    bool            mIsActive;          ///< Whether the `create` operation has completed and the actor is executing.
    bool            mDeleteRequestFlag; ///< Whether to delete this actor on the next frame.
    u32             mParam0;            ///< User configuration. Also known as "nybbles" or "spritedata".
    u32             mParam1;            ///< User configuration. Also known as "nybbles" or "spritedata".
    ActorParamEx1   mParamEx;           ///< Extra configuration. Also known as "nybbles" or "spritedata".
    List            mChildList;         ///< OffsetList used for holding spawned actors from this one. Managed automatically if `param.parent_id` is set when spawning.
    sead::ListNode  mChildNode;         ///< Implementation detail. Used to track our position in the parent's `mChildList`.
    ActorBase*      mParent;            ///< The parent actor if this actor is a child. Automatically set to `nullptr` if orphaned.
    sead::ListNode  mExecuteNode;       ///< Implementation detail. Used to track our position in `ActorMgr`'s lists.
    sead::ListNode  mDrawNode;          ///< Implementation detail. Used to track our position in `ActorMgr`'s `mDrawManage` list.
    sead::BitFlag32 mFlag;

    friend class ActorMgr;
};
static_assert(sizeof(ActorBase) == 0x50);

template <typename T>
ActorBase* TActorFactory(const ActorCreateParam& param)
{
    return new T(param);
}
