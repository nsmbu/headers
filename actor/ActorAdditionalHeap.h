#pragma once

#include <heap/seadDisposer.h>

class ActorAdditionalHeap : public sead::IDisposer
{
public:
    ActorAdditionalHeap()
        : sead::IDisposer()
        , mHeap(nullptr)
    {
    }

    virtual ~ActorAdditionalHeap()
    {
        destroyHeap();
    }

    // Address: 0x02002C70
    void createHeap();
    // Address: 0x02002C54
    void destroyHeap();

    sead::Heap* getHeap() const
    {
        return mHeap;
    }

protected:
    sead::Heap* mHeap;
};
static_assert(sizeof(ActorAdditionalHeap) == 0x14, "ActorAdditionalHeap size mismatch");
