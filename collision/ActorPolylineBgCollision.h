#pragma once

#include <collision/BasicRideLineBgCollision.h>

/**
 * @brief A ride collider which is shaped using a polyline and stores the points which make it up.
 * @tparam N Number of @b lines in the polyline shape.
 */
template <s32 N>
class ActorPolylineBgCollision : public BasicRideLineBgCollision
{
    SEAD_RTTI_OVERRIDE_INLINE(ActorPolylineBgCollision, BasicRideLineBgCollision)

private:
    static_assert(N >= 1);

    // Deleted
    void set(Actor* owner, const InitArg& arg, s32 point_num, sead::Heap* heap = nullptr);

public:
    ActorPolylineBgCollision()
        : BasicRideLineBgCollision(N, mPointArray, mRideLineArray, mRideLinePrevArray)
    {
        for (int i = 0; i < N+1; i++)
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
        BasicRideLineBgCollision::set(owner, base_arg);
    }

protected:
    sead::Vector2f  mPointArray[N+1];
    BasicRideLine   mRideLineArray[N];
    BasicRideLine   mRideLinePrevArray[N];
};
