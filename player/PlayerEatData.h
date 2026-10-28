#pragma once

#include <actor/EatCallback.h>

// vtbl Address: 0x10169524
class PlayerEatData : public EatCallback
{
public:
    // Address: 0x02911918
    PlayerEatData(UniqueID owner_id);

    // Address: 0x02911980
    void eatMove(Actor* yoshi) override;
    // Address: 0x02911A8C
    bool setEatTongue(Actor* yoshi) override;
    // Address: 0x02911B9C
    void setEatTongueOff(Actor* yoshi) override;
    // Address: 0x02911CA8
    void setEatMouth(Actor* yoshi) override;
    // Address: 0x02911DB4
    bool setEatSpitOut(Actor* yoshi) override;
};
static_assert(sizeof(PlayerEatData) == sizeof(EatCallback));
