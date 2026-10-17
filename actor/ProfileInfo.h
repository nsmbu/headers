#pragma once

#include <prim/seadSafeString.h>

class ProfileInfo
{
public:
    enum
    {
        cProfileID_Max = 913    // Profiles 910, 911 and 912 are extra
    };

    enum ResType
    {
        cResType_Boot = 0,
        cResType_Course,
        cResType_CourseSelect,
        cResType_Num
    };

public:
    // Address: 0x02019988
    static s16 getDrawPriority(s32 id);
    // Address: 0x020199A8
    static ResType getResType(s32 id);
    // Address: 0x020199CC
    static u32 getResNum(s32 id);
    // Address: 0x020199EC
    static const sead::SafeString* getResList(s32 id);

protected:
    enum DrawPriority
    {
        cDrawPriority_Balloon                                   =   0,
        cDrawPriority_PlayerObject                              =   1,
        cDrawPriority_TottenPlayer                              =   2,
        cDrawPriority_Yoshi                                     =   3,
        cDrawPriority_GoalDemoKinopio                           =   4,
        cDrawPriority_Kuribo                                    =   5,
        cDrawPriority_Kakibo                                    =   6,
        cDrawPriority_PataKuribo                                =   7,
        cDrawPriority_IgaKuribo                                 =   8,
        cDrawPriority_BeansKuribo                               =   9,
        cDrawPriority_MiddleKuribo                              =  10,
        cDrawPriority_LargeKuribo                               =  11,
        cDrawPriority_IceBall                                   =  12,
        cDrawPriority_IceBallPakkun                             =  13,
        cDrawPriority_FireBallPlayer                            =  14,
        cDrawPriority_FireBallPakkun                            =  15,
        cDrawPriority_YoshiFire                                 =  16,
        cDrawPriority_DokanPakkunUp                             =  17,
        cDrawPriority_DokanPakkunDown                           =  18,
        cDrawPriority_DokanPakkunLeft                           =  19,
        cDrawPriority_DokanPakkunRight                          =  20,
        cDrawPriority_RotationDokanFPakkun                      =  21,
        cDrawPriority_RotationDokanPakkunUp                     =  22,
        cDrawPriority_RotationDokanPakkunDown                   =  23,
        cDrawPriority_RotationDokanPakkunLeft                   =  24,
        cDrawPriority_RotationDokanPakkunRight                  =  25,
        cDrawPriority_DokanFPakkunUp                            =  26,
        cDrawPriority_DokanFPakkunDown                          =  27,
        cDrawPriority_DokanFPakkunLeft                          =  28,
        cDrawPriority_DokanFPakkunRight                         =  29,
        cDrawPriority_DokanIPakkunUp                            =  30,
        cDrawPriority_DokanIPakkunDown                          =  31,
        cDrawPriority_DokanIPakkunLeft                          =  32,
        cDrawPriority_DokanIPakkunRight                         =  33,
        cDrawPriority_DokanPakkunBig                            =  34,
        cDrawPriority_JimenPakkun                               =  35,
        cDrawPriority_JimenPakkunRDash                          =  36,
        cDrawPriority_JimenPakkunR33                            =  37,
        cDrawPriority_JimenFPakkun                              =  38,
        cDrawPriority_JimenIPakkun                              =  39,
        cDrawPriority_JimenBigPakkun                            =  40,
        cDrawPriority_JimenBigFPakkun                           =  41,
        cDrawPriority_WalkPakkun                                =  42,
        cDrawPriority_WaterPakkun                               =  43,
        cDrawPriority_WaterPakkunRDash                          =  44,
        cDrawPriority_PakkunBlack                               =  45,
        cDrawPriority_PakkunBlackObj                            =  46,
        cDrawPriority_Freezer                                   =  47,
        cDrawPriority_ObjDokanRight                             =  48,
        cDrawPriority_ObjDokanLeft                              =  49,
        cDrawPriority_ObjDokanUp                                =  50,
        cDrawPriority_ObjDokanDown                              =  51,
        cDrawPriority_ObjDokanRightGroup                        =  52,
        cDrawPriority_ObjDokanLeftGroup                         =  53,
        cDrawPriority_ObjDokanUpGroup                           =  54,
        cDrawPriority_ObjDokanDownGroup                         =  55,
        cDrawPriority_ObjDokanMameRight                         =  56,
        cDrawPriority_ObjDokanMameLeft                          =  57,
        cDrawPriority_ObjDokanMameUp                            =  58,
        cDrawPriority_ObjDokanMameDown                          =  59,
        cDrawPriority_ObjDokanRightNG                           =  60,
        cDrawPriority_ObjDokanLeftNG                            =  61,
        cDrawPriority_ObjDokanUpNG                              =  62,
        cDrawPriority_ObjDokanDownNG                            =  63,
        cDrawPriority_CoinBattleDokanUpNG                       =  64,
        cDrawPriority_CoinBattleDokanDownNG                     =  65,
        cDrawPriority_CoinBattleDokanLeftNG                     =  66,
        cDrawPriority_CoinBattleDokanRightNG                    =  67,
        cDrawPriority_ZoomDokanRight                            =  68,
        cDrawPriority_ZoomDokanLeft                             =  69,
        cDrawPriority_ZoomDokanUp                               =  70,
        cDrawPriority_ZoomDokanDown                             =  71,
        cDrawPriority_LiftRotationHuriko                        =  72,
        cDrawPriority_LiftRotationHurikoRDash                   =  73,
        cDrawPriority_LiftHanRotateLight                        =  74,
        cDrawPriority_RotationLiftSemisolid                     =  75,
        cDrawPriority_RotationObjDokan                          =  76,
        cDrawPriority_RotationObjDokanRDash                     =  77,
        cDrawPriority_LiftHuriko                                =  78,
        cDrawPriority_LiftHurikoRDash                           =  79,
        cDrawPriority_LineSpinLift                              =  80,
        cDrawPriority_LineKinokoBlock                           =  81,
        cDrawPriority_GroupLineKinokoLift                       =  82,
        cDrawPriority_RailPolygon                               =  83,
        cDrawPriority_CannonPipe                                =  84,
        cDrawPriority_CannonPipeRDash                           =  85,
        cDrawPriority_FooBall                                   =  86,
        cDrawPriority_Nokonoko                                  =  87,
        cDrawPriority_NokonokoHorizontalSpawn                   =  88,
        cDrawPriority_BigNokonoko                               =  89,
        cDrawPriority_Patapata                                  =  90,
        cDrawPriority_PatapataGroup                             =  91,
        cDrawPriority_Met                                       =  92,
        cDrawPriority_BigMet                                    =  93,
        cDrawPriority_Togezo                                    =  94,
        cDrawPriority_SakasaTogezo                              =  95,
        cDrawPriority_Kanitama                                  =  96,
        cDrawPriority_Kanibo                                    =  97,
        cDrawPriority_Bomhei                                    =  98,
        cDrawPriority_ParaBomhei                                =  99,
        cDrawPriority_ParaBomheiRDash                           = 100,
        cDrawPriority_MechaKoopa                                = 101,
        cDrawPriority_Pentaro                                   = 102,
        cDrawPriority_PentaroSunglasses                         = 103,
        cDrawPriority_PentaroIce                                = 104,
        cDrawPriority_Honemet                                   = 105,
        cDrawPriority_HonemetHead                               = 106,
        cDrawPriority_Puku                                      = 107,
        cDrawPriority_PukuGroup                                 = 108,
        cDrawPriority_MiddlePuku                                = 109,
        cDrawPriority_MiddlePukuGroup                           = 110,
        cDrawPriority_SachiPuku                                 = 111,
        cDrawPriority_SachiMiddlePuku                           = 112,
        cDrawPriority_NigePuku                                  = 113,
        cDrawPriority_NigeMiddlePuku                            = 114,
        cDrawPriority_MechaPuku                                 = 115,
        cDrawPriority_TogePuku                                  = 116,
        cDrawPriority_TobiPuku                                  = 117,
        cDrawPriority_TobiMechaPuku                             = 118,
        cDrawPriority_Kopone                                    = 119,
        cDrawPriority_Unira                                     = 120,
        cDrawPriority_UniraRDashNarrowBGCheck                   = 121,
        cDrawPriority_Unizoo                                    = 122,
        cDrawPriority_UniraRDash                                = 123,
        cDrawPriority_IgaPuku                                   = 124,
        cDrawPriority_BigIgaPuku                                = 125,
        cDrawPriority_JellyFish                                 = 126,
        cDrawPriority_Chochin                                   = 127,
        cDrawPriority_FireBar                                   = 128,
        cDrawPriority_FireBarSync                               = 129,
        cDrawPriority_FireBar2                                  = 130,
        cDrawPriority_PivotFireBar                              = 131,
        cDrawPriority_Barnar                                    = 132,
        cDrawPriority_BarnarLarge                               = 133,
        cDrawPriority_BarnarSync                                = 134,
        cDrawPriority_BarnarPivot                               = 135,
        cDrawPriority_IceLump                                   = 136,
        cDrawPriority_Keronpa                                   = 137,
        cDrawPriority_KeronpaRDash                              = 138,
        cDrawPriority_FireBallKeronpa                           = 139,
        cDrawPriority_FireBallKeronpaRDash                      = 140,
        cDrawPriority_FireSnake                                 = 141,
        cDrawPriority_Gabon                                     = 142,
        cDrawPriority_GabonRDash                                = 143,
        cDrawPriority_GabonResident                             = 144,
        cDrawPriority_GabonRock                                 = 145,
        cDrawPriority_RockGabon                                 = 146,
        cDrawPriority_RockGabonResident                         = 147,
        cDrawPriority_RockGabonRock                             = 148,
        cDrawPriority_Seichan                                   = 149,
        cDrawPriority_SeichanSnowBall                           = 150,
        cDrawPriority_SnowBall                                  = 151,
        cDrawPriority_GoroGoro                                  = 152,
        cDrawPriority_GoroGoroKyodai                            = 153,
        cDrawPriority_GoroGoroKyodaiRDash                       = 154,
        cDrawPriority_BigPileDir1                               = 155,
        cDrawPriority_BigPileDir2                               = 156,
        cDrawPriority_BigPileDir3                               = 157,
        cDrawPriority_BigPileDir4                               = 158,
        cDrawPriority_SuperBigPileDir1                          = 159,
        cDrawPriority_SuperBigPileDir2                          = 160,
        cDrawPriority_KazandanMgr                               = 161,
        cDrawPriority_WakiKazadan                               = 162,
        cDrawPriority_Kazandan                                  = 163,
        cDrawPriority_Bun                                       = 164,
        cDrawPriority_BunW2                                     = 165,
        cDrawPriority_BunW3                                     = 166,
        cDrawPriority_BunW4                                     = 167,
        cDrawPriority_BunW5                                     = 168,
        cDrawPriority_BunW6                                     = 169,
        cDrawPriority_BunDemoKameck                             = 170,
        cDrawPriority_LemmyBomb                                 = 171,
        cDrawPriority_Lemmy                                     = 172,
        cDrawPriority_LemmyBall                                 = 173,
        cDrawPriority_Morton                                    = 174,
        cDrawPriority_MortonSanbo                               = 175,
        cDrawPriority_MortonSanboParts                          = 176,
        cDrawPriority_Wendy                                     = 177,
        cDrawPriority_WendyRing                                 = 178,
        cDrawPriority_WendyIcicle                               = 179,
        cDrawPriority_WendyFloor                                = 180,
        cDrawPriority_Larry                                     = 181,
        cDrawPriority_KokoopaSearchFire                         = 182,
        cDrawPriority_Ludwig                                    = 183,
        cDrawPriority_LudwigAlterEgo                            = 184,
        cDrawPriority_Iggy                                      = 185,
        cDrawPriority_IggyMagic                                 = 186,
        cDrawPriority_IggyRoom                                  = 187,
        cDrawPriority_Woogan                                    = 188,
        cDrawPriority_Roy                                       = 189,
        cDrawPriority_BossKK                                    = 190,
        cDrawPriority_BossKKThunder                             = 191,
        cDrawPriority_BossKKDemoKameck                          = 192,
        cDrawPriority_BossKKDemoKK                              = 193,
        cDrawPriority_Kameck                                    = 194,
        cDrawPriority_KameckIce                                 = 195,
        cDrawPriority_KameckMagic                               = 196,
        cDrawPriority_PeachFinalCastleKoopaJr                   = 197,
        cDrawPriority_PeachFinalCastleKoopaJrClown              = 198,
        cDrawPriority_PeachFinalCastleKoopaJrLift               = 199,
        cDrawPriority_PeachFinalCastleKoopaJrLiftHMove          = 200,
        cDrawPriority_PeachFinalCastleKoopaJrLiftPairObj        = 201,
        cDrawPriority_RoyLiftWakiStep                           = 202,
        cDrawPriority_Koopa                                     = 203,
        cDrawPriority_KoopaFire                                 = 204,
        cDrawPriority_KoopaShutter                              = 205,
        cDrawPriority_DemoKoopaJr                               = 206,
        cDrawPriority_DemoKoopaJrClown                          = 207,
        cDrawPriority_KoopaDemoKameck                           = 208,
        cDrawPriority_FinalKoopa                                = 209,
        cDrawPriority_FinalKoopaFire                            = 210,
        cDrawPriority_FinalKoopaJr                              = 211,
        cDrawPriority_FinalKoopaJrClown                         = 212,
        cDrawPriority_FinalKoopaJrFire                          = 213,
        cDrawPriority_FinalBomhei                               = 214,
        cDrawPriority_KinokoLift                                = 215,
        cDrawPriority_KinokoLiftColor                           = 216,
        cDrawPriority_LiftZenStar                               = 217,
        cDrawPriority_ObjSpinBolt                               = 218,
        cDrawPriority_ObjSpinBoltChild                          = 219,
        cDrawPriority_ObjSpinBoltChildPyramid                   = 220,
        cDrawPriority_ObjSpinBoltChildPyramidResident           = 221,
        cDrawPriority_ObjSpinAshiba                             = 222,
        cDrawPriority_SpinWire                                  = 223,
        cDrawPriority_ObjKinoko                                 = 224,
        cDrawPriority_TamanoriLift                              = 225,
        cDrawPriority_FlyingKinoko                              = 226,
        cDrawPriority_CheckPointFlag                            = 227,
        cDrawPriority_HardIceBlock                              = 228,
        cDrawPriority_Block                                     = 229,
        cDrawPriority_ChibiYoshiEgg                             = 230,
        cDrawPriority_ChibiYoshiAwa                             = 231,
        cDrawPriority_FruitCookie                               = 232,
        cDrawPriority_BubbleChibiYoshi                          = 233,
        cDrawPriority_BalloonChibiYoshi                         = 234,
        cDrawPriority_LightChibiYoshi                           = 235,
        cDrawPriority_CloudChibiYoshi                           = 236,
        cDrawPriority_PipeNextGotoTimerAddTag                   = 237,
        cDrawPriority_QuestActorPlacementTag                    = 238,
        cDrawPriority_QuestDemoLocationTag                      = 239,
        cDrawPriority_ShadowkunRetreatTag                       = 240,
        cDrawPriority_Shadowkun                                 = 241,
        cDrawPriority_ShadowkunFukuro                           = 242,
        cDrawPriority_QuestKey                                  = 243,
        cDrawPriority_QuestKinopio                              = 244,
        cDrawPriority_QuestPrizeItem                            = 245,
        cDrawPriority_EnemyCourseDemoShadowkun                  = 246,
        cDrawPriority_TitleDemoShadowkun                        = 247,
        cDrawPriority_PowBlock                                  = 248,
        cDrawPriority_LightBlock                                = 249,
        cDrawPriority_PropBlock                                 = 250,
        cDrawPriority_SlideBlock                                = 251,
        cDrawPriority_Jumpdai                                   = 252,
        cDrawPriority_CarryBlockTaru                            = 253,
        cDrawPriority_Kinoko                                    = 254,
        cDrawPriority_FireFlower                                = 255,
        cDrawPriority_RealizeFeverStar                          = 256,
        cDrawPriority_Star                                      = 257,
        cDrawPriority_MameKinoko                                = 258,
        cDrawPriority_IceFlower                                 = 259,
        cDrawPriority_Propeller                                 = 260,
        cDrawPriority_Penguin                                   = 261,
        cDrawPriority_OneUpKinoko                               = 262,
        cDrawPriority_Musasabi                                  = 263,
        cDrawPriority_SuperMoon                                 = 264,
        cDrawPriority_TitleDemoItem                             = 265,
        cDrawPriority_RailPolyChild                             = 266,
        cDrawPriority_ObjPol                                    = 267,
        cDrawPriority_ObjPolToride                              = 268,
        cDrawPriority_ObjPolNohara                              = 269,
        cDrawPriority_ObjPolKogen                               = 270,
        cDrawPriority_ObjPolAshiba                              = 271,
        cDrawPriority_LiftZenKaihei                             = 272,
        cDrawPriority_PairObjChild                              = 273,
        cDrawPriority_PairObjChildToride                        = 274,
        cDrawPriority_PairObjChildIwa                           = 275,
        cDrawPriority_PairObjChildIron                          = 276,
        cDrawPriority_PairObjChildNohara                        = 277,
        cDrawPriority_PairObjChildKogen                         = 278,
        cDrawPriority_LiftZenKumiawase                          = 279,
        cDrawPriority_LiftZenTagaichigai                        = 280,
        cDrawPriority_LiftZenTagaichigaiGear                    = 281,
        cDrawPriority_LiftZenShiroYogan                         = 282,
        cDrawPriority_PairObjChildSabakuIseki                   = 283,
        cDrawPriority_PairObjChildTorideRock                    = 284,
        cDrawPriority_PairObjChildTorideRockRDash               = 285,
        cDrawPriority_LiftZenShiro                              = 286,
        cDrawPriority_PairObjChildWarning                       = 287,
        cDrawPriority_PairObjChildNoharaHanAtari                = 288,
        cDrawPriority_PairObjChildKinokoAshibaHMove             = 289,
        cDrawPriority_Ice                                       = 290,
        cDrawPriority_GoalPole                                  = 291,
        cDrawPriority_GoalPoleForPaintingStage                  = 292,
        cDrawPriority_GoalPoleRDash                             = 293,
        cDrawPriority_GoalPoleForPaintingStageRDash             = 294,
        cDrawPriority_KanbanArrow                               = 295,
        cDrawPriority_KanbanArrowRDash                          = 296,
        cDrawPriority_KanbanArrowNarrowSpawnRange               = 297,
        cDrawPriority_LuigiKanban11                             = 298,
        cDrawPriority_LuigiKanban99                             = 299,
        cDrawPriority_FollowGrassFlower                         = 300,
        cDrawPriority_DVKusabanaHassei                          = 301,
        cDrawPriority_SeaWakame                                 = 302,
        cDrawPriority_RedRing                                   = 303,
        cDrawPriority_GreenRing                                 = 304,
        cDrawPriority_PurpleRing                                = 305,
        cDrawPriority_BlueRing                                  = 306,
        cDrawPriority_GoalRing                                  = 307,
        cDrawPriority_RotationGuruGuru                          = 308,
        cDrawPriority_RotationGuruGuruRDash                     = 309,
        cDrawPriority_DoorNormal                                = 310,
        cDrawPriority_DoorObake                                 = 311,
        cDrawPriority_DoorToride                                = 312,
        cDrawPriority_DoorTorideRDash                           = 313,
        cDrawPriority_DoorCastle                                = 314,
        cDrawPriority_DoorCastleRDash                           = 315,
        cDrawPriority_DoorKoopa                                 = 316,
        cDrawPriority_DoorKoopaRDash                            = 317,
        cDrawPriority_CollectionCoin                            = 318,
        cDrawPriority_CollectionCoinLine                        = 319,
        cDrawPriority_CollectionCoinLineGroup                   = 320,
        cDrawPriority_CollectionCoinBolt                        = 321,
        cDrawPriority_CollectionCoinParent                      = 322,
        cDrawPriority_CollectionCoinParentRDash                 = 323,
        cDrawPriority_CollectionCoinParentRDashExtendedSpawnRange = 324,
        cDrawPriority_CollectionCoinParentR6Castle              = 325,
        cDrawPriority_CollectionCoinSnake                       = 326,
        cDrawPriority_CollectionCoinSpin                        = 327,
        cDrawPriority_RedCoin                                   = 328,
        cDrawPriority_GreenCoin                                 = 329,
        cDrawPriority_GreenCoinChild                            = 330,
        cDrawPriority_CoinNankinTamasudareChild                 = 331,
        cDrawPriority_CoinNankinTamasudareParent                = 332,
        cDrawPriority_Choropu                                   = 333,
        cDrawPriority_ChoropooShadow                            = 334,
        cDrawPriority_Fruit                                     = 335,
        cDrawPriority_IronBallHole                              = 336,
        cDrawPriority_IronBallHoleRDashW2Toride                 = 337,
        cDrawPriority_WakiDokanTogeTekkyu                       = 338,
        cDrawPriority_Hammer                                    = 339,
        cDrawPriority_HammerBros                                = 340,
        cDrawPriority_Boomerang                                 = 341,
        cDrawPriority_BoomerangBros                             = 342,
        cDrawPriority_FireBallBros                              = 343,
        cDrawPriority_FireBros                                  = 344,
        cDrawPriority_IceBallBros                               = 345,
        cDrawPriority_IceBros                                   = 346,
        cDrawPriority_MegaHammer                                = 347,
        cDrawPriority_HimanBros                                 = 348,
        cDrawPriority_Birikyu                                   = 349,
        cDrawPriority_DensenKoopa                               = 350,
        cDrawPriority_DensenKoopaTantai                         = 351,
        cDrawPriority_ActorBlockHatena                          = 352,
        cDrawPriority_ActorBlockHatenaRDash                     = 353,
        cDrawPriority_ActorBlockRenga                           = 354,
        cDrawPriority_ActorBlockRengaRDash                      = 355,
        cDrawPriority_ActorBlockRengaRailVMove                  = 356,
        cDrawPriority_ActorBlockClear                           = 357,
        cDrawPriority_ActorBlockClearRDash                      = 358,
        cDrawPriority_ActorHatenaBlockLine                      = 359,
        cDrawPriority_ActorRengaBlockLine                       = 360,
        cDrawPriority_ActorHatenaBlockLineGroup                 = 361,
        cDrawPriority_ActorRengaBlockLineGroup                  = 362,
        cDrawPriority_ActorBlockHatenaAngle                     = 363,
        cDrawPriority_ActorBlockHatenaAngleR99                  = 364,
        cDrawPriority_ActorBlockRengaAngle                      = 365,
        cDrawPriority_ActorBlockRengaAngleRDash                 = 366,
        cDrawPriority_ActorBlockRengaAngleR99                   = 367,
        cDrawPriority_ActorBlockHatenaPairChild                 = 368,
        cDrawPriority_ActorBlockRengaPairChild                  = 369,
        cDrawPriority_ActorBlockHatenaFollow                    = 370,
        cDrawPriority_ActorBlockRengaFollow                     = 371,
        cDrawPriority_ActorBlockHatenaEnemyCourse               = 372,
        cDrawPriority_ActorBlockPataEnemyCourse                 = 373,
        cDrawPriority_ActorBlockMakeDRC                         = 374,
        cDrawPriority_ActorBlockPata                            = 375,
        cDrawPriority_ActorBlockWater                           = 376,
        cDrawPriority_ActorBlockCloud                           = 377,
        cDrawPriority_ActorBlockSwitch                          = 378,
        cDrawPriority_ActorBlockPSwitch                         = 379,
        cDrawPriority_ActorBlockJump                            = 380,
        cDrawPriority_ActorBlockStone                           = 381,
        cDrawPriority_ActorBlockHard                            = 382,
        cDrawPriority_ActorBlockWood                            = 383,
        cDrawPriority_ActorBlockGuide                           = 384,
        cDrawPriority_RDashLuigiBlock                           = 385,
        cDrawPriority_ActorBlockSnakeCoin                       = 386,
        cDrawPriority_ActorBlockChibiYoshi                      = 387,
        cDrawPriority_ActorBlockBigRenga                        = 388,
        cDrawPriority_ActorBlockBigHatena                       = 389,
        cDrawPriority_RuletBlock                                = 390,
        cDrawPriority_ChikuwaBlock                              = 391,
        cDrawPriority_KameckBlock                               = 392,
        cDrawPriority_DRCHiddenBlock                            = 393,
        cDrawPriority_ActorCoin                                 = 394,
        cDrawPriority_ActorCoinRDash                            = 395,
        cDrawPriority_ActorCoinFrozen                           = 396,
        cDrawPriority_ActorCoinPairObj                          = 397,
        cDrawPriority_ActorCoinDemoJump                         = 398,
        cDrawPriority_ActorCoinHopJump                          = 399,
        cDrawPriority_ActorCoinJump                             = 400,
        cDrawPriority_ActorCoinJumpBattle                       = 401,
        cDrawPriority_ActorCoinJumpUnabon                       = 402,
        cDrawPriority_ActorCoinShowerJump                       = 403,
        cDrawPriority_ActorCoinAngle                            = 404,
        cDrawPriority_ActorCoinKaitenita                        = 405,
        cDrawPriority_ActorCoinWater                            = 406,
        cDrawPriority_ActorCoinFollow                           = 407,
        cDrawPriority_ActorCoinBubble                           = 408,
        cDrawPriority_ActorCoinJugem                            = 409,
        cDrawPriority_ActorCoinPass                             = 410,
        cDrawPriority_ActorCoinAkoya                            = 411,
        cDrawPriority_ActorCoinRotation                         = 412,
        cDrawPriority_ActorCoinRotationPass                     = 413,
        cDrawPriority_ActorCoinRotationFloor                    = 414,
        cDrawPriority_ActorCoinSpin                             = 415,
        cDrawPriority_ActorCoinParachuteParent                  = 416,
        cDrawPriority_ActorCoinParachute                        = 417,
        cDrawPriority_ActorCoinSnake                            = 418,
        cDrawPriority_ActorCoinKinokoLift                       = 419,
        cDrawPriority_ActorCoinBalloon                          = 420,
        cDrawPriority_ActorCoinGravity                          = 421,
        cDrawPriority_ActorCoinShock                            = 422,
        cDrawPriority_ActorCoinDRCAppearance                    = 423,
        cDrawPriority_ActorCoinEat                              = 424,
        cDrawPriority_BlueCoin                                  = 425,
        cDrawPriority_Basabasa                                  = 426,
        cDrawPriority_Sanbo                                     = 427,
        cDrawPriority_SanboParts                                = 428,
        cDrawPriority_WakiBigHanachan                           = 429,
        cDrawPriority_Hanachan                                  = 430,
        cDrawPriority_HanachanRDash                             = 431,
        cDrawPriority_BigHanachan                               = 432,
        cDrawPriority_Kirifuki                                  = 433,
        cDrawPriority_KirifukiRDash                             = 434,
        cDrawPriority_TrampolineCloud                           = 435,
        cDrawPriority_TrampolineCloudMove                       = 436,
        cDrawPriority_LiftSpinRotation                          = 437,
        cDrawPriority_LiftSpinRotationSync                      = 438,
        cDrawPriority_TorchiLight                               = 439,
        cDrawPriority_KillerHoudai                              = 440,
        cDrawPriority_StretchKillerHoudai                       = 441,
        cDrawPriority_MagnumKillerHoudai                        = 442,
        cDrawPriority_MagnumKillerHoudaiDown                    = 443,
        cDrawPriority_SearchKillerHoudai                        = 444,
        cDrawPriority_SearchMagnumKillerHoudai                  = 445,
        cDrawPriority_SearchMagnumKillerHoudaiDown              = 446,
        cDrawPriority_MagnumKillerHoudaiRDash                   = 447,
        cDrawPriority_MagnumKillerHoudaiDownRDash               = 448,
        cDrawPriority_SearchMagnumKillerHoudaiRDash             = 449,
        cDrawPriority_SearchMagnumKillerHoudaiDownRDash         = 450,
        cDrawPriority_KaitenHoudai                              = 451,
        cDrawPriority_TahoshinKaitenHoudai                      = 452,
        cDrawPriority_CannonShip                                = 453,
        cDrawPriority_CannonRot                                 = 454,
        cDrawPriority_CannonRotDokan                            = 455,
        cDrawPriority_CannonBullet                              = 456,
        cDrawPriority_CannonDokan                               = 457,
        cDrawPriority_Killer                                    = 458,
        cDrawPriority_MagnumKiller                              = 459,
        cDrawPriority_SearchKiller                              = 460,
        cDrawPriority_SearchMagnumKiller                        = 461,
        cDrawPriority_KingKiller                                = 462,
        cDrawPriority_KingKillerRDash                           = 463,
        cDrawPriority_Dosun                                     = 464,
        cDrawPriority_BigDosun                                  = 465,
        cDrawPriority_SwitchHatenaButton                        = 466,
        cDrawPriority_SwitchPButton                             = 467,
        cDrawPriority_SwitchPButtonRDash                        = 468,
        cDrawPriority_SwitchPButtonNoWallKick                   = 469,
        cDrawPriority_SwitchBossKoopaButton                     = 470,
        cDrawPriority_SwitchBossKoopaButtonAxe                  = 471,
        cDrawPriority_Cloud                                     = 472,
        cDrawPriority_PoisonCloud                               = 473,
        cDrawPriority_CloudLight                                = 474,
        cDrawPriority_BubbleCreateMgr                           = 475,
        cDrawPriority_ObjSnow                                   = 476,
        cDrawPriority_ObjSparks                                 = 477,
        cDrawPriority_TagWind                                   = 478,
        cDrawPriority_TarzanIvy                                 = 479,
        cDrawPriority_TarzanKusari                              = 480,
        cDrawPriority_Ladder                                    = 481,
        cDrawPriority_SnakeBlock                                = 482,
        cDrawPriority_SnakeBlockR76                             = 483,
        cDrawPriority_SnakeBlockRDash                           = 484,
        cDrawPriority_BlockLightLift                            = 485,
        cDrawPriority_CircleLight                               = 486,
        cDrawPriority_LightWater                                = 487,
        cDrawPriority_RotChikeiObake                            = 488,
        cDrawPriority_NoboribouObake                            = 489,
        cDrawPriority_WaterStream                               = 490,
        cDrawPriority_BigShell                                  = 491,
        cDrawPriority_LiftWaterWheel                            = 492,
        cDrawPriority_FruitTree                                 = 493,
        cDrawPriority_Koton                                     = 494,
        cDrawPriority_KotonGroup                                = 495,
        cDrawPriority_Intermittent                              = 496,
        cDrawPriority_IntermittentPermanent                     = 497,
        cDrawPriority_WaterIntermittent                         = 498,
        cDrawPriority_WaterIntermittentPermanent                = 499,
        cDrawPriority_WaterIntermittentPermanentRD3_3           = 500,
        cDrawPriority_WaterIntermittentBoss                     = 501,
        cDrawPriority_WaterIntermittentBossChild                = 502,
        cDrawPriority_YoganIntermittent                         = 503,
        cDrawPriority_Woochan                                   = 504,
        cDrawPriority_ManholeChoropu                            = 505,
        cDrawPriority_Spanner                                   = 506,
        cDrawPriority_Manhole                                   = 507,
        cDrawPriority_JugemThrowActor                           = 508,
        cDrawPriority_Jugem                                     = 509,
        cDrawPriority_JugemCoin                                 = 510,
        cDrawPriority_JugemMultiplayer                          = 511,
        cDrawPriority_JugemBody                                 = 512,
        cDrawPriority_JugemBodyMultiplayer                      = 513,
        cDrawPriority_LiftMoveOn                                = 514,
        cDrawPriority_LiftRideMove                              = 515,
        cDrawPriority_LiftRideMoveSky                           = 516,
        cDrawPriority_ObjMoveOnGhost                            = 517,
        cDrawPriority_LiftMoveOnNormal                          = 518,
        cDrawPriority_LiftDirectionSwitch                       = 519,
        cDrawPriority_LiftRideOffYogan                          = 520,
        cDrawPriority_BlockForChallenge                         = 521,
        cDrawPriority_BlockOdai                                 = 522,
        cDrawPriority_QuestBlock                                = 523,
        cDrawPriority_LineTrain                                 = 524,
        cDrawPriority_LineTrainParentRDash                      = 525,
        cDrawPriority_LineTrainChildRDash                       = 526,
        cDrawPriority_BlockChallenge                            = 527,
        cDrawPriority_LiftZenKaitenita                          = 528,
        cDrawPriority_LiftZenHashi                              = 529,
        cDrawPriority_LiftZenHashiShichu                        = 530,
        cDrawPriority_LiftZenHashiTomegu                        = 531,
        cDrawPriority_LiftZenYoko                               = 532,
        cDrawPriority_ElasticKinokoParent                       = 533,
        cDrawPriority_ElasticKinokoHorizontal                   = 534,
        cDrawPriority_ElasticKinokoVertical                     = 535,
        cDrawPriority_LiftScales                                = 536,
        cDrawPriority_LiftScalesReturn                          = 537,
        cDrawPriority_LiftScalesStep                            = 538,
        cDrawPriority_WireMove                                  = 539,
        cDrawPriority_KaronHead                                 = 540,
        cDrawPriority_Karon                                     = 541,
        cDrawPriority_BigKaron                                  = 542,
        cDrawPriority_Mouse                                     = 543,
        cDrawPriority_Chorobon                                  = 544,
        cDrawPriority_ChorobonGroup                             = 545,
        cDrawPriority_LiftRotationFull                          = 546,
        cDrawPriority_LiftRotationFullChika                     = 547,
        cDrawPriority_LiftRotationFullKinoko                    = 548,
        cDrawPriority_LiftRotationFullWood                      = 549,
        cDrawPriority_LiftRotationFullWoodRDash                 = 550,
        cDrawPriority_LiftRotationFullStone                     = 551,
        cDrawPriority_LiftRotationFullGhost                     = 552,
        cDrawPriority_LiftRotationFullGhostRD4                  = 553,
        cDrawPriority_LiftObakeChikeiHeya                       = 554,
        cDrawPriority_LiftRotationFullColor                     = 555,
        cDrawPriority_LiftRotationFullIron                      = 556,
        cDrawPriority_LiftRotationFullIronRDash                 = 557,
        cDrawPriority_LiftRotationFullIronRDash2                = 558,
        cDrawPriority_LiftRotationFullGhostShip                 = 559,
        cDrawPriority_ObjPolYashiki                             = 560,
        cDrawPriority_LiftZenHammer                             = 561,
        cDrawPriority_Moai                                      = 562,
        cDrawPriority_MoaiRDash24                               = 563,
        cDrawPriority_MoaiDown                                  = 564,
        cDrawPriority_MoaiDownRDash24                           = 565,
        cDrawPriority_MoaiRDash55                               = 566,
        cDrawPriority_PalmTree                                  = 567,
        cDrawPriority_BlockOutIvy                               = 568,
        cDrawPriority_HandLight                                 = 569,
        cDrawPriority_LiftZenYokoTomegu                         = 570,
        cDrawPriority_LiftRideVMove                             = 571,
        cDrawPriority_LiftRideVMoveSync                         = 572,
        cDrawPriority_LiftRideHMove                             = 573,
        cDrawPriority_LiftRideHMoveSync                         = 574,
        cDrawPriority_LiftWaki                                  = 575,
        cDrawPriority_LiftWakiStep                              = 576,
        cDrawPriority_LiftLine                                  = 577,
        cDrawPriority_LiftLineSync                              = 578,
        cDrawPriority_LiftLineRDash                             = 579,
        cDrawPriority_LiftWheel                                 = 580,
        cDrawPriority_LiftSeesaw                                = 581,
        cDrawPriority_LiftSeesawRDash                           = 582,
        cDrawPriority_LiftObjbgHMove                            = 583,
        cDrawPriority_LiftObjbgVMove                            = 584,
        cDrawPriority_IceBlock                                  = 585,
        cDrawPriority_Stand                                     = 586,
        cDrawPriority_GuraRock                                  = 587,
        cDrawPriority_Polter                                    = 588,
        cDrawPriority_Bakubaku                                  = 589,
        cDrawPriority_Ibaramushi                                = 590,
        cDrawPriority_Nisemusa                                  = 591,
        cDrawPriority_Crow                                      = 592,
        cDrawPriority_LiftLeaf                                  = 593,
        cDrawPriority_WanwanPile                                = 594,
        cDrawPriority_WanwanPileRDash                           = 595,
        cDrawPriority_Wanwan                                    = 596,
        cDrawPriority_Icicle                                    = 597,
        cDrawPriority_IcicleBig                                 = 598,
        cDrawPriority_IcicleFixation                            = 599,
        cDrawPriority_Teresa                                    = 600,
        cDrawPriority_BigTeresa                                 = 601,
        cDrawPriority_TeresaRotation                            = 602,
        cDrawPriority_TeresaRotationParent                      = 603,
        cDrawPriority_TeresaRotationParentRDash                 = 604,
        cDrawPriority_IceAshiba                                 = 605,
        cDrawPriority_IceAshibaWater                            = 606,
        cDrawPriority_IceAshibaRail                             = 607,
        cDrawPriority_FloatIceBlock                             = 608,
        cDrawPriority_FloatIceBlockLarge                        = 609,
        cDrawPriority_Maruta                                    = 610,
        cDrawPriority_Barrel                                    = 611,
        cDrawPriority_WaterMove                                 = 612,
        cDrawPriority_FloorGyration                             = 613,
        cDrawPriority_FloorHoleDokan                            = 614,
        cDrawPriority_GearGyration                              = 615,
        cDrawPriority_GearGyrationRDash                         = 616,
        cDrawPriority_LiftSlideKinoko                           = 617,
        cDrawPriority_LiftSlideKinokoResident                   = 618,
        cDrawPriority_LiftSlideTsuru                            = 619,
        cDrawPriority_Patamet                                   = 620,
        cDrawPriority_PatametBig                                = 621,
        cDrawPriority_PatametRDash                              = 622,
        cDrawPriority_Bubble                                    = 623,
        cDrawPriority_BubbleSync                                = 624,
        cDrawPriority_BubbleRDash                               = 625,
        cDrawPriority_BubbleSyncRDash                           = 626,
        cDrawPriority_Crasher                                   = 627,
        cDrawPriority_Unabon                                    = 628,
        cDrawPriority_ChukanUnabon                              = 629,
        cDrawPriority_DokanUnabon                               = 630,
        cDrawPriority_UnabonRDash                               = 631,
        cDrawPriority_KK                                        = 632,
        cDrawPriority_KKResident                                = 633,
        cDrawPriority_KKLiftFix                                 = 634,
        cDrawPriority_KKLightning                               = 635,
        cDrawPriority_Akoya                                     = 636,
        cDrawPriority_LiftRemoconBalance                        = 637,
        cDrawPriority_LiftRemoconBalanceRDash                   = 638,
        cDrawPriority_LiftRemoconSeesaw                         = 639,
        cDrawPriority_LiftRemoconXline                          = 640,
        cDrawPriority_GuruGuru                                  = 641,
        cDrawPriority_Gesso                                     = 642,
        cDrawPriority_GessoChild                                = 643,
        cDrawPriority_BaramakiGesso                             = 644,
        cDrawPriority_PlayerIce                                 = 645,
        cDrawPriority_Nut                                       = 646,
        cDrawPriority_WoodBox                                   = 647,
        cDrawPriority_IronBox                                   = 648,
        cDrawPriority_IronBoxRDash                              = 649,
        cDrawPriority_IronBoxRDashNarrowSpawnRange              = 650,
        cDrawPriority_WoodBoxWaki                               = 651,
        cDrawPriority_IronBoxWaki                               = 652,
        cDrawPriority_StrongBox                                 = 653,
        cDrawPriority_StrongBoxKey                              = 654,
        cDrawPriority_BattleItem                                = 655,
        cDrawPriority_VsBattleItem                              = 656,
        cDrawPriority_TogeMet                                   = 657,
        cDrawPriority_TogeMetGroup                              = 658,
        cDrawPriority_LiftHurikoCenter                          = 659,
        cDrawPriority_TorpedoBase                               = 660,
        cDrawPriority_SearchTorpedoBase                         = 661,
        cDrawPriority_NormalTorpedo                             = 662,
        cDrawPriority_NormalTorpedoGroup                        = 663,
        cDrawPriority_SearchTorpedo                             = 664,
        cDrawPriority_YoshiEgg                                  = 665,
        cDrawPriority_KokoopaShipLemmy                          = 666,
        cDrawPriority_KokoopaShipMorton                         = 667,
        cDrawPriority_KokoopaShipLarry                          = 668,
        cDrawPriority_KokoopaShipWendy                          = 669,
        cDrawPriority_KokoopaShipIggy                           = 670,
        cDrawPriority_KokoopaShipRoy                            = 671,
        cDrawPriority_KokoopaShipLudwig                         = 672,
        cDrawPriority_KokoopaShipWarpCannon                     = 673,
        cDrawPriority_Peach                                     = 674,
        cDrawPriority_PeachDemoShadowkun                        = 675,
        cDrawPriority_FinalDVPeach                              = 676,
        cDrawPriority_FinalDVShutter                            = 677,
        cDrawPriority_ShortResultPeach                          = 678,
        cDrawPriority_BalloonHangActor                          = 679,
        cDrawPriority_MagicHandPa                               = 680,
        cDrawPriority_MagicHandGu                               = 681,
        cDrawPriority_MagicHandGuRDash                          = 682,
        cDrawPriority_MagicHandUnderwaterKoopaJrDemo            = 683,
        cDrawPriority_MagicHandBoxingKoopaJrDemo                = 684,
        cDrawPriority_BossKoopaPlatform                         = 685,
        cDrawPriority_KoopaJrFire                               = 686,
        cDrawPriority_KoopaJrBall                               = 687,
        cDrawPriority_KoopaJrBoxingFloor                        = 688,
        cDrawPriority_KoopaJrBoxingFloorMgr                     = 689,
        cDrawPriority_UnderwaterKoopaJr                         = 690,
        cDrawPriority_UnderwaterKoopaJrClown                    = 691,
        cDrawPriority_UnderwaterKoopaJrRetreatPos               = 692,
        cDrawPriority_BoxingKoopaJr                             = 693,
        cDrawPriority_BoxingKoopaJrClown                        = 694,
        cDrawPriority_BoxingKoopaJrPostBattleDemo               = 695,
        cDrawPriority_BoxingKoopaJrClownPostBattleDemo          = 696,
        cDrawPriority_BgActorWater                              = 697,
        cDrawPriority_BgActorLava                               = 698,
        cDrawPriority_BgActorPoison                             = 699,
        cDrawPriority_BgActorQuicksand                          = 700,
        cDrawPriority_BgActorCloud                              = 701,
        cDrawPriority_BgActorMoya                               = 702,
        cDrawPriority_BgActorYukaMario                          = 703,
        cDrawPriority_BgActorYukaWave                           = 704,
        cDrawPriority_YoganJimen                                = 705,
        cDrawPriority_YoganJimenRDash                           = 706,
        cDrawPriority_MonorailBlock                             = 707,
        cDrawPriority_MonorailBlockRail                         = 708,
        cDrawPriority_SlotChibiYoshi                            = 709,
        cDrawPriority_MiniGamePanelItem                         = 710,
        cDrawPriority_SlotItem                                  = 711,
        cDrawPriority_ShuffleBlock                              = 712,
        cDrawPriority_CoinmakiCoin                              = 713,
        cDrawPriority_CoinmakiItem                              = 714,
        cDrawPriority_CoinmakiCannon                            = 715,
        cDrawPriority_MiniGameKinopio                           = 716,
        cDrawPriority_Tsuru                                     = 717,
        cDrawPriority_DokanJoint                                = 718,
        cDrawPriority_DokanJointMame                            = 719,
        cDrawPriority_GoalKinokoHouse                           = 720,
        cDrawPriority_AirshipBottom                             = 721,
        cDrawPriority_AirshipBottomWaku                         = 722,
        cDrawPriority_AirshipBottomRDash                        = 723,
        cDrawPriority_Cookie                                    = 724,
        cDrawPriority_Gattan                                    = 725,
        cDrawPriority_TouchDrcMaskLight                         = 726,
        cDrawPriority_StaffRollMgr                              = 727,
        cDrawPriority_StaffRollMgrRDash                         = 728,
        cDrawPriority_StaffRollChibiYoshiChar                   = 729,
        cDrawPriority_StaffRollChibiYoshiBalloon                = 730,
        cDrawPriority_StaffRollChibiYoshiBalloonCheer           = 731,
        cDrawPriority_StaffRollChibiYoshiLight                  = 732,
        cDrawPriority_StaffRollChibiYoshiLightCheer             = 733,
        cDrawPriority_StaffRollAwaChar                          = 734,
        cDrawPriority_StaffRollAwaCoin                          = 735,
        cDrawPriority_StaffRollTottenKun                        = 736,
        cDrawPriority_CourseSelectPlayer                        = 737,
        cDrawPriority_CourseSelectPlayer2PSub                   = 738,
        cDrawPriority_CourseSelectChibiYoshi                    = 739,
        cDrawPriority_CourseSelectCamera                        = 740,
        cDrawPriority_CourseSelectCastle                        = 741,
        cDrawPriority_CourseSelectToride                        = 742,
        cDrawPriority_CourseSelectKinokoHouse1up                = 743,
        cDrawPriority_CourseSelectKinokoHouseShuffle            = 744,
        cDrawPriority_CourseSelectKinokoHouseSlot               = 745,
        cDrawPriority_CourseSelectPeachGates1st                 = 746,
        cDrawPriority_CourseSelectPeachGates2nd                 = 747,
        cDrawPriority_CourseSelectCoursePoint                   = 748,
        cDrawPriority_CourseSelectWorldMoveDokan                = 749,
        cDrawPriority_CourseSelectGhost                         = 750,
        cDrawPriority_CourseSelectW8Cloud                       = 751,
        cDrawPriority_CourseSelectW2Bros                        = 752,
        cDrawPriority_CourseSelectEventAssistant                = 753,
        cDrawPriority_CourseSelectShipW1                        = 754,
        cDrawPriority_CourseSelectShipW2                        = 755,
        cDrawPriority_CourseSelectShipW3                        = 756,
        cDrawPriority_CourseSelectShipW4                        = 757,
        cDrawPriority_CourseSelectShipW5                        = 758,
        cDrawPriority_CourseSelectShipW6                        = 759,
        cDrawPriority_CourseSelectShipW7                        = 760,
        cDrawPriority_CourseSelectShipW8                        = 761,
        cDrawPriority_CourseSelectShipW8Broken                  = 762,
        cDrawPriority_CourseSelectSurrender                     = 763,
        cDrawPriority_CourseSelectSwitchA                       = 764,
        cDrawPriority_CourseSelectSwitchB                       = 765,
        cDrawPriority_CourseSelectTeresa                        = 766,
        cDrawPriority_CourseSelectOpeningKameck                 = 767,
        cDrawPriority_CourseSelectTorideBoss                    = 768,
        cDrawPriority_CourseSelectPakkun                        = 769,
        cDrawPriority_CourseSelectShadowFirstDemoKinopio        = 770,
        cDrawPriority_CourseSelectTobiPuku                      = 771,
        cDrawPriority_CourseSelectChorobon                      = 772,
        cDrawPriority_CourseSelectW7Item                        = 773,
        cDrawPriority_CourseSelectW5Teresa                      = 774,
        cDrawPriority_CourseSelectFlag                          = 775,
        cDrawPriority_CourseSelectMusasabi                      = 777,
        cDrawPriority_CourseSelectWPillar                       = 778,
        cDrawPriority_CourseSelectW7Bridge                      = 779,
        cDrawPriority_CourseSelectMiiBalloon                    = 780,
        cDrawPriority_CourseSelectPenguin                       = 781,
        cDrawPriority_CourseSelectW4Item                        = 782,
        cDrawPriority_CourseSelectW2Kuribo                      = 783,
        cDrawPriority_CourseSelectPakkunBig                     = 784,
        cDrawPriority_CourseSelectShadowKunIcon                 = 785,
        cDrawPriority_CourseSelectDekaUnira                     = 786,
        cDrawPriority_CourseSelectTomb                          = 787,
        cDrawPriority_CourseSelectShadowFirstDemoShadowKun      = 788,
        cDrawPriority_CourseSelectKotsuCoaster                  = 789,
        cDrawPriority_CourseSelectKoopaJr                       = 790,
        cDrawPriority_CourseSelectPeach                         = 791,
        cDrawPriority_CourseSelectW1Item                        = 792,
        cDrawPriority_CourseSelectStarGate                      = 793,
        cDrawPriority_Null1                                     = 794,
        cDrawPriority_Null2                                     = 795,

        // No Draw
        cDrawPriority_Null3                                     =   0 - 0x3ff,
        cDrawPriority_BrokenBlock                               =   1 - 0x3ff,
        cDrawPriority_Zoom                                      =   2 - 0x3ff,
        cDrawPriority_ZoomRDash                                 =   3 - 0x3ff,
        cDrawPriority_KyokaiVelAdj                              =   4 - 0x3ff,
        cDrawPriority_MaxUeLeft                                 =   5 - 0x3ff,
        cDrawPriority_MaxUeRight                                =   6 - 0x3ff,
        cDrawPriority_StopLrUp                                  =   7 - 0x3ff,
        cDrawPriority_StopLrDw                                  =   8 - 0x3ff,
        cDrawPriority_MaxUe2Left                                =   9 - 0x3ff,
        cDrawPriority_MaxUe2Right                               =  10 - 0x3ff,
        cDrawPriority_AutoScrollTag                             =  11 - 0x3ff,
        cDrawPriority_SpecialScrollTag                          =  12 - 0x3ff,
        cDrawPriority_KoopaAreaObj                              =  13 - 0x3ff,
        cDrawPriority_BgCenter                                  =  14 - 0x3ff,
        cDrawPriority_EnvSoundPhenomenaTag                      =  15 - 0x3ff,
        cDrawPriority_EnvSoundTag                               =  16 - 0x3ff,
        cDrawPriority_FlagSwitchTag                             =  17 - 0x3ff,
        cDrawPriority_FlagSwitchAnd                             =  18 - 0x3ff,
        cDrawPriority_FlagSwitchOr                              =  19 - 0x3ff,
        cDrawPriority_FlagSwitchRandom                          =  20 - 0x3ff,
        cDrawPriority_FlagSwitchChange                          =  21 - 0x3ff,
        cDrawPriority_FlagSwitchIf                              =  22 - 0x3ff,
        cDrawPriority_FlagSwitchIfRDash                         =  23 - 0x3ff,
        cDrawPriority_FlagSwitchIfR63                           =  24 - 0x3ff,
        cDrawPriority_FlagSwitchContinuous                      =  25 - 0x3ff,
        cDrawPriority_FlagSwitchTimed                           =  26 - 0x3ff,
        cDrawPriority_PairObjParent                             =  27 - 0x3ff,
        cDrawPriority_RDashPairObjParent                        =  28 - 0x3ff,
        cDrawPriority_RailPolyParent                            =  29 - 0x3ff,
        cDrawPriority_CenterSwing                               =  30 - 0x3ff,
        cDrawPriority_CenterRotation                            =  31 - 0x3ff,
        cDrawPriority_CenterSwingRail                           =  32 - 0x3ff,
        cDrawPriority_CenterRotateRail                          =  33 - 0x3ff,
        cDrawPriority_ActorCoinSpring                           =  34 - 0x3ff,
        cDrawPriority_ActorCoinSpringFunsui                     =  35 - 0x3ff,
        cDrawPriority_FlyingKinokoWakidashi                     =  36 - 0x3ff,
        cDrawPriority_WakiDokan                                 =  37 - 0x3ff,
        cDrawPriority_WakiPuku                                  =  38 - 0x3ff,
        cDrawPriority_WakiSachiPuku                             =  39 - 0x3ff,
        cDrawPriority_WakiNigePuku                              =  40 - 0x3ff,
        cDrawPriority_PukuGroupTag                              =  41 - 0x3ff,
        cDrawPriority_PukuParent                                =  42 - 0x3ff,
        cDrawPriority_NextGotoBlock                             =  43 - 0x3ff,
        cDrawPriority_WakiJugem                                 =  44 - 0x3ff,
        cDrawPriority_WakiJugemMultiplayer                      =  45 - 0x3ff,
        cDrawPriority_WakiTobiPuku                              =  46 - 0x3ff,
        cDrawPriority_WakiTobiMechaPuku                         =  47 - 0x3ff,
        cDrawPriority_WakiPentaro                               =  48 - 0x3ff,
        cDrawPriority_CoinCenterCircle                          =  49 - 0x3ff,
        cDrawPriority_CoinCenterCirclePass                      =  50 - 0x3ff,
        cDrawPriority_NiceCoinRegular                           =  51 - 0x3ff,
        cDrawPriority_NiceCoinRegularResident                   =  52 - 0x3ff,
        cDrawPriority_NiceCoin                                  =  53 - 0x3ff,
        cDrawPriority_BunDemo                                   =  54 - 0x3ff,
        cDrawPriority_KokoopaDemo                               =  55 - 0x3ff,
        cDrawPriority_KoopaJrDemo                               =  56 - 0x3ff,
        cDrawPriority_KameckDemo                                =  57 - 0x3ff,
        cDrawPriority_BossKKDemo                                =  58 - 0x3ff,
        cDrawPriority_PeachFinalCastleKoopaJrDemo               =  59 - 0x3ff,
        cDrawPriority_KoopaDemo                                 =  60 - 0x3ff,
        cDrawPriority_FinalKoopaDemo                            =  61 - 0x3ff,
        cDrawPriority_PeachDemo                                 =  62 - 0x3ff,
        cDrawPriority_KameckIceConfig                           =  63 - 0x3ff,
        cDrawPriority_KameckWarpPos                             =  64 - 0x3ff,
        cDrawPriority_GroupId                                   =  65 - 0x3ff,
        cDrawPriority_GroupIdTogemet                            =  66 - 0x3ff,
        cDrawPriority_RotControl                                =  67 - 0x3ff,
        cDrawPriority_RotControlFlag                            =  68 - 0x3ff,
        cDrawPriority_ChangeBlock                               =  69 - 0x3ff,
        cDrawPriority_ChangeBlockRDash                          =  70 - 0x3ff,
        cDrawPriority_ActorDrcTouch                             =  71 - 0x3ff,
        cDrawPriority_BarnarSyncMgr                             =  72 - 0x3ff,
        cDrawPriority_KinokoLiftParent                          =  73 - 0x3ff,
        cDrawPriority_LiftRemoconBalanceClinch                  =  74 - 0x3ff,
        cDrawPriority_WakiCoinParachute                         =  75 - 0x3ff,
        cDrawPriority_SnakeCoinParent                           =  76 - 0x3ff,
        cDrawPriority_ChoropuCoinMgr                            =  77 - 0x3ff,
        cDrawPriority_MiniGameMgr                               =  78 - 0x3ff,
        cDrawPriority_MiniGameMgrRDash                          =  79 - 0x3ff,
        cDrawPriority_ShuffleBlockMgr                           =  80 - 0x3ff,
        cDrawPriority_SlotMgr                                   =  81 - 0x3ff,
        cDrawPriority_CoinmakiMgr                               =  82 - 0x3ff,
        cDrawPriority_WakiHipAttack                             =  83 - 0x3ff,
        cDrawPriority_WakiSearchMagKiller                       =  84 - 0x3ff,
        cDrawPriority_TorpedoWakiTag                            =  85 - 0x3ff,
        cDrawPriority_MagicHandTagPa                            =  86 - 0x3ff,
        cDrawPriority_MagicHandTagGu                            =  87 - 0x3ff,
        cDrawPriority_MagicHandTagGuFast                        =  88 - 0x3ff,
        cDrawPriority_KoopaFireWaki                             =  89 - 0x3ff,
        cDrawPriority_TagFrameSet                               =  90 - 0x3ff,
        cDrawPriority_WaterDownTag                              =  91 - 0x3ff,
        cDrawPriority_DensenKoopaTag                            =  92 - 0x3ff,
        cDrawPriority_ShadowkunHouseReadTag                     =  93 - 0x3ff,
        cDrawPriority_TagResultDemo                             =  94 - 0x3ff,
        cDrawPriority_ShootingStar                              =  95 - 0x3ff,
        cDrawPriority_DensenKoopaShock                          =  96 - 0x3ff,
        cDrawPriority_WakiIgaPuku                               =  97 - 0x3ff,
        cDrawPriority_WakiBigIgaPuku                            =  98 - 0x3ff,
        cDrawPriority_WaterEffectFilter                         =  99 - 0x3ff,
        cDrawPriority_WaterEffectFilterRDash                    = 100 - 0x3ff,
        cDrawPriority_WaterAwa                                  = 101 - 0x3ff,
        cDrawPriority_RoyLiftWaki                               = 102 - 0x3ff,
        cDrawPriority_WakiBakubaku                              = 103 - 0x3ff,
        cDrawPriority_FlyingMusabiPlayerTag                     = 104 - 0x3ff,
        cDrawPriority_ShortResultDemoTag                        = 105 - 0x3ff,
        cDrawPriority_TagKusaTypeSet                            = 106 - 0x3ff,
        cDrawPriority_WakiKeronpa                               = 107 - 0x3ff,
        cDrawPriority_WakiUnabon                                = 108 - 0x3ff,
        cDrawPriority_WakiUnabonRDash                           = 109 - 0x3ff,
        cDrawPriority_TouchMukoActor                            = 110 - 0x3ff,
        cDrawPriority_PMusasabiBlock                            = 111 - 0x3ff,
        cDrawPriority_TagShabonProtectArea                      = 112 - 0x3ff,
        cDrawPriority_EditCoinPlacementTag                      = 113 - 0x3ff,
        cDrawPriority_FeverEffect                               = 114 - 0x3ff,
        cDrawPriority_RailEffectGeneratorBlock                  = 115 - 0x3ff,
        cDrawPriority_PlayerScrollLrFlagTag                     = 116 - 0x3ff,
        cDrawPriority_TottenHouseReadTagRDash                   = 117 - 0x3ff
    };

    // Address: 0x10001940
    static const s16               cDrawPriority[cProfileID_Max];
    // Address: 0x10002064
    static const s8                cResType[cProfileID_Max];
    // Address: 0x100023F8
    static const u8                cResNum[cProfileID_Max];
    // Address: 0x101C321C
    static const sead::SafeString* cResList[cProfileID_Max];

public:
    /**
     * @brief 0
     * @par Address: 0x10003D54
     */
    static const s32 cProfileID_FlagSwitchTag;
    /**
     * @brief 1
     * @par Address: 0x10003D58
     */
    static const s32 cProfileID_FlagSwitchAnd;
    /**
     * @brief 2
     * @par Address: 0x10003D5C
     */
    static const s32 cProfileID_FlagSwitchOr;
    /**
     * @brief 3
     * @par Address: 0x10003D60
     */
    static const s32 cProfileID_FlagSwitchRandom;
    /**
     * @brief 4
     * @par Address: 0x10003D64
     */
    static const s32 cProfileID_FlagSwitchChange;
    /**
     * @brief 5
     * @par Address: 0x10003D68
     */
    static const s32 cProfileID_FlagSwitchIf;
    /**
     * @brief 6
     * @par Address: 0x10003D6C
     */
    static const s32 cProfileID_FlagSwitchIfRDash;
    /**
     * @brief 7
     * @par Address: 0x10003D70
     */
    static const s32 cProfileID_FlagSwitchIfR63;
    /**
     * @brief 8
     * @par Address: 0x10003D74
     */
    static const s32 cProfileID_FlagSwitchContinuous;
    /**
     * @brief 9
     * @par Address: 0x10003D78
     */
    static const s32 cProfileID_FlagSwitchTimed;
    /**
     * @brief 10
     * @par Address: 0x10003D7C
     */
    static const s32 cProfileID_ActorDrcTouch;
    /**
     * @brief 11
     * @par Address: 0x10003D80
     */
    static const s32 cProfileID_PairObjParent;
    /**
     * @brief 12
     * @par Address: 0x10003D84
     */
    static const s32 cProfileID_RDashPairObjParent;
    /**
     * @brief 13
     * @par Address: 0x10003D88
     */
    static const s32 cProfileID_RailPolyParent;
    /**
     * @brief 14
     * @par Address: 0x10003D8C
     */
    static const s32 cProfileID_NiceCoinRegular;
    /**
     * @brief 15
     * @par Address: 0x10003D90
     */
    static const s32 cProfileID_NiceCoinRegularResident;
    /**
     * @brief 16
     * @par Address: 0x10003D94
     */
    static const s32 cProfileID_NiceCoin;
    /**
     * @brief 17
     * @par Address: 0x10003D98
     */
    static const s32 cProfileID_GroupId;
    /**
     * @brief 18
     * @par Address: 0x10003D9C
     */
    static const s32 cProfileID_GroupIdTogemet;
    /**
     * @brief 19
     * @par Address: 0x10003DA0
     */
    static const s32 cProfileID_DensenKoopaTag;
    /**
     * @brief 20
     * @par Address: 0x10003DA4
     */
    static const s32 cProfileID_BarnarSyncMgr;
    /**
     * @brief 21
     * @par Address: 0x10003DA8
     */
    static const s32 cProfileID_WakiCoinParachute;
    /**
     * @brief 22
     * @par Address: 0x10003DAC
     */
    static const s32 cProfileID_SnakeCoinParent;
    /**
     * @brief 23
     * @par Address: 0x10003DB0
     */
    static const s32 cProfileID_ChoropuCoinMgr;
    /**
     * @brief 24
     * @par Address: 0x10003DB4
     */
    static const s32 cProfileID_MiniGameMgr;
    /**
     * @brief 25
     * @par Address: 0x10003DB8
     */
    static const s32 cProfileID_MiniGameMgrRDash;
    /**
     * @brief 26
     * @par Address: 0x10003DBC
     */
    static const s32 cProfileID_ShuffleBlockMgr;
    /**
     * @brief 27
     * @par Address: 0x10003DC0
     */
    static const s32 cProfileID_SlotMgr;
    /**
     * @brief 28
     * @par Address: 0x10003DC4
     */
    static const s32 cProfileID_CoinmakiMgr;
    /**
     * @brief 29
     * @par Address: 0x10003DC8
     */
    static const s32 cProfileID_MagicHandTagPa;
    /**
     * @brief 30
     * @par Address: 0x10003DCC
     */
    static const s32 cProfileID_MagicHandTagGu;
    /**
     * @brief 31
     * @par Address: 0x10003DD0
     */
    static const s32 cProfileID_MagicHandTagGuFast;
    /**
     * @brief 32
     * @par Address: 0x10003DD4
     */
    static const s32 cProfileID_WaterDownTag;
    /**
     * @brief 33
     * @par Address: 0x10003DD8
     */
    static const s32 cProfileID_ShootingStar;
    /**
     * @brief 34
     * @par Address: 0x10003DDC
     */
    static const s32 cProfileID_StaffRollMgr;
    /**
     * @brief 35
     * @par Address: 0x10003DE0
     */
    static const s32 cProfileID_StaffRollMgrRDash;
    /**
     * @brief 36
     * @par Address: 0x10003DE4
     */
    static const s32 cProfileID_ShortResultDemoTag;
    /**
     * @brief 37
     * @par Address: 0x10003DE8
     */
    static const s32 cProfileID_KoopaJrBoxingFloorMgr;
    /**
     * @brief 38
     * @par Address: 0x10003DEC
     */
    static const s32 cProfileID_PukuGroupTag;
    /**
     * @brief 39
     * @par Address: 0x10003DF0
     */
    static const s32 cProfileID_CenterSwing;
    /**
     * @brief 40
     * @par Address: 0x10003DF4
     */
    static const s32 cProfileID_CenterRotation;
    /**
     * @brief 41
     * @par Address: 0x10003DF8
     */
    static const s32 cProfileID_CenterSwingRail;
    /**
     * @brief 42
     * @par Address: 0x10003DFC
     */
    static const s32 cProfileID_CenterRotateRail;
    /**
     * @brief 43
     * @par Address: 0x10003E00
     */
    static const s32 cProfileID_RotationGuruGuru;
    /**
     * @brief 44
     * @par Address: 0x10003E04
     */
    static const s32 cProfileID_RotationGuruGuruRDash;
    /**
     * @brief 45
     * @par Address: 0x10003E08
     */
    static const s32 cProfileID_CoinCenterCircle;
    /**
     * @brief 46
     * @par Address: 0x10003E0C
     */
    static const s32 cProfileID_CoinCenterCirclePass;
    /**
     * @brief 47
     * @par Address: 0x10003E10
     */
    static const s32 cProfileID_RotControl;
    /**
     * @brief 48
     * @par Address: 0x10003E14
     */
    static const s32 cProfileID_RotControlFlag;
    /**
     * @brief 49
     * @par Address: 0x10003E18
     */
    static const s32 cProfileID_KinokoLiftParent;
    /**
     * @brief 50
     * @par Address: 0x10003E1C
     */
    static const s32 cProfileID_ActorCoinParachuteParent;
    /**
     * @brief 51
     * @par Address: 0x10003E20
     */
    static const s32 cProfileID_ObjSpinBolt;
    /**
     * @brief 52
     * @par Address: 0x10003E24
     */
    static const s32 cProfileID_ElasticKinokoParent;
    /**
     * @brief 53
     * @par Address: 0x10003E28
     */
    static const s32 cProfileID_FloorGyration;
    /**
     * @brief 54
     * @par Address: 0x10003E2C
     */
    static const s32 cProfileID_ObjPol;
    /**
     * @brief 55
     * @par Address: 0x10003E30
     */
    static const s32 cProfileID_ObjPolToride;
    /**
     * @brief 56
     * @par Address: 0x10003E34
     */
    static const s32 cProfileID_ObjPolNohara;
    /**
     * @brief 57
     * @par Address: 0x10003E38
     */
    static const s32 cProfileID_ObjPolKogen;
    /**
     * @brief 58
     * @par Address: 0x10003E3C
     */
    static const s32 cProfileID_ObjPolAshiba;
    /**
     * @brief 59
     * @par Address: 0x10003E40
     */
    static const s32 cProfileID_LiftZenKaihei;
    /**
     * @brief 60
     * @par Address: 0x10003E44
     */
    static const s32 cProfileID_PairObjChild;
    /**
     * @brief 61
     * @par Address: 0x10003E48
     */
    static const s32 cProfileID_PairObjChildToride;
    /**
     * @brief 62
     * @par Address: 0x10003E4C
     */
    static const s32 cProfileID_PairObjChildIwa;
    /**
     * @brief 63
     * @par Address: 0x10003E50
     */
    static const s32 cProfileID_PairObjChildIron;
    /**
     * @brief 64
     * @par Address: 0x10003E54
     */
    static const s32 cProfileID_PairObjChildNohara;
    /**
     * @brief 65
     * @par Address: 0x10003E58
     */
    static const s32 cProfileID_PairObjChildKogen;
    /**
     * @brief 66
     * @par Address: 0x10003E5C
     */
    static const s32 cProfileID_LiftZenKumiawase;
    /**
     * @brief 67
     * @par Address: 0x10003E60
     */
    static const s32 cProfileID_LiftZenTagaichigai;
    /**
     * @brief 68
     * @par Address: 0x10003E64
     */
    static const s32 cProfileID_LiftZenTagaichigaiGear;
    /**
     * @brief 69
     * @par Address: 0x10003E68
     */
    static const s32 cProfileID_LiftZenShiroYogan;
    /**
     * @brief 70
     * @par Address: 0x10003E6C
     */
    static const s32 cProfileID_PairObjChildSabakuIseki;
    /**
     * @brief 71
     * @par Address: 0x10003E70
     */
    static const s32 cProfileID_PairObjChildTorideRock;
    /**
     * @brief 72
     * @par Address: 0x10003E74
     */
    static const s32 cProfileID_PairObjChildTorideRockRDash;
    /**
     * @brief 73
     * @par Address: 0x10003E78
     */
    static const s32 cProfileID_LiftZenShiro;
    /**
     * @brief 74
     * @par Address: 0x10003E7C
     */
    static const s32 cProfileID_PairObjChildWarning;
    /**
     * @brief 75
     * @par Address: 0x10003E80
     */
    static const s32 cProfileID_PairObjChildNoharaHanAtari;
    /**
     * @brief 76
     * @par Address: 0x10003E84
     */
    static const s32 cProfileID_PairObjChildKinokoAshibaHMove;
    /**
     * @brief 77
     * @par Address: 0x10003E88
     */
    static const s32 cProfileID_KinokoLift;
    /**
     * @brief 78
     * @par Address: 0x10003E8C
     */
    static const s32 cProfileID_KinokoLiftColor;
    /**
     * @brief 79
     * @par Address: 0x10003E90
     */
    static const s32 cProfileID_LiftZenStar;
    /**
     * @brief 80
     * @par Address: 0x10003E94
     */
    static const s32 cProfileID_ObjKinoko;
    /**
     * @brief 81
     * @par Address: 0x10003E98
     */
    static const s32 cProfileID_FlyingKinoko;
    /**
     * @brief 82
     * @par Address: 0x10003E9C
     */
    static const s32 cProfileID_TrampolineCloud;
    /**
     * @brief 83
     * @par Address: 0x10003EA0
     */
    static const s32 cProfileID_TrampolineCloudMovesWhenRiding;
    /**
     * @brief 84
     * @par Address: 0x10003EA4
     */
    static const s32 cProfileID_BgActorWater;
    /**
     * @brief 85
     * @par Address: 0x10003EA8
     */
    static const s32 cProfileID_BgActorLava;
    /**
     * @brief 86
     * @par Address: 0x10003EAC
     */
    static const s32 cProfileID_BgActorPoison;
    /**
     * @brief 87
     * @par Address: 0x10003EB0
     */
    static const s32 cProfileID_BgActorQuicksand;
    /**
     * @brief 88
     * @par Address: 0x10003EB4
     */
    static const s32 cProfileID_BgActorCloud;
    /**
     * @brief 89
     * @par Address: 0x10003EB8
     */
    static const s32 cProfileID_BgActorMoya;
    /**
     * @brief 90
     * @par Address: 0x10003EBC
     */
    static const s32 cProfileID_BgActorYukaMario;
    /**
     * @brief 91
     * @par Address: 0x10003EC0
     */
    static const s32 cProfileID_BgActorYukaWave;
    /**
     * @brief 92
     * @par Address: 0x10003EC4
     */
    static const s32 cProfileID_LineSpinLift;
    /**
     * @brief 93
     * @par Address: 0x10003EC8
     */
    static const s32 cProfileID_LineKinokoBlock;
    /**
     * @brief 94
     * @par Address: 0x10003ECC
     */
    static const s32 cProfileID_GroupLineKinokoLift;
    /**
     * @brief 95
     * @par Address: 0x10003ED0
     */
    static const s32 cProfileID_LiftRotationHuriko;
    /**
     * @brief 96
     * @par Address: 0x10003ED4
     */
    static const s32 cProfileID_LiftRotationHurikoRDash;
    /**
     * @brief 97
     * @par Address: 0x10003ED8
     */
    static const s32 cProfileID_LiftHanRotateLight;
    /**
     * @brief 98
     * @par Address: 0x10003EDC
     */
    static const s32 cProfileID_LiftHuriko;
    /**
     * @brief 99
     * @par Address: 0x10003EE0
     */
    static const s32 cProfileID_LiftHurikoRDash;
    /**
     * @brief 100
     * @par Address: 0x10003EE4
     */
    static const s32 cProfileID_RailPolygon;
    /**
     * @brief 101
     * @par Address: 0x10003EE8
     */
    static const s32 cProfileID_KillerHoudai;
    /**
     * @brief 102
     * @par Address: 0x10003EEC
     */
    static const s32 cProfileID_StretchKillerHoudai;
    /**
     * @brief 103
     * @par Address: 0x10003EF0
     */
    static const s32 cProfileID_MagnumKillerHoudai;
    /**
     * @brief 104
     * @par Address: 0x10003EF4
     */
    static const s32 cProfileID_MagnumKillerHoudaiDown;
    /**
     * @brief 105
     * @par Address: 0x10003EF8
     */
    static const s32 cProfileID_SearchKillerHoudai;
    /**
     * @brief 106
     * @par Address: 0x10003EFC
     */
    static const s32 cProfileID_SearchMagnumKillerHoudai;
    /**
     * @brief 107
     * @par Address: 0x10003F00
     */
    static const s32 cProfileID_SearchMagnumKillerHoudaiDown;
    /**
     * @brief 108
     * @par Address: 0x10003F04
     */
    static const s32 cProfileID_MagnumKillerHoudaiRDash;
    /**
     * @brief 109
     * @par Address: 0x10003F08
     */
    static const s32 cProfileID_MagnumKillerHoudaiDownRDash;
    /**
     * @brief 110
     * @par Address: 0x10003F0C
     */
    static const s32 cProfileID_SearchMagnumKillerHoudaiRDash;
    /**
     * @brief 111
     * @par Address: 0x10003F10
     */
    static const s32 cProfileID_SearchMagnumKillerHoudaiDownRDash;
    /**
     * @brief 112
     * @par Address: 0x10003F14
     */
    static const s32 cProfileID_KaitenHoudai;
    /**
     * @brief 113
     * @par Address: 0x10003F18
     */
    static const s32 cProfileID_TahoshinKaitenHoudai;
    /**
     * @brief 114
     * @par Address: 0x10003F1C
     */
    static const s32 cProfileID_CannonShip;
    /**
     * @brief 115
     * @par Address: 0x10003F20
     */
    static const s32 cProfileID_CannonRot;
    /**
     * @brief 116
     * @par Address: 0x10003F24
     */
    static const s32 cProfileID_CannonRotDokan;
    /**
     * @brief 117
     * @par Address: 0x10003F28
     */
    static const s32 cProfileID_CannonDokan;
    /**
     * @brief 118
     * @par Address: 0x10003F2C
     */
    static const s32 cProfileID_RedCoin;
    /**
     * @brief 119
     * @par Address: 0x10003F30
     */
    static const s32 cProfileID_GreenCoin;
    /**
     * @brief 120
     * @par Address: 0x10003F34
     */
    static const s32 cProfileID_GreenCoinChild;
    /**
     * @brief 121
     * @par Address: 0x10003F38
     */
    static const s32 cProfileID_Intermittent;
    /**
     * @brief 122
     * @par Address: 0x10003F3C
     */
    static const s32 cProfileID_IntermittentPermanent;
    /**
     * @brief 123
     * @par Address: 0x10003F40
     */
    static const s32 cProfileID_WaterIntermittent;
    /**
     * @brief 124
     * @par Address: 0x10003F44
     */
    static const s32 cProfileID_WaterIntermittentPermanent;
    /**
     * @brief 125
     * @par Address: 0x10003F48
     */
    static const s32 cProfileID_WaterIntermittentPermanentRD3_3;
    /**
     * @brief 126
     * @par Address: 0x10003F4C
     */
    static const s32 cProfileID_WaterIntermittentBoss;
    /**
     * @brief 127
     * @par Address: 0x10003F50
     */
    static const s32 cProfileID_WaterIntermittentBossChild;
    /**
     * @brief 128
     * @par Address: 0x10003F54
     */
    static const s32 cProfileID_YoganIntermittent;
    /**
     * @brief 129
     * @par Address: 0x10003F58
     */
    static const s32 cProfileID_LiftZenKaitenita;
    /**
     * @brief 130
     * @par Address: 0x10003F5C
     */
    static const s32 cProfileID_ObjDokanMameRight;
    /**
     * @brief 131
     * @par Address: 0x10003F60
     */
    static const s32 cProfileID_ObjDokanMameLeft;
    /**
     * @brief 132
     * @par Address: 0x10003F64
     */
    static const s32 cProfileID_ObjDokanMameUp;
    /**
     * @brief 133
     * @par Address: 0x10003F68
     */
    static const s32 cProfileID_ObjDokanMameDown;
    /**
     * @brief 134
     * @par Address: 0x10003F6C
     */
    static const s32 cProfileID_ObjDokanDownNG;
    /**
     * @brief 135
     * @par Address: 0x10003F70
     */
    static const s32 cProfileID_CoinBattleDokanUpNG;
    /**
     * @brief 136
     * @par Address: 0x10003F74
     */
    static const s32 cProfileID_CoinBattleDokanDownNG;
    /**
     * @brief 137
     * @par Address: 0x10003F78
     */
    static const s32 cProfileID_CoinBattleDokanLeftNG;
    /**
     * @brief 138
     * @par Address: 0x10003F7C
     */
    static const s32 cProfileID_CoinBattleDokanRightNG;
    /**
     * @brief 139
     * @par Address: 0x10003F80
     */
    static const s32 cProfileID_ZoomDokanRight;
    /**
     * @brief 140
     * @par Address: 0x10003F84
     */
    static const s32 cProfileID_ZoomDokanLeft;
    /**
     * @brief 141
     * @par Address: 0x10003F88
     */
    static const s32 cProfileID_ZoomDokanUp;
    /**
     * @brief 142
     * @par Address: 0x10003F8C
     */
    static const s32 cProfileID_ZoomDokanDown;
    /**
     * @brief 143
     * @par Address: 0x10003F90
     */
    static const s32 cProfileID_RotationObjDokan;
    /**
     * @brief 144
     * @par Address: 0x10003F94
     */
    static const s32 cProfileID_RotationObjDokanRDash;
    /**
     * @brief 145
     * @par Address: 0x10003F98
     */
    static const s32 cProfileID_CannonPipe;
    /**
     * @brief 146
     * @par Address: 0x10003F9C
     */
    static const s32 cProfileID_CannonPipeRDash;
    /**
     * @brief 147
     * @par Address: 0x10003FA0
     */
    static const s32 cProfileID_LiftZenHashi;
    /**
     * @brief 148
     * @par Address: 0x10003FA4
     */
    static const s32 cProfileID_LiftZenHashiShichu;
    /**
     * @brief 149
     * @par Address: 0x10003FA8
     */
    static const s32 cProfileID_LiftZenHashiTomegu;
    /**
     * @brief 150
     * @par Address: 0x10003FAC
     */
    static const s32 cProfileID_LiftZenYoko;
    /**
     * @brief 151
     * @par Address: 0x10003FB0
     */
    static const s32 cProfileID_RailPolyChild;
    /**
     * @brief 152
     * @par Address: 0x10003FB4
     */
    static const s32 cProfileID_LiftRotationFull;
    /**
     * @brief 153
     * @par Address: 0x10003FB8
     */
    static const s32 cProfileID_LiftRotationFullChika;
    /**
     * @brief 154
     * @par Address: 0x10003FBC
     */
    static const s32 cProfileID_LiftRotationFullKinoko;
    /**
     * @brief 155
     * @par Address: 0x10003FC0
     */
    static const s32 cProfileID_LiftRotationFullWood;
    /**
     * @brief 156
     * @par Address: 0x10003FC4
     */
    static const s32 cProfileID_LiftRotationFullWoodRDash;
    /**
     * @brief 157
     * @par Address: 0x10003FC8
     */
    static const s32 cProfileID_LiftRotationFullStone;
    /**
     * @brief 158
     * @par Address: 0x10003FCC
     */
    static const s32 cProfileID_LiftRotationFullGhost;
    /**
     * @brief 159
     * @par Address: 0x10003FD0
     */
    static const s32 cProfileID_LiftRotationFullGhostRD4;
    /**
     * @brief 160
     * @par Address: 0x10003FD4
     */
    static const s32 cProfileID_ObjPolYashiki;
    /**
     * @brief 161
     * @par Address: 0x10003FD8
     */
    static const s32 cProfileID_LiftObakeChikeiHeya;
    /**
     * @brief 162
     * @par Address: 0x10003FDC
     */
    static const s32 cProfileID_LiftRotationFullColor;
    /**
     * @brief 163
     * @par Address: 0x10003FE0
     */
    static const s32 cProfileID_LiftRotationFullIron;
    /**
     * @brief 164
     * @par Address: 0x10003FE4
     */
    static const s32 cProfileID_LiftRotationFullIronRDash;
    /**
     * @brief 165
     * @par Address: 0x10003FE8
     */
    static const s32 cProfileID_LiftRotationFullIronRDash2;
    /**
     * @brief 166
     * @par Address: 0x10003FEC
     */
    static const s32 cProfileID_LiftRotationFullGhostShip;
    /**
     * @brief 167
     * @par Address: 0x10003FF0
     */
    static const s32 cProfileID_LiftZenHammer;
    /**
     * @brief 168
     * @par Address: 0x10003FF4
     */
    static const s32 cProfileID_Moai;
    /**
     * @brief 169
     * @par Address: 0x10003FF8
     */
    static const s32 cProfileID_MoaiRDash24;
    /**
     * @brief 170
     * @par Address: 0x10003FFC
     */
    static const s32 cProfileID_MoaiDown;
    /**
     * @brief 171
     * @par Address: 0x10004000
     */
    static const s32 cProfileID_MoaiDownRDash24;
    /**
     * @brief 172
     * @par Address: 0x10004004
     */
    static const s32 cProfileID_MoaiRDash55;
    /**
     * @brief 173
     * @par Address: 0x10004008
     */
    static const s32 cProfileID_ObjSpinBoltChild;
    /**
     * @brief 174
     * @par Address: 0x1000400C
     */
    static const s32 cProfileID_ObjSpinBoltChildPyramid;
    /**
     * @brief 175
     * @par Address: 0x10004010
     */
    static const s32 cProfileID_ObjSpinBoltChildPyramidResident;
    /**
     * @brief 176
     * @par Address: 0x10004014
     */
    static const s32 cProfileID_ObjSpinAshiba;
    /**
     * @brief 177
     * @par Address: 0x10004018
     */
    static const s32 cProfileID_SpinWire;
    /**
     * @brief 178
     * @par Address: 0x1000401C
     */
    static const s32 cProfileID_LiftMoveOn;
    /**
     * @brief 179
     * @par Address: 0x10004020
     */
    static const s32 cProfileID_ObjMoveOnGhost;
    /**
     * @brief 180
     * @par Address: 0x10004024
     */
    static const s32 cProfileID_LiftRideOffYogan;
    /**
     * @brief 181
     * @par Address: 0x10004028
     */
    static const s32 cProfileID_BlockForChallenge;
    /**
     * @brief 182
     * @par Address: 0x1000402C
     */
    static const s32 cProfileID_BlockOdai;
    /**
     * @brief 183
     * @par Address: 0x10004030
     */
    static const s32 cProfileID_QuestBlock;
    /**
     * @brief 184
     * @par Address: 0x10004034
     */
    static const s32 cProfileID_LineTrain;
    /**
     * @brief 185
     * @par Address: 0x10004038
     */
    static const s32 cProfileID_LineTrainParentRDash;
    /**
     * @brief 186
     * @par Address: 0x1000403C
     */
    static const s32 cProfileID_LineTrainChildRDash;
    /**
     * @brief 187
     * @par Address: 0x10004040
     */
    static const s32 cProfileID_HandLight;
    /**
     * @brief 188
     * @par Address: 0x10004044
     */
    static const s32 cProfileID_BlockChallenge;
    /**
     * @brief 189
     * @par Address: 0x10004048
     */
    static const s32 cProfileID_BlockOutIvy;
    /**
     * @brief 190
     * @par Address: 0x1000404C
     */
    static const s32 cProfileID_PalmTree;
    /**
     * @brief 191
     * @par Address: 0x10004050
     */
    static const s32 cProfileID_IronBallHole;
    /**
     * @brief 192
     * @par Address: 0x10004054
     */
    static const s32 cProfileID_IronBallHoleRDashW2Toride;
    /**
     * @brief 193
     * @par Address: 0x10004058
     */
    static const s32 cProfileID_WakiDokanTogeTekkyu;
    /**
     * @brief 194
     * @par Address: 0x1000405C
     */
    static const s32 cProfileID_SnakeBlock;
    /**
     * @brief 195
     * @par Address: 0x10004060
     */
    static const s32 cProfileID_SnakeBlockR76;
    /**
     * @brief 196
     * @par Address: 0x10004064
     */
    static const s32 cProfileID_SnakeBlockRDash;
    /**
     * @brief 197
     * @par Address: 0x10004068
     */
    static const s32 cProfileID_LiftSpinRotation;
    /**
     * @brief 198
     * @par Address: 0x1000406C
     */
    static const s32 cProfileID_LiftSpinRotationSync;
    /**
     * @brief 199
     * @par Address: 0x10004070
     */
    static const s32 cProfileID_RotChikeiObake;
    /**
     * @brief 200
     * @par Address: 0x10004074
     */
    static const s32 cProfileID_BlockLightLift;
    /**
     * @brief 201
     * @par Address: 0x10004078
     */
    static const s32 cProfileID_LiftSlideKinoko;
    /**
     * @brief 202
     * @par Address: 0x1000407C
     */
    static const s32 cProfileID_LiftSlideKinokoResident;
    /**
     * @brief 203
     * @par Address: 0x10004080
     */
    static const s32 cProfileID_ElasticKinokoHorizontal;
    /**
     * @brief 204
     * @par Address: 0x10004084
     */
    static const s32 cProfileID_ElasticKinokoVertical;
    /**
     * @brief 205
     * @par Address: 0x10004088
     */
    static const s32 cProfileID_Patamet;
    /**
     * @brief 206
     * @par Address: 0x1000408C
     */
    static const s32 cProfileID_PatametBig;
    /**
     * @brief 207
     * @par Address: 0x10004090
     */
    static const s32 cProfileID_PatametRDash;
    /**
     * @brief 208
     * @par Address: 0x10004094
     */
    static const s32 cProfileID_GearGyration;
    /**
     * @brief 209
     * @par Address: 0x10004098
     */
    static const s32 cProfileID_GearGyrationRDash;
    /**
     * @brief 210
     * @par Address: 0x1000409C
     */
    static const s32 cProfileID_FloorHoleDokan;
    /**
     * @brief 211
     * @par Address: 0x100040A0
     */
    static const s32 cProfileID_LiftRideVMove;
    /**
     * @brief 212
     * @par Address: 0x100040A4
     */
    static const s32 cProfileID_LiftRideHMove;
    /**
     * @brief 213
     * @par Address: 0x100040A8
     */
    static const s32 cProfileID_LiftRideHMoveSync;
    /**
     * @brief 214
     * @par Address: 0x100040AC
     */
    static const s32 cProfileID_LiftRideVMoveSync;
    /**
     * @brief 215
     * @par Address: 0x100040B0
     */
    static const s32 cProfileID_LiftWaki;
    /**
     * @brief 216
     * @par Address: 0x100040B4
     */
    static const s32 cProfileID_LiftWakiStep;
    /**
     * @brief 217
     * @par Address: 0x100040B8
     */
    static const s32 cProfileID_LiftLine;
    /**
     * @brief 218
     * @par Address: 0x100040BC
     */
    static const s32 cProfileID_LiftLineSync;
    /**
     * @brief 219
     * @par Address: 0x100040C0
     */
    static const s32 cProfileID_LiftLineRDash;
    /**
     * @brief 220
     * @par Address: 0x100040C4
     */
    static const s32 cProfileID_LiftSeesaw;
    /**
     * @brief 221
     * @par Address: 0x100040C8
     */
    static const s32 cProfileID_LiftSeesawRDash;
    /**
     * @brief 222
     * @par Address: 0x100040CC
     */
    static const s32 cProfileID_Maruta;
    /**
     * @brief 223
     * @par Address: 0x100040D0
     */
    static const s32 cProfileID_Barrel;
    /**
     * @brief 224
     * @par Address: 0x100040D4
     */
    static const s32 cProfileID_Barnar;
    /**
     * @brief 225
     * @par Address: 0x100040D8
     */
    static const s32 cProfileID_BarnarLarge;
    /**
     * @brief 226
     * @par Address: 0x100040DC
     */
    static const s32 cProfileID_BarnarSync;
    /**
     * @brief 227
     * @par Address: 0x100040E0
     */
    static const s32 cProfileID_BarnarPivot;
    /**
     * @brief 228
     * @par Address: 0x100040E4
     */
    static const s32 cProfileID_ActorBlockJump;
    /**
     * @brief 229
     * @par Address: 0x100040E8
     */
    static const s32 cProfileID_NoboribouObake;
    /**
     * @brief 230
     * @par Address: 0x100040EC
     */
    static const s32 cProfileID_LiftScalesStep;
    /**
     * @brief 231
     * @par Address: 0x100040F0
     */
    static const s32 cProfileID_LiftScales;
    /**
     * @brief 232
     * @par Address: 0x100040F4
     */
    static const s32 cProfileID_LiftScalesReturn;
    /**
     * @brief 233
     * @par Address: 0x100040F8
     */
    static const s32 cProfileID_GuraRock;
    /**
     * @brief 234
     * @par Address: 0x100040FC
     */
    static const s32 cProfileID_WireMove;
    /**
     * @brief 235
     * @par Address: 0x10004100
     */
    static const s32 cProfileID_IceLump;
    /**
     * @brief 236
     * @par Address: 0x10004104
     */
    static const s32 cProfileID_WaterMove;
    /**
     * @brief 237
     * @par Address: 0x10004108
     */
    static const s32 cProfileID_PlayerIce;
    /**
     * @brief 238
     * @par Address: 0x1000410C
     */
    static const s32 cProfileID_TarzanIvy;
    /**
     * @brief 239
     * @par Address: 0x10004110
     */
    static const s32 cProfileID_TarzanKusari;
    /**
     * @brief 240
     * @par Address: 0x10004114
     */
    static const s32 cProfileID_Ladder;
    /**
     * @brief 241
     * @par Address: 0x10004118
     */
    static const s32 cProfileID_WoodBoxWaki;
    /**
     * @brief 242
     * @par Address: 0x1000411C
     */
    static const s32 cProfileID_IronBoxWaki;
    /**
     * @brief 243
     * @par Address: 0x10004120
     */
    static const s32 cProfileID_LiftRemoconSeesaw;
    /**
     * @brief 244
     * @par Address: 0x10004124
     */
    static const s32 cProfileID_LiftRemoconXline;
    /**
     * @brief 245
     * @par Address: 0x10004128
     */
    static const s32 cProfileID_ActorBlockStone;
    /**
     * @brief 246
     * @par Address: 0x1000412C
     */
    static const s32 cProfileID_ActorBlockHard;
    /**
     * @brief 247
     * @par Address: 0x10004130
     */
    static const s32 cProfileID_ActorBlockWood;
    /**
     * @brief 248
     * @par Address: 0x10004134
     */
    static const s32 cProfileID_ActorBlockGuide;
    /**
     * @brief 249
     * @par Address: 0x10004138
     */
    static const s32 cProfileID_RDashLuigiBlock;
    /**
     * @brief 250
     * @par Address: 0x1000413C
     */
    static const s32 cProfileID_LiftObjbgHMove;
    /**
     * @brief 251
     * @par Address: 0x10004140
     */
    static const s32 cProfileID_LiftObjbgVMove;
    /**
     * @brief 252
     * @par Address: 0x10004144
     */
    static const s32 cProfileID_YoganJimen;
    /**
     * @brief 253
     * @par Address: 0x10004148
     */
    static const s32 cProfileID_YoganJimenRDash;
    /**
     * @brief 254
     * @par Address: 0x1000414C
     */
    static const s32 cProfileID_MonorailBlock;
    /**
     * @brief 255
     * @par Address: 0x10004150
     */
    static const s32 cProfileID_MonorailBlockRail;
    /**
     * @brief 256
     * @par Address: 0x10004154
     */
    static const s32 cProfileID_LiftRideMove;
    /**
     * @brief 257
     * @par Address: 0x10004158
     */
    static const s32 cProfileID_LiftRideMoveSky;
    /**
     * @brief 258
     * @par Address: 0x1000415C
     */
    static const s32 cProfileID_RotationLiftSemisolid;
    /**
     * @brief 259
     * @par Address: 0x10004160
     */
    static const s32 cProfileID_LiftWheel;
    /**
     * @brief 260
     * @par Address: 0x10004164
     */
    static const s32 cProfileID_LiftLeaf;
    /**
     * @brief 261
     * @par Address: 0x10004168
     */
    static const s32 cProfileID_ShuffleBlock;
    /**
     * @brief 262
     * @par Address: 0x1000416C
     */
    static const s32 cProfileID_KokoopaShipWarpCannon;
    /**
     * @brief 263
     * @par Address: 0x10004170
     */
    static const s32 cProfileID_LiftSlideTsuru;
    /**
     * @brief 264
     * @par Address: 0x10004174
     */
    static const s32 cProfileID_BossKoopaPlatform;
    /**
     * @brief 265
     * @par Address: 0x10004178
     */
    static const s32 cProfileID_KoopaShutter;
    /**
     * @brief 266
     * @par Address: 0x1000417C
     */
    static const s32 cProfileID_AirshipBottom;
    /**
     * @brief 267
     * @par Address: 0x10004180
     */
    static const s32 cProfileID_AirshipBottomWaku;
    /**
     * @brief 268
     * @par Address: 0x10004184
     */
    static const s32 cProfileID_AirshipBottomRDash;
    /**
     * @brief 269
     * @par Address: 0x10004188
     */
    static const s32 cProfileID_PeachFinalCastleKoopaJrLift;
    /**
     * @brief 270
     * @par Address: 0x1000418C
     */
    static const s32 cProfileID_PeachFinalCastleKoopaJrLiftHMove;
    /**
     * @brief 271
     * @par Address: 0x10004190
     */
    static const s32 cProfileID_PeachFinalCastleKoopaJrLiftPairObj;
    /**
     * @brief 272
     * @par Address: 0x10004194
     */
    static const s32 cProfileID_RoyLiftWakiStep;
    /**
     * @brief 273
     * @par Address: 0x10004198
     */
    static const s32 cProfileID_WendyFloor;
    /**
     * @brief 274
     * @par Address: 0x1000419C
     */
    static const s32 cProfileID_IggyRoom;
    /**
     * @brief 275
     * @par Address: 0x100041A0
     */
    static const s32 cProfileID_GoalPole;
    /**
     * @brief 276
     * @par Address: 0x100041A4
     */
    static const s32 cProfileID_GoalPoleForPaintingStage;
    /**
     * @brief 277
     * @par Address: 0x100041A8
     */
    static const s32 cProfileID_GoalPoleRDash;
    /**
     * @brief 278
     * @par Address: 0x100041AC
     */
    static const s32 cProfileID_GoalPoleForPaintingStageRDash;
    /**
     * @brief 279
     * @par Address: 0x100041B0
     */
    static const s32 cProfileID_WaterStream;
    /**
     * @brief 280
     * @par Address: 0x100041B4
     */
    static const s32 cProfileID_Cookie;
    /**
     * @brief 281
     * @par Address: 0x100041B8
     */
    static const s32 cProfileID_MagicHandUnderwaterKoopaJrDemo;
    /**
     * @brief 282
     * @par Address: 0x100041BC
     */
    static const s32 cProfileID_MagicHandBoxingKoopaJrDemo;
    /**
     * @brief 283
     * @par Address: 0x100041C0
     */
    static const s32 cProfileID_Freezer;
    /**
     * @brief 284
     * @par Address: 0x100041C4
     */
    static const s32 cProfileID_PMusasabiBlock;
    /**
     * @brief 285
     * @par Address: 0x100041C8
     */
    static const s32 cProfileID_FloatIceBlock;
    /**
     * @brief 286
     * @par Address: 0x100041CC
     */
    static const s32 cProfileID_FloatIceBlockLarge;
    /**
     * @brief 287
     * @par Address: 0x100041D0
     */
    static const s32 cProfileID_Block;
    /**
     * @brief 288
     * @par Address: 0x100041D4
     */
    static const s32 cProfileID_BrokenBlock;
    /**
     * @brief 289
     * @par Address: 0x100041D8
     */
    static const s32 cProfileID_ActorBlockHatena;
    /**
     * @brief 290
     * @par Address: 0x100041DC
     */
    static const s32 cProfileID_ActorBlockHatenaRDash;
    /**
     * @brief 291
     * @par Address: 0x100041E0
     */
    static const s32 cProfileID_ActorBlockRenga;
    /**
     * @brief 292
     * @par Address: 0x100041E4
     */
    static const s32 cProfileID_ActorBlockRengaRDash;
    /**
     * @brief 293
     * @par Address: 0x100041E8
     */
    static const s32 cProfileID_ActorBlockRengaRailVMove;
    /**
     * @brief 294
     * @par Address: 0x100041EC
     */
    static const s32 cProfileID_ActorBlockClear;
    /**
     * @brief 295
     * @par Address: 0x100041F0
     */
    static const s32 cProfileID_ActorBlockClearRDash;
    /**
     * @brief 296
     * @par Address: 0x100041F4
     */
    static const s32 cProfileID_ActorHatenaBlockLine;
    /**
     * @brief 297
     * @par Address: 0x100041F8
     */
    static const s32 cProfileID_ActorRengaBlockLine;
    /**
     * @brief 298
     * @par Address: 0x100041FC
     */
    static const s32 cProfileID_ActorHatenaBlockLineGroup;
    /**
     * @brief 299
     * @par Address: 0x10004200
     */
    static const s32 cProfileID_ActorRengaBlockLineGroup;
    /**
     * @brief 300
     * @par Address: 0x10004204
     */
    static const s32 cProfileID_ActorBlockHatenaAngle;
    /**
     * @brief 301
     * @par Address: 0x10004208
     */
    static const s32 cProfileID_ActorBlockHatenaAngleR99;
    /**
     * @brief 302
     * @par Address: 0x1000420C
     */
    static const s32 cProfileID_ActorBlockRengaAngle;
    /**
     * @brief 303
     * @par Address: 0x10004210
     */
    static const s32 cProfileID_ActorBlockRengaAngleRDash;
    /**
     * @brief 304
     * @par Address: 0x10004214
     */
    static const s32 cProfileID_ActorBlockRengaAngleR99;
    /**
     * @brief 305
     * @par Address: 0x10004218
     */
    static const s32 cProfileID_ActorBlockHatenaPairChild;
    /**
     * @brief 306
     * @par Address: 0x1000421C
     */
    static const s32 cProfileID_ActorBlockRengaPairChild;
    /**
     * @brief 307
     * @par Address: 0x10004220
     */
    static const s32 cProfileID_ActorBlockHatenaFollow;
    /**
     * @brief 308
     * @par Address: 0x10004224
     */
    static const s32 cProfileID_ActorBlockRengaFollow;
    /**
     * @brief 309
     * @par Address: 0x10004228
     */
    static const s32 cProfileID_ActorBlockMakeDRC;
    /**
     * @brief 310
     * @par Address: 0x1000422C
     */
    static const s32 cProfileID_ActorBlockPata;
    /**
     * @brief 311
     * @par Address: 0x10004230
     */
    static const s32 cProfileID_ActorBlockWater;
    /**
     * @brief 312
     * @par Address: 0x10004234
     */
    static const s32 cProfileID_ActorBlockCloud;
    /**
     * @brief 313
     * @par Address: 0x10004238
     */
    static const s32 cProfileID_ActorBlockSnakeCoin;
    /**
     * @brief 314
     * @par Address: 0x1000423C
     */
    static const s32 cProfileID_ActorBlockSwitch;
    /**
     * @brief 315
     * @par Address: 0x10004240
     */
    static const s32 cProfileID_ActorBlockPSwitch;
    /**
     * @brief 316
     * @par Address: 0x10004244
     */
    static const s32 cProfileID_ActorBlockChibiYoshi;
    /**
     * @brief 317
     * @par Address: 0x10004248
     */
    static const s32 cProfileID_ActorBlockBigRenga;
    /**
     * @brief 318
     * @par Address: 0x1000424C
     */
    static const s32 cProfileID_ActorBlockBigHatena;
    /**
     * @brief 319
     * @par Address: 0x10004250
     */
    static const s32 cProfileID_ActorBlockHatenaEnemyCourse;
    /**
     * @brief 320
     * @par Address: 0x10004254
     */
    static const s32 cProfileID_ActorBlockPataEnemyCourse;
    /**
     * @brief 321
     * @par Address: 0x10004258
     */
    static const s32 cProfileID_RuletBlock;
    /**
     * @brief 322
     * @par Address: 0x1000425C
     */
    static const s32 cProfileID_ChikuwaBlock;
    /**
     * @brief 323
     * @par Address: 0x10004260
     */
    static const s32 cProfileID_KameckBlock;
    /**
     * @brief 324
     * @par Address: 0x10004264
     */
    static const s32 cProfileID_WoodBox;
    /**
     * @brief 325
     * @par Address: 0x10004268
     */
    static const s32 cProfileID_IronBox;
    /**
     * @brief 326
     * @par Address: 0x1000426C
     */
    static const s32 cProfileID_IronBoxRDash;
    /**
     * @brief 327
     * @par Address: 0x10004270
     */
    static const s32 cProfileID_IronBoxRDashNarrowSpawnRange;
    /**
     * @brief 328
     * @par Address: 0x10004274
     */
    static const s32 cProfileID_MagicHandPa;
    /**
     * @brief 329
     * @par Address: 0x10004278
     */
    static const s32 cProfileID_MagicHandGu;
    /**
     * @brief 330
     * @par Address: 0x1000427C
     */
    static const s32 cProfileID_MagicHandGuRDash;
    /**
     * @brief 331
     * @par Address: 0x10004280
     */
    static const s32 cProfileID_DRCHiddenBlock;
    /**
     * @brief 332
     * @par Address: 0x10004284
     */
    static const s32 cProfileID_RailEffectGeneratorBlock;
    /**
     * @brief 333
     * @par Address: 0x10004288
     */
    static const s32 cProfileID_ObjPipeRight;
    /**
     * @brief 334
     * @par Address: 0x1000428C
     */
    static const s32 cProfileID_ObjPipeLeft;
    /**
     * @brief 335
     * @par Address: 0x10004290
     */
    static const s32 cProfileID_ObjPipeUp;
    /**
     * @brief 336
     * @par Address: 0x10004294
     */
    static const s32 cProfileID_ObjPipeDown;
    /**
     * @brief 337
     * @par Address: 0x10004298
     */
    static const s32 cProfileID_ObjPipeRightGroup;
    /**
     * @brief 338
     * @par Address: 0x1000429C
     */
    static const s32 cProfileID_ObjPipeLeftGroup;
    /**
     * @brief 339
     * @par Address: 0x100042A0
     */
    static const s32 cProfileID_ObjPipeUpGroup;
    /**
     * @brief 340
     * @par Address: 0x100042A4
     */
    static const s32 cProfileID_ObjPipeDownGroup;
    /**
     * @brief 341
     * @par Address: 0x100042A8
     */
    static const s32 cProfileID_ObjPipeRightNG;
    /**
     * @brief 342
     * @par Address: 0x100042AC
     */
    static const s32 cProfileID_ObjPipeLeftNG;
    /**
     * @brief 343
     * @par Address: 0x100042B0
     */
    static const s32 cProfileID_ObjPipeUpNG;
    /**
     * @brief 344
     * @par Address: 0x100042B4
     */
    static const s32 cProfileID_SwitchHatenaButton;
    /**
     * @brief 345
     * @par Address: 0x100042B8
     */
    static const s32 cProfileID_SwitchPButton;
    /**
     * @brief 346
     * @par Address: 0x100042BC
     */
    static const s32 cProfileID_SwitchPButtonRDash;
    /**
     * @brief 347
     * @par Address: 0x100042C0
     */
    static const s32 cProfileID_SwitchPButtonNoWallKick;
    /**
     * @brief 348
     * @par Address: 0x100042C4
     */
    static const s32 cProfileID_SwitchBossKoopaButton;
    /**
     * @brief 349
     * @par Address: 0x100042C8
     */
    static const s32 cProfileID_SwitchBossKoopaButtonAxe;
    /**
     * @brief 350
     * @par Address: 0x100042CC
     */
    static const s32 cProfileID_IcicleBig;
    /**
     * @brief 351
     * @par Address: 0x100042D0
     */
    static const s32 cProfileID_LemmyBall;
    /**
     * @brief 352
     * @par Address: 0x100042D4
     */
    static const s32 cProfileID_LemmyBomb;
    /**
     * @brief 353
     * @par Address: 0x100042D8
     */
    static const s32 cProfileID_Akoya;
    /**
     * @brief 354
     * @par Address: 0x100042DC
     */
    static const s32 cProfileID_IceBlock;
    /**
     * @brief 355
     * @par Address: 0x100042E0
     */
    static const s32 cProfileID_IceAshiba;
    /**
     * @brief 356
     * @par Address: 0x100042E4
     */
    static const s32 cProfileID_IceAshibaWater;
    /**
     * @brief 357
     * @par Address: 0x100042E8
     */
    static const s32 cProfileID_IceAshibaRail;
    /**
     * @brief 358
     * @par Address: 0x100042EC
     */
    static const s32 cProfileID_LiftWaterWheel;
    /**
     * @brief 359
     * @par Address: 0x100042F0
     */
    static const s32 cProfileID_LiftRemoconBalanceClinch;
    /**
     * @brief 360
     * @par Address: 0x100042F4
     */
    static const s32 cProfileID_LiftRemoconBalance;
    /**
     * @brief 361
     * @par Address: 0x100042F8
     */
    static const s32 cProfileID_LiftRemoconBalanceRDash;
    /**
     * @brief 362
     * @par Address: 0x100042FC
     */
    static const s32 cProfileID_PentaroIce;
    /**
     * @brief 363
     * @par Address: 0x10004300
     */
    static const s32 cProfileID_LiftMoveOnNormal;
    /**
     * @brief 364
     * @par Address: 0x10004304
     */
    static const s32 cProfileID_LiftDirectionSwitch;
    /**
     * @brief 365
     * @par Address: 0x10004308
     */
    static const s32 cProfileID_HardIceBlock;
    /**
     * @brief 366
     * @par Address: 0x1000430C
     */
    static const s32 cProfileID_WanwanPile;
    /**
     * @brief 367
     * @par Address: 0x10004310
     */
    static const s32 cProfileID_WanwanPileRDash;
    /**
     * @brief 368
     * @par Address: 0x10004314
     */
    static const s32 cProfileID_KameckIce;
    /**
     * @brief 369
     * @par Address: 0x10004318
     */
    static const s32 cProfileID_WendyIcicle;
    /**
     * @brief 370
     * @par Address: 0x1000431C
     */
    static const s32 cProfileID_PeachFinalCastleKoopaJrClown;
    /**
     * @brief 371
     * @par Address: 0x10004320
     */
    static const s32 cProfileID_BoxingKoopaJrClown;
    /**
     * @brief 372
     * @par Address: 0x10004324
     */
    static const s32 cProfileID_KoopaJrBoxingFloor;
    /**
     * @brief 373
     * @par Address: 0x10004328
     */
    static const s32 cProfileID_FinalKoopaJrClown;
    /**
     * @brief 374
     * @par Address: 0x1000432C
     */
    static const s32 cProfileID_FinalKoopa;
    /**
     * @brief 375
     * @par Address: 0x10004330
     */
    static const s32 cProfileID_FireBar;
    /**
     * @brief 376
     * @par Address: 0x10004334
     */
    static const s32 cProfileID_FireBarSync;
    /**
     * @brief 377
     * @par Address: 0x10004338
     */
    static const s32 cProfileID_FireBar2;
    /**
     * @brief 378
     * @par Address: 0x1000433C
     */
    static const s32 cProfileID_PivotFireBar;
    /**
     * @brief 379
     * @par Address: 0x10004340
     */
    static const s32 cProfileID_Gattan;
    /**
     * @brief 380
     * @par Address: 0x10004344
     */
    static const s32 cProfileID_TamanoriLift;
    /**
     * @brief 381
     * @par Address: 0x10004348
     */
    static const s32 cProfileID_Met;
    /**
     * @brief 382
     * @par Address: 0x1000434C
     */
    static const s32 cProfileID_BigMet;
    /**
     * @brief 383
     * @par Address: 0x10004350
     */
    static const s32 cProfileID_Unira;
    /**
     * @brief 384
     * @par Address: 0x10004354
     */
    static const s32 cProfileID_UniraRDashNarrowBGCheck;
    /**
     * @brief 385
     * @par Address: 0x10004358
     */
    static const s32 cProfileID_Unizoo;
    /**
     * @brief 386
     * @par Address: 0x1000435C
     */
    static const s32 cProfileID_UniraRDash;
    /**
     * @brief 387
     * @par Address: 0x10004360
     */
    static const s32 cProfileID_PowBlock;
    /**
     * @brief 388
     * @par Address: 0x10004364
     */
    static const s32 cProfileID_LightBlock;
    /**
     * @brief 389
     * @par Address: 0x10004368
     */
    static const s32 cProfileID_PropBlock;
    /**
     * @brief 390
     * @par Address: 0x1000436C
     */
    static const s32 cProfileID_SlideBlock;
    /**
     * @brief 391
     * @par Address: 0x10004370
     */
    static const s32 cProfileID_CarryBlockTaru;
    /**
     * @brief 392
     * @par Address: 0x10004374
     */
    static const s32 cProfileID_Ice;
    /**
     * @brief 393
     * @par Address: 0x10004378
     */
    static const s32 cProfileID_ActorCoinSpring;
    /**
     * @brief 394
     * @par Address: 0x1000437C
     */
    static const s32 cProfileID_ActorCoinSpringFunsui;
    /**
     * @brief 395
     * @par Address: 0x10004380
     */
    static const s32 cProfileID_ActorCoin;
    /**
     * @brief 396
     * @par Address: 0x10004384
     */
    static const s32 cProfileID_ActorCoinRDash;
    /**
     * @brief 397
     * @par Address: 0x10004388
     */
    static const s32 cProfileID_ActorCoinFrozen;
    /**
     * @brief 398
     * @par Address: 0x1000438C
     */
    static const s32 cProfileID_ActorCoinPairObj;
    /**
     * @brief 399
     * @par Address: 0x10004390
     */
    static const s32 cProfileID_ActorCoinDemoJump;
    /**
     * @brief 400
     * @par Address: 0x10004394
     */
    static const s32 cProfileID_ActorCoinHopJump;
    /**
     * @brief 401
     * @par Address: 0x10004398
     */
    static const s32 cProfileID_ActorCoinJump;
    /**
     * @brief 402
     * @par Address: 0x1000439C
     */
    static const s32 cProfileID_ActorCoinJumpBattle;
    /**
     * @brief 403
     * @par Address: 0x100043A0
     */
    static const s32 cProfileID_ActorCoinJumpUnabon;
    /**
     * @brief 404
     * @par Address: 0x100043A4
     */
    static const s32 cProfileID_ActorCoinShowerJump;
    /**
     * @brief 405
     * @par Address: 0x100043A8
     */
    static const s32 cProfileID_ActorCoinAngle;
    /**
     * @brief 406
     * @par Address: 0x100043AC
     */
    static const s32 cProfileID_ActorCoinKaitenita;
    /**
     * @brief 407
     * @par Address: 0x100043B0
     */
    static const s32 cProfileID_ActorCoinWater;
    /**
     * @brief 408
     * @par Address: 0x100043B4
     */
    static const s32 cProfileID_ActorCoinFollow;
    /**
     * @brief 409
     * @par Address: 0x100043B8
     */
    static const s32 cProfileID_ActorCoinBubble;
    /**
     * @brief 410
     * @par Address: 0x100043BC
     */
    static const s32 cProfileID_ActorCoinJugem;
    /**
     * @brief 411
     * @par Address: 0x100043C0
     */
    static const s32 cProfileID_ActorCoinPass;
    /**
     * @brief 412
     * @par Address: 0x100043C4
     */
    static const s32 cProfileID_ActorCoinAkoya;
    /**
     * @brief 413
     * @par Address: 0x100043C8
     */
    static const s32 cProfileID_ActorCoinRotation;
    /**
     * @brief 414
     * @par Address: 0x100043CC
     */
    static const s32 cProfileID_ActorCoinRotationPass;
    /**
     * @brief 415
     * @par Address: 0x100043D0
     */
    static const s32 cProfileID_ActorCoinSpin;
    /**
     * @brief 416
     * @par Address: 0x100043D4
     */
    static const s32 cProfileID_ActorCoinRotationFloor;
    /**
     * @brief 417
     * @par Address: 0x100043D8
     */
    static const s32 cProfileID_ActorCoinParachute;
    /**
     * @brief 418
     * @par Address: 0x100043DC
     */
    static const s32 cProfileID_ActorCoinSnake;
    /**
     * @brief 419
     * @par Address: 0x100043E0
     */
    static const s32 cProfileID_ActorCoinKinokoLift;
    /**
     * @brief 420
     * @par Address: 0x100043E4
     */
    static const s32 cProfileID_ActorCoinBalloon;
    /**
     * @brief 421
     * @par Address: 0x100043E8
     */
    static const s32 cProfileID_ActorCoinGravity;
    /**
     * @brief 422
     * @par Address: 0x100043EC
     */
    static const s32 cProfileID_ActorCoinShock;
    /**
     * @brief 423
     * @par Address: 0x100043F0
     */
    static const s32 cProfileID_ActorCoinDRCAppearance;
    /**
     * @brief 424
     * @par Address: 0x100043F4
     */
    static const s32 cProfileID_ActorCoinEat;
    /**
     * @brief 425
     * @par Address: 0x100043F8
     */
    static const s32 cProfileID_BlueCoin;
    /**
     * @brief 426
     * @par Address: 0x100043FC
     */
    static const s32 cProfileID_CollectionCoin;
    /**
     * @brief 427
     * @par Address: 0x10004400
     */
    static const s32 cProfileID_CollectionCoinLine;
    /**
     * @brief 428
     * @par Address: 0x10004404
     */
    static const s32 cProfileID_CollectionCoinLineGroup;
    /**
     * @brief 429
     * @par Address: 0x10004408
     */
    static const s32 cProfileID_CollectionCoinBolt;
    /**
     * @brief 430
     * @par Address: 0x1000440C
     */
    static const s32 cProfileID_CollectionCoinParent;
    /**
     * @brief 431
     * @par Address: 0x10004410
     */
    static const s32 cProfileID_CollectionCoinParentRDash;
    /**
     * @brief 432
     * @par Address: 0x10004414
     */
    static const s32 cProfileID_CollectionCoinParentRDashExtendedSpawnRange;
    /**
     * @brief 433
     * @par Address: 0x10004418
     */
    static const s32 cProfileID_CollectionCoinParentR6Castle;
    /**
     * @brief 434
     * @par Address: 0x1000441C
     */
    static const s32 cProfileID_CollectionCoinSnake;
    /**
     * @brief 435
     * @par Address: 0x10004420
     */
    static const s32 cProfileID_CollectionCoinSpin;
    /**
     * @brief 436
     * @par Address: 0x10004424
     */
    static const s32 cProfileID_CoinNankinTamasudareParent;
    /**
     * @brief 437
     * @par Address: 0x10004428
     */
    static const s32 cProfileID_CoinNankinTamasudareChild;
    /**
     * @brief 438
     * @par Address: 0x1000442C
     */
    static const s32 cProfileID_CoinmakiCoin;
    /**
     * @brief 439
     * @par Address: 0x10004430
     */
    static const s32 cProfileID_TottenHouseReadTagRDash;
    /**
     * @brief 440
     * @par Address: 0x10004434
     */
    static const s32 cProfileID_TagShabonProtectArea;
    /**
     * @brief 441
     * @par Address: 0x10004438
     */
    static const s32 cProfileID_Balloon;
    /**
     * @brief 442
     * @par Address: 0x1000443C
     */
    static const s32 cProfileID_Yoshi;
    /**
     * @brief 443
     * @par Address: 0x10004440
     */
    static const s32 cProfileID_TottenPlayer;
    /**
     * @brief 444
     * @par Address: 0x10004444
     */
    static const s32 cProfileID_PlayerObject;
    /**
     * @brief 445
     * @par Address: 0x10004448
     */
    static const s32 cProfileID_GoalDemoKinopio;
    /**
     * @brief 446
     * @par Address: 0x1000444C
     */
    static const s32 cProfileID_ChibiYoshiEgg;
    /**
     * @brief 447
     * @par Address: 0x10004450
     */
    static const s32 cProfileID_ChibiYoshiAwa;
    /**
     * @brief 448
     * @par Address: 0x10004454
     */
    static const s32 cProfileID_BalloonChibiYoshi;
    /**
     * @brief 449
     * @par Address: 0x10004458
     */
    static const s32 cProfileID_LightChibiYoshi;
    /**
     * @brief 450
     * @par Address: 0x1000445C
     */
    static const s32 cProfileID_CloudChibiYoshi;
    /**
     * @brief 451
     * @par Address: 0x10004460
     */
    static const s32 cProfileID_BubbleChibiYoshi;
    /**
     * @brief 452
     * @par Address: 0x10004464
     */
    static const s32 cProfileID_FruitCookie;
    /**
     * @brief 453
     * @par Address: 0x10004468
     */
    static const s32 cProfileID_SlotChibiYoshi;
    /**
     * @brief 454
     * @par Address: 0x1000446C
     */
    static const s32 cProfileID_WakiHipAttack;
    /**
     * @brief 455
     * @par Address: 0x10004470
     */
    static const s32 cProfileID_PipeNextGotoTimerAddTag;
    /**
     * @brief 456
     * @par Address: 0x10004474
     */
    static const s32 cProfileID_QuestActorPlacementTag;
    /**
     * @brief 457
     * @par Address: 0x10004478
     */
    static const s32 cProfileID_QuestDemoLocationTag;
    /**
     * @brief 458
     * @par Address: 0x1000447C
     */
    static const s32 cProfileID_ShadowkunRetreatTag;
    /**
     * @brief 459
     * @par Address: 0x10004480
     */
    static const s32 cProfileID_Shadowkun;
    /**
     * @brief 460
     * @par Address: 0x10004484
     */
    static const s32 cProfileID_ShadowkunFukuro;
    /**
     * @brief 461
     * @par Address: 0x10004488
     */
    static const s32 cProfileID_QuestKey;
    /**
     * @brief 462
     * @par Address: 0x1000448C
     */
    static const s32 cProfileID_QuestKinopio;
    /**
     * @brief 463
     * @par Address: 0x10004490
     */
    static const s32 cProfileID_QuestPrizeItem;
    /**
     * @brief 464
     * @par Address: 0x10004494
     */
    static const s32 cProfileID_EnemyCourseDemoShadowkun;
    /**
     * @brief 465
     * @par Address: 0x10004498
     */
    static const s32 cProfileID_TitleDemoShadowkun;
    /**
     * @brief 466
     * @par Address: 0x1000449C
     */
    static const s32 cProfileID_BalloonHangActor;
    /**
     * @brief 467
     * @par Address: 0x100044A0
     */
    static const s32 cProfileID_Kuribo;
    /**
     * @brief 468
     * @par Address: 0x100044A4
     */
    static const s32 cProfileID_Kakibo;
    /**
     * @brief 469
     * @par Address: 0x100044A8
     */
    static const s32 cProfileID_PataKuribo;
    /**
     * @brief 470
     * @par Address: 0x100044AC
     */
    static const s32 cProfileID_IgaKuribo;
    /**
     * @brief 471
     * @par Address: 0x100044B0
     */
    static const s32 cProfileID_BeansKuribo;
    /**
     * @brief 472
     * @par Address: 0x100044B4
     */
    static const s32 cProfileID_MiddleKuribo;
    /**
     * @brief 473
     * @par Address: 0x100044B8
     */
    static const s32 cProfileID_LargeKuribo;
    /**
     * @brief 474
     * @par Address: 0x100044BC
     */
    static const s32 cProfileID_IceBall;
    /**
     * @brief 475
     * @par Address: 0x100044C0
     */
    static const s32 cProfileID_IceBallPakkun;
    /**
     * @brief 476
     * @par Address: 0x100044C4
     */
    static const s32 cProfileID_FireBallPlayer;
    /**
     * @brief 477
     * @par Address: 0x100044C8
     */
    static const s32 cProfileID_FireBallPakkun;
    /**
     * @brief 478
     * @par Address: 0x100044CC
     */
    static const s32 cProfileID_YoshiFire;
    /**
     * @brief 479
     * @par Address: 0x100044D0
     */
    static const s32 cProfileID_DokanPakkunUp;
    /**
     * @brief 480
     * @par Address: 0x100044D4
     */
    static const s32 cProfileID_DokanPakkunDown;
    /**
     * @brief 481
     * @par Address: 0x100044D8
     */
    static const s32 cProfileID_DokanPakkunLeft;
    /**
     * @brief 482
     * @par Address: 0x100044DC
     */
    static const s32 cProfileID_DokanPakkunRight;
    /**
     * @brief 483
     * @par Address: 0x100044E0
     */
    static const s32 cProfileID_DokanFPakkunUp;
    /**
     * @brief 484
     * @par Address: 0x100044E4
     */
    static const s32 cProfileID_DokanFPakkunDown;
    /**
     * @brief 485
     * @par Address: 0x100044E8
     */
    static const s32 cProfileID_DokanFPakkunLeft;
    /**
     * @brief 486
     * @par Address: 0x100044EC
     */
    static const s32 cProfileID_DokanFPakkunRight;
    /**
     * @brief 487
     * @par Address: 0x100044F0
     */
    static const s32 cProfileID_DokanIPakkunUp;
    /**
     * @brief 488
     * @par Address: 0x100044F4
     */
    static const s32 cProfileID_DokanIPakkunDown;
    /**
     * @brief 489
     * @par Address: 0x100044F8
     */
    static const s32 cProfileID_DokanIPakkunLeft;
    /**
     * @brief 490
     * @par Address: 0x100044FC
     */
    static const s32 cProfileID_DokanIPakkunRight;
    /**
     * @brief 491
     * @par Address: 0x10004500
     */
    static const s32 cProfileID_DokanPakkunBig;
    /**
     * @brief 492
     * @par Address: 0x10004504
     */
    static const s32 cProfileID_JimenPakkun;
    /**
     * @brief 493
     * @par Address: 0x10004508
     */
    static const s32 cProfileID_JimenPakkunRDash;
    /**
     * @brief 494
     * @par Address: 0x1000450C
     */
    static const s32 cProfileID_JimenPakkunR33;
    /**
     * @brief 495
     * @par Address: 0x10004510
     */
    static const s32 cProfileID_JimenFPakkun;
    /**
     * @brief 496
     * @par Address: 0x10004514
     */
    static const s32 cProfileID_JimenIPakkun;
    /**
     * @brief 497
     * @par Address: 0x10004518
     */
    static const s32 cProfileID_JimenBigPakkun;
    /**
     * @brief 498
     * @par Address: 0x1000451C
     */
    static const s32 cProfileID_JimenBigFPakkun;
    /**
     * @brief 499
     * @par Address: 0x10004520
     */
    static const s32 cProfileID_WalkPakkun;
    /**
     * @brief 500
     * @par Address: 0x10004524
     */
    static const s32 cProfileID_WaterPakkun;
    /**
     * @brief 501
     * @par Address: 0x10004528
     */
    static const s32 cProfileID_WaterPakkunRDash;
    /**
     * @brief 502
     * @par Address: 0x1000452C
     */
    static const s32 cProfileID_PakkunBlack;
    /**
     * @brief 503
     * @par Address: 0x10004530
     */
    static const s32 cProfileID_PakkunBlackObj;
    /**
     * @brief 504
     * @par Address: 0x10004534
     */
    static const s32 cProfileID_Nisemusa;
    /**
     * @brief 505
     * @par Address: 0x10004538
     */
    static const s32 cProfileID_Sanbo;
    /**
     * @brief 506
     * @par Address: 0x1000453C
     */
    static const s32 cProfileID_SanboParts;
    /**
     * @brief 507
     * @par Address: 0x10004540
     */
    static const s32 cProfileID_WakiBigHanachan;
    /**
     * @brief 508
     * @par Address: 0x10004544
     */
    static const s32 cProfileID_Hanachan;
    /**
     * @brief 509
     * @par Address: 0x10004548
     */
    static const s32 cProfileID_Hanachan2;
    /**
     * @brief 510
     * @par Address: 0x1000454C
     */
    static const s32 cProfileID_BigHanachan;
    /**
     * @brief 511
     * @par Address: 0x10004550
     */
    static const s32 cProfileID_FooBall;
    /**
     * @brief 512
     * @par Address: 0x10004554
     */
    static const s32 cProfileID_Nokonoko;
    /**
     * @brief 513
     * @par Address: 0x10004558
     */
    static const s32 cProfileID_NokonokoHorizontalSpawn;
    /**
     * @brief 514
     * @par Address: 0x1000455C
     */
    static const s32 cProfileID_BigNokonoko;
    /**
     * @brief 515
     * @par Address: 0x10004560
     */
    static const s32 cProfileID_Patapata;
    /**
     * @brief 516
     * @par Address: 0x10004564
     */
    static const s32 cProfileID_PatapataGroup;
    /**
     * @brief 517
     * @par Address: 0x10004568
     */
    static const s32 cProfileID_Togezo;
    /**
     * @brief 518
     * @par Address: 0x1000456C
     */
    static const s32 cProfileID_SakasaTogezo;
    /**
     * @brief 519
     * @par Address: 0x10004570
     */
    static const s32 cProfileID_Kanibo;
    /**
     * @brief 520
     * @par Address: 0x10004574
     */
    static const s32 cProfileID_Kanitama;
    /**
     * @brief 521
     * @par Address: 0x10004578
     */
    static const s32 cProfileID_Bomhei;
    /**
     * @brief 522
     * @par Address: 0x1000457C
     */
    static const s32 cProfileID_ParaBomhei;
    /**
     * @brief 523
     * @par Address: 0x10004580
     */
    static const s32 cProfileID_ParaBomheiRDash;
    /**
     * @brief 524
     * @par Address: 0x10004584
     */
    static const s32 cProfileID_MechaKoopa;
    /**
     * @brief 525
     * @par Address: 0x10004588
     */
    static const s32 cProfileID_Pentaro;
    /**
     * @brief 526
     * @par Address: 0x1000458C
     */
    static const s32 cProfileID_PentaroSunglasses;
    /**
     * @brief 527
     * @par Address: 0x10004590
     */
    static const s32 cProfileID_WakiPentaro;
    /**
     * @brief 528
     * @par Address: 0x10004594
     */
    static const s32 cProfileID_Honemet;
    /**
     * @brief 529
     * @par Address: 0x10004598
     */
    static const s32 cProfileID_HonemetHead;
    /**
     * @brief 530
     * @par Address: 0x1000459C
     */
    static const s32 cProfileID_Puku;
    /**
     * @brief 531
     * @par Address: 0x100045A0
     */
    static const s32 cProfileID_PukuGroup;
    /**
     * @brief 532
     * @par Address: 0x100045A4
     */
    static const s32 cProfileID_MiddlePuku;
    /**
     * @brief 533
     * @par Address: 0x100045A8
     */
    static const s32 cProfileID_MiddlePukuGroup;
    /**
     * @brief 534
     * @par Address: 0x100045AC
     */
    static const s32 cProfileID_SachiPuku;
    /**
     * @brief 535
     * @par Address: 0x100045B0
     */
    static const s32 cProfileID_SachiMiddlePuku;
    /**
     * @brief 536
     * @par Address: 0x100045B4
     */
    static const s32 cProfileID_NigePuku;
    /**
     * @brief 537
     * @par Address: 0x100045B8
     */
    static const s32 cProfileID_NigeMiddlePuku;
    /**
     * @brief 538
     * @par Address: 0x100045BC
     */
    static const s32 cProfileID_MechaPuku;
    /**
     * @brief 539
     * @par Address: 0x100045C0
     */
    static const s32 cProfileID_TogePuku;
    /**
     * @brief 540
     * @par Address: 0x100045C4
     */
    static const s32 cProfileID_TobiPuku;
    /**
     * @brief 541
     * @par Address: 0x100045C8
     */
    static const s32 cProfileID_TobiMechaPuku;
    /**
     * @brief 542
     * @par Address: 0x100045CC
     */
    static const s32 cProfileID_WakiPuku;
    /**
     * @brief 543
     * @par Address: 0x100045D0
     */
    static const s32 cProfileID_WakiSachiPuku;
    /**
     * @brief 544
     * @par Address: 0x100045D4
     */
    static const s32 cProfileID_WakiNigePuku;
    /**
     * @brief 545
     * @par Address: 0x100045D8
     */
    static const s32 cProfileID_WakiTobiPuku;
    /**
     * @brief 546
     * @par Address: 0x100045DC
     */
    static const s32 cProfileID_WakiTobiMechaPuku;
    /**
     * @brief 547
     * @par Address: 0x100045E0
     */
    static const s32 cProfileID_PukuParent;
    /**
     * @brief 548
     * @par Address: 0x100045E4
     */
    static const s32 cProfileID_Kopone;
    /**
     * @brief 549
     * @par Address: 0x100045E8
     */
    static const s32 cProfileID_IgaPuku;
    /**
     * @brief 550
     * @par Address: 0x100045EC
     */
    static const s32 cProfileID_BigIgaPuku;
    /**
     * @brief 551
     * @par Address: 0x100045F0
     */
    static const s32 cProfileID_WakiIgaPuku;
    /**
     * @brief 552
     * @par Address: 0x100045F4
     */
    static const s32 cProfileID_WakiBigIgaPuku;
    /**
     * @brief 553
     * @par Address: 0x100045F8
     */
    static const s32 cProfileID_JellyFish;
    /**
     * @brief 554
     * @par Address: 0x100045FC
     */
    static const s32 cProfileID_Chochin;
    /**
     * @brief 555
     * @par Address: 0x10004600
     */
    static const s32 cProfileID_Jumpdai;
    /**
     * @brief 556
     * @par Address: 0x10004604
     */
    static const s32 cProfileID_Keronpa;
    /**
     * @brief 557
     * @par Address: 0x10004608
     */
    static const s32 cProfileID_KeronpaRDash;
    /**
     * @brief 558
     * @par Address: 0x1000460C
     */
    static const s32 cProfileID_FireBallKeronpa;
    /**
     * @brief 559
     * @par Address: 0x10004610
     */
    static const s32 cProfileID_FireBallKeronpaRDash;
    /**
     * @brief 560
     * @par Address: 0x10004614
     */
    static const s32 cProfileID_WakiKeronpa;
    /**
     * @brief 561
     * @par Address: 0x10004618
     */
    static const s32 cProfileID_FireSnake;
    /**
     * @brief 562
     * @par Address: 0x1000461C
     */
    static const s32 cProfileID_GoroGoro;
    /**
     * @brief 563
     * @par Address: 0x10004620
     */
    static const s32 cProfileID_GoroGoroKyodai;
    /**
     * @brief 564
     * @par Address: 0x10004624
     */
    static const s32 cProfileID_GoroGoroKyodaiRDash;
    /**
     * @brief 565
     * @par Address: 0x10004628
     */
    static const s32 cProfileID_CheckPointFlag;
    /**
     * @brief 566
     * @par Address: 0x1000462C
     */
    static const s32 cProfileID_BigPileDir1;
    /**
     * @brief 567
     * @par Address: 0x10004630
     */
    static const s32 cProfileID_BigPileDir2;
    /**
     * @brief 568
     * @par Address: 0x10004634
     */
    static const s32 cProfileID_BigPileRight;
    /**
     * @brief 569
     * @par Address: 0x10004638
     */
    static const s32 cProfileID_BigPileDir4;
    /**
     * @brief 570
     * @par Address: 0x1000463C
     */
    static const s32 cProfileID_SuperBigPileDir1;
    /**
     * @brief 571
     * @par Address: 0x10004640
     */
    static const s32 cProfileID_SuperBigPileDir2;
    /**
     * @brief 572
     * @par Address: 0x10004644
     */
    static const s32 cProfileID_KazandanMgr;
    /**
     * @brief 573
     * @par Address: 0x10004648
     */
    static const s32 cProfileID_WakiKazadan;
    /**
     * @brief 574
     * @par Address: 0x1000464C
     */
    static const s32 cProfileID_Kazandan;
    /**
     * @brief 575
     * @par Address: 0x10004650
     */
    static const s32 cProfileID_Zoom;
    /**
     * @brief 576
     * @par Address: 0x10004654
     */
    static const s32 cProfileID_ZoomRDash;
    /**
     * @brief 577
     * @par Address: 0x10004658
     */
    static const s32 cProfileID_KyokaiVelAdj;
    /**
     * @brief 578
     * @par Address: 0x1000465C
     */
    static const s32 cProfileID_MaxUeLeft;
    /**
     * @brief 579
     * @par Address: 0x10004660
     */
    static const s32 cProfileID_MaxUeRight;
    /**
     * @brief 580
     * @par Address: 0x10004664
     */
    static const s32 cProfileID_StopLrUp;
    /**
     * @brief 581
     * @par Address: 0x10004668
     */
    static const s32 cProfileID_StopLrDw;
    /**
     * @brief 582
     * @par Address: 0x1000466C
     */
    static const s32 cProfileID_MaxUe2Left;
    /**
     * @brief 583
     * @par Address: 0x10004670
     */
    static const s32 cProfileID_MaxUe2Right;
    /**
     * @brief 584
     * @par Address: 0x10004674
     */
    static const s32 cProfileID_AutoScrollTag;
    /**
     * @brief 585
     * @par Address: 0x10004678
     */
    static const s32 cProfileID_SpecialScrollTag;
    /**
     * @brief 586
     * @par Address: 0x1000467C
     */
    static const s32 cProfileID_KoopaAreaObj;
    /**
     * @brief 587
     * @par Address: 0x10004680
     */
    static const s32 cProfileID_BgCenter;
    /**
     * @brief 588
     * @par Address: 0x10004684
     */
    static const s32 cProfileID_EnvSoundPhenomenaTag;
    /**
     * @brief 589
     * @par Address: 0x10004688
     */
    static const s32 cProfileID_TagKusaTypeSet;
    /**
     * @brief 590
     * @par Address: 0x1000468C
     */
    static const s32 cProfileID_EnvSoundTag;
    /**
     * @brief 591
     * @par Address: 0x10004690
     */
    static const s32 cProfileID_Kinoko;
    /**
     * @brief 592
     * @par Address: 0x10004694
     */
    static const s32 cProfileID_FireFlower;
    /**
     * @brief 593
     * @par Address: 0x10004698
     */
    static const s32 cProfileID_MameKinoko;
    /**
     * @brief 594
     * @par Address: 0x1000469C
     */
    static const s32 cProfileID_IceFlower;
    /**
     * @brief 595
     * @par Address: 0x100046A0
     */
    static const s32 cProfileID_Propeller;
    /**
     * @brief 596
     * @par Address: 0x100046A4
     */
    static const s32 cProfileID_Penguin;
    /**
     * @brief 597
     * @par Address: 0x100046A8
     */
    static const s32 cProfileID_OneUpKinoko;
    /**
     * @brief 598
     * @par Address: 0x100046AC
     */
    static const s32 cProfileID_Musasabi;
    /**
     * @brief 599
     * @par Address: 0x100046B0
     */
    static const s32 cProfileID_SuperMoon;
    /**
     * @brief 600
     * @par Address: 0x100046B4
     */
    static const s32 cProfileID_TitleDemoItem;
    /**
     * @brief 601
     * @par Address: 0x100046B8
     */
    static const s32 cProfileID_SeaWakame;
    /**
     * @brief 602
     * @par Address: 0x100046BC
     */
    static const s32 cProfileID_DoorNormal;
    /**
     * @brief 603
     * @par Address: 0x100046C0
     */
    static const s32 cProfileID_DoorObake;
    /**
     * @brief 604
     * @par Address: 0x100046C4
     */
    static const s32 cProfileID_DoorToride;
    /**
     * @brief 605
     * @par Address: 0x100046C8
     */
    static const s32 cProfileID_DoorTorideRDash;
    /**
     * @brief 606
     * @par Address: 0x100046CC
     */
    static const s32 cProfileID_DoorCastle;
    /**
     * @brief 607
     * @par Address: 0x100046D0
     */
    static const s32 cProfileID_DoorCastleRDash;
    /**
     * @brief 608
     * @par Address: 0x100046D4
     */
    static const s32 cProfileID_DoorKoopa;
    /**
     * @brief 609
     * @par Address: 0x100046D8
     */
    static const s32 cProfileID_DoorKoopaRDash;
    /**
     * @brief 610
     * @par Address: 0x100046DC
     */
    static const s32 cProfileID_Choropu;
    /**
     * @brief 611
     * @par Address: 0x100046E0
     */
    static const s32 cProfileID_ChoropooShadow;
    /**
     * @brief 612
     * @par Address: 0x100046E4
     */
    static const s32 cProfileID_Basabasa;
    /**
     * @brief 613
     * @par Address: 0x100046E8
     */
    static const s32 cProfileID_TorchiLight;
    /**
     * @brief 614
     * @par Address: 0x100046EC
     */
    static const s32 cProfileID_WakiDokan;
    /**
     * @brief 615
     * @par Address: 0x100046F0
     */
    static const s32 cProfileID_FlyingKinokoWakidashi;
    /**
     * @brief 616
     * @par Address: 0x100046F4
     */
    static const s32 cProfileID_ManholeChoropu;
    /**
     * @brief 617
     * @par Address: 0x100046F8
     */
    static const s32 cProfileID_Spanner;
    /**
     * @brief 618
     * @par Address: 0x100046FC
     */
    static const s32 cProfileID_Manhole;
    /**
     * @brief 619
     * @par Address: 0x10004700
     */
    static const s32 cProfileID_JugemThrowActor;
    /**
     * @brief 620
     * @par Address: 0x10004704
     */
    static const s32 cProfileID_Jugem;
    /**
     * @brief 621
     * @par Address: 0x10004708
     */
    static const s32 cProfileID_JugemCoin;
    /**
     * @brief 622
     * @par Address: 0x1000470C
     */
    static const s32 cProfileID_JugemMultiplayer;
    /**
     * @brief 623
     * @par Address: 0x10004710
     */
    static const s32 cProfileID_JugemBody;
    /**
     * @brief 624
     * @par Address: 0x10004714
     */
    static const s32 cProfileID_JugemBodyMultiplayer;
    /**
     * @brief 625
     * @par Address: 0x10004718
     */
    static const s32 cProfileID_WakiJugem;
    /**
     * @brief 626
     * @par Address: 0x1000471C
     */
    static const s32 cProfileID_WakiJugemMultiplayer;
    /**
     * @brief 627
     * @par Address: 0x10004720
     */
    static const s32 cProfileID_CannonBullet;
    /**
     * @brief 628
     * @par Address: 0x10004724
     */
    static const s32 cProfileID_Killer;
    /**
     * @brief 629
     * @par Address: 0x10004728
     */
    static const s32 cProfileID_MagnumKiller;
    /**
     * @brief 630
     * @par Address: 0x1000472C
     */
    static const s32 cProfileID_SearchKiller;
    /**
     * @brief 631
     * @par Address: 0x10004730
     */
    static const s32 cProfileID_SearchMagnumKiller;
    /**
     * @brief 632
     * @par Address: 0x10004734
     */
    static const s32 cProfileID_KingKiller;
    /**
     * @brief 633
     * @par Address: 0x10004738
     */
    static const s32 cProfileID_KingKillerRDash;
    /**
     * @brief 634
     * @par Address: 0x1000473C
     */
    static const s32 cProfileID_WakiSearchMagKiller;
    /**
     * @brief 635
     * @par Address: 0x10004740
     */
    static const s32 cProfileID_Dosun;
    /**
     * @brief 636
     * @par Address: 0x10004744
     */
    static const s32 cProfileID_BigDosun;
    /**
     * @brief 637
     * @par Address: 0x10004748
     */
    static const s32 cProfileID_Gabon;
    /**
     * @brief 638
     * @par Address: 0x1000474C
     */
    static const s32 cProfileID_GabonRDash;
    /**
     * @brief 639
     * @par Address: 0x10004750
     */
    static const s32 cProfileID_GabonResident;
    /**
     * @brief 640
     * @par Address: 0x10004754
     */
    static const s32 cProfileID_GabonRock;
    /**
     * @brief 641
     * @par Address: 0x10004758
     */
    static const s32 cProfileID_RockGabon;
    /**
     * @brief 642
     * @par Address: 0x1000475C
     */
    static const s32 cProfileID_RockGabonResident;
    /**
     * @brief 643
     * @par Address: 0x10004760
     */
    static const s32 cProfileID_RockGabonRock;
    /**
     * @brief 644
     * @par Address: 0x10004764
     */
    static const s32 cProfileID_Seichan;
    /**
     * @brief 645
     * @par Address: 0x10004768
     */
    static const s32 cProfileID_SeichanSnowBall;
    /**
     * @brief 646
     * @par Address: 0x1000476C
     */
    static const s32 cProfileID_SnowBall;
    /**
     * @brief 647
     * @par Address: 0x10004770
     */
    static const s32 cProfileID_KaronHead;
    /**
     * @brief 648
     * @par Address: 0x10004774
     */
    static const s32 cProfileID_Karon;
    /**
     * @brief 649
     * @par Address: 0x10004778
     */
    static const s32 cProfileID_BigKaron;
    /**
     * @brief 650
     * @par Address: 0x1000477C
     */
    static const s32 cProfileID_Woochan;
    /**
     * @brief 651
     * @par Address: 0x10004780
     */
    static const s32 cProfileID_Mouse;
    /**
     * @brief 652
     * @par Address: 0x10004784
     */
    static const s32 cProfileID_Chorobon;
    /**
     * @brief 653
     * @par Address: 0x10004788
     */
    static const s32 cProfileID_ChorobonGroup;
    /**
     * @brief 654
     * @par Address: 0x1000478C
     */
    static const s32 cProfileID_Bubble;
    /**
     * @brief 655
     * @par Address: 0x10004790
     */
    static const s32 cProfileID_BubbleSync;
    /**
     * @brief 656
     * @par Address: 0x10004794
     */
    static const s32 cProfileID_BubbleRDash;
    /**
     * @brief 657
     * @par Address: 0x10004798
     */
    static const s32 cProfileID_BubbleSyncRDash;
    /**
     * @brief 658
     * @par Address: 0x1000479C
     */
    static const s32 cProfileID_Crasher;
    /**
     * @brief 659
     * @par Address: 0x100047A0
     */
    static const s32 cProfileID_Unabon;
    /**
     * @brief 660
     * @par Address: 0x100047A4
     */
    static const s32 cProfileID_ChukanUnabon;
    /**
     * @brief 661
     * @par Address: 0x100047A8
     */
    static const s32 cProfileID_DokanUnabon;
    /**
     * @brief 662
     * @par Address: 0x100047AC
     */
    static const s32 cProfileID_WakiUnabon;
    /**
     * @brief 663
     * @par Address: 0x100047B0
     */
    static const s32 cProfileID_WakiUnabonRDash;
    /**
     * @brief 664
     * @par Address: 0x100047B4
     */
    static const s32 cProfileID_UnabonRDash;
    /**
     * @brief 665
     * @par Address: 0x100047B8
     */
    static const s32 cProfileID_KK;
    /**
     * @brief 666
     * @par Address: 0x100047BC
     */
    static const s32 cProfileID_KKResident;
    /**
     * @brief 667
     * @par Address: 0x100047C0
     */
    static const s32 cProfileID_KKLiftFix;
    /**
     * @brief 668
     * @par Address: 0x100047C4
     */
    static const s32 cProfileID_KKLightning;
    /**
     * @brief 669
     * @par Address: 0x100047C8
     */
    static const s32 cProfileID_Wanwan;
    /**
     * @brief 670
     * @par Address: 0x100047CC
     */
    static const s32 cProfileID_Polter;
    /**
     * @brief 671
     * @par Address: 0x100047D0
     */
    static const s32 cProfileID_Stand;
    /**
     * @brief 672
     * @par Address: 0x100047D4
     */
    static const s32 cProfileID_WakiBakubaku;
    /**
     * @brief 673
     * @par Address: 0x100047D8
     */
    static const s32 cProfileID_Bakubaku;
    /**
     * @brief 674
     * @par Address: 0x100047DC
     */
    static const s32 cProfileID_Ibaramushi;
    /**
     * @brief 675
     * @par Address: 0x100047E0
     */
    static const s32 cProfileID_Crow;
    /**
     * @brief 676
     * @par Address: 0x100047E4
     */
    static const s32 cProfileID_TogeMet;
    /**
     * @brief 677
     * @par Address: 0x100047E8
     */
    static const s32 cProfileID_TogeMetGroup;
    /**
     * @brief 678
     * @par Address: 0x100047EC
     */
    static const s32 cProfileID_Bun;
    /**
     * @brief 679
     * @par Address: 0x100047F0
     */
    static const s32 cProfileID_BunW2;
    /**
     * @brief 680
     * @par Address: 0x100047F4
     */
    static const s32 cProfileID_BunW3;
    /**
     * @brief 681
     * @par Address: 0x100047F8
     */
    static const s32 cProfileID_BunW4;
    /**
     * @brief 682
     * @par Address: 0x100047FC
     */
    static const s32 cProfileID_BunW5;
    /**
     * @brief 683
     * @par Address: 0x10004800
     */
    static const s32 cProfileID_BunW6;
    /**
     * @brief 684
     * @par Address: 0x10004804
     */
    static const s32 cProfileID_BunDemo;
    /**
     * @brief 685
     * @par Address: 0x10004808
     */
    static const s32 cProfileID_KokoopaDemo;
    /**
     * @brief 686
     * @par Address: 0x1000480C
     */
    static const s32 cProfileID_KoopaJrDemo;
    /**
     * @brief 687
     * @par Address: 0x10004810
     */
    static const s32 cProfileID_KameckDemo;
    /**
     * @brief 688
     * @par Address: 0x10004814
     */
    static const s32 cProfileID_BossKKDemo;
    /**
     * @brief 689
     * @par Address: 0x10004818
     */
    static const s32 cProfileID_PeachFinalCastleKoopaJrDemo;
    /**
     * @brief 690
     * @par Address: 0x1000481C
     */
    static const s32 cProfileID_KoopaDemo;
    /**
     * @brief 691
     * @par Address: 0x10004820
     */
    static const s32 cProfileID_FinalKoopaDemo;
    /**
     * @brief 692
     * @par Address: 0x10004824
     */
    static const s32 cProfileID_PeachDemo;
    /**
     * @brief 693
     * @par Address: 0x10004828
     */
    static const s32 cProfileID_Larry;
    /**
     * @brief 694
     * @par Address: 0x1000482C
     */
    static const s32 cProfileID_KokoopaSearchFire;
    /**
     * @brief 695
     * @par Address: 0x10004830
     */
    static const s32 cProfileID_Lemmy;
    /**
     * @brief 696
     * @par Address: 0x10004834
     */
    static const s32 cProfileID_Morton;
    /**
     * @brief 697
     * @par Address: 0x10004838
     */
    static const s32 cProfileID_MortonSanbo;
    /**
     * @brief 698
     * @par Address: 0x1000483C
     */
    static const s32 cProfileID_MortonSanboParts;
    /**
     * @brief 699
     * @par Address: 0x10004840
     */
    static const s32 cProfileID_Wendy;
    /**
     * @brief 700
     * @par Address: 0x10004844
     */
    static const s32 cProfileID_WendyRing;
    /**
     * @brief 701
     * @par Address: 0x10004848
     */
    static const s32 cProfileID_Ludwig;
    /**
     * @brief 702
     * @par Address: 0x1000484C
     */
    static const s32 cProfileID_LudwigAlterEgo;
    /**
     * @brief 703
     * @par Address: 0x10004850
     */
    static const s32 cProfileID_Iggy;
    /**
     * @brief 704
     * @par Address: 0x10004854
     */
    static const s32 cProfileID_IggyMagic;
    /**
     * @brief 705
     * @par Address: 0x10004858
     */
    static const s32 cProfileID_Woogan;
    /**
     * @brief 706
     * @par Address: 0x1000485C
     */
    static const s32 cProfileID_Roy;
    /**
     * @brief 707
     * @par Address: 0x10004860
     */
    static const s32 cProfileID_RoyLiftWaki;
    /**
     * @brief 708
     * @par Address: 0x10004864
     */
    static const s32 cProfileID_BossKK;
    /**
     * @brief 709
     * @par Address: 0x10004868
     */
    static const s32 cProfileID_BossKKThunder;
    /**
     * @brief 710
     * @par Address: 0x1000486C
     */
    static const s32 cProfileID_Kameck;
    /**
     * @brief 711
     * @par Address: 0x10004870
     */
    static const s32 cProfileID_KameckIceConfig;
    /**
     * @brief 712
     * @par Address: 0x10004874
     */
    static const s32 cProfileID_KameckWarpPos;
    /**
     * @brief 713
     * @par Address: 0x10004878
     */
    static const s32 cProfileID_KameckMagic;
    /**
     * @brief 714
     * @par Address: 0x1000487C
     */
    static const s32 cProfileID_PeachFinalCastleKoopaJr;
    /**
     * @brief 715
     * @par Address: 0x10004880
     */
    static const s32 cProfileID_Koopa;
    /**
     * @brief 716
     * @par Address: 0x10004884
     */
    static const s32 cProfileID_KoopaFireWaki;
    /**
     * @brief 717
     * @par Address: 0x10004888
     */
    static const s32 cProfileID_KoopaFire;
    /**
     * @brief 718
     * @par Address: 0x1000488C
     */
    static const s32 cProfileID_DemoKoopaJrClown;
    /**
     * @brief 719
     * @par Address: 0x10004890
     */
    static const s32 cProfileID_DemoKoopaJr;
    /**
     * @brief 720
     * @par Address: 0x10004894
     */
    static const s32 cProfileID_BunDemoKameck;
    /**
     * @brief 721
     * @par Address: 0x10004898
     */
    static const s32 cProfileID_KoopaDemoKameck;
    /**
     * @brief 722
     * @par Address: 0x1000489C
     */
    static const s32 cProfileID_BossKKDemoKameck;
    /**
     * @brief 723
     * @par Address: 0x100048A0
     */
    static const s32 cProfileID_BossKKDemoKK;
    /**
     * @brief 724
     * @par Address: 0x100048A4
     */
    static const s32 cProfileID_FinalKoopaFire;
    /**
     * @brief 725
     * @par Address: 0x100048A8
     */
    static const s32 cProfileID_FinalKoopaJr;
    /**
     * @brief 726
     * @par Address: 0x100048AC
     */
    static const s32 cProfileID_FinalKoopaJrFire;
    /**
     * @brief 727
     * @par Address: 0x100048B0
     */
    static const s32 cProfileID_FinalBomhei;
    /**
     * @brief 728
     * @par Address: 0x100048B4
     */
    static const s32 cProfileID_KokoopaShipLemmy;
    /**
     * @brief 729
     * @par Address: 0x100048B8
     */
    static const s32 cProfileID_KokoopaShipMorton;
    /**
     * @brief 730
     * @par Address: 0x100048BC
     */
    static const s32 cProfileID_KokoopaShipLarry;
    /**
     * @brief 731
     * @par Address: 0x100048C0
     */
    static const s32 cProfileID_KokoopaShipWendy;
    /**
     * @brief 732
     * @par Address: 0x100048C4
     */
    static const s32 cProfileID_KokoopaShipIggy;
    /**
     * @brief 733
     * @par Address: 0x100048C8
     */
    static const s32 cProfileID_KokoopaShipRoy;
    /**
     * @brief 734
     * @par Address: 0x100048CC
     */
    static const s32 cProfileID_KokoopaShipLudwig;
    /**
     * @brief 735
     * @par Address: 0x100048D0
     */
    static const s32 cProfileID_Peach;
    /**
     * @brief 736
     * @par Address: 0x100048D4
     */
    static const s32 cProfileID_PeachDemoShadowkun;
    /**
     * @brief 737
     * @par Address: 0x100048D8
     */
    static const s32 cProfileID_FinalDVPeach;
    /**
     * @brief 738
     * @par Address: 0x100048DC
     */
    static const s32 cProfileID_FinalDVShutter;
    /**
     * @brief 739
     * @par Address: 0x100048E0
     */
    static const s32 cProfileID_ShortResultPeach;
    /**
     * @brief 740
     * @par Address: 0x100048E4
     */
    static const s32 cProfileID_KanbanArrow;
    /**
     * @brief 741
     * @par Address: 0x100048E8
     */
    static const s32 cProfileID_KanbanArrowRDash;
    /**
     * @brief 742
     * @par Address: 0x100048EC
     */
    static const s32 cProfileID_KanbanArrowNarrowSpawnRange;
    /**
     * @brief 743
     * @par Address: 0x100048F0
     */
    static const s32 cProfileID_LuigiKanban11;
    /**
     * @brief 744
     * @par Address: 0x100048F4
     */
    static const s32 cProfileID_LuigiKanban99;
    /**
     * @brief 745
     * @par Address: 0x100048F8
     */
    static const s32 cProfileID_FollowGrassFlower;
    /**
     * @brief 746
     * @par Address: 0x100048FC
     */
    static const s32 cProfileID_DVKusabanaHassei;
    /**
     * @brief 747
     * @par Address: 0x10004900
     */
    static const s32 cProfileID_NextGotoBlock;
    /**
     * @brief 748
     * @par Address: 0x10004904
     */
    static const s32 cProfileID_ChangeBlock;
    /**
     * @brief 749
     * @par Address: 0x10004908
     */
    static const s32 cProfileID_ChangeBlockRDash;
    /**
     * @brief 750
     * @par Address: 0x1000490C
     */
    static const s32 cProfileID_RedRing;
    /**
     * @brief 751
     * @par Address: 0x10004910
     */
    static const s32 cProfileID_GreenRing;
    /**
     * @brief 752
     * @par Address: 0x10004914
     */
    static const s32 cProfileID_PurpleRing;
    /**
     * @brief 753
     * @par Address: 0x10004918
     */
    static const s32 cProfileID_BlueRing;
    /**
     * @brief 754
     * @par Address: 0x1000491C
     */
    static const s32 cProfileID_GoalRing;
    /**
     * @brief 755
     * @par Address: 0x10004920
     */
    static const s32 cProfileID_Fruit;
    /**
     * @brief 756
     * @par Address: 0x10004924
     */
    static const s32 cProfileID_FruitTree;
    /**
     * @brief 757
     * @par Address: 0x10004928
     */
    static const s32 cProfileID_HammerBros;
    /**
     * @brief 758
     * @par Address: 0x1000492C
     */
    static const s32 cProfileID_Hammer;
    /**
     * @brief 759
     * @par Address: 0x10004930
     */
    static const s32 cProfileID_BoomerangBros;
    /**
     * @brief 760
     * @par Address: 0x10004934
     */
    static const s32 cProfileID_Boomerang;
    /**
     * @brief 761
     * @par Address: 0x10004938
     */
    static const s32 cProfileID_FireBros;
    /**
     * @brief 762
     * @par Address: 0x1000493C
     */
    static const s32 cProfileID_FireBallBros;
    /**
     * @brief 763
     * @par Address: 0x10004940
     */
    static const s32 cProfileID_IceBros;
    /**
     * @brief 764
     * @par Address: 0x10004944
     */
    static const s32 cProfileID_IceBallBros;
    /**
     * @brief 765
     * @par Address: 0x10004948
     */
    static const s32 cProfileID_HimanBros;
    /**
     * @brief 766
     * @par Address: 0x1000494C
     */
    static const s32 cProfileID_MegaHammer;
    /**
     * @brief 767
     * @par Address: 0x10004950
     */
    static const s32 cProfileID_Birikyu;
    /**
     * @brief 768
     * @par Address: 0x10004954
     */
    static const s32 cProfileID_DensenKoopa;
    /**
     * @brief 769
     * @par Address: 0x10004958
     */
    static const s32 cProfileID_DensenKoopaTantai;
    /**
     * @brief 770
     * @par Address: 0x1000495C
     */
    static const s32 cProfileID_DensenKoopaShock;
    /**
     * @brief 771
     * @par Address: 0x10004960
     */
    static const s32 cProfileID_Koton;
    /**
     * @brief 772
     * @par Address: 0x10004964
     */
    static const s32 cProfileID_KotonGroup;
    /**
     * @brief 773
     * @par Address: 0x10004968
     */
    static const s32 cProfileID_RotationDokanFPakkun;
    /**
     * @brief 774
     * @par Address: 0x1000496C
     */
    static const s32 cProfileID_RotationDokanPakkunUp;
    /**
     * @brief 775
     * @par Address: 0x10004970
     */
    static const s32 cProfileID_RotationDokanPakkunDown;
    /**
     * @brief 776
     * @par Address: 0x10004974
     */
    static const s32 cProfileID_RotationDokanPakkunLeft;
    /**
     * @brief 777
     * @par Address: 0x10004978
     */
    static const s32 cProfileID_RotationDokanPakkunRight;
    /**
     * @brief 778
     * @par Address: 0x1000497C
     */
    static const s32 cProfileID_Icicle;
    /**
     * @brief 779
     * @par Address: 0x10004980
     */
    static const s32 cProfileID_IcicleFixation;
    /**
     * @brief 780
     * @par Address: 0x10004984
     */
    static const s32 cProfileID_Teresa;
    /**
     * @brief 781
     * @par Address: 0x10004988
     */
    static const s32 cProfileID_BigTeresa;
    /**
     * @brief 782
     * @par Address: 0x1000498C
     */
    static const s32 cProfileID_TeresaRotation;
    /**
     * @brief 783
     * @par Address: 0x10004990
     */
    static const s32 cProfileID_TeresaRotationParent;
    /**
     * @brief 784
     * @par Address: 0x10004994
     */
    static const s32 cProfileID_TeresaRotationParentRDash;
    /**
     * @brief 785
     * @par Address: 0x10004998
     */
    static const s32 cProfileID_Kirifuki;
    /**
     * @brief 786
     * @par Address: 0x1000499C
     */
    static const s32 cProfileID_KirifukiRDash;
    /**
     * @brief 787
     * @par Address: 0x100049A0
     */
    static const s32 cProfileID_Cloud;
    /**
     * @brief 788
     * @par Address: 0x100049A4
     */
    static const s32 cProfileID_PoisonCloud;
    /**
     * @brief 789
     * @par Address: 0x100049A8
     */
    static const s32 cProfileID_CloudLight;
    /**
     * @brief 790
     * @par Address: 0x100049AC
     */
    static const s32 cProfileID_BubbleCreateMgr;
    /**
     * @brief 791
     * @par Address: 0x100049B0
     */
    static const s32 cProfileID_ObjSnow;
    /**
     * @brief 792
     * @par Address: 0x100049B4
     */
    static const s32 cProfileID_ObjSparks;
    /**
     * @brief 793
     * @par Address: 0x100049B8
     */
    static const s32 cProfileID_TagWind;
    /**
     * @brief 794
     * @par Address: 0x100049BC
     */
    static const s32 cProfileID_TagFrameSet;
    /**
     * @brief 795
     * @par Address: 0x100049C0
     */
    static const s32 cProfileID_ShadowkunHouseReadTag;
    /**
     * @brief 796
     * @par Address: 0x100049C4
     */
    static const s32 cProfileID_TagResultDemo;
    /**
     * @brief 797
     * @par Address: 0x100049C8
     */
    static const s32 cProfileID_LightWater;
    /**
     * @brief 798
     * @par Address: 0x100049CC
     */
    static const s32 cProfileID_CircleLight;
    /**
     * @brief 799
     * @par Address: 0x100049D0
     */
    static const s32 cProfileID_BigShell;
    /**
     * @brief 800
     * @par Address: 0x100049D4
     */
    static const s32 cProfileID_LiftZenYokoTomegu;
    /**
     * @brief 801
     * @par Address: 0x100049D8
     */
    static const s32 cProfileID_LiftHurikoCenter;
    /**
     * @brief 802
     * @par Address: 0x100049DC
     */
    static const s32 cProfileID_GuruGuru;
    /**
     * @brief 803
     * @par Address: 0x100049E0
     */
    static const s32 cProfileID_Gesso;
    /**
     * @brief 804
     * @par Address: 0x100049E4
     */
    static const s32 cProfileID_GessoChild;
    /**
     * @brief 805
     * @par Address: 0x100049E8
     */
    static const s32 cProfileID_BaramakiGesso;
    /**
     * @brief 806
     * @par Address: 0x100049EC
     */
    static const s32 cProfileID_Nut;
    /**
     * @brief 807
     * @par Address: 0x100049F0
     */
    static const s32 cProfileID_StrongBox;
    /**
     * @brief 808
     * @par Address: 0x100049F4
     */
    static const s32 cProfileID_StrongBoxKey;
    /**
     * @brief 809
     * @par Address: 0x100049F8
     */
    static const s32 cProfileID_BattleItem;
    /**
     * @brief 810
     * @par Address: 0x100049FC
     */
    static const s32 cProfileID_YoshiEgg;
    /**
     * @brief 811
     * @par Address: 0x10004A00
     */
    static const s32 cProfileID_VsBattleItem;
    /**
     * @brief 812
     * @par Address: 0x10004A04
     */
    static const s32 cProfileID_TorpedoBase;
    /**
     * @brief 813
     * @par Address: 0x10004A08
     */
    static const s32 cProfileID_SearchTorpedoBase;
    /**
     * @brief 814
     * @par Address: 0x10004A0C
     */
    static const s32 cProfileID_TorpedoWakiTag;
    /**
     * @brief 815
     * @par Address: 0x10004A10
     */
    static const s32 cProfileID_NormalTorpedo;
    /**
     * @brief 816
     * @par Address: 0x10004A14
     */
    static const s32 cProfileID_NormalTorpedoGroup;
    /**
     * @brief 817
     * @par Address: 0x10004A18
     */
    static const s32 cProfileID_SearchTorpedo;
    /**
     * @brief 818
     * @par Address: 0x10004A1C
     */
    static const s32 cProfileID_KoopaJrFire;
    /**
     * @brief 819
     * @par Address: 0x10004A20
     */
    static const s32 cProfileID_KoopaJrBall;
    /**
     * @brief 820
     * @par Address: 0x10004A24
     */
    static const s32 cProfileID_UnderwaterKoopaJr;
    /**
     * @brief 821
     * @par Address: 0x10004A28
     */
    static const s32 cProfileID_UnderwaterKoopaJrClown;
    /**
     * @brief 822
     * @par Address: 0x10004A2C
     */
    static const s32 cProfileID_UnderwaterKoopaJrRetreatPos;
    /**
     * @brief 823
     * @par Address: 0x10004A30
     */
    static const s32 cProfileID_BoxingKoopaJr;
    /**
     * @brief 824
     * @par Address: 0x10004A34
     */
    static const s32 cProfileID_BoxingKoopaJrPostBattleDemo;
    /**
     * @brief 825
     * @par Address: 0x10004A38
     */
    static const s32 cProfileID_BoxingKoopaJrClownPostBattleDemo;
    /**
     * @brief 826
     * @par Address: 0x10004A3C
     */
    static const s32 cProfileID_MiniGamePanelItem;
    /**
     * @brief 827
     * @par Address: 0x10004A40
     */
    static const s32 cProfileID_SlotItem;
    /**
     * @brief 828
     * @par Address: 0x10004A44
     */
    static const s32 cProfileID_CoinmakiCannon;
    /**
     * @brief 829
     * @par Address: 0x10004A48
     */
    static const s32 cProfileID_CoinmakiItem;
    /**
     * @brief 830
     * @par Address: 0x10004A4C
     */
    static const s32 cProfileID_MiniGameKinopio;
    /**
     * @brief 831
     * @par Address: 0x10004A50
     */
    static const s32 cProfileID_Tsuru;
    /**
     * @brief 832
     * @par Address: 0x10004A54
     */
    static const s32 cProfileID_DokanJoint;
    /**
     * @brief 833
     * @par Address: 0x10004A58
     */
    static const s32 cProfileID_DokanJointMame;
    /**
     * @brief 834
     * @par Address: 0x10004A5C
     */
    static const s32 cProfileID_GoalKinokoHouse;
    /**
     * @brief 835
     * @par Address: 0x10004A60
     */
    static const s32 cProfileID_WaterEffectFilter;
    /**
     * @brief 836
     * @par Address: 0x10004A64
     */
    static const s32 cProfileID_WaterEffectFilterRDash;
    /**
     * @brief 837
     * @par Address: 0x10004A68
     */
    static const s32 cProfileID_WaterAwa;
    /**
     * @brief 838
     * @par Address: 0x10004A6C
     */
    static const s32 cProfileID_FlyingMusabiPlayerTag;
    /**
     * @brief 839
     * @par Address: 0x10004A70
     */
    static const s32 cProfileID_PlayerScrollLrFlagTag;
    /**
     * @brief 840
     * @par Address: 0x10004A74
     */
    static const s32 cProfileID_StaffRollChibiYoshiChar;
    /**
     * @brief 841
     * @par Address: 0x10004A78
     */
    static const s32 cProfileID_StaffRollBalloonChibiYoshi;
    /**
     * @brief 842
     * @par Address: 0x10004A7C
     */
    static const s32 cProfileID_StaffRollBalloonChibiYoshiCheer;
    /**
     * @brief 843
     * @par Address: 0x10004A80
     */
    static const s32 cProfileID_StaffRollChibiYoshiLight;
    /**
     * @brief 844
     * @par Address: 0x10004A84
     */
    static const s32 cProfileID_StaffRollChibiYoshiLightCheer;
    /**
     * @brief 845
     * @par Address: 0x10004A88
     */
    static const s32 cProfileID_StaffRollAwaChar;
    /**
     * @brief 846
     * @par Address: 0x10004A8C
     */
    static const s32 cProfileID_StaffRollAwaCoin;
    /**
     * @brief 847
     * @par Address: 0x10004A90
     */
    static const s32 cProfileID_StaffRollTottenKun;
    /**
     * @brief 848
     * @par Address: 0x10004A94
     */
    static const s32 cProfileID_TouchDrcMaskLight;
    /**
     * @brief 849
     * @par Address: 0x10004A98
     */
    static const s32 cProfileID_TouchMukoActor;
    /**
     * @brief 850
     * @par Address: 0x10004A9C
     */
    static const s32 cProfileID_EditCoinPlacementTag;
    /**
     * @brief 851
     * @par Address: 0x10004AA0
     */
    static const s32 cProfileID_FeverEffect;
    /**
     * @brief 852
     * @par Address: 0x10004AA4
     */
    static const s32 cProfileID_RealizeFeverStar;
    /**
     * @brief 853
     * @par Address: 0x10004AA8
     */
    static const s32 cProfileID_Star;
    /**
     * @brief 854
     * @par Address: 0x10004AAC
     */
    static const s32 cProfileID_CourseSelectPlayer;
    /**
     * @brief 855 (CS Player 2, 3 or 4)
     * @par Address: 0x10004AB0
     */
    static const s32 cProfileID_CourseSelectPlayer2PSub;
    /**
     * @brief 856
     * @par Address: 0x10004AB4
     */
    static const s32 cProfileID_CourseSelectChibiYoshi;
    /**
     * @brief 857
     * @par Address: 0x10004AB8
     */
    static const s32 cProfileID_CourseSelectCamera;
    /**
     * @brief 858
     * @par Address: 0x10004ABC
     */
    static const s32 cProfileID_CourseSelectCastle;
    /**
     * @brief 859
     * @par Address: 0x10004AC0
     */
    static const s32 cProfileID_CourseSelectToride;
    /**
     * @brief 860
     * @par Address: 0x10004AC4
     */
    static const s32 cProfileID_CourseSelectKinokoHouse1up;
    /**
     * @brief 861
     * @par Address: 0x10004AC8
     */
    static const s32 cProfileID_CourseSelectKinokoHouseShuffle;
    /**
     * @brief 862
     * @par Address: 0x10004ACC
     */
    static const s32 cProfileID_CourseSelectKinokoHouseSlot;
    /**
     * @brief 863
     * @par Address: 0x10004AD0
     */
    static const s32 cProfileID_CourseSelectPeachGates1st;
    /**
     * @brief 864
     * @par Address: 0x10004AD4
     */
    static const s32 cProfileID_CourseSelectPeachGates2nd;
    /**
     * @brief 865
     * @par Address: 0x10004AD8
     */
    static const s32 cProfileID_CourseSelectCoursePoint;
    /**
     * @brief 866
     * @par Address: 0x10004ADC
     */
    static const s32 cProfileID_CourseSelectWorldMoveDokan;
    /**
     * @brief 867
     * @par Address: 0x10004AE0
     */
    static const s32 cProfileID_CourseSelectW8Cloud;
    /**
     * @brief 868
     * @par Address: 0x10004AE4
     */
    static const s32 cProfileID_CourseSelectGhost;
    /**
     * @brief 869 (The Japanese Profile name says "Hammer Bros" LOL)
     * @par Address: 0x10004AE8
     */
    static const s32 cProfileID_CourseSelectW2Bros;
    /**
     * @brief 870
     * @par Address: 0x10004AEC
     */
    static const s32 cProfileID_CourseSelectShipW1;
    /**
     * @brief 871
     * @par Address: 0x10004AF0
     */
    static const s32 cProfileID_CourseSelectShipW2;
    /**
     * @brief 872
     * @par Address: 0x10004AF4
     */
    static const s32 cProfileID_CourseSelectShipW3;
    /**
     * @brief 873
     * @par Address: 0x10004AF8
     */
    static const s32 cProfileID_CourseSelectShipW4;
    /**
     * @brief 874
     * @par Address: 0x10004AFC
     */
    static const s32 cProfileID_CourseSelectShipW5;
    /**
     * @brief 875
     * @par Address: 0x10004B00
     */
    static const s32 cProfileID_CourseSelectShipW6;
    /**
     * @brief 876
     * @par Address: 0x10004B04
     */
    static const s32 cProfileID_CourseSelectShipW7;
    /**
     * @brief 877
     * @par Address: 0x10004B08
     */
    static const s32 cProfileID_CourseSelectShipW8;
    /**
     * @brief 878
     * @par Address: 0x10004B0C
     */
    static const s32 cProfileID_CourseSelectShipW8Broken;
    /**
     * @brief 879
     * @par Address: 0x10004B10
     */
    static const s32 cProfileID_CourseSelectSurrender;
    /**
     * @brief 880
     * @par Address: 0x10004B14
     */
    static const s32 cProfileID_CourseSelectSwitchA;
    /**
     * @brief 881
     * @par Address: 0x10004B18
     */
    static const s32 cProfileID_CourseSelectSwitchB;
    /**
     * @brief 882
     * @par Address: 0x10004B1C
     */
    static const s32 cProfileID_CourseSelectTeresa;
    /**
     * @brief 883
     * @par Address: 0x10004B20
     */
    static const s32 cProfileID_CourseSelectOpeningKameck;
    /**
     * @brief 884
     * @par Address: 0x10004B24
     */
    static const s32 cProfileID_CourseSelectTorideBoss;
    /**
     * @brief 885
     * @par Address: 0x10004B28
     */
    static const s32 cProfileID_CourseSelectPakkun;
    /**
     * @brief 886
     * @par Address: 0x10004B2C
     */
    static const s32 cProfileID_CourseSelectShadowFirstDemoKinopio;
    /**
     * @brief 887
     * @par Address: 0x10004B30
     */
    static const s32 cProfileID_CourseSelectTobiPuku;
    /**
     * @brief 888
     * @par Address: 0x10004B34
     */
    static const s32 cProfileID_CourseSelectChorobon;
    /**
     * @brief 889
     * @par Address: 0x10004B38
     */
    static const s32 cProfileID_CourseSelectW7Item;
    /**
     * @brief 890
     * @par Address: 0x10004B3C
     */
    static const s32 cProfileID_CourseSelectW5Teresa;
    /**
     * @brief 891
     * @par Address: 0x10004B40
     */
    static const s32 cProfileID_CourseSelectFlag;
    /**
     * @brief 892
     * @par Address: 0x10004B44
     */
    static const s32 cProfileID_CourseSelectMusasabi;
    /**
     * @brief 893
     * @par Address: 0x10004B48
     */
    static const s32 cProfileID_CourseSelectWPillar;
    /**
     * @brief 894
     * @par Address: 0x10004B4C
     */
    static const s32 cProfileID_CourseSelectW7Bridge;
    /**
     * @brief 895
     * @par Address: 0x10004B50
     */
    static const s32 cProfileID_CourseSelectMiiBalloon;
    /**
     * @brief 896
     * @par Address: 0x10004B54
     */
    static const s32 cProfileID_CourseSelectPenguin;
    /**
     * @brief 897
     * @par Address: 0x10004B58
     */
    static const s32 cProfileID_CourseSelectW4Item;
    /**
     * @brief 898
     * @par Address: 0x10004B5C
     */
    static const s32 cProfileID_CourseSelectW2Kuribo;
    /**
     * @brief 899
     * @par Address: 0x10004B60
     */
    static const s32 cProfileID_CourseSelectPakkunBig;
    /**
     * @brief 900
     * @par Address: 0x10004B64
     */
    static const s32 cProfileID_CourseSelectShadowKunIcon;
    /**
     * @brief 901
     * @par Address: 0x10004B68
     */
    static const s32 cProfileID_CourseSelectDekaUnira;
    /**
     * @brief 902
     * @par Address: 0x10004B6C
     */
    static const s32 cProfileID_CourseSelectTomb;
    /**
     * @brief 903
     * @par Address: 0x10004B70
     */
    static const s32 cProfileID_CourseSelectShadowFirstDemoShadowKun;
    /**
     * @brief 904
     * @par Address: 0x10004B74
     */
    static const s32 cProfileID_CourseSelectKotsuCoaster;
    /**
     * @brief 905
     * @par Address: 0x10004B78
     */
    static const s32 cProfileID_CourseSelectKoopaJr;
    /**
     * @brief 906
     * @par Address: 0x10004B7C
     */
    static const s32 cProfileID_CourseSelectPeach;
    /**
     * @brief 907
     * @par Address: 0x10004B80
     */
    static const s32 cProfileID_CourseSelectW1Item;
    /**
     * @brief 908
     * @par Address: 0x10004B84
     */
    static const s32 cProfileID_CourseSelectStarGate;
    /**
     * @brief 909
     * @par Address: 0x10004B88
     */
    static const s32 cProfileID_CourseSelectEventAssistant;
};
