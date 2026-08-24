#pragma once

#include <math/seadMatrix.h>

class TextureRendererBase
{
public:
    // Address: 0x02500304
    TextureRendererBase();

protected:
    sead::Matrix34f mMatrix;
};
static_assert(sizeof(TextureRendererBase) == 0x30, "TextureRendererBase size mismatch");
