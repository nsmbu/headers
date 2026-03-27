#pragma once

#include <course_select/CourseSelectCollisionCheck.h>
#include <heap/seadDisposer.h>
#include <container/seadObjArray.h>

class CourseSelectCollisionCheckMgr
{
    // createInstance()                             Address: 0x021C576C
    // deleteInstance()                             Address: //!!!!!!!!
    // sInstance                                    Address: 0x101C9758
    // SingletonDisposer_::~SingletonDisposer_()    Address: //!!!!!!!!
    // SingletonDisposer_::sStaticDisposer          Address: //!!!!!!!!
    // SingletonDisposer_::vtbl                     Address: //!!!!!!!!
    SEAD_SINGLETON_DISPOSER(CourseSelectCollisionCheckMgr)

public:
    const sead::ObjArray<CourseSelectCollisionCheck>& getArray1() const
    {
        return mArray1;
    }
    
    void addToArray1(const CourseSelectCollisionCheck& cc);
    
    const sead::ObjArray<CourseSelectCollisionCheck>& getArray2() const
    {
        return mArray2;
    }
    
private:
    sead::FixedObjArray<CourseSelectCollisionCheck, 32> mArray1;
    sead::FixedObjArray<CourseSelectCollisionCheck, 32> mArray2;
};

static_assert(sizeof(CourseSelectCollisionCheckMgr) == 0x838, "CourseSelectCollisionCheckMgr size mismatch");
