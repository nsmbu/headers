#pragma once

#include <graphics/LayerMgr.h>

class CourseSelectLayerMgr
{
public:
    enum Layer
    {
        cLayer2D_Pre3D         = LayerMgr::cLayer_User_1,
        cLayer3D               = LayerMgr::cLayer_User_2,
        cLayer2D               = LayerMgr::cLayer_User_3,
        cLayer3D_World         = LayerMgr::cLayer_User_4,
        cLayer2D_Menu          = LayerMgr::cLayer_User_5,
        cLayer2D_TV            = LayerMgr::cLayer_DRCMode,
        cLayer_DepthShadow_DRC = LayerMgr::cLayer_DRC_User_0,
        cLayer2D_Pre3D_DRC     = LayerMgr::cLayer_DRC_User_1,
        cLayer3D_DRC           = LayerMgr::cLayer_DRC_User_2,
        cLayer2D_DRC           = LayerMgr::cLayer_DRC_User_3,
    };
};
