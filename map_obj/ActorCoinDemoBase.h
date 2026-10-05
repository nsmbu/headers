#pragma once

#include <graphics/AnimModel.h>
#include <actor/ActorState.h>

// vtbl Address: 0x100F24EC
class ActorCoinDemoBase : public ActorMultiState
{
    // getRuntimeTypeInfoStatic()::typeInfo initialization guard variable   Address: 0x101EB09C
    // getRuntimeTypeInfoStatic()::typeInfo                                 Address: 0x101EB098
    SEAD_RTTI_OVERRIDE(ActorCoinDemoBase, ActorMultiState);

public:
    // Address: 0x026C3F18
    ActorCoinDemoBase(const ActorCreateParam& param);
    // Address: 0x026C43D4
    ~ActorCoinDemoBase() override { }

protected:
    // Address: 0x026C4034
    bool execute() override;
    // Address: 0x026C4070
    bool draw() override;
    // Address: 0x026C3F8C
    void updateModel();

protected:
    AnimModel* mModel;
    u32        _17cc;
    s32        mPlayerNo;
    u32        _17d4;
};
static_assert(sizeof(ActorCoinDemoBase) == 0x17D8, "ActorCoinDemoBase size mismatch");
