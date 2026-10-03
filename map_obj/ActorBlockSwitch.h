#pragma once

#include <actor/Profile.h>
#include <map_obj/ActorBlockBase.h>

class ActorBlockSwitch : public ActorBlockBase // vtbl Address: 0x100EF330
{
    // getRuntimeTypeInfoStatic()::typeInfo initialization guard variable   Address: 0x101EB050
    // getRuntimeTypeInfoStatic()::typeInfo                                 Address: 0x101EB054
    SEAD_RTTI_OVERRIDE(ActorBlockSwitch, ActorBlockBase);

public:
    enum SwitchType : u32
    {
        cSwitchType_Hatena  = 0,
        cSwitchType_SwitchP = 1
    };

public:
    // Address: 0x100EF29C
    static const ActorCreateInfo cActorCreateInfo;

public:
    // Address: 0x026BA304
    ActorBlockSwitch(const ActorCreateParam& param);
    // Address: 0x026BAF80
    virtual ~ActorBlockSwitch() { }

protected:
    // Address: 0x026BA370
    Result create() override;

    // Address: 0x026BA8D4
    void spawnItemUp() override;
    // Address: 0x026BA8DC
    void spawnItemDown() override;

    // Address: 0x026BA828
    void spawnItem(bool down);
    // Address: 0x026BA4FC
    void spawnSwitch(bool down);

public:
    SwitchType getSwitchType() const
    {
        return mSwitchType;
    }

    void setSwitchType(SwitchType type)
    {
        mSwitchType = type;
    }

protected:
    SwitchType  mSwitchType;
    u8          _1cc4;
};
static_assert(sizeof(ActorBlockSwitch) == 0x1CD8, "ActorBlockSwitch size mismatch");
