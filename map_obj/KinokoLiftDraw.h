#pragma once

#include <map_obj/KinokoDrawKasa.h>
#include <map_obj/NodeTransform.h>

#include <prim/seadSafeString.h>

struct KinokoLiftResHIO
{
    sead::SafeString    model_name;
    sead::SafeString    mat_name;
    sead::SafeString    mat_name_G;
    sead::SafeString    tex_anm_name;
    f32                 _20;
    f32                 _24;
};
static_assert(sizeof(KinokoLiftResHIO) == 0x28);

class KinokoLiftDraw
{
public:
    KinokoLiftDraw(const KinokoLiftResHIO& res_hio)
        : mResHio(res_hio)
        , mAnimModel(nullptr)
        , mMatIndex(0)
        , mMatIndexG(0)
      //, mRotNodeTransform()
      //, mScaleNodeTransform()
        , mInitBoneTransform(false)
      //, mKasaDraw()
        , mKasaUseActorZPos(false)
    {
    }

    // Address: 0x027A7BA0
    void initialize(const ModelResource* mdl_res, bool kasa_use_actor_zpos, f32 kasa_mid_half_width, f32 stem_height, f32 tex_anm_frame);

    // Address: 0x027A7D70
    void calc(sead::Vector3f* kasa_pos, const sead::Vector3f& pos, f32 height, Angle = 0, Angle = 0);

    // Address: 0x027A7E44
    void draw();

    KinokoDrawKasa& getKasaDraw()
    {
        return mKasaDraw;
    }

    const KinokoDrawKasa& getKasaDraw() const
    {
        return mKasaDraw;
    }

protected:
    const KinokoLiftResHIO&             mResHio;
    AnimModel*                          mAnimModel;
    s32                                 mMatIndex;
    s32                                 mMatIndexG;
    sead::SafeArray<NodeTransform, 9>   mRotNodeTransform;
    sead::SafeArray<NodeTransform, 2>   mScaleNodeTransform;
    bool                                mInitBoneTransform;
    KinokoDrawKasa                      mKasaDraw;
    bool                                mKasaUseActorZPos;
};
static_assert(sizeof(KinokoLiftDraw) == 0x2EC);
