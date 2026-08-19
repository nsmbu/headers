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
        sead::Vector3f mPos;
        union {
            struct {
                u8 _c;
                u8 mIndex;
                u8 _e;
            } mGrassSettings;

            struct {
                u8 mColor;
                u8 mIndex;
                u8 _e;
            } mFlowerSettings;

            struct {
                u8 _c;
                u8 mIndex;
                u8 _e;
            } mButterflySettings;
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

    void setWaterInWave(const sead::Vector2f &pos, u8 wave_scale);

    // Address: 0x0268B8E4
    u8 getNextFlowerIndex();

    // Address: 0x0268B964
    void registerGrass(float x, float y, float z, u8, u8 index, u8);

    // Address: 0x0268B96C
    void registerFlower(float x, float y, float z, u8 color, u8 index, u8);

    // Address: 0x02685914
    void registerButterfly(float x, float y, float z, u8, u8 index, u8);

    // Address: 0x0268B974
    void updateFlower(float x, float y, u8 index, bool enabled);
    
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

    FlowerTexMgr& getFlowerTexMgr() {
        return mFlowerTexMgr;
    }

private:
    u32 _10;
    float _14;
    float _18;
    float _1C[1280];
    float _141C[1280];
    bool mHasLavaWaves;
    bool mHasTerrain;
    u32 _2820;
    u8 _2824[0x588];
    u8 _2D7C[0x588];
    u8 _32D4[0x88];
    u8 _335C[800];
    u8 _367C[100];
    u8 _36E0[100];
    u32 _3744[100];
    DecorationInfo* mGrassDecorationInfo;
    DecorationInfo* mFlowerDecorationInfo;
    DecorationInfo* mButterflyDecorationInfo;
    u32 mFlowerNo;
    u8 _38E4[0x320];
    sead::Vector2f mFlowerPositions[100];
    u8 _3F24[100];
    u32 _3F88;
    u8 mFlowerType;
    bool mHasFlowers;
    FlowerTexMgr mFlowerTexMgr;
    u8 _7E20[0x1D64];
};
