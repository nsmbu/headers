#pragma once

#include <state/FStateMgr.h>
#include <utility/Angle.h>
#include <utility/Direction.h>

#include <container/seadSafeArray.h>
#include <math/seadVector.h>

class LineMgr
{
public:
    enum Type
    {
        cType_ReverseAtEnd = 0, // i.e., Two-way
        cType_StopAtEnd         // i.e., One-way
    };

public:
    // Address: 0x0200DC14
    LineMgr();

    // Address: 0x0200DF60
    void init(const sead::Vector2f& pos, u8 layer, f32 base_speed = 0.0f, Type type = cType_ReverseAtEnd, u8 dir_x = cDirType_Right);

    // Address: 0x0200E0C0
    void setBaseSpeed(f32 speed);

    // Address: 0x0200E178
    void startLineMove(bool exec_fall_down = false);

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

public:
    // StateID_FallDown                 Address: 0x101ECA8C
    // initializeState_FallDown         Address: 0x0201371C
    // executeState_FallDown            Address: 0x02013730
    // finalizeState_FallDown           Address: 0x020170F4
    DECLARE_STATE_ID(LineMgr, FallDown)
    // StateID_Left45			        Address: 0x101ECAAC
    // initializeState_Left45	        Address: 0x020137B4
    // executeState_Left45		        Address: 0x02013800
    // finalizeState_Left45		        Address: 0x020170F8
    DECLARE_STATE_ID(LineMgr, Left45)
    // StateID_Right45			        Address: 0x101ECACC
    // initializeState_Right45	        Address: 0x02013960
    // executeState_Right45		        Address: 0x020139A0
    // finalizeState_Right45	        Address: 0x020170FC
    DECLARE_STATE_ID(LineMgr, Right45)
    //StateID_Side				        Address: 0x101ECAEC
    //initializeState_Side		        Address: 0x02013AE0
    //executeState_Side			        Address: 0x02013B1C
    //finalizeState_Side		        Address: 0x02017100
    DECLARE_STATE_ID(LineMgr, Side)
    //StateID_Height			        Address: 0x101ECB0C
    //initializeState_Height	        Address: 0x02013CE0
    //executeState_Height	            Address: 0x02013D1C
    //finalizeState_Height		        Address: 0x02017104
    DECLARE_STATE_ID(LineMgr, Height)
    //StateID_CornerHeightLine		    Address: 0x101ECB2C
    //initializeState_CornerHeightLine	Address: 0x02013E30
    //executeState_CornerHeightLine		Address: 0x02013E6C
    //finalizeState_CornerHeightLine    Address: 0x02017108
    DECLARE_STATE_ID(LineMgr, CornerHeightLine)
    // StateID_Left30Left               Address: 0x101ECB6C
    // initializeState_Left30Left       Address: 0x020140DC
    // executeState_Left30Left          Address: 0x0201413C
    // finalizeState_Left30Left         Address: 0x02017110
    DECLARE_STATE_ID(LineMgr, Left30Left)
    // StateID_Left30Right              Address: 0x101ECB8C
    // initializeState_Left30Right      Address: 0x0201438C
    // executeState_Left30Right         Address: 0x020143EC
    // finalizeState_Left30Right        Address: 0x02017114
    DECLARE_STATE_ID(LineMgr, Left30Right)
    // StateID_Right30Left              Address: 0x101ECBAC
    // initializeState_Right30Left      Address: 0x02014610
    // executeState_Right30Left         Address: 0x02014668
    // finalizeState_Right30Left        Address: 0x02017118
    DECLARE_STATE_ID(LineMgr, Right30Left)
    // StateID_Right30Right             Address: 0x101ECBCC
    // initializeState_Right30Right     Address: 0x02014894
    // executeState_Right30Right        Address: 0x020148EC
    // finalizeState_Right30Right       Address: 0x0201711C
    DECLARE_STATE_ID(LineMgr, Right30Right)
    // StateID_Left60Up                 Address: 0x101ECBEC
    // initializeState_Left60Up         Address: 0x02014B20
    // executeState_Left60Up            Address: 0x02014B80
    // finalizeState_Left60Up           Address: 0x02017120
    DECLARE_STATE_ID(LineMgr, Left60Up)
    // StateID_Left60Down               Address: 0x101ECC0C
    // initializeState_Left60Down       Address: 0x02014DE0
    // executeState_Left60Down          Address: 0x02014E40
    // finalizeState_Left60Down         Address: 0x02017124
    DECLARE_STATE_ID(LineMgr, Left60Down)
    // StateID_Right60Down              Address: 0x101ECC2C
    // initializeState_Right60Down      Address: 0x02015074
    // executeState_Right60Down         Address: 0x020150D4
    // finalizeState_Right60Down        Address: 0x02017128
    DECLARE_STATE_ID(LineMgr, Right60Down)
    // StateID_Right60Up                Address: 0x101ECC4C
    // initializeState_Right60Up        Address: 0x02015314
    // executeState_Right60Up           Address: 0x0201536C
    // finalizeState_Right60Up          Address: 0x0201712C
    DECLARE_STATE_ID(LineMgr, Right60Up)
    // StateID_Circle                   Address: 0x101ECC6C
    // initializeState_Circle           Address: 0x0201559C
    // executeState_Circle              Address: 0x020155D8
    // finalizeState_Circle             Address: 0x02017130
    DECLARE_STATE_ID(LineMgr, Circle)
    // StateID_Circle2x2LeftUp          Address: 0x101ECC8C
    // initializeState_Circle2x2LeftUp  Address: 0x02015668
    // executeState_Circle2x2LeftUp     Address: 0x020156A4
    // finalizeState_Circle2x2LeftUp    Address: 0x02017134
    DECLARE_STATE_ID(LineMgr, Circle2x2LeftUp)
    // StateID_Circle2x2RightUp         Address: 0x101ECCAC
    // initializeState_Circle2x2RightUp Address: 0x020156B8
    // executeState_Circle2x2RightUp    Address: 0x020156FC
    // finalizeState_Circle2x2RightUp   Address: 0x02017138
    DECLARE_STATE_ID(LineMgr, Circle2x2RightUp)
    // StateID_Circle2x2LeftDown        Address: 0x101ECCCC
    // initializeState_LeftDown         Address: 0x02015710
    // executeState_LeftDown            Address: 0x0201574C
    // finalizeState_LeftDown           Address: 0x0201713C
    DECLARE_STATE_ID(LineMgr, Circle2x2LeftDown)
    // StateID_Circle2x2RightDown       Address: 0x101ECCEC
    // initializeState_RightDown        Address: 0x02015760
    // executeState_RightDown           Address: 0x0201579C
    // finalizeState_RightDown          Address: 0x02017140
    DECLARE_STATE_ID(LineMgr, Circle2x2RightDown)
    // StateID_Circle4x4RightUp         Address: 0x101ECD0C
    // initializeState_Circle4x4RightUp Address: 0x020157B0
    // executeState_Circle4x4RightUp    Address: 0x020157F4
    // finalizeState_Circle4x4RightUp   Address: 0x02017144
    DECLARE_STATE_ID(LineMgr, Circle4x4RightUp)

protected:
    FStateMgr<LineMgr>                      mStateMgr;
    sead::UnsafeArray<sead::Vector2f, 7>    _24;
    sead::Vector2f                          mSpeed;
    sead::Vector2f                          mPos;
    sead::Vector2f                          mPosPrev;
    sead::Vector2f                          mPosBlock;
    sead::Vector2f                          _7c;
    Angle                                   mAngle;
    f32                                     mBaseSpeed;
    u8                                      mType;          // See Type
    u8                                      mLayer;
    u8                                      mDir;
    bool                                    _8f;            // Set, but never read
};
static_assert(sizeof(LineMgr) == 0x90);
