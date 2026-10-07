#pragma once

#include <map_obj/ActorCoinBase.h>

// vtbl Address: 0x100F0218
class ActorCoin : public ActorCoinBase
{
    // getRuntimeTypeInfoStatic()::typeInfo initialization guard variable   Address: 0x101EB068
    // getRuntimeTypeInfoStatic()::typeInfo                                 Address: 0x101EB06C
    SEAD_RTTI_OVERRIDE(ActorCoin, ActorCoinBase)

public:
    // Address: 0x026BC2E8
    ActorCoin(const ActorCreateParam& param);
    // Address: 0x026BCC1C
    ~ActorCoin() override { }

protected:
    // Address: 0x026BC4C8
    Result create() override;
    // Address: 0x026BC364
    bool execute() override;

protected:
    f32 _1d30;
    f32 _1d34;
    u32 _1d38;
    u32 _1d3c;
};
static_assert(sizeof(ActorCoin) == 0x1D40, "ActorCoin size mismatch");
