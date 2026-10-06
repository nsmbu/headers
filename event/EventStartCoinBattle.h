#pragma once

#include <event/EventBase.h>

// vtbl Address: 0x100B5794
class EventStartCoinBattle : public EventBase
{
    // getRuntimeTypeInfoStatic()::typeInfo initialization guard variable   Address: 0x101EAD5C
    // getRuntimeTypeInfoStatic()::typeInfo                                 Address: 0x101EAD60
    SEAD_RTTI_OVERRIDE(EventStartCoinBattle, EventBase)

private:
    bool    mExit;
};
static_assert(sizeof(EventStartCoinBattle) == 0x1C, "EventStartCoinBattle size mismatch");
