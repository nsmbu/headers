#pragma once

#include <basis/seadTypes.h>

class PlayerMgr;

class PlayerHIO_General
{
public:
    /**
     * @brief 11 seconds
     * @par Address: 0x10169620
     */
    static const s32 cDefaultStarTime;

    /**
     * @brief 60.2628866 degrees
     * @par Address: 0x10169624
     */
    static const s32 cFaceAngleDefaultTarget;
    /**
     * @brief 42.37040067 degrees
     * @par Address: 0x10169628
     */
    static const s32 cFaceAngleDefaultTargetCloud;

    /**
     * @brief -0.02f
     * @par Address: 0x1016962C
     */
    static const f32 cFaceAngleYtoXRatio;
    /**
     * @brief -0.12f
     * @par Address: 0x10169630
     */
    static const s32 cFaceAngleYtoZRatio;

    /**
     * @brief 8.8492267 degrees
     * @par Address: 0x10169634
     */
    static const s32 cFaceAngleMaxStep;
    /**
     * @brief 16.875 degrees
     * @par Address: 0x10169638
     */
    static const s32 cFaceAngleRevertMaxStep;

    /**
     * @brief 10 seconds
     * @par Address: 0x1016963C
     */
    static const u32 cFaceAngleTurnTimeDefault;
    /**
     * @brief 1/3 seconds
     * @par Address: 0x10169640
     */
    static const u32 cFaceAngleTurnTimeShort;

    /**
     * @brief 1/6 seconds
     * @par Address: 0x10169644
     */
    static const s32 cDefaultWaterFunsuiEffectTime;

    /**
     * @brief 30 degrees
     * @par Address: 0x10169648
     */
    static const s32 cMaxAngleZ_1;
    /**
     * @brief -45 degrees
     * @par Address: 0x1016964C
     */
    static const s32 cMinAngleZ_1;

    /**
     * @brief 17 degrees
     * @par Address: 0x10169650
     */
    static const s32 cMaxAngleZ_2;
    /**
     * @brief -17 degrees
     * @par Address: 0x10169654
     */
    static const s32 cMinAngleZ_2;

    /**
     * @brief 113 degrees
     * @par Address: 0x10169658
     */
    static const s32 cMaxAngleY;

    /**
     * @brief -1.26f
     * @par Address: 0x1016965C
     */
    static const f32 cSandSinkRate;

public:
    // Address: 0x02911F74
    PlayerHIO_General(PlayerMgr& mgr);
};
static_assert(sizeof(PlayerHIO_General) == 1, "PlayerHIO_General size mismatch");
