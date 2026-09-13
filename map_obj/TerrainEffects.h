#pragma once

#include <types.h>
#include <math/seadVector.h>

class TerrainEffectsRenderer;

class TerrainEffects { // Size: 0xFF4C
    // This class seems to handle distortions such as the waves in liquids, and the distortion on the bump-from-bottom platform (sprite 407)
    // It is present as a member of EnvTerrain
public:
    enum TerrainType {
        Water     = 0,
        Lava      = 1,
        Poison    = 2,
        LavaWaves = 3,
        Quicksand = 4
    };

    TerrainEffects();
    ~TerrainEffects(); // nullsub

    virtual void vfC();  // deleted
    virtual void vf10(); // deleted

    void playerLavaWaveBurn();
    // Address: 0x028B8D5C
    void updateWaveCollisions();

    void setWaveHeightMultiplier(f32 height_multiplier) {
        mWaveHeightMultiplier = height_multiplier;
    }

    void setWaveRippleHeightMultiplier(f32 ripple_height_multiplier) {
        mWaveRippleHeightMultiplier = ripple_height_multiplier;
    }

    void setWaveCollisionTypeOverride(u8 collision_override) {
        mWaveCollisionTypeOverride = collision_override;
    }

protected:
    TerrainEffectsRenderer* mRenderer;
    u8                      _4[4]; // Unknown values
    sead::Vector3f          _8;
    u8                      _14[12];
    sead::Vector3f          _20;
    u8                      _2C[48];
    u8                      _5C[48];
    u8                      _8C[4]; // Unknown values
    f32                     _90;
    u32                     _94;
    f32                     _98;
    f32                     _9C;
    u32                     _A0;
    u32                     _A4;
    u32                     _A8;
    s32                     _AC;
    u32                     _B0;
    u32                     _B4;
    u32                     _B8;
    f32                     mWaveHeightMultiplier;
    f32                     mWaveRippleHeightMultiplier;
    u32                     mWaveRippleSpeed;
    u32                     mWaveHorizontalSpeed;
    u32                     _CC;
    u32                     _D0;
    u32                     mWaveRippleCount;
    u32                     mWaveWidth;
    f32                     _DC;
    f32                     mWaveRippleHeight;
    u8                      mWaveCollisionTypeOverride;
    u8                      _E5;
    u8                      _E6[0xFE58]; // Inlined struct
    u32                     _FF40;
    u8                      _FF44[4]; // Unknown values
};

static_assert(sizeof(TerrainEffects) == 0xFF4C, "TerrainEffects size mismatch");
