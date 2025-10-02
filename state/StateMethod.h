#pragma once

#include <state/IState.h>
#include <state/IStateFactory.h>
#include <state/StateID.h>

class StateMethod
{
public:
    // Address: 0x029C4A08
    StateMethod(IStateFactory& factory, const StateID& state_id);

    // Address: 0x029C4A80
    void executeStateMethod();

    // Address: 0x029C4AF0
    void changeStateMethod(const StateID& state_id);

    IState* getState() const { return mState; }
    const StateID* getNewStateID() const { return mNewStateID; }
    // Address: 0x029C4B88
    const StateID* getStateID() const;
    const StateID* getOldStateID() const { return mOldStateID; }

protected:
    void initializeStateLocalMethod_();
    void executeStateLocalMethod_();
    void finalizeStateLocalMethod_();
    void changeStateLocalMethod_();

protected:
    IStateFactory&  mFactory;
    const StateID*  mNewStateID;
    IState*         mState;
    const StateID*  mOldStateID;
};
static_assert(sizeof(StateMethod) == 0x10);

inline void StateMethod::initializeStateLocalMethod_()
{
    if (mNewStateID != nullptr)
    {
        mState = mFactory.buildWithInitialize(*mNewStateID);
        mNewStateID = nullptr;
    }
}

inline void StateMethod::executeStateLocalMethod_()
{
    initializeStateLocalMethod_();

    if (mState != nullptr)
        mState->execute();
}

inline void StateMethod::finalizeStateLocalMethod_()
{
    if (mState != nullptr && mNewStateID != nullptr)
    {
        mOldStateID = mState->getStateID();
        mFactory.disposeWithFinalize(mState);
    }
}

inline void StateMethod::changeStateLocalMethod_()
{
    finalizeStateLocalMethod_();
    initializeStateLocalMethod_();
}
