#pragma once

#include <actor/ProfileInfo.h>

#include <basis/seadAssert.h>
#include <container/seadSafeArray.h>
#include <heap/seadHeap.h>
#include <math/seadVector.h>

struct ActorCreateInfo
{
    enum Flag : u16
    {
        cFlag_IgnoreSpawnRange           = 1 << 1,  ///< Creates the actor regardless of camera proximity.
        cFlag_ScrollSetupDeferred        = 1 << 2,  ///< Queues the actor for creation only after scroll limiters and other camera properties have been applied.
        cFlag_MapObj                     = 1 << 3,  ///< Avoids blocking boost mode block placement and adjusts the Z-position to be further in front.
        cFlag_Grouped                    = 1 << 4,  ///< Marks the actor as Group Controller-managed, using nybbles 5-6 (high byte of mParam0) as the group ID. Also implies @c cFlag_IgnoreSpawnRange.
        cFlag_NoCoinEdit                 = 1 << 5,  ///< Prevents spawning in Coin Edit mode.
        cFlag_CoinEditPatternControlled  = 1 << 6,  ///< Prevents spawning in Coin Edit mode and is marked as being controlled by a coin edit pattern.
        cFlag_Coin                       = 1 << 7,  ///< Participates in coin counting routines.
        cFlag_CoinBlock                  = 1 << 8,  ///< Participates in coin-block counting routines, but only if nybble 20 is 0 and nybble 13 & 1 is 0 (aka mParam1 & 0x1000000F)
        cFlag_PakkunBlack                = 1 << 9,  ///< Spawns as a muncher tile instead of constructing an Actor instance.
        cFlag_ManagedChildTemplate       = 1 << 10, ///< Treats creation of the map actor as a reusable operation from an external manager actor.
        cFlag_GroupedScrollSetupDeferred = 1 << 11, ///< Both @c cFlag_ScrollSetupDeferred and @c cFlag_Grouped
    };

    s32 offset_x;           // (X) Offset to be added to the initial actor position
    s32 offset_y;           // (Y) ^^^
    struct
    {
        s32 offset_x;       // (X) Offset to center of the spawn range bounding box
        s32 offset_y;       // (Y) ^^^
        s32 half_size_x;    // (X) Half the size of the spawn range bounding box
        s32 half_size_y;    // (Y) ^^^
    }   spawn_range;
    struct {
        u16 up;
        u16 down;
        u16 left;
        u16 right;
    } cull_range;
    Flag flag;

    // Address: 0x100018F4
    static const ActorCreateInfo cDefault;
};
static_assert(sizeof(ActorCreateInfo) == 0x24, "ActorCreateInfo size mismatch");

class ActorBase;
struct ActorCreateParam;
class ModelResource;

typedef ActorBase* (*ActorFactory)(const ActorCreateParam&);

class Profile
{
public:
    enum Flag
    {
        cFlag_DrawCullCheck     = 1 <<  1, ///< Enables calling @c Actor::drawCullCheck_() to skip drawing if the actor is considered offscreen.
        cFlag_NoComboScore      = 1 <<  2, ///< Disables awarding Combo scores.
        cFlag_Unk3              = 1 <<  3, ///< Possibly unused.
        cFlag_WinKill           = 1 <<  4, ///< Kills the actor and awards score when completing the course.
        cFlag_WinKillNoScore    = 1 <<  5, ///< Kills the actor when completing the course but does not award score.
        cFlag_Unk6              = 1 <<  6, ///< Possibly unused.
        cFlag_Projectile        = 1 <<  7, ///< Used for special collision logic, and kills the actor when completing the course by defeating a boss.
        cFlag_Unk8              = 1 <<  8, ///< Possibly unused.
        cFlag_NoFumi            = 1 <<  9, ///< Bypasses stomp classification and always damages the player (applies knockback when penguin-sliding).
        cFlag_NoLoopPosX        = 1 << 10, ///< Disables horizontal screen-wrapping for this actor.
        cFlag_Carryable         = 1 << 11, ///< Allows other carryable blocks to bounce off this actor, kills the actor when catching Nabbit, and counts as a weighted rider on Floating Box.
        cFlag_Unk12             = 1 << 12, ///< Possibly unused.
        cFlag_Coin              = 1 << 13, ///< Counts as a weighted rider on platforms.
        cFlag_Item              = 1 << 14, ///< Allows being bumped around by Bump Platforms through the @c ItemBase bump-related members.
        cFlag_FunsuiFollowY     = 1 << 15, ///< Causes geysers to drag this actor's position upwards. Only used by Piranha Plants in NSLU.

        cFlag_None              = 0
    };
    static_assert(sizeof(Flag) == 4);

public:
    friend Flag operator|(const Flag& lhs, const Flag& rhs)
    {
        return (Flag)((u32)lhs | (u32)rhs);
    }

    friend Flag& operator|=(Flag& lhs, const Flag& rhs)
    {
        lhs = lhs | rhs;
        return lhs;
    }

    friend Flag operator&(const Flag& lhs, const Flag& rhs)
    {
        return (Flag)((u32)lhs & (u32)rhs);
    }

    friend Flag& operator&=(Flag& lhs, const Flag& rhs)
    {
        lhs = lhs & rhs;
        return lhs;
    }

    friend Flag operator~(const Flag& val)
    {
        return (Flag)(~(u32)val);
    }

public:
    // Address: 0x02019554
    Profile(ActorFactory factory, s32 id, const sead::SafeString& name, const ActorCreateInfo* create_info = nullptr, Flag flag = cFlag_None);

    ActorFactory getActorFactory() const
    {
        SEAD_ASSERT(mFactory);
        return mFactory;
    }

    s32 getID() const
    {
        return mID;
    }

    const ActorCreateInfo& getActorCreateInfo() const
    {
        return *mActorCreateInfo;
    }

    bool isResLoaded() const
    {
        return mIsResLoaded;
    }

    Flag getFlag() const
    {
        return mFlag;
    }

    // Address: 0x020195FC
    void loadResource(sead::Heap* heap);
    // Address: 0x020196CC
    void unloadResource(sead::Heap* heap);
    // Address: 0x020196E4
    ModelResource* getResource(u32 index) const;

    // Address: 0x02019774
    static Profile* get(s32 id);

protected:
    ActorFactory            mFactory;
    s32                     mID;
    const ActorCreateInfo*  mActorCreateInfo;
    bool                    mIsResLoaded;
    Flag                    mFlag;

    // Address: 0x101ED8DC
    static sead::SafeArray<
        Profile*,
        ProfileInfo::cProfileID_Max
    >   sProfileList;
};
static_assert(sizeof(Profile) == 0x14, "Profile size mismatch");
