#pragma once

#include <collision/LoopRideLineBgCollision.h>

#include <container/seadSafeArray.h>

template <s32 N>
class ActorPolygonBgCollision : public LoopRideLineBgCollision
{
    SEAD_RTTI_OVERRIDE(ActorPolygonBgCollision, LoopRideLineBgCollision)

private:
    static_assert(N >= 3);

    // Deleted
    void set(Actor* owner, const InitArg& arg, s32 point_num, sead::Heap* heap = nullptr);

public:
    ActorPolygonBgCollision()
        : LoopRideLineBgCollision(N, mPointArray.getBufferPtr(), mRideLineArray.getBufferPtr(), mRideLinePrevArray.getBufferPtr())
    {
        for (int i = 0; i < N; i++)
        {
            mPointArray[i].x = 0.0f;
            mPointArray[i].y = 0.0f;
        }

        for (int i = 0; i < N; i++)
        {
            mRideLineArray[i].setBgCheckData(mBgCheckData);
            mRideLinePrevArray[i].setBgCheckData(mBgCheckData);
        }
    }

    void set(Actor* owner, const InitArg& base_arg)
    {
        LoopRideLineBgCollision::set(owner, base_arg);
    }

protected:
    sead::UnsafeArray<sead::Vector2f,   N>  mPointArray;
    sead::UnsafeArray<BasicRideLine,    N>  mRideLineArray;
    sead::UnsafeArray<BasicRideLine,    N>  mRideLinePrevArray;
};
