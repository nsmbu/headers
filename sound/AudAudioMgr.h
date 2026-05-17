#pragma once

#include <basis/seadTypes.h>

class AudAudioComponents;
class AudFxSocket;

class AudAudioMgr
{
public:
    AudFxSocket* getFxSocket();

protected:
    u8 _0[0x10];
    AudAudioComponents* mComponents;
    void* mSettingParameter; // sead::AudioSettingParameter*
};
static_assert(sizeof(AudAudioMgr) == 0x18, "AudAudioMgr size mismatch");
