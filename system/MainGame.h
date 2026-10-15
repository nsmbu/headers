#pragma once

#include <container/seadSafeArray.h>
#include <heap/seadDisposer.h>
#include <prim/seadBitFlag.h>

#include <graphics/Mii_IconFacelineObj.h>
#include <graphics/Mii_IconRenderBuffer.h>
#include <system/SaveMgr.h>

enum CourseExitType
{
    cCourseExitType_ChallengeRetry = 0,
    cCourseExitType_Exit,                   // e.g., from Pause menu
    cCourseExitType_Beaten,
    cCourseExitType_Dead,
    cCourseExitType_OtehonReplay,
    cCourseExitType_InsideCourse
};
static_assert(sizeof(CourseExitType) == 4, "CourseExitType size mismatch");

enum CourseBeatenType
{
    cCourseBeatenType_Normal = 0,
    cCourseBeatenType_Secret,
    cCourseBeatenType_TreasureChest,
    cCourseBeatenType_TreasureChestFail     // Maybe for when Nabbit steals the treasure chest for idling too long on the ambush??
};
static_assert(sizeof(CourseBeatenType) == 4, "CourseBeatenType size mismatch");

enum CSSwitchState : u8
{
    cCSSwitchState_Red = 0,
    cCSSwitchState_Blue
};
static_assert(sizeof(CSSwitchState) == 1, "W6SwitchState size mismatch");

class MainGame
{
    // createInstance()                             Address: 0x029CDCAC
    // deleteInstance()                             Address: Deleted
    // sInstance                                    Address: 0x101E7D7C
    // SingletonDisposer_::~SingletonDisposer_()    Address: 0x029CEBF0
    // SingletonDisposer_::sStaticDisposer          Address: 0x101E7D80
    // SingletonDisposer_::vtbl                     Address: 0x1018A110
    SEAD_SINGLETON_DISPOSER(MainGame)

public:
    // Address: 0x029CD2E8
    MainGame();

    // Address: 0x029CEAD4
    void initMiiIconRenderBuffer(sead::Heap* heap = nullptr);

    bool isSinglePlayerDRC() const
    {
        return mIsSinglePlayerDRC;
    }

    bool isMultiplayer() const
    {
        return !mIsSinglePlayerDRC;
    }

    bool isNewGame() const
    {
        return mIsNewGame;
    }

    void setNewGame(bool new_game)
    {
        mIsNewGame = new_game;
    }

    bool isShadowkunQuest() const
    {
        return mIsShadowkunQuest;
    }

    CourseExitType getCourseExitType() const
    {
        return mCourseExitType;
    }

    void setCourseExitType(CourseExitType type)
    {
        mCourseExitType = type;
    }

    CourseBeatenType getCourseBeatenType() const
    {
        return mCourseBeatenType;
    }

    void setCourseBeatenType(CourseBeatenType type)
    {
        mCourseBeatenType = type;
    }

    bool isOtehon() const
    {
        return mReplayFlag.isOnBit(0);
    }

    CSSwitchState getCSSwitchState() const
    {
        return mCSSwitchState;
    }

    SaveData::CSLocation& getAirshipLocation()
    {
        return mAirshipLocation;
    }

    /**
     * @return Bitfield of type @c SaveData::WorldCompletionFlag
     */
    sead::BitFlag16& getWorldCompletionFlag()
    {
        return mWorldCompletionFlag;
    }

    /**
     * @return Bitfield of type @c SaveData::ChibiYoshiAvailableFlag
     */
    sead::BitFlag8& getChibiYoshiAvailableFlag()
    {
        return mChibiYoshiAvailableFlag;
    }

    SaveData::LevelStat& getLevelStat()
    {
        return mLevelStat;
    }

    /**
     * @return Bitfield of type @c SaveData::GameCompletionFlag
     */
    sead::BitFlag8& getGameCompletionFlag()
    {
        return mGameCompletionFlag;
    }

protected:
    u32                                         _10;
    bool                                        mIsSinglePlayerDRC;
    u32                                         _18;
    bool                                        mIsNewGame;
    CourseExitType                              mCourseExitType;
    CourseBeatenType                            mCourseBeatenType;
    u32                                         _28;
    sead::BitFlag32                             mReplayFlag;
    u32                                         _30[(0x78 - 0x30) / sizeof(u32)];
    CSSwitchState                               mCSSwitchState;
    u32                                         _7c[(0x1C8 - 0x7C) / sizeof(u32)];
    SaveData::CSLocation                        mAirshipLocation;
    u32                                         _1cc[(0x208 - 0x1CC) / sizeof(u32)];
    sead::BitFlag16                             mWorldCompletionFlag;
    bool                                        _20a;
    u8                                          _20b;
    u8                                          _20c;
    sead::BitFlag8                              mChibiYoshiAvailableFlag;
    u32                                         _210[(0x31C - 0x210) / sizeof(u32)];
    SaveData::LevelStat                         mLevelStat;
    u32                                         _3d8[(0x82C - 0x3D8) / sizeof(u32)];
    sead::BitFlag8                              mGameCompletionFlag;
    u8                                          _82d;
    bool                                        mPlayAsNabbitOrMii;
    bool                                        mPlayAsMii;
    u32                                         _830[(0x180E4 - 0x830) / sizeof(u32)];
    Mii::IconRenderBuffer                       _180e4;
    u32                                         _18544[(0x18548 - 0x18544) / sizeof(u32)];
    Mii::IconFacelineObj                        _18548;
    sead::SafeArray<Mii::IconRenderBuffer, 4>   _1891c;
    sead::SafeArray<Mii::IconRenderBuffer, 30>  _19a9c;
    u8                                          _21ddc[30];
    bool                                        mIsShadowkunQuest;
    u32                                         _21dfc[(0x21E18 - 0x21DFC) / sizeof(u32)];
};
static_assert(sizeof(MainGame) == 0x21E18, "MainGame size mismatch");
