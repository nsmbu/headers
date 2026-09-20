#pragma once

#include <map_obj/Mask.h>

#include <heap/seadHeap.h>
#include <math/seadVector.h>

class LightMask
{
public:
    virtual bool create(sead::Heap* heap, Mask::TexName) = 0;
    virtual bool execute() = 0;
    virtual bool draw() = 0;
};
static_assert(sizeof(LightMask) == 4);

class CircleLightMask : public LightMask
{
public:
    // Address: 0x02815C9C
    CircleLightMask();

    // Address: 0x02815D20
    bool create(sead::Heap* heap, Mask::TexName) override;
    // Address: 0x02815DCC
    bool execute() override;
    // Address: 0x028160C8
    bool draw() override;

    void setRadius(f32 radius)
    {
        mRadius = radius;
    }

    void setPosition(const sead::Vector3f& pos)
    {
        mPos = pos;
    }

protected:
    f32             mRadius;
    f32             _8;
    sead::Vector3f  mPos;
    Mask*           mMask;
    Quad*           mQuad;
    Mask::TexName   mMaskTexName;
    u32             _24;
};
static_assert(sizeof(CircleLightMask) == 0x28);
