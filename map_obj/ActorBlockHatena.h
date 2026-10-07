#pragma once

#include <map_obj/ActorBlockBase.h>

// vtbl Address: 0x100E874C
class ActorBlockHatena : public ActorBlockBase
{
    // getRuntimeTypeInfoStatic()::typeInfo initialization guard variable   Address: 0x101EAFAC
    // getRuntimeTypeInfoStatic()::typeInfo                                 Address: 0x101EAFB0
    SEAD_RTTI_OVERRIDE(ActorBlockHatena, ActorBlockBase)

public:
    // Address: 0x026A4FAC
    ActorBlockHatena(const ActorCreateParam& param);
    // Address: 0x026A58C8
    ~ActorBlockHatena() override { }

protected:
    // Address: 0x026A5010
    Result create() override;

public:
    // Address: 0x026A52EC
    void updateLiquidEffects() override;
    // Address: 0x026A5330
    void onBumpDiff() override;
    // Address: 0x026A5394
    void postBump() override;
    // Address: 0x026A5434
    u32 vf32C() override;
};
static_assert(sizeof(ActorBlockHatena) == 0x1CD0, "ActorBlockHatena size mismatch");
