#pragma once

#include <math/seadVector.h>
#include <heap/seadDisposer.h>
#include <map_obj/ActorBlockBase.h>
#include <collision/BgUnitCode.h>

struct BlockState
{
    sead::Vector3f                  position;
    ActorBlockBase::ActiveState     state;
    u16                             area_no;
    u8                              _12[2];
};
static_assert(sizeof(BlockState) == 0x14, "BlockState size mismatch");

class BlockMgr
{
    // createInstance() Address: 0x0270B65C
    // deleteInstance() Address: Deleted
    // sInstance        Address: 0x101DB964
    SEAD_SINGLETON_DISPOSER(BlockMgr);

public:
    struct DestroyParam
    {
        sead::Vector2f          position;
        u32                     fragment_type;
        u32                     _c;
        s8                      sensor_id;
        s8                      player_no;
        s8                      player_type;
        u8                      _13;
        ActorBgCollisionCheck*  collision_check;
    };
    static_assert(sizeof(DestroyParam) == 0x18, "DestroyParam size mismatch");

public:
    // Address: 0x0270B90C
    void destroy(ActorBlockBase::DestroyedParam& param, bool no_add_score);
    // Address: 0x0270C61C
    void destroy2(ActorBlockBase::DestroyedParam2& param, bool no_play_sound, bool no_add_score);
    // Address: 0x0270C798
    void doDestroyAt(DestroyParam& param);

    // Address: 0x0270D2F4
    ActorBlockBase::ActiveState getBlockActiveState(sead::Vector3f& pos_for_state, u32 area_no);
    // Address: 0x0270B7EC
    ActorBlockBase::ActiveState getMultiCoinStateAt(sead::Vector3f& at);
    // Address: 0x0270D420
    void setStateForBlockAt(sead::Vector3f& at, ActorBlockBase::ActiveState state, u32 area_no);
    // Address: 0x0270D294
    void update();

protected:
    u8                  _0[101][16];
    BlockState          mBlockState[3001];
    u32                 _f0d4; // Used to call it mArr1Count
    u32                 mBlockStateCount;
};
static_assert(sizeof(BlockMgr) == 0xF0DC, "BlockMgr size mismatch");
