#pragma once

#include <prim/seadSafeString.h>
#include <container/seadSafeArray.h>

class CourseSelectPathPoint
{
public:
    enum AttributeFlag : u32
    {
        cAttributeFlag_Stop     = 1 << 0,
        cAttributeFlag_Link1    = 1 << 1,
        cAttributeFlag_Link2    = 1 << 2,
        cAttributeFlag_Link3    = 1 << 3,
        cAttributeFlag_Link4    = 1 << 4,
        cAttributeFlag_Link5    = 1 << 5,
        cAttributeFlag_Scale    = 1 << 6,
        cAttributeFlag_FixX     = 1 << 7,
        cAttributeFlag_FixY     = 1 << 8,
        cAttributeFlag_FixZ     = 1 << 9,
        cAttributeFlag_Focus    = 1 << 10,
        cAttributeFlag_Board1   = 1 << 11,
        cAttributeFlag_Shuffle  = 1 << 12,
        cAttributeFlag_Slot     = 1 << 13,
        cAttributeFlag_1Up      = 1 << 14,
        cAttributeFlag_NonStop  = 1 << 15,
        cAttributeFlag_OneStop  = 1 << 16,
        cAttributeFlag_Merge    = 1 << 17,
    };

    enum EnemyFlag : u32
    {
        cEnemyFlag_W1PakkunA    = 1 << 0,
        cEnemyFlag_W1PakkunB    = 1 << 1,
        cEnemyFlag_W1Item       = 1 << 2,
        cEnemyFlag_W2Enemy0     = 1 << 3,
        cEnemyFlag_W2Enemy1     = 1 << 4,
        cEnemyFlag_W2EnemyA     = 1 << 5,
        cEnemyFlag_W2EnemyB     = 1 << 6,
        cEnemyFlag_W2EnemyC     = 1 << 7,
        cEnemyFlag_W2Maze       = 1 << 8,
        cEnemyFlag_W3EnemyA     = 1 << 9,
        cEnemyFlag_W3EnemyB     = 1 << 10,
        cEnemyFlag_W4EnemyA     = 1 << 11,
        cEnemyFlag_W4EnemyB     = 1 << 12,
        cEnemyFlag_W4EnemyC     = 1 << 13,
        cEnemyFlag_W4EnemyD     = 1 << 14,
        cEnemyFlag_W4Circle     = 1 << 15,
        cEnemyFlag_ChorobonA    = 1 << 16,
        cEnemyFlag_ChorobonB    = 1 << 17,
        cEnemyFlag_ChorobonC    = 1 << 18,
        cEnemyFlag_W5bEnemy1    = 1 << 19,
        cEnemyFlag_W5bEnemy2    = 1 << 20,
        cEnemyFlag_W5bEnemy3    = 1 << 21,
        cEnemyFlag_W5bEnemy4    = 1 << 22,
        cEnemyFlag_W5bEnemy5    = 1 << 23,
        cEnemyFlag_W5bEnemy6    = 1 << 24,
        cEnemyFlag_W5bEnemy7    = 1 << 25,
        cEnemyFlag_W5bDemo      = 1 << 26,
        cEnemyFlag_W5bPreDemo   = 1 << 27,
        cEnemyFlag_W5Teresa     = 1 << 28,
        cEnemyFlag_NoUi         = 1 << 29,
        cEnemyFlag_Restart      = 1 << 30,
    };

    enum TrapFlag : u32
    {
        cTrapFlag_W3TrapA       = 1 << 0,
        cTrapFlag_W3TrapB       = 1 << 1,
        cTrapFlag_W4TrapA       = 1 << 2,
        cTrapFlag_W4TrapB       = 1 << 3,
        cTrapFlag_W6TrapA       = 1 << 4,
        cTrapFlag_W6TrapB       = 1 << 5,
        cTrapFlag_KanketsusenA  = 1 << 6,
        cTrapFlag_KanketsusenB  = 1 << 7,
        cTrapFlag_KanketsusenD  = 1 << 8,
        cTrapFlag_KanketsusenE  = 1 << 9,
        cTrapFlag_Dokan         = 1 << 10,
        cTrapFlag_Dokan2        = 1 << 11,
        cTrapFlag_RainbowA      = 1 << 12,
        cTrapFlag_RainbowB      = 1 << 13,
        cTrapFlag_RainbowC      = 1 << 14,
        cTrapFlag_RainbowD      = 1 << 15,
        cTrapFlag_Clear         = 1 << 16,
        cTrapFlag_SwitchA       = 1 << 17,
        cTrapFlag_SwitchB       = 1 << 18,
        cTrapFlag_ShipKoopaJr01 = 1 << 19,
        cTrapFlag_ShipKoopaJr02 = 1 << 20,
        cTrapFlag_ShipKoopaJr03 = 1 << 21,
        cTrapFlag_ShipKoopaJr04 = 1 << 22,
        cTrapFlag_W8Koopa01     = 1 << 23,
        cTrapFlag_W8Koopa02     = 1 << 24,
        cTrapFlag_W8Koopa03     = 1 << 25,
        cTrapFlag_Egg           = 1 << 26,
        cTrapFlag_W7Demo        = 1 << 27,
        cTrapFlag_W7PreDemo     = 1 << 28,
        cTrapFlag_W7DemoEnd     = 1 << 29,
        cTrapFlag_W7Return      = 1 << 30,
        cTrapFlag_DokanW8       = 1U << 31,
    };

    enum PlacementFlag : u32
    {
        cPlacementFlag_Boarding     = 1 << 0,
        cPlacementFlag_Station      = 1 << 1,
        cPlacementFlag_Coaster      = 1 << 2,
        cPlacementFlag_ShadowDemo   = 1 << 3,
        cPlacementFlag_ShadowRoute  = 1 << 4,
        cPlacementFlag_KoopaJr01    = 1 << 5,
        cPlacementFlag_W1Item       = 1 << 6,
        cPlacementFlag_Balloon1     = 1 << 7,
        cPlacementFlag_Balloon2     = 1 << 8,
        cPlacementFlag_Bubble1      = 1 << 9,
        cPlacementFlag_Bubble2      = 1 << 10,
        cPlacementFlag_Water        = 1 << 11,
    };

public:
    const sead::SafeString& getName() const
    {
        return mName;
    }

    const sead::SafeString& getNextPoint(u32 idx) const
    {
        return mNextPoint[idx];
    }

    const sead::SafeString& getNextPointSecret(u32 idx) const
    {
        return mNextPointSecret[idx];
    }

    AttributeFlag getAttributeFlag() const
    {
        return mAttributeFlag;
    }

    EnemyFlag getEnemyFlag() const
    {
        return mEnemyFlag;
    }

    TrapFlag getTrapFlag() const
    {
        return mTrapFlag;
    }

    PlacementFlag getPlacementFlag() const
    {
        return mPlacementFlag;
    }
    
protected:
    sead::FixedSafeString<5> mName;
    sead::SafeArray<sead::FixedSafeString<5>, 4> mNextPoint;
    sead::SafeArray<sead::FixedSafeString<5>, 4> mNextPointSecret;
    sead::SafeArray<sead::FixedSafeString<10>, 16> _b4;
    sead::SafeArray<sead::FixedSafeString<10>, 16> _234;
    sead::SafeArray<sead::FixedSafeString<10>, 2> _3b4;
    sead::SafeArray<sead::FixedSafeString<10>, 2> _3e4;
    u32 _414;
    u32 _418;
    u32 _41c;
    u32 _420;
    u32 _424;
    u32 _428;
    AttributeFlag mAttributeFlag;
    EnemyFlag mEnemyFlag;
    TrapFlag mTrapFlag;
    u32 _438;
    PlacementFlag mPlacementFlag;
    u32 _440;
    u32 _444;
};
static_assert(sizeof(CourseSelectPathPoint) == 0x448, "CourseSelectPathPoint size mismatch");
