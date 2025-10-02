#pragma once

#include <graphics/Animation.h>

#include <container/seadPtrArray.h>
#include <heap/seadHeap.h>
#include <prim/seadSafeString.h>

#include <nw/g3d/g3d_ShaderParamAnimObj.h>

class ModelG3d;
class ModelResource;

class ShaderParamAnimation : public Animation   // vtbl Address: 0x100BE204
{
public:
    // Address: 0x024FE8E4
    ShaderParamAnimation();

    // Address: 0x024FEB60
    bool init(const ModelG3d* model, const ModelResource* mdl_res, const sead::PtrArray<ModelResource>* anim_mdl_res_array, sead::Heap* heap);

    bool isValid() const { return mRes && mModel; }

    // Address: 0x024FEC84
    void bindModel(const ModelG3d* model, s32 index);
    // Address: 0x024FEC54
    void unbindModel();

private:
    // Address: 0x024FEC68
    void bindAnimObj_();

public:
    // Address: 0x024FECC8
    void playColorAnim(const ModelResource* mdl_res, const sead::SafeString& name);
    // Address: 0x024FEE50
    void playTexSrtAnim(const ModelResource* mdl_res, const sead::SafeString& name);

    // Address: 0x024FEFD8
    void calc() override;

    nw::g3d::ShaderParamAnimObj& getAnimObj() { return mAnimObj; }
    const nw::g3d::ShaderParamAnimObj& getAnimObj() const { return mAnimObj; }

    nw::g3d::res::ResShaderParamAnim* getResource() const { return mRes; }

    const ModelG3d* getModel() const { return mModel; }
    s32 getIndex() const { return mIndex; }

private:
    // Address: 0x024FE968
    static void updateInitArg_(nw::g3d::ShaderParamAnimObj::InitArg* arg, const ModelResource* mdl_res);

private:
    nw::g3d::ShaderParamAnimObj         mAnimObj;
    nw::g3d::res::ResShaderParamAnim*   mRes;
    const ModelG3d*                     mModel;
    s32                                 mIndex;
    void*                               mBuffer;
};
static_assert(sizeof(ShaderParamAnimation) == 0x88);
