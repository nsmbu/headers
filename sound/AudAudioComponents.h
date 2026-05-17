#pragma once

#include <basis/seadTypes.h>

class AudAudioSystem;

class AudAudioComponents
{
public:
    AudAudioSystem* mAudioSystem;
    u8 _4[0x24 - 0x4];
};
static_assert(sizeof(AudAudioComponents) == 0x24, "AudAudioComponents size mismatch");
