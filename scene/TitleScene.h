#pragma once

#include <framework/seadCalculateTask.h>
#include <framework/seadTaskMgr.h>

// vtbl Address: 0x10179C74
class TitleScene : public sead::CalculateTask
{
public:
    // Address: 0x0299AC54
    TitleScene(const sead::TaskConstructArg& arg);
    // Address: 0x0299ABEC
    virtual ~TitleScene();
};
static_assert(sizeof(TitleScene) == sizeof(sead::CalculateTask), "TitleScene size mismatch");

// Address: 0x0202B51C
extern template
sead::TaskBase* sead::TTaskFactory<TitleScene>(const sead::TaskConstructArg& arg);
