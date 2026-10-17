#pragma once

#include <map_obj/ActorCoinDemoBase.h>

// vtbl Address: 0x100F2810
class ActorCoinDemoJump : public ActorCoinDemoBase
{
    // getRuntimeTypeInfoStatic()::typeInfo initialization guard variable   Address: 0x101EB09C
    // getRuntimeTypeInfoStatic()::typeInfo                                 Address: 0x101EB0A0
    SEAD_RTTI_OVERRIDE(ActorCoinDemoJump, ActorCoinDemoBase);

public:
    // Address: 0x026C3F18
    ActorCoinDemoJump(const ActorCreateParam& param);
    // Address: 0x026C43D4
    ~ActorCoinDemoJump() override { }

protected:
    // Address: 0x026C450C
    Result create() override;

public:
    // StateID_Jumping         Address: 0x1021F1B4
    // initializeState_Jumping Address: 0x026C4BF8
    // executeState_Jumping    Address: 0x026C4738
    // finalizeState_Jumping   Address: 0x026C4BFC
    DECLARE_STATE_ID(ActorCoinDemoJump, Jumping);

protected:
    u32 _17d8;
    u32 _17dc;
};
static_assert(sizeof(ActorCoinDemoJump) == 0x17E0, "ActorCoinDemoJump size mismatch");
