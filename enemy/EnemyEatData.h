#pragma once

#include <actor/EatCallback.h>

class Enemy;

// vtbl Address: 0x10072F9C
class EnemyEatData : public EatCallback
{
public:
    // Address: 0x0232F00C
    EnemyEatData(UniqueID owner_id);

    // Address: 0x0232F124
    bool setEatTongue(Actor* yoshi) override;
    // Address: 0x0232F208
    void setEatTongueOff(Actor* yoshi) override;
    // Address: 0x0232F28C
    bool setEatSpitOut(Actor* yoshi) override;

protected:
    // Address: 0x0232F074
    Enemy* getOwner_() const;
};
static_assert(sizeof(EnemyEatData) == sizeof(EatCallback));
