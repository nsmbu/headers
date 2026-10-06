#pragma once

#include <event/EventBase.h>

// vtbl Address: 0x100B4B3C
class EventPlayerChange : public EventBase
{
public:
    // Address: 0x024A6194
    EventPlayerChange(s32 player_no);

    virtual ~EventPlayerChange()
    {
    }

    // getRuntimeTypeInfoStatic()::typeInfo initialization guard variable   Address: 0x101EA820
    // getRuntimeTypeInfoStatic()::typeInfo                                 Address: 0x101EA824
    SEAD_RTTI_OVERRIDE(EventPlayerChange, EventBase)

public:
    // Address: 0x024A6200
    void enter() override;
    // Address: 0x024A6260
    Result execute() override;
    // Address: 0x024A6300
    bool isJoin(const ActorBase* actor) const override;

private:
    s32     mPlayerNo;
};
static_assert(sizeof(EventPlayerChange) == 0x1C);
