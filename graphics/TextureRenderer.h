#pragma once

#include <container/seadBuffer.h>
#include <common/aglTextureData.h>
#include <common/aglTextureSampler.h>
#include <graphics/TextureRendererBase.h>
#include <nw/g3d.h>

class TextureRenderer : public TextureRendererBase // vtbl Address: 0x100655FC
{
public:
    TextureRenderer(); // TODO: implement

    // 0x02500374
    ~TextureRenderer();

    // Address: 0x02500388
    static void loadTexture(const sead::SafeString& archiveName, const sead::SafeString& textureName, agl::TextureData* texture, nw::g3d::res::ResFile*& res, agl::TextureSampler* sampler);

    // Address: 0x02500858
    virtual void allocLists(s32 bufferSize);

    agl::TextureData* getTexture1() const {
        return mTexture1;
    }

    void setTexture1(agl::TextureData* tex) {
        mTexture1 = tex;
    }

    agl::TextureData* getTexture2() const {
        return mTexture2;
    }

    void setTexture2(agl::TextureData* tex) {
        mTexture1 = tex;
    }

    agl::TextureData* getTexture3() const {
        return mTexture3;
    }

    void setTexture3(agl::TextureData* tex) {
        mTexture1 = tex;
    }

protected:
    u32 _30;
    agl::TextureData* mTexture1;
    agl::TextureData* mTexture2;
    agl::TextureData* mTexture3;
    sead::Buffer<sead::Vector3f> mBuffer1;
    sead::Buffer<sead::Vector3f> mBuffer2;
    u32 _50[2];
    sead::Buffer<f32> _58;
    sead::Buffer<f32> _60;
    u32 _68[2];
    sead::Buffer<s32> _70;
    u32 _78[2];
    u32 _80[2];
    u32 _88[2];
    u32 _90[2];
};
static_assert(sizeof(TextureRenderer) == 0x9C, "TextureRenderer size mismatch");
