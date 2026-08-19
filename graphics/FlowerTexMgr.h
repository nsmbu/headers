#pragma once

#include <graphics/TexQuadGrass.h>

class FlowerTexMgr {
public:
    struct DecorationSettings 
    {
        u8 _0[12];
        float _c;
        u8 _10[24];
        u32 _28;
        u32 _2c;
        u16 _30;
        bool _32;
        bool _33;
        bool _34;
        bool _35;
        bool _36;
        bool mHasButterflies;
        u8 _38[60];
        bool mHasBigFlowers;
        u8 _75[3];
        u32 _78;
    };
public:
    // Address: 0x0268A038
    void initialize();

    // Address: 0x02686428
    void updateGrassAndFlowers(bool init);

    TexQuadGrass mFlowerRenderer;
    TexQuadGrass mFlowerStalkRenderer;
    TexQuadGrass mGrassRenderer;
    TexQuadGrass mButterflyRenderer;
    nw::g3d::res::ResFile* mResFile;
    agl::TextureData mFlowerTextures[5];    // The values of the first two are copied into the last two
    agl::TextureData mFlowerStalkTexture;
    agl::TextureData mButterflyTexture;
    agl::TextureData mFlowerTextureNormal;
    agl::TextureData mFlowerStalkTextureNormal;
    agl::TextureData mGrassTextureNormals[5];
    agl::TextureData _3A6C;
    agl::TextureData mGrassTextures[5];
    DecorationSettings mSettings;
};