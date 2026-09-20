#pragma once

#include <collision/ActorBoxBgCollision.h>
#include <collision/ActorCollisionDrcTouchCallback.h>
#include <graphics/AnimModel.h>
#include <enemy/EnemyBoyoMgr.h>
#include <enemy/Enemy.h>

class SnakeBlockBoyoMgr : public EnemyBoyoMgr // vtbl Address: 0x100A6D94
{
public:
    SnakeBlockBoyoMgr()
        : EnemyBoyoMgr(nullptr)
    { }

    // Address: 0x0245E5C0
    sead::Vector3f getBaseScale() const override;

    void setBaseScale(const sead::Vector3f* scale)
    {
        mBaseScale = scale;
    }

protected:
    const sead::Vector3f* mBaseScale;
};

class SnakeBlock : public Enemy // vtbl Address: 0x100A717C
{
    // No RTTI

public:
    enum SnakeType : u32
    {
        cSnakeType_Normal,
        cSnakeType_Icy
    };

    enum StartCondition : u32
    {
        cStartCondition_SinglePlayer,
        cStartCondition_AlwaysActive,
        cStartCondition_AllPlayers
    };

public:
    class DrcTouchCB : public ActorCollisionDrcTouchCallback // vtbl Address: 0x100A7124
    {
    public:
        // Address: 0x0245CF04
        bool bcSetTouchNormal(BgCollision* bg_collision, const sead::Vector2f& pos) override;
        // Address: 0x0245D018
        void bcOnTouch(BgCollision* bg_collision, const sead::Vector2f& pos) override;
    };
    static_assert(sizeof(DrcTouchCB) == 0x4, "SnakeBlock::DrcTouchCB size mismatch");

    class Piece : public ActorBoxBgCollision // vtbl Address: 0x100A6F4C
    {
    public:
        Piece()
            : ActorBoxBgCollision()
            , mParent(nullptr)
            , _2d4(0)
            , mBoyoMgr()
        { }

        // Address: 0x0245E5E0
        ~Piece() override;

        AnimModel* getModel() const
        {
            return mModel;
        }

        u32 getPathIdx() const
        {
            return mPathIdx;
        }

        // Address: 0x0245A074
        void init(SnakeBlock* parent, const sead::Vector3f& pos, SnakeType type);

        // Address: 0x0245A2D0
        void drawModel() const;

    protected:
        u32 mPieceIdx;
        u32 _294;
        AnimModel* mModel;
        sead::Vector3f mPos;
        sead::Vector3f _2a8;
        sead::Vector3f _2b4;
        sead::Vector3f _2c0;
        u32 mPathIdx;
        SnakeBlock* mParent;
        u16 _2d4;
        sead::Vector3f mModelScale;
        SnakeBlockBoyoMgr mBoyoMgr;
        u32 _308;
        u32 _30c;
    };
    static_assert(sizeof(Piece) == 0x310, "SnakeBlock::Piece size mismatch");

    class EdgePiece : public Piece // vtbl Address: 0x100A6F4C
    {
    public:
        EdgePiece()
            : Piece()
        { }

        // Address: 0x0245E658
        ~EdgePiece() override;

    protected:
        u32 _310;
        u32 _314;
    };
    static_assert(sizeof(EdgePiece) == 0x318, "SnakeBlock::EdgePiece size mismatch");

public:
    SnakeBlock(const ActorCreateParam& param)
        : Enemy(param)
        , mEdgePiece()
        , mMiddlePiece()
        , mPathDirection(nullptr)
        , mPathLen(0)
        , _5c04(0)
        , mRepeatMovement(false)
        , mRepeatRailNode(0)
        , _5c28()
        , mDrcTouchCallback()
    { }

    ~SnakeBlock() override = default;

protected:
    // Address: 0x0245B164
    Result create() override;
    // Address: 0x0245B6A0
    bool execute() override;
    // Address: 0x0245B77C
    bool draw() override;
    // Address: 0x0245B7F8
    Result doDelete() override;

    // Address: Deleted
    virtual void vf4E4();

    // Address: 0x0245CE3C
    virtual bool toDelete_() const;

    // StateID_Wait                       Address: 0x1020740C
    // initializeState_Wait               Address: 0x0245B818
    // executeState_Wait                  Address: 0x0245B940
    // finalizeState_Wait                 Address: 0x0245E7A8
    DECLARE_STATE_ID(SnakeBlock, Wait)
    // StateID_Moving                     Address: 0x1020742C
    // initializeState_Moving             Address: 0x0245BBB0
    // executeState_Moving                Address: 0x0245BD54
    // finalizeState_Moving               Address: 0x0245E7AC
    DECLARE_STATE_ID(SnakeBlock, Moving)
    // StateID_WaitBeforeEndState         Address: 0x1020744C
    // initializeState_WaitBeforeEndState Address: 0x0245C094
    // executeState_WaitBeforeEndState    Address: 0x0245C188
    // finalizeState_WaitBeforeEndState   Address: 0x0245E7B0
    DECLARE_STATE_ID(SnakeBlock, WaitBeforeEndState)
    // StateID_FallThroughFirst           Address: 0x1020746C
    // initializeState_FallThroughFirst   Address: 0x0245C270
    // executeState_FallThroughFirst      Address: 0x0245C554
    // finalizeState_FallThroughFirst     Address: 0x0245E7B4
    DECLARE_STATE_ID(SnakeBlock, FallThroughFirst)
    // StateID_FallFirstToLast            Address: 0x1020748C
    // initializeState_FallFirstToLast    Address: 0x0245C5F4
    // executeState_FallFirstToLast       Address: 0x0245C678
    // finalizeState_FallFirstToLast      Address: 0x0245E7B8
    DECLARE_STATE_ID(SnakeBlock, FallFirstToLast)
    // StateID_FallAll                    Address: 0x102074AC
    // initializeState_FallAll            Address: 0x0245C848
    // executeState_FallAll               Address: 0x0245C8C8
    // finalizeState_FallAll              Address: 0x0245E7BC
    DECLARE_STATE_ID(SnakeBlock, FallAll)
    // StateID_FallLastToFirst            Address: 0x102074CC
    // initializeState_FallLastToFirst    Address: 0x0245CA68
    // executeState_FallLastToFirst       Address: 0x0245CB40
    // finalizeState_FallLastToFirst      Address: 0x0245E7C0
    DECLARE_STATE_ID(SnakeBlock, FallLastToFirst)
    // StateID_Inactive                   Address: 0x102074EC
    // initializeState_Inactive           Address: 0x0245CD48
    // executeState_Inactive              Address: 0x0245E7C4
    // finalizeState_Inactive             Address: 0x0245E7C8
    DECLARE_STATE_ID(SnakeBlock, Inactive)
    // StateID_Repeat                     Address: 0x1020750C
    // initializeState_Repeat             Address: 0x0245E7CC
    // executeState_Repeat                Address: 0x0245E7D0
    // finalizeState_Repeat               Address: 0x0245E7D4
    DECLARE_STATE_ID(SnakeBlock, Repeat)

protected:
    EdgePiece mEdgePiece[2];
    Piece mMiddlePiece[20];
    u32 mMiddlePieceCnt;
    f32 mBlockSize;
    u8* mPathDirection;
    u8* mPathMarker;
    u32 mPathLen;
    s16 _5c04;
    const StateID* mEndState;
    SnakeType mSnakeType;
    s32 mFallCascadeTimer;
    u32 mCreateMiddleIdx;
    StartCondition mStartCondition;
    bool mRepeatMovement;
    u32 mRepeatRailNode;
    bool mPlayerTouching[cPlayerNum];
    ActorCollisionCheck _5c28;
    DrcTouchCB mDrcTouchCallback;
    u32 _5d54;
};
static_assert(sizeof(SnakeBlock) == 0x5D58, "SnakeBlock size mismatch");
