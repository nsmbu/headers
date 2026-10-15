#pragma once

#include <course_select/CourseSelectActor.h>
#include <system/SaveMgr.h>

// vtbl Address: 0x10044AE0
class CourseSelectDemoActor : public CourseSelectActor
{
    // getRuntimeTypeInfoStatic()::typeInfo initialization guard variable   Address: 0x101EA3D0
    // getRuntimeTypeInfoStatic()::typeInfo                                 Address: 0x101EA3F4
    SEAD_RTTI_OVERRIDE(CourseSelectDemoActor, CourseSelectActor);

protected:
    // Address: 0x021D4CB4
    CourseSelectDemoActor(const ActorCreateParam& param);
    // Address: 0x021D5838
    ~CourseSelectDemoActor() override;

    // Address: 0x021D4D60
    bool preExecute() override;

    // TODO: ...

public:
    const SaveData::CSLocation& getCSLocation() const
    {
        return mCSLocation;
    }

    u32 getCourseNo() const
    {
        return mCourseNo;
    }

protected:
    sead::Vector3f _dc;
    u32 _e8;
    u32 _ec;
    SaveData::CSLocation mCSLocation;
    u32 mCourseNo;
    u32 _100;
    bool _104;
};
static_assert(sizeof(CourseSelectDemoActor) == 0x108, "CourseSelectDemoActor size mismatch");
