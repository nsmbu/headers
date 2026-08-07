#pragma once

#include <heap/seadDisposer.h>

#include <nw/snd/snd_SoundHandle.h>

class SndSpeakerMgr
{
    SEAD_SINGLETON_DISPOSER(SndSpeakerMgr)

public:
    void setRemoteSend(nw::snd::SoundHandle* handle, nw::snd::OutputLine outputLine, u32 flags);
};
