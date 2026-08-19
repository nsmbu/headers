#pragma once

#include <graphics/FlowerTexMgr.h>
#include <collision/BgUnitCode.h>

#include <heap/seadDisposer.h>
#include <math/seadVector.h>

class Bg
{
    SEAD_SINGLETON_DISPOSER(Bg)

public:
    struct DecorationInfo
    {
        sead::Vector3f pos;
        union {
            struct {
                u8 _c;
                u8 _d;
                u8 _e;
            } grass_settings;

            struct {
                u8 color;
                u8 index;
                u8 _e;
            } flower_settings;

            struct {
                u8 _c;
                u8 index;
                u8 _e;
            } butterfly_settings;
        };
    };

public:
    Bg();
    virtual ~Bg();

    static u16* getUnit(u16 x, u16 y, u32 file, u8 layer, s32* block_idx = nullptr);
    static u16* getUnitCurrentCdFile(u16 x, u16 y, u8 layer, s32* block_idx = nullptr);

    u64 getBgCheckData(u16 x, u16 y, u8 layer, bool with_p_sw = true);  // See BgUnitCode
    u64 getBgCheckData(f32 x, f32 y, u8 layer, bool with_p_sw = true)   // ^^^
    {
        return getBgCheckData(u16(x), u16(-y), layer, with_p_sw);
    }

    BgUnitCode::HitType getUnitHitType(u16 x, u16 y, u8 layer);
    BgUnitCode::HitType getUnitHitType(f32 x, f32 y, u8 layer)
    {
        return getUnitHitType(u16(x), u16(-y), layer);
    }

    BgUnitCode::Type getUnitType(u16 x, u16 y, u8 layer);
    BgUnitCode::Type getUnitType(f32 x, f32 y, u8 layer)
    {
        return getUnitType(u16(x), u16(-y), layer);
    }

    BgUnitCode::TypeInfo getUnitTypeInfo(u16 x, u16 y, u8 layer);
    BgUnitCode::TypeInfo getUnitTypeInfo(f32 x, f32 y, u8 layer)
    {
        return getUnitTypeInfo(u16(x), u16(-y), layer);
    }

    void setWaterInWave(const sead::Vector2f& pos, u8 wave_scale);

    // Address: 0x0268B8E4
    u8 getNextFlowerIndex();

    // Address: 0x0268B964
    void registerGrass(f32 x, f32 y, f32 z, u8, u8 index, u8);

    // Address: 0x0268B96C
    void registerFlower(f32 x, f32 y, f32 z, u8 color, u8 index, u8);

    // Address: 0x02685914
    void registerButterfly(f32 x, f32 y, f32 z, u8, u8 index, u8);

    // Address: 0x0268B974
    void updateFlower(f32 x, f32 y, u8 index, bool enabled);

    // Address: 0x0268B908
    void deleteFlower(u8 index);

    DecorationInfo& getGrassDecorationInfo(u32 index) {
        return mGrassDecorationInfo[index];
    }

    DecorationInfo& getFlowerDecorationInfo(u32 index) {
        return mFlowerDecorationInfo[index];
    }

    DecorationInfo& getButterflyDecorationInfo(u32 index) {
        return mButterflyDecorationInfo[index];
    }

    u32 getFlowerCount() const {
        return mFlowerNo;
    }

    u8 getFlowerType() const {
        return mFlowerType;
    }

    void setFlowerType(u8 type) {
        mFlowerType = type;
    }

    FlowerTexMgr& getFlowerTexMgr() {
        return mFlowerTexMgr;
    }
private:
    u32 _10;
    f32 _14;
    f32 _18;
    f32 _1c[1280];
    f32 _141c[1280];
    bool mHasLavaWaves;
    bool mHasTerrain;
    u32 _2820;
    u8 _2824[0x588];
    u8 _2d7c[0x588];
    u8 _32d4[0x88];
    u8 _335c[800];
    u8 _367c[100];
    u8 _36e0[100];
    u32 _3744[100];
    DecorationInfo* mGrassDecorationInfo;
    DecorationInfo* mFlowerDecorationInfo;
    DecorationInfo* mButterflyDecorationInfo;
    u32 mFlowerNo;
    u8 _38e4[0x320];
    sead::Vector2f mFlowerPositions[100];
    u8 _3f24[100];
    u32 _3f88;
    u8 mFlowerType;
    bool mHasFlowers;
    FlowerTexMgr mFlowerTexMgr;
    u8 _7e20[0x1D64];
};

static_assert(sizeof(Bg) == 0x9b88);
