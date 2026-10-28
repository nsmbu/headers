#pragma once

#include <math/seadVector.h>
#include <heap/seadDisposer.h>
#include <map_obj/ActorBlockBase.h>
#include <collision/BgUnitCode.h>

struct BlockState
{
    sead::Vector3f                  position;
    ActorBlockBase::ObjBlockInfo    state;
    u16                             area_no;
    u8                              _12[2];
};
static_assert(sizeof(BlockState) == 0x14, "BlockState size mismatch");

class BlockMgr
{
    // createInstance() Address: 0x0270B65C
    // deleteInstance() Address: 0x0270D608
    // sInstance        Address: 0x101DB964
    SEAD_SINGLETON_DISPOSER(BlockMgr);

public:
    struct BlockBreakCheckInfo
    {
        sead::Vector2f          position;
        u32                     fragment_type;
        u32                     _c;
        s8                      sensor_id;
        s8                      player_no;
        s8                      player_type;
        u8                      _13;
        ActorBgCollisionCheck*  collision_check;
    };
    static_assert(sizeof(BlockBreakCheckInfo) == 0x18, "BlockBreakCheckInfo size mismatch");

    /**
     * @brief Content enum for cType_BreakBlock units.
     * @details Bit shift the unit 10 right and mask 0xF to get this.
     */
    enum RengaContent
    {
        cRengaContent_Empty            = 0,
        cRengaContent_Coin             = 1,
        cRengaContent_MultiCoin        = 2,
        cRengaContent_FireFlower       = 3,
        cRengaContent_Star             = 4,
        cRengaContent_1UP              = 5,
        cRengaContent_Vine             = 6,
        cRengaContent_MiniMushroom     = 7,
        cRengaContent_Propeller        = 8,
        cRengaContent_Penguin          = 9,
        cRengaContent_Yoshi            = 10,
        cRengaContent_IceFlower        = 11,
        cRengaContent_None             = 12, // Used by Pa0 Object #83
        cRengaContent_SquirrelMushroom = 13,
        cRengaContent_Num              = 14,
    };

    /**
     * @brief Content enum for cType_Q_Block units.
     * @details Bit shift the unit 10 right and mask 0xF to get this.
     */
    enum HatenaContent
    {
        cHatenaContent_Coin             = 0,
        cHatenaContent_FireFlower       = 1,
        cHatenaContent_Star             = 2,
        cHatenaContent_ContinuousStar   = 3,
        cHatenaContent_Vine             = 4,
        cHatenaContent_Spring           = 5,
        cHatenaContent_MiniMushroom     = 6,
        cHatenaContent_Propeller        = 7,
        cHatenaContent_Penguin          = 8,
        cHatenaContent_Yoshi            = 9,
        cHatenaContent_IceFlower        = 10,
        cHatenaContent_SquirrelMushroom = 11,
        cHatenaContent_Num              = 12,
    };

    struct BlockCreateInfo
    {
        sead::Vector2f          position;
        union
        {
            u32           index;
            RengaContent  renga; // cType_BreakBlock
            HatenaContent hatena; // cType_Q_Block
        } content;
        s8                      sensor_id;
        union
        {
            bool    player_breaks_bricks;
            u8      _d;
        };
        s8                      player_no;
        s8                      player_type;
        ActorBgCollisionCheck*  collision_check;
    };
    static_assert(sizeof(BlockCreateInfo) == 0x14, "BlockCreateInfo size mismatch");

    struct BlockBreakActorCreateInfo
    {
        sead::Vector2f  position;
        u8              destroy_direction;
        u8              state_type;
        u8              _a;
        s8              player_no;
        u16             fragment_idx;
    };
    static_assert(sizeof(BlockBreakActorCreateInfo) == 0x10, "BlockBreakActorCreateInfo size mismatch");

    struct BlockBreakEffectCreateInfo
    {
        sead::Vector2f  position;
        u8              destroy_direction;
        s8              player_no;
        u16             fragment_idx;
    };
    static_assert(sizeof(BlockBreakEffectCreateInfo) == 0xC, "BlockBreakEffectCreateInfo size mismatch");   

    struct ItemCreateDirInfo
    {
        f32 _0;
        f32 _4;
        u8  _8;
        u8  _9;
    };
    static_assert(sizeof(ItemCreateDirInfo) == 0xC, "ItemCreateDirInfo size mismatch");   

    // Address: 0x1010280C
    static const u16 cQuestionItemNo[18];
    // Address: 0x10102830
    static const u16 cRengaItemNo[18];
    // Address: 0x10102854
    static const u16 cClarityItemNo[18];
    // Address: 0x10102804
    static const u16 cBreakBlockColorType[4];

public:
    // Address: 0x0270B90C
    void brokenBlockActorCreate(BlockBreakActorCreateInfo& info, bool no_add_score);
    // Address: 0x0270C61C
    void brokenBlockEffectCreate(BlockBreakEffectCreateInfo& info, bool no_play_sound, bool no_add_score);
    // Address: 0x0270C798
    void blockBreakCheck(BlockBreakCheckInfo& info);
    
    // Address: 0x0270C18C
    void checkDrcTouchBlockCreate(sead::Vector2f& pos);
    // Address: 0x0270BBB4
    void DrcTouchBlockCreate(sead::Vector2f& pos);
    // Address: 0x0270C9D0
    bool blockCreate(BlockCreateInfo& create_info);

    // Address: 0x0270D2F4
    ActorBlockBase::ObjBlockInfo getObjBlockInfo(sead::Vector3f& pos, u32 area_no);

    // Address: 0x0270D294
    void executeTenCoin();
    // Address: 0x0270B7EC
    ActorBlockBase::ObjBlockInfo checkTenCoin(sead::Vector3f& pos);

    // Address: 0x0270D420
    void setObjBlockInfo(sead::Vector3f& pos, ActorBlockBase::ObjBlockInfo block_info, u32 area_no);
    // Address: 0x0270B6E0
    ActorBlockBase::Type blockPanelTypeNoChenge(u16 unit);

    // Address: 0x0270C3B4
    bool setblockBreakEffect(sead::Vector3f& pos);
    // Address: 0x0270D130
    void chikuwaCreateSet(const sead::Vector2f& pos);
    // Address: 0x0270D24C
    u32 chengeItemFromCoin(u32, BlockCoinBase::Content content); // TODO: Rename BlockCoinBase::Content to BlockInItem
    // Address: 0x0270B89C
    void createTouchBlockBreakCoin(sead::Vector3f& pos);
    // Address: 0x0270BB28
    void getYossyCount();
    // Address: 0x0270C2F0
    bool itemDirCheck(const ItemCreateDirInfo* dir_info);
    // Address: 0x0270D4A0
    void createCommonYoshiEgg(sead::Vector3f& pos, u32, u32, signed char, u32);
    // Address: 0x0270D5FC
    void createYoshiEgg(sead::Vector3f& pos, u32, u32, signed char);
    // Address: 0x0270D604
    void createSanboEatYoshiEgg(sead::Vector3f& pos, u32, u32, signed char, u32);

protected:
    u8         _0[101][16];
    BlockState mBlockState[3001];
    u32        _f0d4; // Used to call it mArr1Count
    u32        mBlockStateCount;
};
static_assert(sizeof(BlockMgr) == 0xF0DC, "BlockMgr size mismatch");
