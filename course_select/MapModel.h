#pragma once

#include "prim/seadSafeString.h"
#include <graphics/AnimModel.h>

class MapModel
{
public:
    // Address: 0x022961AC
    MapModel(const sead::SafeString&);
    
    // Address: 0x02297A24
    void draw();
    
    [[nodiscard]]
    AnimModel* getModel()
    {
        return mModel;
    }
    
    [[nodiscard]]
    const AnimModel* getModel() const
    {
        return mModel;
    }
    
    [[nodiscard]]
    AnimModel* getModelWorld()
    {
        return mModelWorld;
    }
    
    [[nodiscard]]
    const AnimModel* getModelWorld() const
    {
        return mModelWorld;
    }
    
    [[nodiscard]]
    AnimModel* getModelTrap()
    {
        return mModelTrap;
    }
    
    [[nodiscard]]
    const AnimModel* getModelTrap() const
    {
        return mModelTrap;
    }
    
private:
    u8 _0[0x4 - 0x0];
    AnimModel* mModel;
    AnimModel* mModelWorld;
    AnimModel* mModelTrap;
    u8 _10[0x6E4 - 0x10];
    s32 mWorld;
    s32 mWorldSubLetter;
    u8 _6ec[0x700 - 0x6EC];
    sead::FixedSafeString<32> mName;
    sead::ListNode mNode;
};
static_assert(sizeof(MapModel) == 0x734, "MapModel size mismatch");
