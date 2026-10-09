#pragma once

#include <map_obj/ActorCoinBase.h>

// TODO: states, methods.

// vtbl Address: 0x100F74A4
class ActorCoinShowerJump : public ActorCoinBase
{
    // getRuntimeTypeInfoStatic()::typeInfo initialization guard variable   Address: 0x101EB0EC
    // getRuntimeTypeInfoStatic()::typeInfo                                 Address: 0x101EB120
    SEAD_RTTI_OVERRIDE(ActorCoinShowerJump, ActorCoinBase);

public:
    // Address: 0x026D586C
    ActorCoinShowerJump(const ActorCreateParam& param);
    // Address: 0x026D6590
    ~ActorCoinShowerJump() override { }

protected:
    // Address: 0x026D58E8
    Result create() override;

protected:
    f32 _1d30;
    u16 _1d34;
    u16 _1d36;
};
static_assert(sizeof(ActorCoinShowerJump) == 0x1D38, "ActorCoinShowerJump size mismatch");
