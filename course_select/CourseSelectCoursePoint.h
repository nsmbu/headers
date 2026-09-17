#pragma once

#include <course_select/CourseSelectObjActor.h>
#include <effect/Effect.h>
#include <graphics/AnimModel.h>

class CourseSelectCoursePoint : public CourseSelectObjActor // vtbl Address: 0x10044418
{
    // getRuntimeTypeInfoStatic()::typeInfo initialization guard variable   Address: 0x101EA450
    // getRuntimeTypeInfoStatic()::typeInfo                                 Address: 0x101EA44C
    SEAD_RTTI_OVERRIDE(CourseSelectDemoActor, CourseSelectActor);

public:
    enum AnimType : u32
    {
        cAnimType_Clear         = 0,
        cAnimType_Help          = 1,
        cAnimType_Open          = 2,
        cAnimType_Appear        = 3,
        cAnimType_AppearBlack   = 4
    };

protected:
    // Address: 0x021C9900
    CourseSelectCoursePoint(const ActorCreateParam& param);
    // Address: 0x021CC17C
    ~CourseSelectCoursePoint() override;

    // TODO: virtuals and other methods

public:
    AnimModel* getNodeModel() const
    {
        return mNodeModel;
    }

    AnimModel* getRingModel() const
    {
        return mRingModel;
    }

    AnimModel* getStarCoinModel() const
    {
        return mStarCoinModel;
    }

    ShaderParamAnimation* getColorAnm() const
    {
        return mColorAnm;
    }

    AnimType getAnimType() const
    {
        return mAnimType;
    }

    const sead::SafeString& getName() const
    {
        return mName;
    }

    // Address: 0x021C9E0C
    void playAnim(AnimType anim, f32 = 1.0f);

public:
    AnimModel* mNodeModel;
    AnimModel* mRingModel;
    AnimModel* mStarCoinModel;
    u32 _118;
    u32 _11c;
    u32 _120;
    ShaderParamAnimation* mColorAnm;
    f32 _128;
    f32 _12c;
    f32 _130;
    AnimType mAnimType;
    f32 _138;
    u32 _13c;
    f32 _140;
    f32 _144;
    u32 _148;
    sead::FixedSafeString<5> mName;
    Effect mEffect;
    u8 _1a0;
    u8 _1a1;
    u8 _1a2;
    u8 _1a3;
};
static_assert(sizeof(CourseSelectCoursePoint) == 0x1A4, "CourseSelectCoursePoint size mismatch");
