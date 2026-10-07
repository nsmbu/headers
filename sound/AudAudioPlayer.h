#pragma once

#include <audio/cafe/seadAudioPlayerCafe.h>

class AudAudioPlayer : public sead::AudioPlayerCafe
{
public:
    // Address: 0x029B2140
    AudAudioPlayer();
    // Address: 0x029B20D8
    ~AudAudioPlayer() override;

    // Address: 0x029B21A0
    void initialize() override;
    // Address: 0x029B21A4
    void finalize() override;
    // Address: 0x029B21A8
    void calc() override;
};
static_assert(sizeof(AudAudioPlayer) == sizeof(sead::AudioPlayerCafe), "AudAudioPlayer size mismatch");
