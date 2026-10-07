#pragma once

#include <enemy/Shell.h>

class Nokonoko : public Shell
{
public:
    // Address: 0x10205668
    static FStateVirtualID<Nokonoko> StateID_Kick;

public:
    // Address: 0x02400B08
    bool shouldTurn() const;
};
