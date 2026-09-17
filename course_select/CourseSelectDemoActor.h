#pragma once

#include <course_select/CourseSelectActor.h>

class CourseSelectDemoActor : public CourseSelectActor  // vtbl Address: 0x10044AE0
{
    // getRuntimeTypeInfoStatic()::typeInfo initialization guard variable   Address: 0x101EA3D0
    // getRuntimeTypeInfoStatic()::typeInfo                                 Address: 0x101EA3F4
    SEAD_RTTI_OVERRIDE(CourseSelectDemoActor, CourseSelectActor);

public:
    struct WorldInfo
    {
        s32 world_no;
        s32 sub_world_no;
        s32 point_no;
    };
    static_assert(sizeof(WorldInfo) == 0xC, "CourseSelectDemoActor::WorldInfo size mismatch");

protected:
    // Address: 0x021D4CB4
    CourseSelectDemoActor(const ActorCreateParam& param);
    // Address: 0x021D5838
    ~CourseSelectDemoActor() override;

    // Address: 0x021D4D60
    bool preExecute() override;

    // TODO: ...

public:
    const WorldInfo& getWorldInfo() const
    {
        return mWorldInfo;
    }

    u32 getCourseNo() const
    {
        return mCourseNo;
    }

protected:
    sead::Vector3f _dc;
    u32 _e8;
    u32 _ec;
    WorldInfo mWorldInfo;
    u32 mCourseNo;
    u32 _100;
    bool _104;
};
static_assert(sizeof(CourseSelectDemoActor) == 0x108, "CourseSelectDemoActor size mismatch");
