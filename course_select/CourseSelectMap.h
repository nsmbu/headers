#pragma once

#include "math/seadMatrix.h"
#include "prim/seadSafeString.h"
#include <container/seadOffsetList.h>
#include <course_select/CourseSelectParallelExecuter.h>
#include <course_select/MapModel.h>
#include <heap/seadDisposer.h>
#include <layer/aglLayer.h>

class CourseSelectMap
{
    // createInstance()                             Address: 0x021F55F8
    // deleteInstance()                             Address: //!!!!!!!!
    // sInstance                                    Address: 0x101CBD38
    // SingletonDisposer_::~SingletonDisposer_()    Address: //!!!!!!!!
    // SingletonDisposer_::sStaticDisposer          Address: //!!!!!!!!
    // SingletonDisposer_::vtbl                     Address: //!!!!!!!!
    SEAD_SINGLETON_DISPOSER(CourseSelectMap)
    
public:
    // Address: 0x021F56CC
    // The subletter is the alphabet ordinal, it gets added to 'a'
    void loadModel(s32 world, s32 worldSubLetter);
    // Address: 0x021F6C14
    void initialize();
    // Address: 0x021F6FE8
    void calc();
    // Address: 0x021F7114
    void draw(agl::lyr::Layer* layer);
    
    // Address: 0x021F5800
    void getBoneWorldMatrix(s32 world, s32 worldSubLetter, const sead::SafeString& name, sead::Matrix34f* out);
    // Address: 0x021F59A8
    void getBoneWorldPos(sead::Vector3f* out, s32 world, s32 worldSubLetter, const sead::SafeString& name);
    
    const sead::OffsetList<MapModel>& getMapModel(s32 i) const
    {
        return mMapModelLists[i];
    }
    
private:
    sead::SafeArray<sead::OffsetList<MapModel>, 9> mMapModelLists; // TODO: Use a named constant
    u8 _a0;
    CourseSelectParallelExecuter mParallelExecuter;
};
static_assert(sizeof(CourseSelectMap) == 0x40C8, "CourseSelectMap size mismatch");
