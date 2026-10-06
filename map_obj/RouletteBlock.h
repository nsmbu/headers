#pragma once

#include <map_obj/ActorBlockBase.h>
#include <enemy/EnemyBoyoMgr.h>
#include <graphics/AnimModel.h>
#include <actor/Profile.h>

class RouletteBlock : public ActorBlockBase // vtbl Address: 0x101511D4
{
    // getRuntimeTypeInfoStatic()::typeInfo initialization guard variable   Address: 0x101EB8C4
    // getRuntimeTypeInfoStatic()::typeInfo                                 Address: 0x101EB8C8
    SEAD_RTTI_OVERRIDE(RouletteBlock, ActorBlockBase);

protected:
    class DrcTouchCB : public ActorCollisionDrcTouchCallback // vtbl Address: 0x10151534
    {
    public:
        // Address: 0x02879160
        bool bcSetTouchNormal(BgCollision* bg_collision, const sead::Vector2f& pos) override;
    };
    static_assert(sizeof(DrcTouchCB) == 4, "DrcTouchCB size mismatch");

public:
    // Address: 0x02879078
    RouletteBlock(const ActorCreateParam& param);
    // Address: 0x0287A0FC
    ~RouletteBlock() override { }

protected:
    // Address: 0x02879570
    Result create() override;
    // Address: 0x028799B8
    bool execute() override;
    // Address: 0x02879A40
    bool draw() override;

    // Address: 0x0287920C
    void loadActorRes();
    // Address: 0x02879C64
    void onDrcTouch() override;
    /**
     * @brief Only updates the texture animation frame, which is read elsewhere in order to dispense contents.
     * @details There's an `f32[20]` array at `0x1015113C` for updating the frame of animation depending on the content nybble aswell as mRouletteRollIndex.
     * @par Address: 0x02879884
     */
    void rollRoulette();
    // Address: 0x02879460
    void updateModel();
    /**
     * @brief Ran when the block is hit, and reads the texture animation frame in order to dispense proper contents.
     * @details There's an `BlockCoinBase::Content[8]` array at `0x1015118C` for setting the block contents from the animation frame.
     * @par Address: 0x02879A94
     */
    void vf2DC() override;

public:
    TexturePatternAnimation* getTexAnim() const
    {
        return mTexAnim;
    }

    FrameCtrl* getFrameCtrl() const
    {
        return mFrameCtrl;
    }

    u32 getRouletteCountdown() const
    {
        return mRouletteCountdown;
    }

    void setRouletteCountdown(u32 countdown)
    {
        mRouletteCountdown = countdown;
    }

    u8 getRouletteRollIndex() const
    {
        return mRouletteRollIndex;
    }

    void setRouletteRollIndex(u8 index)
    {
        mRouletteRollIndex = index;
    }

public:
    // Address: 0x10151098
    static const ActorCreateInfo cActorCreateInfo;

protected:
    AnimModel*               mModelActive;
    AnimModel*               mModelUsed;
    TexturePatternAnimation* mTexAnim;
    FrameCtrl*               mFrameCtrl;
    bool                     mAlreadyUsed;
    u32                      mRouletteCountdown; // resets to 9 at 0
    u8                       mRouletteRollIndex; // is indexed into array for texture pattern frame; values go 0.0, <CONTENT>, 1.0, 2.0
    sead::Vector3f           mScaleFactor;
    f32                      _1cf8;
    u8                       _1cfc[4];
    u32                      _1d00;
    u32                      _1d04;
    EnemyBoyoMgr*            mBoyoMgr;
    DrcTouchCB               mDrcTouchCallback;
};
static_assert(sizeof(RouletteBlock) == 0x1D10, "RouletteBlock size mismatch");
