#pragma once

#include <graphics/TextureRenderer.h>

class TexQuadDeco : public TextureRenderer
{
public:
    enum DecorationType : u8
    {
        cDecoration_Grass       = 0,
        cDecoration_FlowerStem  = 1,
        cDecoration_Flower      = 2,
        cDecoration_Butterfly   = 3
    };

public:
    TexQuadDeco(); // TODO: implement
   
    // Address: 0x02503ABC
    void create(agl::TextureData* tex1, agl::TextureData* tex2, agl::TextureData* tex3, agl::TextureData* tex4, agl::TextureData* tex5, agl::TextureData* nml1, agl::TextureData* nml2, agl::TextureData* nml3, agl::TextureData* nml4, agl::TextureData* nml5, u32, s32);

    agl::TextureData* getTexture4() const {
        return mTexture4;
    }

    void setTexture4(agl::TextureData* tex) {
        mTexture4 = tex;
    }

    agl::TextureData* getTexture5() const {
        return mTexture5;
    }
    
    void setTexture5(agl::TextureData* tex) {
        mTexture5 = tex;
    }

    agl::TextureData* getTextureNormal1() const {
        return mTexture1Normal;
    }
    
    void setTextureNormal1(agl::TextureData* tex) {
        mTexture1Normal = tex;
    }

    agl::TextureData* getTextureNormal2() const {
        return mTexture2Normal;
    }

    void setTextureNormal2(agl::TextureData* tex) {
        mTexture2Normal = tex;
    }

    agl::TextureData* getTextureNormal3() const {
        return mTexture3Normal;
    }

    void setTextureNormal3(agl::TextureData* tex) {
        mTexture3Normal = tex;
    }

    agl::TextureData* getTextureNormal4() const {
        return mTexture4Normal;
    }

    void setTextureNormal4(agl::TextureData* tex) {
        mTexture4Normal = tex;
    }

    agl::TextureData* getTextureNormal5() const {
        return mTexture5Normal;
    }

    void setTextureNormal5(agl::TextureData* tex) {
        mTexture5Normal = tex;
    }

    DecorationType getDecorationType() const {
        return mDecorationType;
    }

    void setDecorationType(DecorationType decoType) {
        mDecorationType = decoType;
    }

protected:
    u32 _9c;
    agl::TextureData* mTexture4;
    agl::TextureData* mTexture4;
    agl::TextureData* mTexture5;
    agl::TextureData* mTexture1Normal;
    agl::TextureData* mTexture2Normal;
    agl::TextureData* mTexture3Normal;
    agl::TextureData* mTexture4Normal;
    agl::TextureData* mTexture5Normal;
    DecorationType mDecorationType;
    u8 _BD[0xBBB];
};
static_assert(sizeof(TexQuadDeco) == 0xC78, "TexQuadDeco size mismatch");
