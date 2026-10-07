#pragma once

#include <bullet/IceBallBase.h>

// TODO: methods, members

// vtbl Address: 0x1003EFC8
class IceBallBros : public IceBallBase
{
    // getRuntimeTypeInfoStatic()::typeInfo initialization guard variable   Address: 0x101EA348
    // getRuntimeTypeInfoStatic()::typeInfo                                 Address: 0x101EA34C
    SEAD_RTTI_OVERRIDE(IceBallBros, IceBallBase)

public:
    // Address: 0x02180EEC
    IceBallBros(const ActorCreateParam& param);

    // Address: 0x02180F70
    static void collcheck(ActorCollisionCheck* cc_self, ActorCollisionCheck* cc_other);
};
