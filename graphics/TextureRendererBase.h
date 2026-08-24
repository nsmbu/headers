#pragma once

#include <math/seadMatrix.h>

class TextureRendererBase
{
public:
    TextureRendererBase();

protected:
    sead::Matrix34f mMatrix;
};
static_assert(sizeof(TextureRendererBase) == 0x30, "TextureRendererBase size mismatch");
