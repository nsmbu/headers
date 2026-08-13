#pragma once

#include <actor/ActorState.h>
#include <actor/ScoreMgr.h>
#include <collision/ActorBoxBgCollision.h>
#include <state/FStateVirtualID.h>

class BlockCoinBase : public ActorMultiState
{
    SEAD_RTTI_OVERRIDE(BlockCoinBase, ActorMultiState)

public:
    /**
     * @brief Defines the current bumping mode. Not to be confused with it's current bump-animation movement direction.
     */
    enum BumpMode : u8
    {
        cBumpMode_None  = 0,
        cBumpMode_Up    = 1,
        cBumpMode_Down  = 2
    };

    enum Content
    {
        cContent_FireMushroom = 0,  ///< Super Mushroom if small, Fire Flower otherwise.
        cContent_MiniMushroom,      ///< Always a Mini Mushroom.
        cContent_LifeMushroom,      ///< Always a 1-Up Mushroom.
        cContent_Mushroom,          ///< Always a Super Mushroom.
        cContent_FireFlower,        ///< Always a Fire Flower.
        cContent_IceFlower,         ///< Always an Ice Flower.
        cContent_PenguinMushroom,   ///< Always a Penguin Suit.
        cContent_PropellerMushroom, ///< Always a Propeller Mushroom.
        cContent_Star,              ///< Always a Star.
        cContent_ContinuousStar,    ///< Star if the player already has one, Coin otherwise.
        cContent_SquirrelMushroom,  ///< Always an Acorn Mushroom.
        cContent_LifeMoon,          ///< Always a 3-Up Moon.
        cContent_Coin,              ///< Always a Coin.
        cContent_MultiCoin,         ///< Up to 10 coins when hit consecutively.

        cContent_Vine = 15,         ///< Contains a vine.
        cContent_Yoshi,             ///< Contains a Yoshi Egg.
        cContent_Spring,            ///< Contains a Spring.

        cContent_MushroomIfSmall = 19,  ///< Super Mushroom if small, Coin otherwise.

        cContent_Empty = 21         ///< Contains nothing.
    };

    enum MoveType
    {
        cMoveType_None  = 0,
        cMoveType_Up    = 1,
        cMoveType_Down  = 2
    };
    static_assert(sizeof(MoveType) == 4);

    /**
     * @brief Defines which face of the block was hit.
     */
    enum HitFace : u8
    {
        cHitFace_None   = 0,
        cHitFace_Bottom = 1,
        cHitFace_Top    = 2,
        cHitFace_Side   = 3
    };
    static_assert(sizeof(HitFace) == 1);

    struct PlayerHit
    {
        u8 _0[4];
        s8 top_player_no;
        s8 bottom_player_no;
        s8 side_player_no;
        u8 _7;
        s8 top_player_no_nslu;
        u8 _9;
        u8 _a;
        u8 _b;
    };
    static_assert(sizeof(PlayerHit) == 0xC);

public:
    BlockCoinBase(const ActorCreateParam& param);
    virtual ~BlockCoinBase() { }

    /**
     * @brief Spawns a Portable Spring.
     * @par Address: 0x02706430
     */
    void spawnJumpdai();

    void spawnYoshiEgg(bool multi);
    void spawnVine(u8);
    void spawnPowerup(const sead::Vector3f& pos, u32, u32, bool spawn_as_child);
    void spawnMultiPowerup(const sead::Vector3f& pos, u32, u32, bool spawn_as_child);
    void spawnPropellerOrCoin(const sead::Vector3f& pos, u32, u32, bool spawn_as_child);

    virtual void onUpMoveStart()
    {
    }

    virtual void onDownMoveStart()
    {
    }

    virtual void onDownMove_DiffStart()
    {
    }

    virtual void onUpMove()
    {
    }

    virtual void spawnItemUp()
    {
    }

    virtual void onDownMove()
    {
    }

    virtual void onDownMoveEnd()
    {
    }

    virtual void spawnItemDown()
    {
    }

    virtual void onDownMove_DiffEnd()
    {
    }

    virtual void updateBumpScale(u8 direction);

    virtual u32 getMultiCoinState()
    {
        return 0;
    }

    virtual void spawnCoinShower();

    virtual void onMove_Diff()  // For NSLU
    {
    }

    DECLARE_STATE_VIRTUAL_ID_BASE(BlockCoinBase, UpMove)
    DECLARE_STATE_VIRTUAL_ID_BASE(BlockCoinBase, UpMoveEnd)
    DECLARE_STATE_VIRTUAL_ID_BASE(BlockCoinBase, DownMove)
    DECLARE_STATE_VIRTUAL_ID_BASE(BlockCoinBase, DownMoveEnd)
    DECLARE_STATE_VIRTUAL_ID_BASE(BlockCoinBase, UpMove_Diff)
    DECLARE_STATE_VIRTUAL_ID_BASE(BlockCoinBase, DownMove_Diff)
    DECLARE_STATE_VIRTUAL_ID_BASE(BlockCoinBase, DownMove_DiffEnd)

    static void callbackFoot(BgCollision* self, ActorBgCollisionCheck* other);
    static void callbackHead(BgCollision* self, ActorBgCollisionCheck* other);
    static void callBackWall(BgCollision* self, ActorBgCollisionCheck* other, u8 direction);

    static void callbackFoot_Hit(BgCollision* self, ActorBgCollisionCheck* other);
    static void callbackHead_Hit(BgCollision* self, ActorBgCollisionCheck* other);
    static void callBackWall_Hit(BgCollision* self, ActorBgCollisionCheck* other, u8 direction);

    void updateBoxBgCollisionOfs()
    {
        mBoxBgCollision.setOfs(mBoxBgCollision_Ofs.p0, mBoxBgCollision_Ofs.p1);
    }

    void setBoxBgCollisionOfs(f32 left, f32 top, f32 right, f32 bottom)
    {
        mBoxBgCollision_Ofs.p0.set(left, top);
        mBoxBgCollision_Ofs.p1.set(right, bottom);
        updateBoxBgCollisionOfs();
    }

    void setBoxBgCollisionOfs(const sead::Vector2f& p0, const sead::Vector2f& p1)
    {
        mBoxBgCollision_Ofs.p0 = p0;
        mBoxBgCollision_Ofs.p1 = p1;
        updateBoxBgCollisionOfs();
    }

    const ActorBoxBgCollision& getBoxBgCollision() const
    {
        return mBoxBgCollision;
    }

    BumpMode getBumpMode() const
    {
        return mBumpMode;
    }

    Content getBaseContent() const
    {
        return mContent;
    }

    DirType getSpawnDirection() const
    {
        return mSpawnDirection;
    }

    MoveType getMoveType() const
    {
        return mMoveType;
    }

protected:
    void executeCommon_();

protected:
    ActorBgCollisionCheck::Sensor   mHeadSensor;
  //u32                             _17d4[4 / sizeof(u32)]; // Alignment???
    ActorBoxBgCollision             mBoxBgCollision;
    struct
    {
        sead::Vector2f  p0;
        sead::Vector2f  p1;
    }                               mBoxBgCollision_Ofs;
    f32                             mInitialY;
    f32                             mBumpOffsetY;
    f32                             mBumpScaleMin;
    f32                             mBumpScaleStep;
    f32                             mBumpScaleMax;
    f32                             mBumpAccelY;
    u32                             mBumpReturnTimer;
    u32                             _1a94;
    DirType                         mDestroyHitDirection;
    u32                             _1a9c;
    u16                             _1aa0;
    u16                             _1aa2;
    u16                             _1aa4;
    u8                              _1aa6;
    u8                              _1aa7;
    s8                              mSideHitPlayerNo;
    s8                              _1aa9;
    u8                              _1aaa;
    u8                              mBumpUpTimer;
    bool                            mSideHitBumping;
    HitFace                         mHitFace;
    BumpMode                        mBumpMode;
    u8                              _1aaf;
    u8                              _1ab0;
    u8                              _1ab1;                  // DirType
    u8                              mPlayerNo2;
    u8                              _1ab3;
    u32                             _1ab4;
    Content                         mContent;
    s32                             mHitPlayerNo;
    DirType                         mSpawnDirection;
    u8                              mForceUpwardSpawn;
    u32                             _1ac8;
    bool                            mBlockHitNotBoundable;
    u8                              _1acd;
    u8                              mSpawnPowerupAsChild;
    bool                            mNoAddScoreOnDestroy;
    MoveType                        mMoveType;
    f32                             mDeltaX;
    f32                             mDeltaY;
    u32                             _1adc;
    u32                             _1ae0;
    ScoreMgr::ScoreType             mScore;
    u32                             _1ae8;
    u32                             _1aec;
    sead::SafeArray<PlayerHit, 4>   mPlayerHit;
    bool                            mBumpCoinSpawned;
    u32                             mCoinSpawnCooldown;
};
static_assert(sizeof(BlockCoinBase) == 0x1B28);
