#pragma once

#include <basis/seadTypes.h>

// TODO
class Quad;

class Mask
{
public:
    enum TexName
    {
        cTexName_Cave           = 0, ///< Circle with harsh edge.
        cTexName_CaveSmall      = 1, ///< Circle with soft edge.
        cTexName_Dark           = 2, ///< Circle with very soft edge. 
        cTexName_DeepSea        = 3, ///< Circle with very soft edge. 
        cTexName_FlashlightA    = 4, ///< Cone with soft edge.
        cTexName_FlashlightB    = 5, ///< Circle with harsh edge.
        cTexName_DrcBlock       = 6, ///< Square with soft edge.
        cTexName_DrcTouch       = 7, ///< Large, dim circle.
        cTexName_UserType       = 8
    };
    static_assert(sizeof(TexName) == 4);

public:
    // TODO
};
