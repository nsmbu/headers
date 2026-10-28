#pragma once

#include <bullet/IceBallBase.h>

class IceBallPakkun : public IceBallBase
{
public:
    void setExludeActor(const UniqueID& id)
    {
        mExcludeActor = id;
    }

    const UniqueID& getExcludeActor() const
    {
        return mExcludeActor;
    }

protected:
    u8              _1a40;
    UniqueID   mExcludeActor;
    u32             _1a48[(0x1A50 - 0x1A48) / sizeof(u32)];
};
static_assert(sizeof(IceBallPakkun) == 0x1A50);
