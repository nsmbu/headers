#pragma once

#include <graphics/RenderObjLayer.h>

#include <gfx/seadCamera.h>
#include <gfx/seadProjection.h>
#include <layer/aglLayer.h>
#include <layer/aglRenderer.h>
#include <math/seadBoundBox.h>

class   Angle;
class   AnimModel;
class   Model;
class   ModelFFL;
enum    UnitID : int;

class Renderer
{
    // createInstance()                             Address: 0x024FA650
    // deleteInstance()                             Address: Deleted
    // sInstance                                    Address: 0x101D2D88
    // SingletonDisposer_::~SingletonDisposer_()    Address: 0x024FAE28
    // SingletonDisposer_::sStaticDisposer          Address: 0x101D2D8C
    // SingletonDisposer_::vtbl                     Address: 0x100BDA98
    SEAD_SINGLETON_DISPOSER(Renderer)

public:
    enum GatherType
    {
        cGatherType_0 = 0,  // AreaTask
        cGatherType_1,      // CourseSelectTask, DarkCloudDemoScene, GameSetupScene, MultiPlayCourseSelectScene, ResultScene
        cGatherType_2,      // DemoTestScene
        cGatherType_3       // CourseTask, ChallengeResultScene, WithMiiPackSelectScene
    };

public:
    class LayerSetter
    {
    public:
        LayerSetter(s32 layer_id, GatherType type)
        {
            Renderer::instance()->setLayer(agl::lyr::Renderer::instance()->getLayer<RenderObjLayerBase>(layer_id), type);
        }

        LayerSetter(RenderObjLayerBase* layer, GatherType type)
        {
            Renderer::instance()->setLayer(layer, type);
        }

        ~LayerSetter()
        {
            Renderer::instance()->resetLayer();
        }
    };

public:
    // Address: 0x024FA5A0
    Renderer();
    // Address: 0x024FA6D0
    ~Renderer();

    // Address: 0x024FA748
    void setViewBoundBox(const sead::BoundBox2f& box);

    // Address: 0x024FA76C
    void calcForAreaTask();

    // Address: 0x024FAA50
    void setLayer(agl::lyr::Layer* layer, GatherType type);
    // Address: 0x024FAB4C
    void resetLayer();

    // Address: 0x024FAB58
    void drawModel(Model* model);
    // Address: 0x024FAC98
    void drawModel(const AnimModel* model);
    // Address: 0x024FACA0
    void drawModel(ModelFFL* model);

    // Address: 0x024FAD28
    void drawActorBgUnit(UnitID unit, const sead::Vector3f& pos, Angle angle, const sead::Vector3f& scale);
    // Address: 0x024FADD8
    void drawActorBgUnitLayer0(UnitID unit, const sead::Vector3f& pos, Angle angle, const sead::Vector3f& scale);

private:
    sead::BoundBox2f        mViewBoundBox;
    sead::OrthoProjection   mProjection3D;
    sead::OrthoCamera       mCamera3D;
    RenderObjLayerBase*     mLayer;
    s32                     mDefaultOpaBufferIdx;
    s32                     mDefaultXluBufferIdx;
    sead::OrthoProjection   mProjectionFinalKoopa;
    sead::OrthoCamera       mCameraFinalKoopa;
};
static_assert(sizeof(Renderer) == 0x234);
