#pragma once

#include <actor/ActorBase.h>
#include <math/seadBoundBox.h>
#include <utility/Angle3.h>

class CourseSelectActor : public ActorBase  // vtbl Address: 0x10042DBC
{
    // getRuntimeTypeInfoStatic()::typeInfo initialization guard variable   Address: 0x101EA3CC
    // getRuntimeTypeInfoStatic()::typeInfo                                 Address: 0x101EA3C8
    SEAD_RTTI_OVERRIDE(CourseSelectActor, ActorBase)

public:
    [[nodiscard]]
    sead::Vector3f& getPos()
    {
        return mPos;
    }
    
    [[nodiscard]]
    const sead::Vector3f& getPos() const
    {
        return mPos;
    }
    
    [[nodiscard]]
    sead::Vector3f& getScale()
    {
        return mScale;
    }
    
    [[nodiscard]]
    const sead::Vector3f& getScale() const
    {
        return mScale;
    }
    
    [[nodiscard]]
    Angle3& getAngle()
    {
        return mAngle;
    }
    
    [[nodiscard]]
    const Angle3& getAngle() const
    {
        return mAngle;
    }

protected:
    // Address: 0x021B2310
    CourseSelectActor(const ActorCreateParam& param);
    // Address: 0x021B35A4
    ~CourseSelectActor() override;
    
    // Address: 0x021B2528
    bool preExecute() override;
    
    // Address: 0x021B2658
    bool preDraw() override;
    
protected:
    sead::Vector3f mPos;    // Inited to param.position
    sead::Vector3f mPos2;   // Inited to param.position
    sead::Vector3f _68;     // Inited to 0.0, 0.0, 0.0
    sead::Vector3f _74;     // Inited to 0.0, 0.0, 0.0
    sead::Vector3f mScale;  // Inited to 1.0, 1.0, 1.0
    sead::Vector3f _8c;
    sead::Vector3f _98;
    sead::Vector3f _a4;
    Angle3 mAngle;          // Inited to { 0, param.rotation, 0 }
    u32 _bc;                // Inited to 0
    u32 mAngleY;            // Inited to param.rotation
    u32 _c4;                // Inited to 0
    sead::BoundBox2f _c8;   // Inited to { 0.0, -7.0,
                            //            -40.0, 0.0 }
    u8 _d8;                 // Inited to 0
};

static_assert(sizeof(CourseSelectActor) == 0xDC, "CourseSelectActor size mismatch");
