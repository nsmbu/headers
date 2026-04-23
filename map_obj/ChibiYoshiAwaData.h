#pragma once

#include <actor/ActorUniqueID.h>

#include <math/seadVector.h>

class Actor;

/**
 * @brief Defines parameters for interaction with bubbles from the blue Baby Yoshi.
 * @par vtable Address: 0x10108190
 */
class ChibiYoshiAwaData
{
public:
    /**
     * @brief Defines the type of interaction the bubble will have upon contact with the actor.
     */
    enum AwaType
    {
        cAwaType_Invalid = 0,       ///< Bubble cannot catch the actor and breaks instead.
        cAwaType_Catch,             ///< Bubble catches the actor and spawns low value random content.
        cAwaType_CatchBig,          ///< Bubble catches the actor and spawns high value random content.
        cAwaType_Num
    };
    static_assert(sizeof(AwaType) == 4);

    /**
     * @brief Defines which stage of interaction we are currently in.
     */
    enum State
    {
        cState_None = 0,
        cState_Catch
    };
    static_assert(sizeof(State) == 4);

    /**
     * @brief Defines the type of powerup item which has a chance to spawn in the bubble when caught.
     */
    enum ItemType
    {
        cItemType_Normal = 0,       ///< Random item.
        cItemType_ForceMusasabi,    ///< Always acorn.
        cItemType_ForceKinoko       ///< Always mushroom.
    };
    static_assert(sizeof(ItemType) == 4);

public:
    /**
     * @brief Constructs the ChibiYoshiAwaData and parents it to an owner by ID.
     * @param owner_id The ID of the actor which this data belongs to.
     * @par Address: 0x0272D5EC
     */
    ChibiYoshiAwaData(ActorUniqueID owner_id);

    /**
     * @brief Called when a bubble hits the actor and either catches it or breaks.
     * @par Address: 0x0272D730
     */
    virtual void setAwaHit(Actor* awa);
    /**
     * @brief Called as the bubble is swallowing the actor.
     * @par Address: 0x0272D734
     */
    virtual void awaCatchMove(Actor* awa);
    /**
     * @brief Called when the bubble finishes swallowing the actor, and the actor should die.
     * @par Address: 0x0272D700
     */
    virtual void setAwaCatchEnd(Actor* awa);
    /**
     * @brief Called when the bubble cannot catch the actor and breaks instead
     * @par Address: 0x0272D738
     */
    virtual void setAwaInvalid(Actor* awa);

    /**
     * @brief The type of interaction the bubble will have upon contact with the actor.
     */
    AwaType getAwaType() const
    {
        return mAwaType;
    }

    /**
     * @brief Set the type of interaction the bubble will have upon contact with the actor.
     */
    void setAwaType(AwaType type)
    {
        mAwaType = type;
    }

    /**
     * @brief Which stage of interaction we are currently in.
     */
    State getState() const
    {
        return mState;
    }

    /**
     * @brief Set which stage of interaction we are currently in.
     */
    void setState(State state)
    {
        mState = state;
    }

    /**
     * @brief The type of powerup item which has a chance to spawn in the bubble when caught.
     */
    ItemType getItemType() const
    {
        return mItemType;
    }

    /**
     * @brief Set the type of powerup item which has a chance to spawn in the bubble when caught.
     */
    void setItemType(ItemType type)
    {
        mItemType = type;
    }

    /**
     * @brief An offset to the actor's center position, which modulates the target position the bubble should drift towards the moment it catches onto the actor.
     */
    sead::Vector2f& getPosOffset()
    {
        return mPosOffset;
    }

    /**
     * @brief An offset to the actor's center position, which modulates the target position the bubble should drift towards the moment it catches onto the actor.
     */
    const sead::Vector2f& getPosOffset() const
    {
        return mPosOffset;
    }

protected:
    ActorUniqueID   mOwnerID;           ///< The ID of the actor which this data belongs to.
    ActorUniqueID   mChibiYoshiAwaID;   ///< The ID of the bubble which we are currently interacting with.
    AwaType         mAwaType;           ///< The type of interaction the bubble will have upon contact with the actor.
    State           mState;             ///< Which stage of interaction we are currently in.
    ItemType        mItemType;          ///< The type of powerup item which has a chance to spawn in the bubble when caught.
    sead::Vector2f  mPosOffset;         ///< An offset to the actor's center position, which modulates the target position the bubble should drift towards the moment it catches onto the actor.
};
static_assert(sizeof(ChibiYoshiAwaData) == 0x20);
