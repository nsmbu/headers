#pragma once

#include <actor/UniqueID.h>

#include <math/seadVector.h>

class Actor;

// vtbl Address: 0x1000145C
class ChibiEatCallback
{
public:
    enum State
    {
        cState_None = 0,
        cState_EatTongue,
        cState_EatMouth,
        // ...?
    };
    static_assert(sizeof(State) == 4, "ChibiEatCallback::State size mismatch");

    enum EatType
    {
        cEatType_None = 0,  ///< Damages the player when trying to eat
        cEatType_Drink,     ///< Swallow the food
    };
    static_assert(sizeof(EatType) == 4, "ChibiEatCallback::EatType size mismatch");

    enum ScoreType
    {
        cScoreType_Point_200 = 0,
        cScoreType_Point_1000,
        cScoreType_None,
    };
    static_assert(sizeof(ScoreType) == 4, "ChibiEatCallback::ScoreType size mismatch");

    // Address: 0x0200CF1C
    ChibiEatCallback(UniqueID owner_id);

    // Address: Deleted
    Actor* getParentActorPtr_() const;

    // Address: 0x0200D308
    virtual bool isEatEnable();
    // Address: 0x0200D034
    virtual void* setEatIn(Actor* chibi_yoshi);
    // Address: 0x0200D094
    virtual void* eatMove(Actor* chibi_yoshi);
    // Address: 0x0200D310
    virtual void setEatMouth(Actor* chibi_yoshi);
    // Address: 0x0200D314
    virtual void setEatSpitOut(Actor* chibi_yoshi);
    // Address: 0x0200D1B4
    virtual bool setEatGlupDown(Actor* chibi_yoshi);
    // Address: 0x0200D318
    virtual void replaceEatActor();

    State getState() const
    {
        return mState;
    }

    void setState(State state)
    {
        mState = state;
    }

    EatType getEatType() const
    {
        return mEatType;
    }

    void setEatType(EatType eat_type)
    {
        mEatType = eat_type;
    }

    sead::Vector3f& getScale()
    {
        return mScale;
    }

    const sead::Vector3f& getScale() const
    {
        return mScale;
    }

    ScoreType getScoreType() const
    {
        return mScoreType;
    }

    void setScoreType(ScoreType score_type)
    {
        mScoreType = score_type;
    }

protected:
    UniqueID        mOwnerID;
    u32             mYoshiChibiID;
    sead::Vector3f  mScale;
    State           mState;
    EatType         mEatType;
    ScoreType       mScoreType;
};
static_assert(sizeof(ChibiEatCallback) == 0x24, "ChibiEatCallback size mismatch");
