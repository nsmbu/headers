#pragma once

#include <graphics/LayerMgr.h>

class CourseSelectLayerMgr
{
public:
    enum Layer
    {
        cLayerReflection      = LayerMgr::cLayer_Reflection_User,
        cLayerDepthShadow     = LayerMgr::cLayer_User_0,
        cLayer2D_Pre3D        = LayerMgr::cLayer_User_1,
        cLayer3D              = LayerMgr::cLayer_User_2,
        cLayer2D              = LayerMgr::cLayer_User_3,
        cLayer3D_World        = LayerMgr::cLayer_User_4,
        cLayer2D_Menu         = LayerMgr::cLayer_User_5,
        cLayer2D_TV           = LayerMgr::cLayer_DRCMode,
        cLayerReflectionDRC   = LayerMgr::cLayer_Reflection_User_DRC,
        cLayerDepthShadow_DRC = LayerMgr::cLayer_DRC_User_0,
        cLayer2D_Pre3D_DRC    = LayerMgr::cLayer_DRC_User_1,
        cLayer3D_DRC          = LayerMgr::cLayer_DRC_User_2,
        cLayer2D_DRC          = LayerMgr::cLayer_DRC_User_3,
    };
    
public:
    // Address: 0x021EE9E4
    static void createLayers(sead::Heap* heap);
};
