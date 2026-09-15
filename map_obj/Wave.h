#pragma once

#include <container/seadObjList.h>
#include <math/seadVector.h>

#include <utility/Angle.h>

class WaveRenderer; // TODO: see what this is really called

class Wave
{
public:
    enum TerrainType : u8
    {
        cTerrainType_Water      = 0,
        cTerrainType_Lava       = 1,
        cTerrainType_Poison     = 2,
        cTerrainType_LavaWaves  = 3,
        cTerrainType_Quicksand  = 4
    };

    struct Impact
    {
        f32     scale;
        f32     segment_height[100];
        f32     segment_dampening[100];
        u32     segment_phase[100];
        u32     origin_segment;
        u8      segment_state[100];
        f32     impact_velocity;
        bool    is_active;
        void*   event;
        f32     max_radius;
        f32     _52c;
        u32     phase_rate;
        f32     dampening_rate;
        f32     scale_max;
        f32     scale_min;
        f32     dampening_max;
    };
    static_assert(sizeof(Impact) == 0x544, "Wave::Impact size mismatch"); // TODO: check these to see if they are good

public:
    // TODO!: Not sure if this class actually has c/dtors
    Wave();
    // TODO!: Not sure if this class actually has c/dtors
    ~Wave();

    virtual void vfC(); 
    // Address: Deleted
    virtual void vf10();
    // Address: Deleted

    // TODO: Address: Not in my RE
    void playerLavaWaveBurn();
    // Address: 0x028B8D5C
    void updateWaveCollisions();
    // Address: 0x028B8E64
    void updateWave();

    void setMajorSineWaveMult(f32 mult)
    {
        mMajorSineWaveMult = mult;
    }

    void setMinorSineWaveMult(f32 mult)
    {
        mMinorSineWaveMult = mult;
    }

    void setLiquidCollisionTypeOverride(TerrainType collision_override)
    {
        mLiquidCollisionTypeOverride = collision_override;
    }

protected:
    WaveRenderer*                   mRenderer;
    u8                              _4[4]; // Unknown values
    sead::Vector3f                  _8;
    u8                              _14[12];
    sead::Vector3f                  _20;
    u8                              _2c[48];
    u8                              _5c[48];
    u8                              _8c[4]; // Unknown values
    f32                             _90;
    u32                             _94;
    f32                             _98;
    f32                             _9c;
    u32                             _a0;
    u32                             _a4;
    u32                             _a8;
    s32                             _ac;
    u32                             _b0;
    Angle                           mMinorSineWavePhaseShift;
    Angle                           mMajorSineWavePhaseShift;
    f32                             mMajorSineWaveMult;
    f32                             mMinorSineWaveMult;
    u32                             mMinorSineWaveRate;
    u32                             mMajorSineWaveRate;
    u32                             _cc;
    u32                             _d0;
    u32                             mMajorSineWaveFrequency;
    u32                             mMinorSineWaveFrequency;
    f32                             mMajorSineWaveAmplitude;
    f32                             mMinorSineWaveAmplitude;
    TerrainType                     mLiquidCollisionTypeOverride;
    u8                              _e5;
    sead::FixedObjList<Impact, 48>  mImpact;
    u32                             _ff40;
    u8                              _ff44[4]; // Unknown values
};
static_assert(sizeof(Wave) == 0xFF4C, "Wave size mismatch");
