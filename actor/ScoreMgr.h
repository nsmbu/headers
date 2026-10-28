#pragma once

#include <heap/seadDisposer.h>
#include <math/seadVector.h>

class Actor;

class ScoreMgr
{
    // createInstance()                             Address: 0x02027A0C
    // deleteInstance()                             Address: Deleted
    // sInstance                                    Address: 0x101C63C4
    // SingletonDisposer_::~SingletonDisposer_()    Address: 0x02028418
    // SingletonDisposer_::sStaticDisposer          Address: 0x101C63C8
    // SingletonDisposer_::vtbl                     Address: 0x10004E28
    SEAD_SINGLETON_DISPOSER(ScoreMgr)

public:
    enum ScoreType
    {
        cScoreType_Invalid = -1,

        /* Base */
        cScoreType_Base_Combo_1 = 0,
        cScoreType_Base_Combo_2,
        cScoreType_Base_Combo_3,
        cScoreType_Base_Combo_4,
        cScoreType_Base_Combo_5,
        cScoreType_Base_Combo_6,
        cScoreType_Base_Combo_7,
        cScoreType_Base_Combo_8,
        cScoreType_Base_Combo_9,
        cScoreType_Base_Num,

        /* ScoreSet */

        cScoreType_Point_100    = cScoreType_Base_Combo_1,
        cScoreType_Point_200    = cScoreType_Base_Combo_2,
        cScoreType_Point_400    = cScoreType_Base_Combo_3,
        cScoreType_Point_800    = cScoreType_Base_Combo_4,
        cScoreType_Point_1000   = cScoreType_Base_Combo_5,
        cScoreType_Point_2000   = cScoreType_Base_Combo_6,
        cScoreType_Point_4000   = cScoreType_Base_Combo_7,
        cScoreType_Point_8000   = cScoreType_Base_Combo_8,
        cScoreType_Rest_1       = cScoreType_Base_Combo_9,

        cScoreType_Rest_3 = cScoreType_Base_Num,
        cScoreType_Unk10,

        cScoreType_Point_Num = cScoreType_Point_8000 + 1,
        cScoreType_Num = cScoreType_Unk10 + 1,

        /* UnKnownScoreSet */

        cUnKnownScoreType_Point_100    = cScoreType_Base_Combo_1,
        cUnKnownScoreType_Point_200    = cScoreType_Base_Combo_2,
        cUnKnownScoreType_Point_400    = cScoreType_Base_Combo_3,
        cUnKnownScoreType_Point_800    = cScoreType_Base_Combo_4,
        cUnKnownScoreType_Point_1000   = cScoreType_Base_Combo_5,
        cUnKnownScoreType_Point_2000   = cScoreType_Base_Combo_6,
        cUnKnownScoreType_Point_4000   = cScoreType_Base_Combo_7,
        cUnKnownScoreType_Point_8000   = cScoreType_Base_Combo_8,
        cUnKnownScoreType_Rest_All     = cScoreType_Base_Combo_9,

        cUnKnownScoreType_Point_10 = cScoreType_Base_Num,
        cUnKnownScoreType_Num,

        /* ScoreSet2 */
    
        cScoreType2_Point_1000_1    = cScoreType_Base_Combo_1,
        cScoreType2_Point_1000_2    = cScoreType_Base_Combo_2,
        cScoreType2_Point_2000      = cScoreType_Base_Combo_3,
        cScoreType2_Point_4000      = cScoreType_Base_Combo_4,
        cScoreType2_Point_8000      = cScoreType_Base_Combo_5,
        cScoreType2_Rest_1_1        = cScoreType_Base_Combo_6,
        cScoreType2_Rest_1_2        = cScoreType_Base_Combo_7,
        cScoreType2_Rest_1_3        = cScoreType_Base_Combo_8,
        cScoreType2_Rest_1_4        = cScoreType_Base_Combo_9,

        cScoreType2_Rest_1_5 = cScoreType_Base_Num,

        cScoreType2_Point_Num = cScoreType2_Point_8000 + 1,
        cScoreType2_Num = cScoreType2_Rest_1_5 + 1
    };
    static_assert(cScoreType_Point_Num == 8);
    static_assert(cScoreType_Base_Num == 9);
    static_assert(cScoreType_Num == 11);
    static_assert(cUnKnownScoreType_Num == 10);
    static_assert(cScoreType2_Point_Num == 5);
    static_assert(cScoreType2_Num == 10);

    /**
     * @brief 0.0f
     * @par Address: 0x10004E20
     */
    static const f32 cScoreDispXPos;
    /**
     * @brief 24.0f
     * @par Address: 0x10004E24
     */
    static const f32 cScoreDispYPos;

public:
    // Address: 0x020279E0
    ScoreMgr();

    // Address: Deleted
    void allOneUpSmallScore(const sead::Vector3f& pos);
    // Address: 0x02027A8C
    void addPlayerRest(s32 player_no, s32, bool sound);
    // Address: 0x02027BD8
    void setAllOneUp(bool sound);
    // Address: 0x0202821C
    void setEntryAllPlayerOneUp(bool sound);
    // Address: Deleted
    void setEntryPlayerOneUp_(s32 player_no, bool sound);
    // Address: 0x02028140
    void playerScoreSet(u32 type, s32 player_no, bool sound);
    // Address: 0x0202839C
    void setAllPlayerOneUpForZorome(f32 small_score_offset_y, bool sound);
    // Address: 0x020282E0
    void setPlayerOneUpForZorome_(s32 player_no, f32*, bool sound);
    // Address: Deleted
    void baloonPlayerSetOneUpForZorome_(s32 player_no, f32, bool sound);
    // Address: 0x02027C80
    void scoreSet(const sead::Vector3f& pos, u32 type, s32 player_no, bool);
    // Address: 0x02027DA8
    void chengePosScoreSet(Actor* actor_for_small_score_pos, u32 type, s32 player_no, f32 small_score_offset_x = cScoreDispXPos, f32 small_score_offset_y = cScoreDispYPos);
    // Address: 0x02027DF4
    void comboScoreSet(const sead::Vector3f& small_score_pos, u32 type, s32 player_no);
    // Address: 0x02027EBC
    void chengePosComboScoreSet(const Actor* actor_for_small_score_pos, u32 type, s32 player_no, f32 small_score_offset_x = cScoreDispXPos, f32 small_score_offset_y = cScoreDispYPos);
    // Address: 0x02027F04
    void unKnownScoreSet(const sead::Vector3f& small_score_pos, u32 type);
    // Address: 0x02027FCC
    void chengePosUnKnownScoreSet(const Actor* actor_for_small_score_pos, u32 type, f32 small_score_offset_x = 0.0f, f32 small_score_offset_y = 24.0f);
    // Address: Deleted
    void miniGameScoreSet(const sead::Vector3f&, u32 type, s32 player_no);
    // Address: 0x02028014
    bool getScorePlayerHeadPos(sead::Vector3f& pos, s32 player_no);
    // Address: Deleted
    void goalComboScoreSet(sead::Vector3f& pos, u32 type, s32 player_no);
    // Address: Deleted
    void chengePosGoalComboScoreSet(const Actor*, u32 type, s32 player_no, f32, f32);
};
