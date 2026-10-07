#pragma once

#include <bullet/FireBallBase.h>

// TODO: methods, members

// vtbl Address: 0x1003B710
class FireBallBros : public FireBallBase
{
    // getRuntimeTypeInfoStatic()::typeInfo initialization guard variable   Address: 0x101EA310
    // getRuntimeTypeInfoStatic()::typeInfo                                 Address: 0x101EA314
    SEAD_RTTI_OVERRIDE(FireBallBros, FireBallBase)

public:
    // Address: 0x021719B4
    FireBallBros(const ActorCreateParam& param);

    // Address: 0x02171A34
    static void collcheck(ActorCollisionCheck* cc_self, ActorCollisionCheck* cc_other);
};
