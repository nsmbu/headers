#pragma once

#include <state/FStateMgr.h>
#include <utility/Angle.h>
#include <utility/Direction.h>
#include <prim/seadSafeString.h>
#include <container/seadSafeArray.h>
#include <math/seadVector.h>

class LineManager
{
public:
    // Address: 0x0200DC14
    LineManager();

    /**
     * @param stop_at_end Whether to stop when reaching the end as opposed to reversing.
     * @param dir_left Whether to move left instead of right.
     * @par Address: 0x0200DF60
     */
    void initialize(const sead::Vector2f& pos, u32 layer, f32 base_speed = 0.0f, bool stop_at_end = false, bool dir_left = false);

    // Address: Deleted
    void initTermCheckPos();

    // Address: 0x0200DF44
    void changeDirection();

    // Address: 0x0200E0C0
    void setBaseSpeed(f32 speed);

    // Address: 0x0200E0D8
    Angle acmAngle() const;

    // Address: 0x0200E0FC
    u32 getLineUnitNo(f32 x, f32 y) const;

    // Address: 0x0200E178
    void startLineMove(bool exec_fall_down = false);

    // Address: 0x0200E354
    f32 calcAdjustPosY(f32, f32);

    // Address: Deleted
    void printInitState(const sead::SafeString&) const;

    // Address: 0x0200E49C
    bool isUnitCircle2x2(u32);

    // Address: 0x0200E4D0
    bool isUnitCircle4x4(u32);

    // Address: 0x0200E504
    bool lineCrossSlopeCheck(f32*, f32*, const sead::Vector2f&, const sead::Vector2f&);

    // Address: 0x0200E580
    bool lineCrossRangeCheck(f32, f32, f32);

    // Address: 0x0200E5C0
    static bool slopeCrossCheck(sead::Vector2f*, f32, f32, const sead::Vector2f&, sead::Vector2f, sead::Vector2f);

    // Address: 0x0200E740
    static bool verticalCrossCheck(f32*, f32, const sead::Vector2f&, sead::Vector2f, sead::Vector2f);
    
    // Address: 0x0200E868
    static bool circleCrossCheck(f32, const sead::Vector2f&, const sead::Vector2f&);
    
    // Address: 0x0200E8C8
    bool slopeCrossSetIfCan(const sead::Vector2f&, const sead::Vector2f&, const sead::Vector2f&, const sead::Vector2f&, f32, f32);

    // Address: 0x0200E960
    bool heightCrossCheck(const sead::Vector2f&, const sead::Vector2f&, const sead::Vector2f&);

    // Address: 0x0200EA6C
    bool widthCrossCheck(const sead::Vector2f&, const sead::Vector2f&, const sead::Vector2f&);

    // Address: 0x0200EABC
    void circleNextPosSet(const sead::Vector3f& pos, f32);

    // Address: 0x0200EB58
    bool checkTerm();

    // Address: 0x0200ECE8
    void moveOnCircleSpeedSet(f32, f32);

    // Address: 0x0200EE78
    void correctPosXUnitOver();

    // Address: 0x0200EEB8
    void correctPosYUnitOver();

    // Address: 0x0200EEF4
    Angle acmRotDeltaU2UPrev(Angle);

    // Address: 0x0200EF18
    Angle acmRotDeltaU2URev(Angle);

    // Address: 0x0200EF38
    void calcRotateToCircleRev(Angle, bool);

    // Address: 0x0200EF80
    void calcRotateToCirclePrev(Angle, bool);

    // Address: 0x0200EFC8
    bool line0CrossCheck(const sead::Vector2f&, const sead::Vector2f&, const sead::Vector2f&);
    // Address: 0x0200F048
    bool line1CrossCheck(const sead::Vector2f&, const sead::Vector2f&, const sead::Vector2f&);
    // Address: 0x0200F0AC
    bool line3HCrossCheck(const sead::Vector2f&, const sead::Vector2f&, const sead::Vector2f&);
    // Address: 0x0200F0FC
    bool line3VCrossCheck(const sead::Vector2f&, const sead::Vector2f&, const sead::Vector2f&);
    // Address: 0x0200F14C
    bool line4CrossCheck(const sead::Vector2f&, const sead::Vector2f&, const sead::Vector2f&);
    // Address: 0x0200F19C
    bool line5CrossCheck(const sead::Vector2f&, const sead::Vector2f&, const sead::Vector2f&);
    // Address: 0x0200F1EC
    bool line7CrossCheck(const sead::Vector2f&, const sead::Vector2f&, const sead::Vector2f&);
    // Address: 0x0200F26C
    bool line8CrossCheck(const sead::Vector2f&, const sead::Vector2f&, const sead::Vector2f&);
    // Address: 0x0200F2F4
    bool line9CrossCheck(const sead::Vector2f&, const sead::Vector2f&, const sead::Vector2f&);
    // Address: 0x0200F358
    bool lineACrossCheck(const sead::Vector2f&, const sead::Vector2f&, const sead::Vector2f&);
    // Address: 0x0200F3E0
    bool lineBCrossCheck(const sead::Vector2f&, const sead::Vector2f&, const sead::Vector2f&);
    // Address: 0x0200F474
    bool lineCCrossCheck(const sead::Vector2f&, const sead::Vector2f&, const sead::Vector2f&);
    // Address: 0x0200F4FC
    bool lineDCrossCheck(const sead::Vector2f&, const sead::Vector2f&, const sead::Vector2f&);
    // Address: 0x0200F57C
    bool lineECrossCheck(const sead::Vector2f&, const sead::Vector2f&, const sead::Vector2f&);
    // Address: 0x0200F5E0
    bool lineFCrossCheck(const sead::Vector2f&, sead::Vector2f, sead::Vector2f);

    // Address: 0x0200F8DC
    bool circleUL2CrossCheck(const sead::Vector2f&, sead::Vector2f, sead::Vector2f);
    // Address: 0x0200FBD4
    bool circleUR2CrossCheck(const sead::Vector2f&, sead::Vector2f, sead::Vector2f);
    // Address: 0x0200FEB4
    bool circleDL2CrossCheck(const sead::Vector2f&, sead::Vector2f, sead::Vector2f);
    // Address: 0x02010194
    bool circleDR2CrossCheck(const sead::Vector2f&, sead::Vector2f, sead::Vector2f);

    // Address: 0x0201044C
    bool lineRHURCrossCheck(const sead::Vector2f&, sead::Vector2f, sead::Vector2f);
    // Address: 0x0201072C
    bool lineRHULCrossCheck(const sead::Vector2f&, sead::Vector2f, sead::Vector2f);
    // Address: 0x02010A24
    bool lineRHLLCrossCheck(const sead::Vector2f&, sead::Vector2f, sead::Vector2f);
    // Address: 0x02010D04
    bool lineRHLRCrossCheck(const sead::Vector2f&, sead::Vector2f, sead::Vector2f);

    // Address: 0x02010FBC
    void fallOnLineCheck();

    // Address: 0x0201214C
    bool moveToRightUpper(u32, const sead::Vector2f&, bool);
    // Address: 0x02011D88
    bool moveToRightLower(u32, const sead::Vector2f&, bool);
    // Address: 0x02011904
    bool moveToLeftUpper(u32, const sead::Vector2f&, bool);
    // Address: 0x020125EC
    bool moveToLeftLower(u32, const sead::Vector2f&, bool);

    // Address: 0x02012A90
    void moveFromRightUpper(const sead::Vector2f&, bool);
    // Address: 0x02012BC0
    void moveFromHeightUpper(const sead::Vector2f&);
    // Address: 0x02012CC0
    void moveFromLeftLower(const sead::Vector2f&, bool);
    // Address: 0x02012DD0
    void moveFromRightLower(const sead::Vector2f&, bool);
    // Address: 0x02012F00
    void moveFromHeightLower(const sead::Vector2f&);
    // Address: 0x02013000
    void moveFromLeftUpper(const sead::Vector2f&, bool);

    // Address: 0x02013110
    void moveOnCircle1(f32, f32);
    // Address: 0x02013288
    void moveOnCircle2(f32, f32);
    // Address: 0x02013418
    void moveOnCircle3(f32, f32);
    // Address: 0x02013594
    void moveOnCircle4(f32, f32);

    void execute()
    {
        mStateMgr.executeState();
    }

    const sead::Vector2f& getPos() const
    {
        return mPos;
    }

    bool isState(const StateID& state_id) const
    {
        return *mStateMgr.getStateID() == state_id;
    }

    bool isDirLeft() const
    {
        return mDirLeft;
    }

    bool isDirRight() const
    {
        return !mDirLeft;
    }

public:
    // StateID_Idle                     Address: Deleted
    // initializeState_Idle             Address: Deleted
    // executeState_Idle                Address: Deleted
    // finalizeState_Idle               Address: Deleted
    DECLARE_STATE_ID(LineManager, Idle)
    // StateID_FallDown                 Address: 0x101ECA8C
    // initializeState_FallDown         Address: 0x0201371C
    // executeState_FallDown            Address: 0x02013730
    // finalizeState_FallDown           Address: 0x020170F4
    DECLARE_STATE_ID(LineManager, FallDown)
    // StateID_Left45			        Address: 0x101ECAAC
    // initializeState_Left45	        Address: 0x020137B4
    // executeState_Left45		        Address: 0x02013800
    // finalizeState_Left45		        Address: 0x020170F8
    DECLARE_STATE_ID(LineManager, Left45)
    // StateID_Right45			        Address: 0x101ECACC
    // initializeState_Right45	        Address: 0x02013960
    // executeState_Right45		        Address: 0x020139A0
    // finalizeState_Right45	        Address: 0x020170FC
    DECLARE_STATE_ID(LineManager, Right45)
    // StateID_Side				        Address: 0x101ECAEC
    // initializeState_Side		        Address: 0x02013AE0
    // executeState_Side			    Address: 0x02013B1C
    // finalizeState_Side		        Address: 0x02017100
    DECLARE_STATE_ID(LineManager, Side)
    // StateID_Height			        Address: 0x101ECB0C
    // initializeState_Height	        Address: 0x02013CE0
    // executeState_Height	            Address: 0x02013D1C
    // finalizeState_Height		        Address: 0x02017104
    DECLARE_STATE_ID(LineManager, Height)
    // StateID_CornerHeightLine		    Address: 0x101ECB2C
    // initializeState_CornerHeightLine	Address: 0x02013E30
    // executeState_CornerHeightLine    Address: 0x02013E6C
    // finalizeState_CornerHeightLine   Address: 0x02017108
    DECLARE_STATE_ID(LineManager, CornerHeightLine)
    // StateID_CornerSideLine		    Address: Deleted
    // initializeState_CornerSideLine	Address: Deleted
    // executeState_CornerSideLine      Address: Deleted
    // finalizeState_CornerSideLine     Address: Deleted
    DECLARE_STATE_ID(LineManager, CornerSideLine)
    // StateID_Left30Left               Address: 0x101ECB6C
    // initializeState_Left30Left       Address: 0x020140DC
    // executeState_Left30Left          Address: 0x0201413C
    // finalizeState_Left30Left         Address: 0x02017110
    DECLARE_STATE_ID(LineManager, Left30Left)
    // StateID_Left30Right              Address: 0x101ECB8C
    // initializeState_Left30Right      Address: 0x0201438C
    // executeState_Left30Right         Address: 0x020143EC
    // finalizeState_Left30Right        Address: 0x02017114
    DECLARE_STATE_ID(LineManager, Left30Right)
    // StateID_Right30Left              Address: 0x101ECBAC
    // initializeState_Right30Left      Address: 0x02014610
    // executeState_Right30Left         Address: 0x02014668
    // finalizeState_Right30Left        Address: 0x02017118
    DECLARE_STATE_ID(LineManager, Right30Left)
    // StateID_Right30Right             Address: 0x101ECBCC
    // initializeState_Right30Right     Address: 0x02014894
    // executeState_Right30Right        Address: 0x020148EC
    // finalizeState_Right30Right       Address: 0x0201711C
    DECLARE_STATE_ID(LineManager, Right30Right)
    // StateID_Left60Up                 Address: 0x101ECBEC
    // initializeState_Left60Up         Address: 0x02014B20
    // executeState_Left60Up            Address: 0x02014B80
    // finalizeState_Left60Up           Address: 0x02017120
    DECLARE_STATE_ID(LineManager, Left60Up)
    // StateID_Left60Down               Address: 0x101ECC0C
    // initializeState_Left60Down       Address: 0x02014DE0
    // executeState_Left60Down          Address: 0x02014E40
    // finalizeState_Left60Down         Address: 0x02017124
    DECLARE_STATE_ID(LineManager, Left60Down)
    // StateID_Right60Down              Address: 0x101ECC2C
    // initializeState_Right60Down      Address: 0x02015074
    // executeState_Right60Down         Address: 0x020150D4
    // finalizeState_Right60Down        Address: 0x02017128
    DECLARE_STATE_ID(LineManager, Right60Down)
    // StateID_Right60Up                Address: 0x101ECC4C
    // initializeState_Right60Up        Address: 0x02015314
    // executeState_Right60Up           Address: 0x0201536C
    // finalizeState_Right60Up          Address: 0x0201712C
    DECLARE_STATE_ID(LineManager, Right60Up)
    // StateID_Circle                   Address: 0x101ECC6C
    // initializeState_Circle           Address: 0x0201559C
    // executeState_Circle              Address: 0x020155D8
    // finalizeState_Circle             Address: 0x02017130
    DECLARE_STATE_ID(LineManager, Circle)
    // StateID_Circle2x2LeftUp          Address: 0x101ECC8C
    // initializeState_Circle2x2LeftUp  Address: 0x02015668
    // executeState_Circle2x2LeftUp     Address: 0x020156A4
    // finalizeState_Circle2x2LeftUp    Address: 0x02017134
    DECLARE_STATE_ID(LineManager, Circle2x2LeftUp)
    // StateID_Circle2x2RightUp         Address: 0x101ECCAC
    // initializeState_Circle2x2RightUp Address: 0x020156B8
    // executeState_Circle2x2RightUp    Address: 0x020156FC
    // finalizeState_Circle2x2RightUp   Address: 0x02017138
    DECLARE_STATE_ID(LineManager, Circle2x2RightUp)
    // StateID_Circle2x2LeftDown        Address: 0x101ECCCC
    // initializeState_LeftDown         Address: 0x02015710
    // executeState_LeftDown            Address: 0x0201574C
    // finalizeState_LeftDown           Address: 0x0201713C
    DECLARE_STATE_ID(LineManager, Circle2x2LeftDown)
    // StateID_Circle2x2RightDown       Address: 0x101ECCEC
    // initializeState_RightDown        Address: 0x02015760
    // executeState_RightDown           Address: 0x0201579C
    // finalizeState_RightDown          Address: 0x02017140
    DECLARE_STATE_ID(LineManager, Circle2x2RightDown)
    // StateID_Circle4x4RightUp         Address: 0x101ECD0C
    // initializeState_Circle4x4RightUp Address: 0x020157B0
    // executeState_Circle4x4RightUp    Address: 0x020157F4
    // finalizeState_Circle4x4RightUp   Address: 0x02017144
    DECLARE_STATE_ID(LineManager, Circle4x4RightUp)

public:
    /**
     * @brief 16.0f
     * @par Address: 0x10001740
     */
    static f32 cUnitSizeX;

    /**
     * @brief 16.0f
     * @par Address: Deleted
     */
    static f32 cUnitSizeY;

protected:
    FStateMgr<LineManager>                  mStateMgr;
    sead::UnsafeArray<sead::Vector2f, 7>    _24;
    sead::Vector2f                          mSpeed;
    sead::Vector2f                          mPos;
    sead::Vector2f                          mPosPrev;
    sead::Vector2f                          mPosBlock;
    sead::Vector2f                          _7c;
    Angle                                   mAngle;
    f32                                     mBaseSpeed;
    bool                                    mStopAtEnd;
    u8                                      mLayer;
    bool                                    mDirLeft;
    bool                                    _8f;            // Set, but never read
};
static_assert(sizeof(LineManager) == 0x90, "LineManager size mismatch");
