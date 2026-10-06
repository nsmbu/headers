#pragma once

#include <actor/ActorState.h>
#include <collision/ActorLineBgCollision.h>
#include <graphics/AnimModel.h>
#include <state/FStateVirtualID.h>

/**
 * @brief Base class for Chikuwa (Donut) blocks.
 * @details Used by both the Donut Block and the Kamek Floor Block.
 * @note Does not override RTTI.
 * @par @c vtable Address: 0x1010A30C
 */
class ChikuwaBlockBase : public ActorMultiState
{
public:
    // Address: 0x02747DE4
    ChikuwaBlockBase(const ActorCreateParam& param);
    // Address: 0x02748EC4
    ~ChikuwaBlockBase() override { };

protected:
    // Address: 0x02747F84
    bool draw() override;

protected:
    virtual void reset1();
    virtual void reset2();

    // StateID_Step         Address: 0x102216C8
    // initializeState_Step Address: 0x027484F0
    // executeState_Step    Address: 0x02748504
    // finalizeState_Step   Address: 0x02748E5C
    DECLARE_STATE_VIRTUAL_ID_BASE(ChikuwaBlockBase, Step)
    // StateID_Falling         Address: 0x102216EC
    // initializeState_Falling Address: 0x02748630
    // executeState_Falling    Address: 0x02748640
    // finalizeState_Falling   Address: 0x02748E60
    DECLARE_STATE_VIRTUAL_ID_BASE(ChikuwaBlockBase, Falling)
    // StateID_Cooldown         Address: 0x10221710
    // initializeState_Cooldown Address: 0x027486E8
    // executeState_Cooldown    Address: 0x027486F4
    // finalizeState_Cooldown   Address: 0x02748E64
    DECLARE_STATE_VIRTUAL_ID_BASE(ChikuwaBlockBase, Cooldown)
    // StateID_Respawn         Address: 0x10221734
    // initializeState_Respawn Address: 0x02748E68
    // executeState_Respawn    Address: 0x02748784
    // finalizeState_Respawn   Address: 0x02748E6C
    DECLARE_STATE_VIRTUAL_ID_BASE(ChikuwaBlockBase, Respawn)

    // Address: 0x027480C0
    void loadActorRes();
    // Address: 0x0274849C
    void init();
    // Address: 0x02748204
    void updateModel(f32 offsetY);
    // Address: 0x0274830C
    void resetStep();
    // Address: 0x02748354
    bool hasContact();

    // Address: 0x02747FB4
    static void callbackFoot(BgCollision* bc_self, ActorBgCollisionCheck* cc_other);

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
