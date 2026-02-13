#pragma once

#include <player/PlayerModelBase.h>

class PlayerModelBaseMgr    // vtbl Address: 0x1016BE5C
{
public:
    enum DrawType
    {
        cDrawType_Normal = 0,
        cDrawType_InBalloon,
        cDrawType_InDistantView
    };

public:
    // Address: 0x02922A38
    PlayerModelBaseMgr();

    virtual void setCapMode(PlayerModelBase::CapMode mode)
    {
    }

    PlayerModelBase* getModelBase()
    {
        return mModelBase;
    }

    // Address: 0x02922B3C
    void setModelBase(PlayerModelBase* mdl_base);

    void reset()
    {
        mModelBase->reset();
    }

    f32 getAnmRate(s32 anm_id)
    {
        return mModelBase->getAnmRate(anm_id);
    }

    f32 getAnmBlendDuration(s32 anm_id)
    {
        return mModelBase->getAnmBlendDuration(anm_id);
    }

    // Address: 0x02922A84
    void setAnm(s32 anm_id, f32 frame = 0.0f);
    // Address: 0x02922BA4
    void setAnm(s32 anm_id, f32 blend_duration, f32 frame);

    void setAnm(s32 anm_id, f32 rate, f32 blend_duration, f32 frame)
    {
        mModelBase->setAnm(anm_id, rate, blend_duration, frame);
    }

    // Address: 0x02922C40
    void setBodyAnm(s32 anm_id);

    void setBodyAnm(s32 anm_id, f32 rate, f32 frame = 0.0f, f32 blend_duration = 0.0f)
    {
        mModelBase->setBodyAnm(anm_id, rate, frame, blend_duration);
    }

    void copyLinkAnm(f32 blend_duration)
    {
        mModelBase->copyLinkAnm(blend_duration);
    }

    void setJumpIndex(s32 rnd_type)
    {
        mModelBase->setJumpIndex(rnd_type);
    }

    void setRate(f32 rate)
    {
        mModelBase->setRate(rate);
    }

    f32 getRate()
    {
        return mModelBase->getRate();
    }

    void setRateDirect(f32 rate)
    {
        mModelBase->setRateDirect(rate);
    }

    f32 getRateDirect()
    {
        return mModelBase->getRateDirect();
    }

    void setBodyRate(f32 rate)
    {
        mModelBase->setBodyRate(rate);
    }

    f32 getBodyRate()
    {
        return mModelBase->getBodyRate();
    }

    bool isAnmStop()
    {
        return mModelBase->isAnmStop();
    }

    bool isBodyAnmStop()
    {
        return mModelBase->isBodyAnmStop();
    }

    void setFrame(f32 frame)
    {
        mModelBase->setFrame(frame);
    }

    f32 getFrame()
    {
        return mModelBase->getFrame();
    }

    void setFrameDirect(f32 frame)
    {
        mModelBase->setFrameDirect(frame);
    }

    f32 getFrameDirect()
    {
        return mModelBase->getFrameDirect();
    }

    void setBodyFrame(f32 frame)
    {
        mModelBase->setBodyFrame(frame);
    }

    f32 getBodyFrame()
    {
        return mModelBase->getBodyFrame();
    }

    bool checkFrame(f32 frame)
    {
        return mModelBase->checkFrame(frame);
    }

    bool checkBodyFrame(f32 frame)
    {
        return mModelBase->checkBodyFrame(frame);
    }

    bool checkFrameCtrlFlagUnk2()
    {
        return mModelBase->checkFrameCtrlFlagUnk2();
    }

    bool checkBodyFrameCtrlFlagUnk2()
    {
        return mModelBase->checkBodyFrameCtrlFlagUnk2();
    }

    f32 getFrameEnd()
    {
        return mModelBase->getFrameEnd();
    }

    bool isBodyAnmOn()
    {
        return mModelBase->isBodyAnmOn();
    }

    void getJointMtx(sead::Matrixf* mtx, s32 index)
    {
        mModelBase->getJointMtx(mtx, index);
    }

    void getJointPos(sead::Vector3f* pos, s32 index)
    {
        mModelBase->getJointPos(pos, index);
    }

    void getJointMtx(sead::Matrixf* mtx, const sead::SafeString& name)
    {
        mModelBase->getJointMtx(mtx, name);
    }

    void getJointPos(sead::Vector3f* pos, const sead::SafeString& name)
    {
        mModelBase->getJointPos(pos, name);
    }

    void play()
    {
        mModelBase->play();
    }

    void calc(const sead::Matrixf& mtx)
    {
        mModelBase->calc(mtx);
    }

    void calc2()
    {
        mModelBase->calc2();
    }

    // Address: 0x02922CA0
    void draw();

    void cancelCarry()
    {
        mModelBase->cancelCarry();
    }

    void onCarry()
    {
        mModelBase->onCarry();
    }

    void onLiftUp()
    {
        mModelBase->onLiftUp();
    }

    void onBalloonChibiYoshiFly()
    {
        mModelBase->onBalloonChibiYoshiFly();
    }

    void onBubbleChibiYoshiShake()
    {
        mModelBase->onBubbleChibiYoshiShake();
    }

    void offCarry()
    {
        mModelBase->offCarry();
    }

    void offLiftUp()
    {
        mModelBase->offLiftUp();
    }

    void offBalloonChibiYoshiFly()
    {
        mModelBase->offBalloonChibiYoshiFly();
    }

    void offBubbleChibiYoshiShake()
    {
        mModelBase->offBubbleChibiYoshiShake();
    }

    bool isCarry()
    {
        return mModelBase->isCarry();
    }

    bool isLiftUp()
    {
        return mModelBase->isLiftUp();
    }

    void onStarAnm()
    {
        mModelBase->onStarAnm();
    }

    void offStarAnm()
    {
        mModelBase->offStarAnm();
    }

    bool isFootStepTiming()
    {
        return mModelBase->isFootStepTiming();
    }

    bool isCourseSelectScene()
    {
        return mModelBase->isCourseSelectScene();
    }

    f32 getBaseScale()
    {
        return mModelBase->getBaseScale();
    }

    sead::Vector3f* getHeadTopPosP()
    {
        return mModelBase->getHeadTopPosP();
    }

    sead::Vector3f* getHeadPosP()
    {
        return mModelBase->getHeadPosP();
    }

    u32 getAnmFlag(PlayerModelBase::AnmFlagType type) const
    {
        return mModelBase->getAnmFlag(type);
    }

    bool isAnmFlag(PlayerModelBase::AnmFlagType type, PlayerModelBase::AnmFlagBit bit) const
    {
        return mModelBase->isAnmFlag(type, bit);
    }

    void changeFaceAngleOverrideFlag(PlayerModelBase::FaceAngleOverrideFlag flag, bool enable)
    {
        mModelBase->changeFaceAngleOverrideFlag(flag, enable);
    }

    const Angle3& getFaceAngleOverride() const
    {
        return mModelBase->getFaceAngleOverride();
    }

    void setFaceAngleOverride(const Angle3& angle)
    {
        mModelBase->setFaceAngleOverride(angle);
    }

    void resetFaceAngleOverride()
    {
        mModelBase->resetFaceAngleOverride();
    }

    void resetFaceAngleOverrideFlag()
    {
        mModelBase->resetFaceAngleOverrideFlag();
    }

    // Address: 0x02922D8C
    void setDrawType(DrawType type);

    void setTexAnmType(PlayerModelBase::TexAnmType type)
    {
        mModelBase->setTexAnmType(type);
    }

    ModelResource* getModelResFile() const
    {
        return mModelBase->getModelResFile();
    }

    ModelResource* getAnmResFile() const
    {
        return mModelBase->getAnmResFile();
    }

    s32 getAnmID() const
    {
        return mModelBase->getAnmID();
    }

    void onOnHDokan()
    {
        mModelBase->onOnHDokan();
    }

    void offOnHDokan()
    {
        mModelBase->offOnHDokan();
    }

    bool isOnHDokan() const
    {
        return mModelBase->isOnHDokan();
    }

    void onWaitL()
    {
        mModelBase->onWaitL();
    }

    void onWaitR()
    {
        mModelBase->onWaitR();
    }

    void offWait()
    {
        mModelBase->offWait();
    }

    bool isWaitL() const
    {
        return mModelBase->isWaitL();
    }

    bool isWaitR() const
    {
        return mModelBase->isWaitR();
    }

    void onRideCloudWait()
    {
        mModelBase->onRideCloudWait();
    }

    void offRideCloudWait()
    {
        mModelBase->offRideCloudWait();
    }

    bool isRideCloudWait() const
    {
        return mModelBase->isRideCloudWait();
    }

    void onRideLiftWait()
    {
        mModelBase->onRideLiftWait();
    }

    void offRideLiftWait()
    {
        mModelBase->offRideLiftWait();
    }

    bool isRideLiftWait() const
    {
        return mModelBase->isRideLiftWait();
    }

protected:
    PlayerModelBase*    mModelBase;
    DrawType            mDrawType;
};
static_assert(sizeof(PlayerModelBaseMgr) == 0xC);
