#pragma once

#include <actor/UniqueID.h>

#include <basis/seadAssert.h>
#include <basis/seadTypes.h>

class ActorBase;

class ActorFindFunc
{
public:
    virtual bool operator()(const ActorBase& actor) = 0;
};
static_assert(sizeof(ActorFindFunc) == 4, "ActorFindFunc size mismatch");

// vtbl Address: 0x10000B6C
class ActorProfileFindFunc : public ActorFindFunc
{
public:
    ActorProfileFindFunc(s32 id)
        : mProfID(id)
    {
    }

    // Address: 0x02008A54
    virtual bool operator()(const ActorBase& actor);

private:
    s32 mProfID;
};
static_assert(sizeof(ActorProfileFindFunc) == 8, "ActorProfileFindFunc size mismatch");

// vtbl Address: 0x10000B7C
class ActorCreateIndexFindFunc : public ActorFindFunc
{
public:
    ActorCreateIndexFindFunc(u32 i_create_index)
        : mCreateIndex(i_create_index)
    {
        SEAD_ASSERT(i_create_index <= UniqueID::cCreateIndexMax);
    }

    void setCreateIndex(u32 i_create_index)
    {
        SEAD_ASSERT(i_create_index <= UniqueID::cCreateIndexMax);
        mCreateIndex = i_create_index;
    }

    // Address: 0x02008A94
    virtual bool operator()(const ActorBase& actor);

private:
    u32 mCreateIndex;
};
static_assert(sizeof(ActorCreateIndexFindFunc) == 8, "ActorCreateIndexFindFunc size mismatch");
