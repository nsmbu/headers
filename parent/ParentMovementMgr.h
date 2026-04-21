#pragma once

#include <math/seadVector.h>
#include <state/FStateMgr.h>
#include <utility/Angle.h>

enum ParentMovementType
{
    cMovement_None,
    cMovement_PivotalRotation,
    cMovement_Bolt,
    cMovement_Path,
    cMovement_TwoWay,
    cMovement_Unknown,
    cMovement_BoltMushroom,
    cMovement_BoltMushroomNoBolt,
    cMovement_ShiftingPlatform,
    cMovement_Rotation,
    cMovement_RollingHill,
    cMovement_MushroomList
};

class ParentMovementMgr
{
public:
    // Address: 0x02849C40
    ParentMovementMgr();
    
    // Address: 0x0284B8C4
    void execute();
    // Address: 0x0284B6F4
    void link(const sead::Vector3f& position, u32 type_mask, u8 movement_id);
    // Address: 0x0284A37C
    u32 getMaskForMovementType(ParentMovementType movement_type);
    
    [[nodiscard]]
    const sead::Vector3f& getPosition() const
    {
        return mPosition;
    }
    
    [[nodiscard]]
    const Angle& getAngle() const
    {
        return mAngle;
    }
    
private:
    sead::Vector3f mPosition;
    sead::Vector3f _c;
    sead::Vector3f _18;
    sead::Vector3f _24;
    u32 _30;
    u32 _34;
    u32 _38;
    u32 _3c;
    u32 _40;
    u32 _44;
    u32 mTypeMask;
    u8 mMovementID;
    Angle mAngle;
    u8 _54;
    f32 _58;
    u8 _5c[0x74 - 0x5C];
    u32 _74;
    u32 _78;
    u32 _7c;
    u32 _80;
    u8 _84;
    u8 _85;
    u8 _86;
    u8 _87;
    u8 _88;
    u8 _89;
    u32 _8c;
    f32 _90;
    u32 _94;
    u8 _98[0xA0 - 0x98];
    u32 _a0;
    u32 _a4;
    u32 _a8;
    u32 _ac;
    u32 _b0;
    u32 _b4;
    u32 _b8;
    u32 _bc;
    u8 _c0[0xD4 - 0xC0];
    FStateMgr<ParentMovementMgr> mStateMgr;
};
static_assert(sizeof(ParentMovementMgr) == 0xF8, "ParentMovementMgr size mismatch");
