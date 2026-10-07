#pragma once

#include <map_obj/ActorBlockBase.h>

// vtbl Address: 0x100ECBEC
class ActorBlockRenga : public ActorBlockBase
{
    // getRuntimeTypeInfoStatic()::typeInfo initialization guard variable   Address: 0x101EB010
    // getRuntimeTypeInfoStatic()::typeInfo                                 Address: 0x101EB014
    SEAD_RTTI_OVERRIDE(ActorBlockRenga, ActorBlockBase)

public:
    // Address: 0x026B5134
    ActorBlockRenga(const ActorCreateParam& param);
    // Address: 0x026B5A40
    ~ActorBlockRenga() override { }

protected:
    // Address: 0x026B5198
    Result create() override;

};
static_assert(sizeof(ActorBlockRenga) == 0x1CD0, "ActorBlockRenga size mismatch");
