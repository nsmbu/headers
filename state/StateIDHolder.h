#pragma once

#include <basis/seadTypes.h>

class StateID;

class StateIDHolder
{
public:
    StateIDHolder()
    {
        reset();
    }

    void set(const StateID*state_id)
    {
        mStateID = state_id;
    }

    void reset()
    {
        mStateID = nullptr;
    }

    bool isSet() const
    {
        return mStateID != nullptr;
    }

    const StateID* get() const
    {
        return mStateID;
    }

protected:
    const StateID*  mStateID;
};
static_assert(sizeof(StateIDHolder) == 4);
