#pragma once

#include <graphics/Animation.h>

#include <container/seadPtrArray.h>
#include <heap/seadHeap.h>
#include <prim/seadSafeString.h>

#include <nw/g3d/g3d_TexPatternAnimObj.h>

class ModelG3d;
class ModelResource;

class TexturePatternAnimation : public Animation
{
public:
    // Address: 0x0250AECC
    TexturePatternAnimation();

    // Address: 0x0250B058
    bool init(const ModelG3d* model, const ModelResource* mdl_res, const sead::PtrArray<ModelResource>* anim_mdl_res_array, sead::Heap* heap);

    bool isValid() const { return mRes && mModel; }

    // Address: 0x0250B1A8
    void bindModel(const ModelG3d* model, s32 index);
    // Address: 0x0250B148
    void unbindModel();

private:
    // Address: 0x0250B15C
    void bindAnimObj_();

public:
    // Address: 0x0250B1EC
    void play(const ModelResource* mdl_res, const sead::SafeString& name);

    // Address: 0x0250B38C
    bool forceBind(const sead::SafeString& name, const nw::g3d::res::ResTexture* texture);

    // Address: 0x0250B3F0
    void calc() override;

    nw::g3d::TexPatternAnimObj& getAnimObj() { return mAnimObj; }
    const nw::g3d::TexPatternAnimObj& getAnimObj() const { return mAnimObj; }

    nw::g3d::res::ResTexPatternAnim* getResource() const { return mRes; }

    const ModelG3d* getModel() const { return mModel; }
    s32 getIndex() const { return mIndex; }

private:
    static void updateInitArg_(nw::g3d::TexPatternAnimObj::InitArg* arg, const ModelResource* mdl_res);

private:
    nw::g3d::TexPatternAnimObj          mAnimObj;
    nw::g3d::res::ResTexPatternAnim*    mRes;
    const ModelG3d*                     mModel;
    s32                                 mIndex;
};
static_assert(sizeof(TexturePatternAnimation) == 0x84, "TexturePatternAnimation size mismatch");
