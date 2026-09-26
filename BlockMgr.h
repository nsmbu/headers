#pragma once

#include <math/seadVector.h>
#include <heap/seadDisposer.h>
#include <map_obj/ActorBlockBase.h>
#include <collision/BgUnitCode.h>

struct BlockStateHolder
{
    sead::Vector3f                  position;
    ActorBlockBase::ActiveStates    state;
    u16                             area_ID;
    u8                              _12[2];
};
static_assert(sizeof(BlockStateHolder) == 0x14, "BlockStateHolder size mismatch");

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
        u32                     fragments_type;
        u32                     _c;
        s8                      sensor_id;
        s8                      player_id;
        s8                      player_type;
        u8                      _13;
        ActorBgCollisionCheck*  collision_mgr;
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
    ActorBlockBase::ActiveStates getBlockActiveState(sead::Vector3f& pos_for_state, u32 area_id);
    // Address: 0x0270B7EC
    ActorBlockBase::ActiveStates getMultiCoinStateAt(sead::Vector3f& at);
    // Address: 0x0270D420
    void setStateForBlockAt(sead::Vector3f& at, ActorBlockBase::ActiveStates state, u32 area_id);
    // Address: 0x0270D294
    void update();

private:
    u8                  mArr1[101][16];
    BlockStateHolder    mBlockStates[3001];
    u32                 mArr1Count;
    u32                 mBlockStatesCount;
};
static_assert(sizeof(BlockMgr) == 0xF0DC, "BlockMgr size mismatch");
