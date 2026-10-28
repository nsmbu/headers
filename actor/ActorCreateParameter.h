#pragma once

#include <actor/UniqueID.h>
#include <utility/Angle.h>

#include <math/seadVector.h>
#include <prim/seadMemUtil.h>

struct ActorParameterEx0
{
    // It is a mystery whether this struct/union originally existed or not,
    // but it would be quite difficult to manage this data without it.

    union
    {
        struct
        {
            u8  _0;
            u8  _1;
            u8  _2;
        }   general;
        struct
        {
            u8  layer;
            u8  switch_flag_0;
            u8  switch_flag_1;
        }   course;
        struct
        {
            u8  world_sub_letter;
            u8  _1;
            u8  world;
        }   course_select;
    };

    ActorParameterEx0()
    {
    }

    ActorParameterEx0(const ActorParameterEx0& param)
    {
        general._0 = param.general._0;
        general._1 = param.general._1;
        general._2 = param.general._2;
    }

    ActorParameterEx0& operator=(const ActorParameterEx0& param)
    {
        general._0 = param.general._0;
        general._1 = param.general._1;
        general._2 = param.general._2;
        return *this;
    }
};
static_assert(sizeof(ActorParameterEx0) == 3);

struct ActorParameterEx1
{
    // It is a mystery whether this struct/union originally existed or not,
    // but it would be quite difficult to manage this data without it.

    union
    {
        struct
        {
            u8  _0;
            u8  _1;
            u8  _2;
        }   general;
        struct
        {
            u8  movement_id;
            u8  link_id;
            u8  init_state_flag;
        }   course;
        struct
        {
            u8  point_no;
            u8  _1;
            u8  _2;
        }   course_select;
    };

    ActorParameterEx1()
    {
    }

    ActorParameterEx1(const ActorParameterEx1& param)
    {
        general._0 = param.general._0;
        general._1 = param.general._1;
        general._2 = param.general._2;
    }

    ActorParameterEx1& operator=(const ActorParameterEx1& param)
    {
        general._0 = param.general._0;
        general._1 = param.general._1;
        general._2 = param.general._2;
        return *this;
    }
};
static_assert(sizeof(ActorParameterEx1) == 3);

class Profile;

struct ActorCreateParameter
{
    u32                 param_0;
    u32                 param_1;
    UniqueID            parent_id;
    Profile*            profile;
    sead::Vector3f      position;
    Angle               angle;
    ActorParameterEx0   param_ex_0;
    u8                  _pad1[1];
    ActorParameterEx1   param_ex_1;
    u8                  _pad2[1];
    u8*                 _28;
};
static_assert(sizeof(ActorCreateParameter) == 0x2C, "ActorCreateParameter size mismatch");
