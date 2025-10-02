#pragma once

#include <graphics/Mii_SlotID.h>
#include <player/PlayerModel.h>
#include <player/PlayerModelBaseMgr.h>

#include <heap/seadHeap.h>

class PlayerModelMgr : public PlayerModelBaseMgr    // vtbl Address: 0x1016BF00
{
public:
    // Address: 0x02922F3C
    PlayerModelMgr(PlayerModelBase::Type type, PlayerModelBase::SceneType scene_type, s32 player_no, bool override_lightmap = true);
    // Address: 0x02923190
    PlayerModelMgr(PlayerModelBase::Type type, PlayerMode mode, PlayerModelBase::SceneType scene_type, bool override_lightmap = true);
    // Address: 0x02923394
    PlayerModelMgr(PlayerMode mode, PlayerCharacter mii_color, const Mii::SlotID& slot_id, sead::Heap* ffl_tmp_heap, bool override_lightmap = true);

    PlayerMode getPlayerMode()
    {
        return mModel->getPlayerMode();
    }

    void setPlayerMode(PlayerMode mode)
    {
        mModel->setPlayerMode(mode);
    }

    bool getHeadPropelJointMtx(sead::Matrixf* mtx)
    {
        return mModel->getHeadPropelJointMtx(mtx);
    }

    bool checkChange_MusaPtoNml()
    {
        return mModel->checkChange_MusaPtoNml();
    }

    void postChange_MusaPtoNml()
    {
        mModel->postChange_MusaPtoNml();
    }

    bool isFaceRot()
    {
        return mModel->isFaceRot();
    }

    void setClampFaceRot()
    {
        mModel->setClampFaceRot();
    }

    void setColorType(PlayerModel::ColorType color_type, bool keep_head_konst3)
    {
        mModel->setColorType(color_type, keep_head_konst3);
    }

    void setMiiColor(PlayerCharacter mii_color)
    {
        mModel->setMiiColor(mii_color);
    }

    void setCapMode(PlayerModelBase::CapMode mode) override
    {
        mModel->setCapMode(mode);
    }

    void setMusaPtoNmlAnm()
    {
        mModel->setMusaPtoNmlAnm();
    }

    virtual void setMiiCapVisible(bool visible)
    {
        mModel->setMiiCapVisible(visible);
    }

    virtual bool isMiiCapVisible()
    {
        return mModel->isMiiCapVisible();
    }

    PlayerModeModel getModeModel()
    {
        return mModel->getModeModel();
    }

    void setPropelRollAngle(const Angle& angle)
    {
        mModel->setPropelRollAngle(angle);
    }

    void setPropelRollSpeed(const Angle& speed)
    {
        mModel->setPropelRollSpeed(speed);
    }

    void setPropelScale(f32 scale)
    {
        mModel->setPropelScale(scale);
    }

    AnimModel* getBodyModel(PlayerModeModel mode_mdl)
    {
        return mModel->getBodyModel(mode_mdl);
    }

    AnimModel* getHeadModel(PlayerModeModel mode_mdl)
    {
        return mModel->getHeadModel(mode_mdl);
    }

private:
    PlayerModel*    mModel;
};
static_assert(sizeof(PlayerModelMgr) == 0x10);
