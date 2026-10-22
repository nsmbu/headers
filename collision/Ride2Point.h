#pragma once

#include <collision/Segment.h>

class Ride2Point
{
public:
    // Address: 0x021AF714
    Ride2Point();
    
    // Address: 0x021AF794
    Ride2Point* convertRide2Point(const sead::Vector3f& p1_pos, const sead::Vector3f& p2_pos);

private:
    Segment mSegment;

};
static_assert(sizeof(Ride2Point) == 0x10, "Ride2Point size mismatch");
