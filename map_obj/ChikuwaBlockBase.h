#pragma once

#include <actor/ActorState.h>
#include <collision/ActorLineBgCollision.h>
#include <graphics/AnimModel.h>
#include <state/FStateVirtualID.h>

/**
 * @brief Base class for Chikuwa (Donut) blocks.
 * @details Used by both the Donut Block and the Kamek Floor Block.
 * @note Does not override RTTI.
 */
class ChikuwaBlockBase : public ActorMultiState
{
public:
    ChikuwaBlockBase(const ActorCreateParam& param);
    ~ChikuwaBlockBase() override = default;

protected:
    bool draw() override;

protected:
    virtual void reset1();
    virtual void reset2();
    
    DECLARE_STATE_VIRTUAL_ID_BASE(ChikuwaBlockBase, Step)
    DECLARE_STATE_VIRTUAL_ID_BASE(ChikuwaBlockBase, Falling)
    DECLARE_STATE_VIRTUAL_ID_BASE(ChikuwaBlockBase, Cooldown)
    DECLARE_STATE_VIRTUAL_ID_BASE(ChikuwaBlockBase, Respawn)
    
    void loadActorRes();
    void init();
    void updateModel(f32 offsetY);
    void resetStep();
    bool hasContact();
    
    static void stepCallback(BgCollision* collider_self, ActorBgCollisionCheck* cc_other);
    
protected:
    ActorLineBgCollision mCollider;
    AnimModel* mModel;
    TexturePatternAnimation* mTexAnim;
    s8 mSteppingPlayerIDs[4];
    sead::Vector3f mSpawnPos;
    u32 mShakeXOffset;
    u32 mShakeAngleZ;
    u32 mStepHoldCounter;
    u32 mShakeDelayTimer;
    u16 mFallDelayTimer;
    f32 mRespawnScale;
    u16 mRespawnDelayTimer;
    bool mBgRestored;
    bool mYoshiStepping;
    u8 _19c4[4];
};
static_assert(sizeof(ChikuwaBlockBase) == 0x19C8, "ChikuwaBlockBase size mismatch");
