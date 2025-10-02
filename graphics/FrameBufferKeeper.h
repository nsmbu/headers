#pragma once

#include <prim/seadSafeString.h>

class Model;

class FrameBufferUtil
{
public:
    // Address: 0x024DEA14
    static void setModelG3dTexture(Model* model, s32 frame_buffer_index, const sead::SafeString& texture_name);    // In reality, `frame_buffer_index` is always ignored and it gets frame buffer 2
    // Address: 0x024DEA28
    static void setModelG3dMaterialTexSrtMtx(Model* model, s32 material_index, s32 tex_mtx_index);
};
