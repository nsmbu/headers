#pragma once

#include <heap/seadHeap.h>
#include <container/seadListImpl.h>

class Fragment
{
protected:
    Fragment(sead::Heap* heap)
        : mHeap(heap)
        , mDeleteRequestFlag(false)
    { }

    // Address: Deleted
    virtual void create();

    virtual void execute() { }
    virtual void draw() { }
    virtual void doDelete() { }

protected:
    sead::ListNode mNode;
    sead::Heap* mHeap;
    bool mDeleteRequestFlag; // TODO: verify

    friend class FragmentMgr;
};
static_assert(sizeof(Fragment) == 0x14, "Fragment size mismatch");
