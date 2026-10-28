#pragma once

#include <heap/seadHeap.h>

class ActorResLoader
{
public:
    enum ResType
    {
        cResType_Boot = 0,
        cResType_Course,
        cResType_CourseSelect,
        cResType_Num
    };

public:
    // Address: 0x0200A738
    static void load(ResType prof_res_type, sead::Heap* heap);
    // Address: 0x0200A930
    static void unload(ResType prof_res_type);
};
