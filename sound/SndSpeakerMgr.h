#pragma once

#include <heap/seadDisposer.h>

#include <nw/snd/snd_SoundHandle.h>

class SndSpeakerMgr
{
    // sInstance    Address: 0x101E7D0C
    SEAD_SINGLETON_DISPOSER(SndSpeakerMgr)

public:
    // Address: 0x029C37BC
    void setRemoteSend(nw::snd::SoundHandle* handle, nw::snd::OutputLine outputLine, u32 flags);
};
