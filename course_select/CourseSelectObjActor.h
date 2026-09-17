#pragma once

#include <course_select/CourseSelectDemoActor.h>

class CourseSelectObjActor : public CourseSelectDemoActor   // vtbl: Address: 0x10048168
{
    // getRuntimeTypeInfoStatic()::typeInfo initialization guard variable   Address: 0x101EA3D8
    // getRuntimeTypeInfoStatic()::typeInfo                                 Address: 0x101EA3E4
    SEAD_RTTI_OVERRIDE(CourseSelectDemoActor, CourseSelectActor);

protected:
    // Address: 0x02201C04
    CourseSelectObjActor(const ActorCreateParam& param);
    // Address: 0x02201D08
    ~CourseSelectObjActor() override;

    // TODO: ...

protected:
    s32 _108;
};
static_assert(sizeof(CourseSelectObjActor) == 0x10C, "CourseSelectObjActor size mismatch");
