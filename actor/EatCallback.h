#pragma once

#include <actor/UniqueID.h>

#include <math/seadVector.h>

class Actor;

// vtbl Address: 0x10001594
class EatCallback
{
public:
    enum State
    {
        cState_None = 0,
        cState_EatTongue,
        cState_EatMouth,
        cState_DamageSpitOut,
        cState_SpitOut
    };
    static_assert(sizeof(State) == 0x4, "EatCallback::State size mismatch");

    enum EatType
    {
        cEatType_None = 0,      ///< Tongue hits actor with no result
        cEatType_Eat,           ///< Hold the food in Yoshi's mouth
        cEatType_EatPermanent,  ///< Hold the food in Yoshi's mouth, but can't spit it out
        cEatType_Drink,         ///< Swallow the food
        cEatType_DrinkBig,      ///< Swallow the food, plays a longer animation
        cEatType_YoshiFire,     ///< Hold the food in Yoshi's mouth, turns into fire when spat
        cEatType_YoshiFire_Ice  ///< Hold the food in Yoshi's mouth, turns into ice when spat
    };
    static_assert(sizeof(EatType) == 0x4, "EatCallback::EatType size mismatch");

    enum ScoreType
    {
        cScoreType_Point_200 = 0,
        cScoreType_Point_1000,
        cScoreType_None,
    };
    static_assert(sizeof(ScoreType) == 0x4, "EatCallback::ScoreType size mismatch");

    // Address: 0x0200D6C4
    EatCallback(UniqueID owner_id);

    // Address: Deleted
    Actor* getParentActorConstPtr_() const;
    // Address: Deleted
    Actor* getParentActorPtr_();

    // Address: 0x0200D4B8
    virtual void setAfterEatScale();
    // Address: 0x0200D504
    virtual void calcSpitOutPos(Actor* yoshi);
    // Address: 0x0200D5F0
    virtual f32 calcEatScaleRate(Actor* yoshi);
    // Address: 0x0200D76C
    virtual void eatMove(Actor* yoshi);
    // Address: 0x0200DA8C
    virtual void replaceEatActor(Actor* yoshi);
    // Address: 0x0200D830
    virtual bool setEatTongue(Actor* yoshi);
    // Address: 0x0200DA90
    virtual void setEatTongueOff(Actor* yoshi);
    // Address: 0x0200DA94
    virtual void setEatMouth(Actor* yoshi);
    // Address: 0x0200DA98
    virtual bool setEatSpitOut(Actor* yoshi);
    // Address: 0x0200D880
    virtual bool setEatGlupDown(Actor* yoshi);
    // Address: 0x0200D9AC
    virtual void calcEatInScale(Actor* yoshi);

    const UniqueID& getYoshiID() const
    {
        return mYoshiID;
    }

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
    UniqueID        mYoshiID;
    State           mState;
    EatType         mEatType;
    sead::Vector3f  mScale;
    ScoreType       mScoreType;
};
static_assert(sizeof(EatCallback) == 0x24, "EatCallback size mismatch");
