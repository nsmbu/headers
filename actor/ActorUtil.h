#pragma once

#include <actor/Profile.h>
#include <utility/Direction.h>

#include <math/seadVector.h>

class ActorBase;
class Actor;

class ActorUtil
{
protected:
    // Address: 0x0200C67C
    static s32 searchMain_(sead::Vector2f* player_pos, const sead::Vector2f& src_pos);

public:
    // Address: 0x0200C7E4
    static DirType getTrgToSrcDir(const Actor& src, const Actor& trg);
    // Address: 0x0200C800
    static DirType getSrcToTrgDir(const Actor& src, const Actor& trg);

    // Address: 0x0200C81C
    static void createBlockOutIvy(const sead::Vector3f& pos);

    // Address: 0x0200C8C0
    static void calcDestPosSpeed(sead::Vector2f* speed, const sead::Vector2f& pos, s32 frame_cnt, Actor* actor);

    // Address: Deleted
    static void setAndCalcDestPosSpeed(const sead::Vector2f& pos, s32 frame_cnt, Actor* actor);
    
    // Address: 0x0200C98C
    static bool isGoalPoleProfileID(const ProfileID& id);

    // Address: 0x0200C9E0
    static bool isGoalPoleActor(const ActorBase& actor);

    // Address: 0x0200CA0C
    static ActorBase* searchGoalPole();
};
