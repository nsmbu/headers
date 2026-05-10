#pragma once

#include <heap/seadDisposer.h>
#include <thread/seadDelegateThread.h>
#include <nn/ffl.h>

struct SaveData
{
    struct Header
    {
        u32 magic;
        u8  version_major;
        u8  version_minor;
        u8  version_patch;
        u8  last_file;
        u8  rdash_state;    // 1 -> The game has notified you about the NSLU DLC.
        u8  button_setup;   // AB/XY & AX/BY setup
        u8  padding[2];
        u32 crc32;
    };
    static_assert(sizeof(Header) == 0x10, "SaveData::Header size mismatch");
    
    struct CSLocation
    {
        u8 world;       // 0-indexed
        u8 subworld;    // Per-world worldmap sections. Used for W5 Haunted section, W8 and W9.
        u8 node;        // 0-indexed, does not follow the visible order of paths in-game at all.
    };
    static_assert(sizeof(CSLocation) == 0x3, "SaveData::CSLocation size mismatch");
    
    enum class WorldCompletionFlag : u16
    {
        cWorldCompletionFlag_Opening = 1 << 0,
        cWorldCompletionFlag_1       = 1 << 1,
        cWorldCompletionFlag_2       = 1 << 2,
        cWorldCompletionFlag_3       = 1 << 3,
        cWorldCompletionFlag_4       = 1 << 4,
        cWorldCompletionFlag_5       = 1 << 5,
        cWorldCompletionFlag_6       = 1 << 6,
        cWorldCompletionFlag_7       = 1 << 7,
        cWorldCompletionFlag_8       = 1 << 8,
        
        cWorldCompletionFlag_All = (cWorldCompletionFlag_Opening | cWorldCompletionFlag_1 | cWorldCompletionFlag_2 | cWorldCompletionFlag_3 | cWorldCompletionFlag_4 | cWorldCompletionFlag_5 | cWorldCompletionFlag_6 | cWorldCompletionFlag_7 | cWorldCompletionFlag_8)
    };
    static_assert(sizeof(WorldCompletionFlag) == 0x2, "SaveData::WorldCompletionFlag size mismatch");
    
    enum class GameCompletionFlag : u8
    {
        cGameCompletionFlag_Unknown1     = 1 << 0,
        cGameCompletionFlag_AllLevels    = 1 << 1,
        cGameCompletionFlag_Unknown2     = 1 << 2,
        cGameCompletionFlag_AllStarCoins = 1 << 3,
        cGameCompletionFlag_AllExits     = 1 << 4
    };
    static_assert(sizeof(GameCompletionFlag) == 0x1, "SaveData::GameCompletionFlag size mismatch");
    
    enum class ChibiYoshiAvailableFlag : u8
    {
        cChibiYoshiAvailableFlag_World1 = 1 << 0,
        cChibiYoshiAvailableFlag_World3 = 1 << 1,
        cChibiYoshiAvailableFlag_World4 = 1 << 2,
        cChibiYoshiAvailableFlag_World6 = 1 << 3,
        cChibiYoshiAvailableFlag_All    = (cChibiYoshiAvailableFlag_World1 | cChibiYoshiAvailableFlag_World3 | cChibiYoshiAvailableFlag_World4 | cChibiYoshiAvailableFlag_World6)
    };
    static_assert(sizeof(ChibiYoshiAvailableFlag) == 0x1, "SaveData::ChibiYoshiAvailableFlag size mismatch");
    
    enum class ActiveChibiYoshi : u8
    {
        cActiveChibiYoshi_World1,
        cActiveChibiYoshi_World3,
        cActiveChibiYoshi_World4,
        cActiveChibiYoshi_World6,
        cActiveChibiYoshi_None
    };
    static_assert(sizeof(ActiveChibiYoshi) == 0x1, "SaveData::ActiveChibiYoshi size mismatch");
    
    enum class LevelCompletionFlag : u8 // TODO: More research, not all values are here, some are incomplete
    {
        cLevelCompletionFlag_Locked                      = 0x0,
        cLevelCompletionFlag_Unlocked                    = 0x1,
        cLevelCompletionFlag_PlayedOnce                  = 0x2,
        cLevelCompletionFlag_ForeverUnlockedToadHouse    = 0x3,
        cLevelCompletionFlag_AmbushCleared               = 0x42,
        cLevelCompletionFlag_ClearedOrUsedToadHouse      = 0x43,
        cLevelCompletionFlag_ClearedOrSecretExitCleared  = 0xC3,
    };
    static_assert(sizeof(LevelCompletionFlag) == 0x1, "SaveData::LevelCompletionFlag size mismatch");
    
    struct LevelStatData
    {
        LevelCompletionFlag completion_flag[123];
        u8 death_counter[62];
    };
    static_assert(sizeof(LevelStatData) == 0xB9, "SaveData::LevelStatData size mismatch");
    
    enum class LevelStarCoinFlag : u8 // TODO: More research, not all values are here
    {
        cLevelStarCoinFlag_None = 0x0,
        cLevelStarCoinFlag_All  = 0x77
    };
    static_assert(sizeof(LevelStarCoinFlag) == 0x1, "SaveData::LevelStarCoinFlag size mismatch");
    
    enum class InventoryItem : u8 //? The missing 0x4 entry is not a mistake, it doesn't seem to be anything.
    {
        cInventoryItem_Mushroom   = 0x0,
        cInventoryItem_FireFlower = 0x1,
        cInventoryItem_SuperStar  = 0x2,
        cInventoryItem_IceFlower  = 0x3,
        cInventoryItem_Propeller  = 0x5,
        cInventoryItem_Mini       = 0x6,
        cInventoryItem_Penguin    = 0x7,
        cInventoryItem_Acorn      = 0x8,
        cInventoryItem_PAcorn     = 0x9,
        cInventoryItem_None       = 0xE
    };
    static_assert(sizeof(InventoryItem) == 0x1, "SaveData::InventoryItem size mismatch");
    
    struct AmbushEnemy
    {
        CSLocation location;
        u8 _3;
        u8 _4;
    };
    static_assert(sizeof(AmbushEnemy) == 0x5, "SaveData::AmbushEnemy size mismatch");
    
    struct AmbushData
    {
        AmbushEnemy world_1[2];
        AmbushEnemy world_2[3];
        AmbushEnemy world_3[2];
        AmbushEnemy world_4[5];
        AmbushEnemy world_5[3];
        AmbushEnemy world_7[3];
        u8 _5a[18];
        u8 _6c;
    };
    static_assert(sizeof(AmbushData) == 0x6D, "SaveData::AmbushData size mismatch");
    
    struct Records
    {
        u32 coins_collected;
        u32 star_coins_collected;
        u32 goals_reached;
        u32 times_applauded;
        u32 boost_block_distance;
        u32 mini_boost_block_distance;
        u32 nabbits_caught;
        u32 goombas_stomped;
        u32 items_collected;
        u32 goals_reached_with_yoshi;
        u32 goals_reached_with_chibi_yoshi;
        u32 lives_earned_at_goal;
        u32 fireworks_at_goal;
        u32 life_moons_collected;
    };
    static_assert(sizeof(Records) == 0x38, "SaveData::Statistics size mismatch");
    
    struct SaveSlot
    {
        bool is_valid;
        u8 last_session_player_count;
        u8 num_coins;
        u8 cs_active_w6_switch;                // 0: Red Active, 1: Blue Active
        CSLocation cs_player_location;
        CSLocation cs_unknown_location;        // TODO: Unknown purpose
        u8 _a;
        u8 _b;
        u8 player_lives[4];                    // Order: Mario, Luigi, Blue Toad, Yellow Toad
        u8 player_character[4];                // TODO: Verify order
        u8 player_powerup[4];                  // Order: Mario, Luigi, Blue Toad, Yellow Toad. See PlayerBase::PlayerMode enum.
        u8 player_game_over[4];                // Order: Mario, Luigi, Blue Toad, Yellow Toad
        WorldCompletionFlag world_completion_flag;
        GameCompletionFlag game_completion_flag;
        u8 _1f;
        sead::Vector3f _20;
        u8 _2c;
        u8 _2d;
        u8 _2e;
        u8 _2f;
        u32 score;
        u8 _34[0x44 - 0x34];
        u16 credits_highscore;
        CSLocation cs_airship_location;
        u8 nabbit_world_id[2];
        u8 _4b;
        u8 _4c;
        u8 _4d;
        u8 _4e;                                 // chibiYoshiItem (?)
        u8 _4f;
        u8 _50;
        u8 _51;
        u8 _52;
        u8 _53;
        u8 _54;
        ChibiYoshiAvailableFlag cs_chibi_yoshi_flag;
        ActiveChibiYoshi active_chibi_yoshi;
        u8 _57;
        u8 _58;
        u8 _59;
        u8 balloon_chibi_yoshi_reappear_counter;
        u8 bubble_chibi_yoshi_reappear_counter;
        u8 ambush_item_reappear_counter[4];    // TODO: Map out order
        u8 ambush_items[4];                    // TODO: Figure out values, maybe PlayerMode but untested
        bool is_nabbit_in_world[7];
        LevelStatData level_stat;
        LevelStarCoinFlag level_star_coins[41];
        InventoryItem inventory[10];
        AmbushData ambush;
        Records records;
        u8 caught_nabbit_flags;               // TODO: Figure out flags
        u8 padding[3];
        u32 crc32;
    };
    static_assert(sizeof(SaveSlot) == 0x204, "SaveData::SaveSlot size mismatch");
    
    struct SaveSlots
    {
        SaveSlot nsmbu[3];
        SaveSlot nslu[3];
    };
    static_assert(sizeof(SaveSlots) == 0xC18, "SaveData::SaveSlots size mismatch");
    
    struct ChallengeReplay
    {
        bool is_valid;
        u8 completion_player;               // TODO: Check which player each value is
        u16 _2;
        FFLStoreData completion_mii;
        u32 high_score;
        u32 crc32;
    };
    static_assert(sizeof(ChallengeReplay) == 0x6C, "SaveData::ChallengeReplay size mismatch");
    
    struct ChallengeData
    {
        bool is_valid;
        u8 num_category_medals[5];          // TODO: Figure out categories
        u8 _6;
        u8 _7;
        ChallengeReplay replays[80];
        u8 _21c8[0x3608 - 0x21c8];
        u32 crc32;
    };
    static_assert(sizeof(ChallengeData) == 0x360C, "SaveData::ChallengeData size mismatch");
    
    struct BoostRushData
    {
        u8 _0;
        u8 _1;
        u8 _2;
        u8 _3;
        u32 high_scores[32];                 // Stored in hundredths of a second
        u8 _84[0xA4 - 0x84];
        u32 crc32;
    };
    static_assert(sizeof(BoostRushData) == 0xA8, "SaveData::BoostRushData size mismatch");
    
    struct CoinEditCoin
    {
        u8 file;
        u8 area;
        bool exists;
        u8 _3;
        struct
        {
            u16 x;
            u16 y;
        } pos;
    };
    static_assert(sizeof(CoinEditCoin) == 0x8, "SaveData::CoinEditCoin size mismatch");
    
    struct CoinEditStarCoin
    {
        u8 file;
        u8 area;
        u8 _2;                              // Possibly "bool exists;" like in CoinEditCoin?
        u8 _3;
        sead::Vector2f pos;
    };
    static_assert(sizeof(CoinEditStarCoin) == 0xC, "SaveData::CoinEditStarCoin size mismatch");
    
    struct CoinEditLevel
    {
        CoinEditCoin coins[300];
        CoinEditStarCoin star_coins[3];
    };
    static_assert(sizeof(CoinEditLevel) == 0x984, "SaveData::CoinEditLevel size mismatch");
    
    struct CoinEditData
    {
        CoinEditLevel levels[10];
        u8 unlocked_levels[12];
        u32 crc32;
    };
    static_assert(sizeof(CoinEditData) == 0x5F38, "SaveData::CoinEditData size mismatch");
    
    struct Statistics
    {
        u32 total_play_time;
        u32 story_play_time;
        u32 levels_played;
        u32 levels_played_1p;
        u32 levels_played_2p;
        u32 levels_played_3p;
        u32 levels_played_4p;
        u32 levels_played_special;
        u32 nabbits_chased;
        u32 super_guides; // TODO: Is this seen or used?
        u32 boost_rush_played;
        u32 boost_rush_played_1p;
        u32 boost_rush_played_2p;
        u32 boost_rush_played_3p;
        u32 boost_rush_played_4p;
        u32 boost_rush_played_special;
        u32 boost_rush_played_mii;
        u32 coin_battles_played;
        u32 coin_battles_played_1p;
        u32 coin_battles_played_2p;
        u32 coin_battles_played_3p;
        u32 coin_battles_played_4p;
        u32 coin_battles_played_special;
        u32 coin_battles_played_mii;
        u32 coin_edit_battles_played;
        u32 challenges_played;
        u32 challenges_retried; // includes both played and retries
        u32 challenge_replays_watched;
        u32 boost_mode_challenges_played;
        u32 nslu_levels_played;
        u32 _78;
        u32 _7c;
        u32 inventory_powerups_used;
        u8 story_reached_world;
        u8 story_star_coins_collected;
        bool _86;
        bool _87;
        u8 nslu_star_coins_collected;
        u8 nslu_reached_world;
        u8 challenge_gold_medals;
        u8 challenge_silver_medals;
        u8 challenge_bronze_medals;
        u8 boost_mode_challenges_completed;
        u8 padding[2];
        u32 crc32;
    };
    static_assert(sizeof(Statistics) == 0x94, "SaveData::Statistics size mismatch");
    
    struct [[gnu::packed, gnu::aligned(1)]] MiiData
    {
        u8 entry_num;
        FFLCreateID mii_ids[62];
        u8 padding[3];
        u32 crc32;
    };
    static_assert(sizeof(MiiData) == 0x274, "SaveData::MiiData size mismatch");
    
    Header header;
    SaveSlots main_slots;
    SaveSlots quick_save_slots;
    ChallengeData challenge;
    BoostRushData boost_rush;
    CoinEditData coin_edit;
    Statistics statistics;
    MiiData mii;
};
static_assert(sizeof(SaveData) == 0xB134, "SaveData size mismatch");

struct FFLStoreData;

class SaveMgr
{
    SEAD_SINGLETON_DISPOSER(SaveMgr)

public:
    enum Status
    {
        cStatus_Ready = 0,
        cStatus_Reading,
        cStatus_Writing
    };
    static_assert(sizeof(Status) == 4);

    enum ReadError
    {
        cReadError_OK                       = 0,
        cReadError_FileDeviceUnavailable    = 1,
        cReadError_FileUnavailable          = -1,
        cReadError_FileInvalid              = -2
    };
    static_assert(sizeof(ReadError) == 4);

    enum WriteError
    {
        cWriteError_OK                      = 0,
        cWriteError_FileDeviceUnavailable   = -1,
        cWriteError_FileWriteFailed         = -2
    };
    static_assert(sizeof(WriteError) == 4);

public:
    SaveMgr();
    virtual ~SaveMgr();

    bool isSaving() const
    {
        return mStatus == cStatus_Writing || _30 != -1;
    }

    bool isSavingDone() const
    {
        return mStatus != cStatus_Writing;
    }

    const FFLStoreData& getStoreData(s32 index) const;

    void startSaveGame(u8 file);
    void startQuickSaveGame(u8 file);

    void startSaveGame()
    {
        startSaveGame(mSavedata->header.last_file);
    }

    void startQuickSaveGame()
    {
        startQuickSaveGame(mSavedata->header.last_file);
    }

protected:
    sead::DelegateThread*   mDelegateThread;
    Status                  mStatus;
    ReadError               mReadError;
    WriteError              mWriteError;
    s32                     _20;                    // enum ?
    const SaveData*         mSavedata;              // rp_savedata
    void*                   mPersonalSavedata;      // rp_personal_savedata
    bool                    mButtonLayoutChanged;
    u8                      _2d;
    u8                      _2e;
    u8                      _2f;
    s32                     _30;
    s64                     mInitTime;              // sead::DateTime
    s64                     mStoryPlayInitTime;     // sead::DateTime

};
static_assert(sizeof(SaveMgr) == 0x50);
