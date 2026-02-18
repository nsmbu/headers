#pragma once

#include <input/PadCommon.h>
#include <input/SysController.h>

#include <controller/seadControllerWrapper.h>

class SysControllerWrapper : public sead::ControllerWrapper
{
public:
    static const u8 cPadConfig[cPadIdxCommon_Num];

public:
    SysControllerWrapper();
    ~SysControllerWrapper() override;

    void calc(u32, bool) override;

    void registerWith(SysController::Id id);
};
static_assert(sizeof(SysControllerWrapper) == sizeof(sead::ControllerWrapper));
