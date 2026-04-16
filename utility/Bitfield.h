#pragma once

#include <prim/seadMemUtil.h>
#include <concepts>

// TODO: Investigate if this is a sead type

template <u32 BitNum>
class Bitfield
{
public:
    Bitfield()
    {
        reset();
    }

    void copy(const Bitfield<BitNum>& rhs)
    {
        sead::MemUtil::copy(mBitArray, rhs.mBitArray, BitNum / 8);
    }

    void reset()
    {
        sead::MemUtil::fillZero(mBitArray, BitNum / 8);
    }

    static s32 bitToIndex(s32 bit)
    {
        return bit >> 5;
    }

    static u32 makeMask(u32 bit)
    {
        return 1 << (bit % 32);
    }

    bool isOnBit(u32 bit) const
    {
        return (mBitArray[bitToIndex(static_cast<s32>(bit))] & makeMask(bit)) != 0;
    }

    void setBit(std::convertible_to<u32> auto... bits)
    {
        (setBit_(bits), ...); 
    }

    void resetBit(u32 bit)
    {
        mBitArray[bitToIndex(bit)] &= ~makeMask(bit);
    }

    void changeBit(u32 bit, bool b)
    {
        if (b)
            setBit(bit);
        else
            resetBit(bit);
    }

    void toggleBit(u32 bit)
    {
        mBitArray[bitToIndex(bit)] ^= makeMask(bit);
    }

private:
    void setBit_(u32 bit)
    {
        mBitArray[bitToIndex(static_cast<s32>(bit))] |= makeMask(bit);
    }

private:
    static_assert(BitNum % 32 == 0);
    u32 mBitArray[BitNum / 32];
};
static_assert(sizeof(Bitfield<32>) == 4);
