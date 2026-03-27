#pragma once

#include <actor/ActorUniqueID.h>
#include <math/seadVector.h>

class CourseSelectActor; // TODO: This might be CourseSelectEnemy instead

class CourseSelectCollisionCheck
{
public:
    struct Vec3 // POD variant
                // TODO: Can this (and the one in ActorCollisionCheck) be replaced with constexpr in sead vectors?
    {
        f32 x;
        f32 y;
        f32 z;
    };
    static_assert(sizeof(Vec3) == 12);

    struct CollisionData
    {
        f32 size;
        Vec3 center_offset;
    };
    
public:
    // Address: //!!!
    CourseSelectCollisionCheck();
    // Address: //!!!
    virtual ~CourseSelectCollisionCheck();
    
    // Address: //!!!
    void set(CourseSelectActor* owner, const CollisionData& collision_data);

    [[nodiscard]]
    ActorUniqueID& getOwnerID()
    {
        return mOwnerID;
    }
    
    [[nodiscard]]
    const ActorUniqueID& getOwnerID() const
    {
        return mOwnerID;
    }
    
    [[nodiscard]]
    f32 getSize() const
    {
        return mCollisionData.size;
    }
    
    void setSize(f32 size)
    {
        mCollisionData.size = size;
    }
    
    [[nodiscard]]
    Vec3& getCenterOffset()
    {
        return mCollisionData.center_offset;
    }
    
    [[nodiscard]]
    const Vec3& getCenterOffset() const
    {
        return mCollisionData.center_offset;
    }
    
    void setCenterOffset(const Vec3& center_offset)
    {
        mCollisionData.center_offset = center_offset;
    }
    
    void setCenterOffset(f32 center_offset_x, f32 center_offset_y)
    {
        mCollisionData.center_offset.x = center_offset_x;
        mCollisionData.center_offset.y = center_offset_y;
    }

    void setCenterOffset(const sead::Vector2f& center_offset)
    {
        setCenterOffset(center_offset.x, center_offset.y);
    }
    
private:
    ActorUniqueID mOwnerID;
    u32 _4;
    CollisionData mCollisionData;
};
