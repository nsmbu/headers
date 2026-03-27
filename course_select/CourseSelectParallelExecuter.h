#pragma once

#include <container/seadPtrArray.h>
#include <thread/seadAtomic.h>

class RenderObjBase;
class ParallelExecuter;

class CourseSelectParallelExecuter
{
public:
    // Address: 0x02206634
    CourseSelectParallelExecuter();
    // Address: 0x022066DC
    virtual ~CourseSelectParallelExecuter();

private:
    RenderObjBase* mRenderObjs[4096];
    u32 mUseCount;
    sead::FixedPtrArray<ParallelExecuter, 3> mParallelExecuters;
    sead::AtomicU32 mAtomicRenderObjCurrentIdx;
};
static_assert(sizeof(CourseSelectParallelExecuter) == 0x4024, "CourseSelectParallelExecuter size mismatch");
