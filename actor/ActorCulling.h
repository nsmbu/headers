#pragma once

#include <math/seadBoundBox.h>

class ActorCulling
{
public:
    struct ActorCullUsable
    {
        f32 up;
        f32 down;
        f32 left;
        f32 right;
    };
    static_assert(sizeof(ActorCullUsable) == 0x10, "ActorCulling::ActorCullUsable size mismatch");
    
public:
    /**
      * @brief 80.0f
      * @par Address: 0x10000B64
      */
    static const f32 cCullUsableX;
    /**
     * @brief 256.0f
     * @par Address: 0x10000B68
     */
    static const f32 cCullUsableY;

public:
    // Address: 0x02008838
    static bool executeCullCheck(const sead::BoundBox2f& range, const ActorCullUsable& cull_range);
    // Address: 0x02008918
    static bool drawCullCheck(const sead::BoundBox2f& range);
    // Address: 0x0200897C
    static bool areaCullCheck(const sead::BoundBox2f& range, u8 area_no);
};
