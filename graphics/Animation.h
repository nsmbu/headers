#pragma once

#include <graphics/FrameCtrl.h>

// vtbl Address: 0x100B9AB8
class Animation
{
public:
    // Address: 0x024D4740
    Animation();

    virtual void calc() = 0;

    // Address: 0x024D4794
    void playFrameCtrl();

    FrameCtrl& getFrameCtrl() { return mFrameCtrl; }
    const FrameCtrl& getFrameCtrl() const { return mFrameCtrl; }

protected:
    FrameCtrl   mFrameCtrl;
};
static_assert(sizeof(Animation) == 0x20);
