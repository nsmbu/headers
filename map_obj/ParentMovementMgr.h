#pragma once

#include <actor/ActorUniqueID.h>
#include <state/FStateMgr.h>
#include <utility/Angle.h>
#include <utility/Direction.h>

#include <math/seadVector.h>

enum ParentMovementType
{
    cPos_None                       = 0,
    cPos_CenterRotation             = 1,    // Pivotal Rotation
    cPos_Screw                      = 2,    // Bolt
    cPos_Rail                       = 3,    // Path
    cPos_GoAndCome                  = 4,    // Two Way
    //
    cPos_ScrewKinokoLift            = 6,    // Bolt Mushroom Lift
    cPos_ScrewKinokoLift_NoScrew    = 7,    // Bolt Mushroom Lift - No Bolt
    cPos_ShiftingPlatform           = 8,    // Shifting Rectangle Platform
    cPos_Gyration                   = 9,    // Spinning
    cPos_FloorGyration              = 10,   // Rolling Hill
    cPos_KinokoLift                 = 11,   // Mushroom Lift
};

enum RectPlatformInfo : u32
{
    cRectPlatformInfo_FollowTop     = 0,
    cRectPlatformInfo_FollowBottom  = 1,
    cRectPlatformInfo_FollowNone    = 2,
};

class ParentMovementMgr
{
public:
    struct MovementProperties
    {
        u32 _0;
        u32 _4;
        u32 _8;
        u32 _c;
        f32 hill_distance_offset;
    };
    static_assert(sizeof(MovementProperties) == 0x14, "ParentMovementMgr::MovementProperties size mismatch");

    struct PivotalRotationSettings
    {
        sead::Vector3f  position;
        u32             movement_mask;
        u8              movement_id;
        sead::Vector3f  pivot_center;
        bool            tilted;
        bool            _21;
        bool            upside_down;
        u32             movement_param;
        bool            gyroscopic;
    };
    static_assert(sizeof(PivotalRotationSettings) == 0x2C, "ParentMovementMgr::PivotalRotationSettings size mismatch");

public:
    ParentMovementMgr();

    /**
     * @brief Links to movement controllers with the matching movement id and type mask.
     * @warning Use linkPivotal or linkPivotal2 when using pivotal-rotation or else it will bug out.
     */
    void link(const sead::Vector3f& position, u32 type_mask, u8 movement_id);
    void execute();
    u32 getTypeMask(ParentMovementType type);
    /**
     * @brief Links to movement controllers with the matching movement id and type mask.
     * @note Cannot be used to make it gyroscopic.
     * @par Address: 0x0284B824
     */
    void linkPivotal(const sead::Vector3f& position, u32 movement_mask, s8 movement_id, const sead::Vector3f& pivot_center = sead::Vector3f(0.0f, 0.0f, 0.0f), bool tilted = false, bool unk_8 = false, bool upside_down = false, bool movement_param = true);
    // Address: 0x0284B7C8
    void linkPivotal2(PivotalRotationSettings pivot_settings);

    DECLARE_STATE_ID(ParentMovementType, Search);
    DECLARE_STATE_ID(ParentMovementType, Move);

    const sead::Vector3f& getPosition() const
    {
        return mPosition;
    }

    ActorUniqueID getParentActorID() const
    {
        return mParentActorID;
    }

    Angle getAngle() const
    {
        return mAngle;
    }

    u8 getMovementID() const
    {
        return mMovementId;
    }

    f32 getTwoWayDistanceMultiplier() const
    {
        return mTwoWayDistanceMultiplier;
    }

    Angle getFloorGyrationAngle() const
    {
        return mFloorGyrationAngle;
    }

    f32 getBoltSpeed() const
    {
        return mBoltSpeed;
    }

    DirType getBoltDirection() const
    {
        return mBoltDirection;
    }

    RectPlatformInfo getRectPlatformInfo() const
    {
        return mRectPlatformInfo;
    }

    MovementProperties getMovementProperties() const
    {
        return mMovementProperties;
    }

    bool getPivotalUpsideDown() const
    {
        return mPivotalUpsideDown;
    }

    bool getPivotalTilted() const
    {
        return mPivotalTilted;
    }

    bool getPivotalUnknown() const
    {
        return mPivotalUnknown;
    }

    bool getPivotalGyroscopic() const
    {
        return mPivotalGyroscopic;
    }

    void setAngle(Angle angle) 
    {
        mAngle = angle;
    }

    void setTwoWayDistanceMultiplier(f32 multiplier) 
    {
        mTwoWayDistanceMultiplier = multiplier;
    }

    void setFloorGyrationAngle(Angle angle) 
    {
        mFloorGyrationAngle = angle;
    }

    void setBoltSpeed(f32 speed) 
    {
        mBoltSpeed = speed;
    }

    void setBoltDirection(DirType direction) 
    {
        mBoltDirection = direction;
    }

    void setRectPlatformInfo(RectPlatformInfo info) 
    {
        mRectPlatformInfo = info;
    }

    void setMovementProperties(const MovementProperties& properties) 
    {
        mMovementProperties = properties;
    }

    void setPivotalUpsideDown(bool pivotal_upside_down)
    {
        mPivotalUpsideDown = pivotal_upside_down;
    }

    void setPivotalTilted(bool pivotal_tilted)
    {
        mPivotalTilted = pivotal_tilted;
    }

    void setPivotalUnknown(bool pivotal_unknown)
    {
        mPivotalUnknown = pivotal_unknown;
    }

    void setPivotalGyroscopic(bool pivotal_gyroscopic)
    {
        mPivotalGyroscopic = pivotal_gyroscopic;
    }

private:
    sead::Vector3f   mPosition;
    sead::Vector3f   _c;
    sead::Vector3f   _18;
    sead::Vector3f   mPivotCenter;
    u32              _30;
    u32              _34;
    ActorUniqueID    mParentActorID;
    u32              _3c;
    u32              _40;
    u32              _44;
    u32              mTypeMask;
    u8               mMovementId;
    Angle            mAngle;
    u8               _54;
    f32              mTwoWayDistanceMultiplier;
    u8               _5c[0x74-0x5C];
    Angle            mFloorGyrationAngle;
    u32              _78;
    u32              _7c;
    u32              _80;
    bool             mPivotalUpsideDown;
    bool             mPivotalTilted;
    bool             mPivotalUnknown;
    bool             mPivotalGyroscopic;
    u8               _88;
    u8               _89;
    u32              _8c;
    DirType          mBoltDirection;
    f32              mBoltSpeed;
    RectPlatformInfo mRectPlatformInfo;
    u32              _9c;
    u32              _a0;
    u32              _a4;
    u32              _a8;
    u32              _ac;
    u32              _b0;
    u32              _b4;
    u32              _b8;
    u32              _bc;
    MovementProperties mMovementProperties;
    FStateMgr<ParentMovementMgr> mFStateMgr;
};
static_assert(sizeof(ParentMovementMgr) == 0xF8, "ParentMovementMgr size mismatch");
