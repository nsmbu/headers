#pragma once

#include <graphics/Animation.h>

#include <container/seadPtrArray.h>
#include <heap/seadHeap.h>
#include <prim/seadSafeString.h>

#include <nw/g3d/g3d_SkeletalAnimObj.h>

class ModelG3d;
class ModelResource;

class SkeletalAnimation : public Animation
{
public:
    // Address: 0x024FD7E8
    SkeletalAnimation();

    // Address: 0x024FD948
    bool init(const ModelG3d* model, const ModelResource* mdl_res, const sead::PtrArray<ModelResource>* anim_mdl_res_array, sead::Heap* heap);

    bool isValid() const { return mRes && mModel; }

    // Address: 0x024FDA98
    void bindModel(const ModelG3d* model, s32 index);
    // Address: 0x024FDA64
    void unbindModel();

private:
    // Address: 0x024FDA78
    void bindAnimObj_();

public:
    // Address: 0x024FDADC
    void play(const ModelResource* mdl_res, const sead::SafeString& name);

    // Address: 0x024FDC64
    void unbindTarget(s32 idx_target);

    // Address: 0x024FDCB4
    void disableBindFlag();
    // Address: 0x024FDCF8
    void enableBindFlag(s32 idx_bone);

    // Address: 0x024FDD1C
    void calc() override;

    nw::g3d::SkeletalAnimObj& getAnimObj() { return mAnimObj; }
    const nw::g3d::SkeletalAnimObj& getAnimObj() const { return mAnimObj; }

    nw::g3d::res::ResSkeletalAnim* getResource() const { return mRes; }

    const ModelG3d* getModel() const { return mModel; }
    s32 getIndex() const { return mIndex; }

private:
    static void updateInitArg_(nw::g3d::SkeletalAnimObj::InitArg* arg, const ModelResource* mdl_res);

private:
    nw::g3d::SkeletalAnimObj        mAnimObj;
    void*                           mBuffer;
    const ModelG3d*                 mModel;
    s32                             mIndex;
    nw::g3d::res::ResSkeletalAnim*  mRes;
};
static_assert(sizeof(SkeletalAnimation) == 0x98);
