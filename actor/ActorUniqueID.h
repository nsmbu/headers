#pragma once

#include <basis/seadAssert.h>
#include <basis/seadTypes.h>

/**
 * @brief Safe identifier handle used as an alternative to raw actor pointers.
 * @details Combines a physical `ActorPtrCache` array index with a global generation
 *          counter. This ensures that recycled array slots are never misidentified
 *          as the original actor.
 */
class ActorUniqueID
{
public:
    static const u32 cInvalidID         = 0;        ///< Represents an invalid or uninitialized ID.
    static const u32 cArrayIndexMax     = 0x3ff;    ///< The maximum allowed array index (10 bits; 1023).
    static const u32 cCreateIndexMax    = 0x3fffff; ///< The maximum allowed global create index (22 bits; 4,194,303)

public:
    /**
     * @brief Constructs an invalid ActorUniqueID.
     */
    ActorUniqueID()
    {
        setValue(cInvalidID);
    }

    /**
     * @brief Constructs an ActorUniqueID from a raw 32-bit packed value containing both the array index and create index.
     * @param id The raw 32-bit representation of the desired ID to create.
     */
    ActorUniqueID(u32 id)
    {
        setValue(id);
    }

    /**
     * @brief Constructs an ActorUniqueID by packing a physical index and a global generation index.
     * @param i_array_index The 10-bit physical index in the ActorPtrCache array.
     * @param i_create_index The 22-bit global generation counter.
     */
    ActorUniqueID(u32 i_array_index, u32 i_create_index)
    {
        setValue(i_array_index, i_create_index);
    }

    /**
     * @brief Overwrites the ID with a raw 32-bit packed value containing both the array index and create index.
     * @param id The raw 32-bit representation of the desired ID to set.
     */
    void setValue(u32 id)
    {
        mValue = id;
    }

    /**
     * @brief Overwrites the ID by packing a physical index and a global generation index.
     * @param i_array_index The 10-bit physical index in the ActorPtrCache array. Must be `<= cArrayIndexMax`.
     * @param i_create_index The 22-bit global generation counter. Must be `<= cCreateIndexMax`.
     */
    void setValue(u32 i_array_index, u32 i_create_index)
    {
        SEAD_ASSERT(i_array_index <= cArrayIndexMax);
        SEAD_ASSERT(i_create_index <= cCreateIndexMax);
        mValue = i_array_index << /* log2(cCreateIndexMax + 1) */ 22 | i_create_index;
    }

    /**
     * @return The raw 32-bit packed value of this ID.
     */
    u32 getValue() const
    {
        return mValue;
    }

    /**
     * @brief Extracts the physical array index where this actor is stored.
     * @return The 10-bit array index (top bits of the packed ID).
     */
    u32 getArrayIndex() const
    {
        return mValue >> /* log2(cCreateIndexMax + 1) */ 22;
    }

    /**
     * @brief Extracts the global generation counter assigned to this actor at creation.
     * @return The 22-bit create index (bottom bits of the packed ID).
     */
    u32 getCreateIndex() const
    {
        return mValue & cCreateIndexMax;
    }

    /**
     * @return Whether this ID has been assigned a valid value (not equal to `cInvalidID`).
     */
    bool isValid() const
    {
        return mValue != cInvalidID;
    }

    /**
     * @brief Clears the ID, setting it back to `cInvalidID`.
     */
    void invalidate()
    {
        mValue = cInvalidID;
    }

    /**
     * @brief Compares two ActorUniqueIDs for equality.
     */
    friend bool operator==(const ActorUniqueID& lhs, const ActorUniqueID& rhs)
    {
        return lhs.mValue == rhs.mValue;
    }

    /**
    * @brief Compares two ActorUniqueIDs for inequality.
    */
    friend bool operator!=(const ActorUniqueID& lhs, const ActorUniqueID& rhs)
    {
        return lhs.mValue != rhs.mValue;
    }

private:
    u32 mValue; ///< The raw 32-bit packed value containing both the array index and create index.
};
static_assert(sizeof(ActorUniqueID) == 4);
