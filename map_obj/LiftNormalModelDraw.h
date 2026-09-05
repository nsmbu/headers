#pragma once

#include <math/seadVector.h>

#include <actor/ActorAdditionalHeap.h>
#include <graphics/AnimModel.h>
#include <graphics/ModelResource.h>
#include <utility/Angle3.h>

class LiftNormalModelDraw
{
public:
    enum ModelType : u32
    {
        cModelType_Wood,
        cModelType_Stone,
        cModelType_PinkMushroom,
        cModelType_BoltPlatform,
        cModelType_BossKoopaLift,
        cModelType_BossKoopaLiftDown,
        cModelType_YellowMushroom,
        cModelType_WoodSnow,
        cModelType_Cloud,
        cModelType_Tower,
        cModelType_FerrisWheel,
        cModelType_YellowMushroom2,
    };

public:
    LiftNormalModelDraw() = default;
    ~LiftNormalModelDraw() = default;

    // Address: 0x027BE110
    void init();

    // Address: 0x027BE428
    void move(const sead::Vector3f& position, f32 width);
    
    // Address: 0x027BE4FC
    void draw();

    ModelResource* getModelResource() const {
        return mModelResource;
    }

    void setModelResource(ModelResource* res) {
        mModelResource = res;
    }

    AnimModel* getShortAnimModel(u32 index) const {
        return mShortAnimModel[index];
    }

    void setShortAnimModel(u32 index, AnimModel* model) {
        mShortAnimModel[index] = model;
    }

    AnimModel* getLongAnimModel(u32 index) const {
        return mLongAnimModel[index];
    }

    void setLongAnimModel(u32 index, AnimModel* model) {
        mLongAnimModel[index] = model;
    }

    sead::Vector3f& getPos() {
        return mPos;
    }

    const sead::Vector3f& getPos() const {
        return mPos;
    }

    sead::Vector3f& getCenterPos() {
        return mCenterPos;
    }

    const sead::Vector3f& getCenterPos() const {
        return mCenterPos;
    }

    sead::Vector3f& getModelOffset() {
        return mModelOffset;
    }

    const sead::Vector3f& getModelOffset() const {
        return mModelOffset;
    }

    Angle3& getAngle() {
        return mAngle;
    }

    const Angle3& getAngle() const {
        return mAngle;
    }

    f32 getMiddlePlatformModelWidth() const {
        return mMiddlePlatformModelWidth;
    }

    void setMiddlePlatformModelWidth(f32 width) {
        mMiddlePlatformModelWidth = width;
    }

    f32 getPlatformWidth() const {
        return mPlatformWidth;
    }

    void setPlatformWidth(f32 width) {
        mPlatformWidth = width;
    }

    u32 getLength() const {
        return mLength;
    }

    void setLength(u32 length) {
        mLength = length;
    }

    ModelType getModelType() const {
        return mModelType;
    }

    void setModelType(ModelType modelType) {
        mModelType = modelType;
    }

    f32 getModelScale() const {
        return mModelScale;
    }

    void setModelScale(f32 scale) {
        mModelScale = scale;
    }

    bool usesAdditionalHeap() const {
        return mUseAdditionalHeap;
    }

    void setUseAdditionalHeap(bool use) {
        mUseAdditionalHeap = use;
    }
    
    ActorAdditionalHeap& getActorAdditionalHeap() {
        return mActorAdditionalHeap;
    }

private:
    // Address: 0x027BD2D8
    void modelset();

    // Address: 0x027BD8C4
    void renderSmallCloud();
    
    // Address: 0x027BDB0C
    void calc();
    
    // Address: 0x027BE2CC
    void center_pos_set();

private:
    ModelResource* mModelResource;
    AnimModel* mShortAnimModel[3];
    AnimModel* mLongAnimModel[30];
    sead::Vector3f mPos;
    sead::Vector3f mCenterPos;
    sead::Vector3f mModelOffset;
    sead::Vector3f _ac;
    sead::Vector3f _b8;
    Angle3 mAngle;
    f32 mMiddlePlatformModelWidth;  ///< The width, in tiles, of the middle part of the platform model
    f32 mPlatformWidth;             ///< The width, in tile units, of the platform
    f32 _d8;
    u32 mLength;
    ModelType mModelType;
    f32 mModelScale;
    bool mUseAdditionalHeap;
    ActorAdditionalHeap mActorAdditionalHeap;
};
static_assert(sizeof(LiftNormalModelDraw) == 0x100, "LiftNormalModelDraw size mismatch");
