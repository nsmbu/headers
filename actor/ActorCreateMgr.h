#pragma once

#include <container/seadPtrArray.h>
#include <heap/seadDisposer.h>
#include <math/seadBoundBox.h>

#include <actor/UniqueID.h>
#include <actor/Profile.h>
#include <system/SaveMgr.h>
#include <utility/Direction.h>

struct ActorInitDat;

class ActorCreateMgr
{
    // createInstance()                             Address: 0x020043F0
    // deleteInstance()                             Address: Deleted
    // sInstance                                    Address: 0x101C30C0
    // SingletonDisposer_::~SingletonDisposer_()    Address: 0x02008724
    // SingletonDisposer_::sStaticDisposer          Address: 0x101C30C4
    // SingletonDisposer_::vtbl                     Address: 0x10000B50
    SEAD_SINGLETON_DISPOSER(ActorCreateMgr)

public:
    struct LiftBufferInfo
    {
        u8* _0;
        ActorInitDat* init_data;
        ActorData* actor_data;
    };
    static_assert(sizeof(LiftBufferInfo) == 0xC, "ActorCreateMgr::LiftBufferInfo size mismatch");

    typedef sead::FixedPtrArray<LiftBufferInfo, 80> JouchuLiftBufferInfo;
    typedef sead::FixedPtrArray<LiftBufferInfo, 100> GroupLiftBufferInfo;

public:
    // Address: 0x0200417C
    ActorCreateMgr();

    // Address: 0x0200684C
    void initialCorseInActorCreate();
    // Address: 0x02004880
    void clearEditCoinAreaNo();
    // Address: 0x0200550C
    void setActorGroup2Create(GroupLiftBufferInfo&, u8);
    // Address: 0x02005734
    void setActorJouchu2Create(JouchuLiftBufferInfo&, u8);
    // Address: 0x02006F18
    void initialAreaInActorCreate();
    // Address: 0x020086FC
    void setEditCoinAreaNo(u8 area_no);
    // Address: 0x0200862C
    bool setAreaGroupNoCreate(ProfileID profile_id, UniqueID actor_id, u8 movement_id);
    // Address: 0x0200595C
    u8 getSaveFileNo();
    // Address: 0x020048D8
    void waiteUnitToge(f32 x_pos, f32 y_pos);
    // Address: 0x02004470
    s32 checkActorCoinCount(u32 range_no, u8 coin_mask);
    // Address: 0x02007FC0
    s32 getAreaAllCoinCount();
    // Address: 0x020081B8
    s32 getSerchActorCount(s32);
    // Address: 0x020083A0
    s32 getSearchRengaCount();
    // Address: 0x02008590
    s32 getAreaAllEditCoinCount();
    // Address: Deleted
    s32 getAreaAllEditStarCoinCount();
    // Address: 0x020046C0
    void checkDrcBlockBox(sead::BoundBox2f& box);
    // Address: 0x02007294
    void checkDrcBlockPos(const ActorInitDat* init_data);
    // Address: 0x02007A5C
    void scrollActorCreateCheck();
    // Address: 0x02004C0C
    void incLayer1EnemyZposCount();
    // Address: 0x02004B94
    void incLayer2EnemyZposCount();
    // Address: 0x02004B1C
    void incLayer1MapObjZposCount();
    // Address: Deleted
    void incLayer2MapObjZposCount();
    // Address: 0x02004C28
    f32 getLayer1EnemyZpos();
    // Address: 0x02004BB0
    f32 getLayer2EnemyZpos();
    // Address: 0x02004B38
    f32 getLayer1MapObjZpos();
    // Address: Deleted
    f32 getLayer2MapObjZpos();

public:
    /**
    * @brief 48.0f
    * @par Address: Deleted
    */
    static const f32 cCreateXLow;
    /**
    * @brief 48.0f
    * @par Address: Deleted
    */
    static const f32 cCreateXHigh;
    /**
    * @brief 16.0f
    * @par Address: Deleted
    */
    static const f32 cCreateYLow;
    /**
    * @brief 32.0f
    * @par Address: Deleted
    */
    static const f32 cCreateYHigh;
    /**
    * @brief 16.0f
    * @par Address: Deleted
    */
    static const f32 cCreateOverPos;
    /**
    * @brief 16.0f
    * @par Address: Deleted
    */
    static const f32 cSpacingZposEnemy;
    /**
    * @brief 8.0f
    * @par Address: Deleted
    */
    static const f32 cSpacingZposMapObj;

protected:
    // Address: 0x02004EC4
    void initialActorCreateCheck_(u8*, const ActorInitDat* init_data, u32, u8, JouchuLiftBufferInfo&, LiftBufferInfo*, GroupLiftBufferInfo&, LiftBufferInfo*);
    // Address: 0x02005978
    void checkEditCoin_(u8);
    // Address: 0x02005B7C
    void initialEditCoinWrite_();
    // Address: 0x0200613C
    void initialEditCoinCreateCheck_(u32 actor_count);
    // Address: 0x02006B28
    void initialAreaInEditCoinWrite_();
    // Address: 0x02004C84
    void createActor_(u8*, const ActorInitDat* init_data, const ActorData* actor_data, UniqueID id);
    // Address: 0x020048C8
    bool groupIdCheck_(u32 group_id);
    // Address: 0x02004924
    void goalPoleCheck_(const ActorInitDat* init_data, u8 area_no);
    // Address: 0x02005F54
    void createCoinActor_(u8*, f32 pos_x, f32 pos_y);
    // Address: 0x02006040
    void createStarCoinActor_(u8*, f32 pos_x, f32 pos_y, s32);
    // Address: 0x02007204
    DirType getScrollDirX_();
    // Address: 0x0200724c
    DirType getScrollDirY_();
    // Address: 0x02007350
    void scrollEditCoinCreateCheck_(u32 actor_count);

protected:
    s32 mLayer1EnemyZPosCnt;
    s32 mLayer2EnemyZPosCnt;
    s32 mLayer1MapObjZPosCnt;
    s32 mLayer2MapObjZPosCnt;
    u32 mGroupedActorCnt;
    u32 _24;                                    // Jouchu related?
    u32 _28;                                    // Jouchu related?
    u32 mEditCoin1Cnt;                          // TODO: better name
    u8 mEditCoin1[1000];                        // TODO: better name
    u16 _418;                                   ///< Unused.
    u32 mActorCnt;
    u16 mEditCoin2Cnt;                          // TODO: better name, bg related?
    SaveData::CoinEditCoin mEditCoin2[300];     // TODO: better name, bg related? also not 100% sure about this type
    JouchuLiftBufferInfo mJouchuLiftBufferInfo;
    GroupLiftBufferInfo mGroupLiftBufferInfo;
    s8 _1360[256];                              // still coin edit related
    GroupLiftBufferInfo mGroupLiftBufferInfo2;  // TODO: better name
};
static_assert(sizeof(ActorCreateMgr) == 0x15FC, "ActorCreateMgr size mismatch");
