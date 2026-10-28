#pragma once

#include <actor/Profile.h>
#include <actor/ActorResLoader.h>

#include <prim/seadSafeString.h>

class ProfileInfo
{
public:
    // Address: 0x02019988
    static s16 getDrawPriority(ProfileID id);
    // Address: 0x020199A8
    static ActorResLoader::ResType getResType(ProfileID id);
    // Address: 0x020199CC
    static u32 getResNum(ProfileID id);
    // Address: 0x020199EC
    static const sead::SafeString* getResName(ProfileID id);

protected:
    enum DrawPriority
    {
        cDrawPriority_Balloon = 0,
        cDrawPriority_PlayerObject = 1,
        cDrawPriority_PlayerTotten = 2,
        cDrawPriority_Yoshi = 3,
        cDrawPriority_GoalDemoKinopio = 4,
        cDrawPriority_Kuribo = 5,
        cDrawPriority_Kakibo = 6,
        cDrawPriority_PataKuribo = 7,
        cDrawPriority_IgaKuribo = 8,
        cDrawPriority_BeansKuribo = 9,
        cDrawPriority_MiddleKuribo = 10,
        cDrawPriority_LargeKuribo = 11,
        cDrawPriority_IceBall = 12,
        cDrawPriority_IceBallPakkun = 13,
        cDrawPriority_FireBallPlayer = 14,
        cDrawPriority_FireBallPakkun = 15,
        cDrawPriority_YoshiFire = 16,
        cDrawPriority_DokanPakkunUp = 17,
        cDrawPriority_DokanPakkunDown = 18,
        cDrawPriority_DokanPakkunLeft = 19,
        cDrawPriority_DokanPakkunRight = 20,
        cDrawPriority_RotDokanFirePakkun = 21,
        cDrawPriority_RotDokanPakkunUp = 22,
        cDrawPriority_RotDokanPakkunDown = 23,
        cDrawPriority_RotDokanPakkunLeft = 24,
        cDrawPriority_RotDokanPakkunRight = 25,
        cDrawPriority_DokanFirePakkunUp = 26,
        cDrawPriority_DokanFirePakkunDown = 27,
        cDrawPriority_DokanFirePakkunLeft = 28,
        cDrawPriority_DokanFirePakkunRight = 29,
        cDrawPriority_DokanIcePakkunUp = 30,
        cDrawPriority_DokanIcePakkunDown = 31,
        cDrawPriority_DokanIcePakkunLeft = 32,
        cDrawPriority_DokanIcePakkunRight = 33,
        cDrawPriority_DokanPakkunBig = 34,
        cDrawPriority_JimenPakkun = 35,
        cDrawPriority_JimenPakkunRDash = 36,
        cDrawPriority_JimenPakkunR33 = 37,
        cDrawPriority_JimenFirePakkun = 38,
        cDrawPriority_JimenIcePakkun = 39,
        cDrawPriority_JimenBigPakkun = 40,
        cDrawPriority_JimenBigFirePakkun = 41,
        cDrawPriority_WalkPakkun = 42,
        cDrawPriority_WaterPakkun = 43,
        cDrawPriority_WaterPakkunRDash = 44,
        cDrawPriority_BlackPakkun = 45,
        cDrawPriority_BlackPakkunOBJ = 46,
        cDrawPriority_11B = 47,
        cDrawPriority_ObjPipeRight = 48,
        cDrawPriority_ObjPipeLeft = 49,
        cDrawPriority_ObjPipeUp = 50,
        cDrawPriority_ObjPipeDown = 51,
        cDrawPriority_GroupObjPipeRight = 52,
        cDrawPriority_GroupObjPipeLeft = 53,
        cDrawPriority_GroupObjPipeUp = 54,
        cDrawPriority_GroupObjPipeDown = 55,
        cDrawPriority_ObjMamePipeRight = 56,
        cDrawPriority_ObjMamePipeLeft = 57,
        cDrawPriority_ObjMamePipeUp = 58,
        cDrawPriority_ObjMamePipeDown = 59,
        cDrawPriority_ObjPipeRightNG = 60,
        cDrawPriority_ObjPipeLeftNG = 61,
        cDrawPriority_ObjPipeUpNG = 62,
        cDrawPriority_ObjPipeDownNG = 63,
        cDrawPriority_CoinBattlePipeUp = 64,
        cDrawPriority_CoinBattlePipeDown = 65,
        cDrawPriority_CoinBattlePipeLeft = 66,
        cDrawPriority_CoinBattlePipeRight = 67,
        cDrawPriority_ZoomPipeRight = 68,
        cDrawPriority_ZoomPipeLeft = 69,
        cDrawPriority_ZoomPipe = 70,
        cDrawPriority_ZoomPipeDown = 71,
        cDrawPriority_LiftRotHalfRev = 72,
        cDrawPriority_LiftRotHalfRevRDash = 73,
        cDrawPriority_LiftHanRotateLight = 74,
        cDrawPriority_RotHalf = 75,
        cDrawPriority_RotPipe = 76,
        cDrawPriority_RotPipeRDash = 77,
        cDrawPriority_LiftHurikoYogan = 78,
        cDrawPriority_LiftHurikoYoganRDash = 79,
        cDrawPriority_LineSpinLift = 80,
        cDrawPriority_LineKinokoBlock = 81,
        cDrawPriority_GroupLineKinokoBlock = 82,
        cDrawPriority_RailPolygon = 83,
        cDrawPriority_CannonPipe = 84,
        cDrawPriority_CannonPipeRDash = 85,
        cDrawPriority_FooBall = 86,
        cDrawPriority_Nokonoko = 87,
        cDrawPriority_NokonokoHeight = 88,
        cDrawPriority_NokonokoBig = 89,
        cDrawPriority_Patapata = 90,
        cDrawPriority_PatapataGroup = 91,
        cDrawPriority_Met = 92,
        cDrawPriority_MetMiddle = 93,
        cDrawPriority_Togezo = 94,
        cDrawPriority_ReverseTogezo = 95,
        cDrawPriority_Kanitama = 96,
        cDrawPriority_Kanibo = 97,
        cDrawPriority_Bombhei = 98,
        cDrawPriority_BombheiPara = 99,
        cDrawPriority_BombheiParaRDash = 100,
        cDrawPriority_MechaKoopa = 101,
        cDrawPriority_Pentaro = 102,
        cDrawPriority_PentaroGlass = 103,
        cDrawPriority_PentaroIce = 104,
        cDrawPriority_HoneMet = 105,
        cDrawPriority_HoneMetHead = 106,
        cDrawPriority_Pukupuku = 107,
        cDrawPriority_PukupukuGroup = 108,
        cDrawPriority_PukupukuMiddle = 109,
        cDrawPriority_PukupukuMiddleGroup = 110,
        cDrawPriority_PukupukuSearch = 111,
        cDrawPriority_PukupukuSearchMiddle = 112,
        cDrawPriority_PukupukuEscape = 113,
        cDrawPriority_PukupukuEscapeMiddle = 114,
        cDrawPriority_PukupukuMecha = 115,
        cDrawPriority_PukupukuToge = 116,
        cDrawPriority_Tobipuku = 117,
        cDrawPriority_TobipukuMecha = 118,
        cDrawPriority_FishBone = 119,
        cDrawPriority_Unira = 120,
        cDrawPriority_UniraRDashNarrowBC = 121,
        cDrawPriority_DekaUnira = 122,
        cDrawPriority_UniraRDash = 123,
        cDrawPriority_Fugumannen = 124,
        cDrawPriority_FugumannenBig = 125,
        cDrawPriority_JellyFish = 126,
        cDrawPriority_ChochinAnkoh = 127,
        cDrawPriority_FireBar = 128,
        cDrawPriority_FireBarSync = 129,
        cDrawPriority_FireBar2 = 130,
        cDrawPriority_RotFireBar = 131,
        cDrawPriority_Barnar = 132,
        cDrawPriority_BarnarLarge = 133,
        cDrawPriority_BarnarSync = 134,
        cDrawPriority_BarnarRot = 135,
        cDrawPriority_IceLump = 136,
        cDrawPriority_Keronpa = 137,
        cDrawPriority_KeronpaRDash = 138,
        cDrawPriority_FireBallKeronpa = 139,
        cDrawPriority_FireBallKeronpaRDash = 140,
        cDrawPriority_FireSnake = 141,
        cDrawPriority_Gabon = 142,
        cDrawPriority_GabonRDash = 143,
        cDrawPriority_GabonJochu = 144,
        cDrawPriority_GabonBall = 145,
        cDrawPriority_RockGabon = 146,
        cDrawPriority_RockGabonJochu = 147,
        cDrawPriority_RockGabonBall = 148,
        cDrawPriority_Seichan = 149,
        cDrawPriority_SeichanSnowBall = 150,
        cDrawPriority_SnowBall = 151,
        cDrawPriority_Gorogoro = 152,
        cDrawPriority_GorogoroBig = 153,
        cDrawPriority_GorogoroBigRDash = 154,
        cDrawPriority_BigPileUnder = 155,
        cDrawPriority_BigPileUpper = 156,
        cDrawPriority_BigPileRight = 157,
        cDrawPriority_BigPileLeft = 158,
        cDrawPriority_SuperBigPileRight = 159,
        cDrawPriority_SuperBigPileLeft = 160,
        cDrawPriority_KazandanMgr = 161,
        cDrawPriority_WakiKazandan = 162,
        cDrawPriority_Kazandan = 163,
        cDrawPriority_Bunbun = 164,
        cDrawPriority_BunbunW2 = 165,
        cDrawPriority_BunbunW3 = 166,
        cDrawPriority_BunbunW4 = 167,
        cDrawPriority_BunbunW5 = 168,
        cDrawPriority_BunbunW6 = 169,
        cDrawPriority_BunbunDemoKameck = 170,
        cDrawPriority_LemmyBomb = 171,
        cDrawPriority_Lemmy = 172,
        cDrawPriority_LemmyBall = 173,
        cDrawPriority_Morton = 174,
        cDrawPriority_MortonSanbo = 175,
        cDrawPriority_MortonSanboEl = 176,
        cDrawPriority_Wendy = 177,
        cDrawPriority_WendyRing = 178,
        cDrawPriority_WendyIcicle = 179,
        cDrawPriority_WendyFloor = 180,
        cDrawPriority_Larry = 181,
        cDrawPriority_KokoopaFire = 182,
        cDrawPriority_Ludwig = 183,
        cDrawPriority_LudwigCopy = 184,
        cDrawPriority_Iggy = 185,
        cDrawPriority_IggyMagic = 186,
        cDrawPriority_IggyRoom = 187,
        cDrawPriority_Woogan = 188,
        cDrawPriority_Roy = 189,
        cDrawPriority_BossKK = 190,
        cDrawPriority_BossKKThunder = 191,
        cDrawPriority_BossKKDemoKameck = 192,
        cDrawPriority_BossKKDemoKK = 193,
        cDrawPriority_Kameck = 194,
        cDrawPriority_KameckIcicle = 195,
        cDrawPriority_KameckMagic = 196,
        cDrawPriority_QuakeKoopaJr = 197,
        cDrawPriority_QuakeKoopaJrClown = 198,
        cDrawPriority_QuakeKoopaJrLiftV = 199,
        cDrawPriority_QuakeKoopaJrLiftH = 200,
        cDrawPriority_QuakeKoopaJrLiftPairObjChild = 201,
        cDrawPriority_RoyLiftStep = 202,
        cDrawPriority_Koopa = 203,
        cDrawPriority_KoopaFire = 204,
        cDrawPriority_KoopaShutter = 205,
        cDrawPriority_DemoKoopaJr = 206,
        cDrawPriority_DemoKoopaJrClown = 207,
        cDrawPriority_KoopaDemoKameck = 208,
        cDrawPriority_FinalKoopa = 209,
        cDrawPriority_FinalKoopaFire = 210,
        cDrawPriority_FinalKoopaJr = 211,
        cDrawPriority_FinalKoopaJrClown = 212,
        cDrawPriority_FinalKoopaJrFire = 213,
        cDrawPriority_FinalBomhei = 214,
        cDrawPriority_KinokoLift = 215,
        cDrawPriority_KinokoLiftColor = 216,
        cDrawPriority_LiftZenStar = 217,
        cDrawPriority_ObjSpinParent = 218,
        cDrawPriority_ObjSpinChild = 219,
        cDrawPriority_ObjSpinChildPyramid = 220,
        cDrawPriority_ObjSpinChildPyramidJochu = 221,
        cDrawPriority_ObjSpinAshiba = 222,
        cDrawPriority_SpinWire = 223,
        cDrawPriority_ObjKinoko = 224,
        cDrawPriority_TamanoriLift = 225,
        cDrawPriority_FlyingKinoko = 226,
        cDrawPriority_CheckPointFlag = 227,
        cDrawPriority_HardIceBlock = 228,
        cDrawPriority_Block = 229,
        cDrawPriority_ChibiYoshiEgg = 230,
        cDrawPriority_BubbleYoshi = 231,
        cDrawPriority_FruitCookie = 232,
        cDrawPriority_ChibiBubble = 233,
        cDrawPriority_BalloonYoshi = 234,
        cDrawPriority_LightYoshi = 235,
        cDrawPriority_CloudYoshi = 236,
        cDrawPriority_DokanNextGotoAddTimeTag = 237,
        cDrawPriority_QuestActorTag = 238,
        cDrawPriority_QuestDemoLocationTag = 239,
        cDrawPriority_QuestEscapeTag = 240,
        cDrawPriority_Shadowkun = 241,
        cDrawPriority_ShadowkunNoFukuro = 242,
        cDrawPriority_QuestKey = 243,
        cDrawPriority_QuestKinopio = 244,
        cDrawPriority_QuestPrizeItem = 245,
        cDrawPriority_EnemyCourseShadowkun = 246,
        cDrawPriority_TitleShadowkun = 247,
        cDrawPriority_PowBlock = 248,
        cDrawPriority_LightBlock = 249,
        cDrawPriority_PropBlock = 250,
        cDrawPriority_SlideBlock = 251,
        cDrawPriority_Jumpdai = 252,
        cDrawPriority_CarryBlockTaru = 253,
        cDrawPriority_Kinoko = 254,
        cDrawPriority_FireFlower = 255,
        cDrawPriority_FeverStar = 256,
        cDrawPriority_Star = 257,
        cDrawPriority_MameKinoko = 258,
        cDrawPriority_IceFlower = 259,
        cDrawPriority_Propeller = 260,
        cDrawPriority_Penguin = 261,
        cDrawPriority_OneUpKinoko = 262,
        cDrawPriority_Musasabi = 263,
        cDrawPriority_ThreeUpMoon = 264,
        cDrawPriority_TitleDemoItem = 265,
        cDrawPriority_RailPolyChild = 266,
        cDrawPriority_ObjPol = 267,
        cDrawPriority_ObjPolToride = 268,
        cDrawPriority_ObjPolNohara = 269,
        cDrawPriority_ObjPolKougen = 270,
        cDrawPriority_ObjPolScroll = 271,
        cDrawPriority_LiftZenKaihei = 272,
        cDrawPriority_PairObjChild = 273,
        cDrawPriority_PairObjChildToride = 274,
        cDrawPriority_PairObjChildIwa = 275,
        cDrawPriority_PairObjChildIron = 276,
        cDrawPriority_PairObjChildNohara = 277,
        cDrawPriority_PairObjChildKougen = 278,
        cDrawPriority_LiftZenKumiawase = 279,
        cDrawPriority_LiftZenTagaichigai = 280,
        cDrawPriority_LiftZenTagaichigaiGear = 281,
        cDrawPriority_LiftZenShiroYogan = 282,
        cDrawPriority_PairObjChildSabakuIseki = 283,
        cDrawPriority_PairObjChildTorideRock = 284,
        cDrawPriority_PairObjChildTorideRockRDash = 285,
        cDrawPriority_LiftZenShiro = 286,
        cDrawPriority_PairObjChildWarning = 287,
        cDrawPriority_PairObjChildNoharaHan = 288,
        cDrawPriority_PairObjChildKinoko = 289,
        cDrawPriority_Ice = 290,
        cDrawPriority_GoalPole = 291,
        cDrawPriority_GoalPolePicStage = 292,
        cDrawPriority_GoalPoleRDash = 293,
        cDrawPriority_GoalPolePicStageRDash = 294,
        cDrawPriority_KanbanArrow = 295,
        cDrawPriority_KanbanArrowRDash = 296,
        cDrawPriority_KanbanArrowRDashEx = 297,
        cDrawPriority_LuigiKanban = 298,
        cDrawPriority_LuigiKanbanNine = 299,
        cDrawPriority_MovingFlower = 300,
        cDrawPriority_DvputFlower = 301,
        cDrawPriority_SeaWeed = 302,
        cDrawPriority_RedRing = 303,
        cDrawPriority_GreenRing = 304,
        cDrawPriority_PurpleRing = 305,
        cDrawPriority_BlueRing = 306,
        cDrawPriority_GoalRing = 307,
        cDrawPriority_RotGuruguru = 308,
        cDrawPriority_RotGuruguruRDash = 309,
        cDrawPriority_DoorNormal = 310,
        cDrawPriority_DoorObake = 311,
        cDrawPriority_DoorToride = 312,
        cDrawPriority_DoorTorideRDash = 313,
        cDrawPriority_DoorCastle = 314,
        cDrawPriority_DoorCastleRDash = 315,
        cDrawPriority_DoorKoopa = 316,
        cDrawPriority_DoorKoopaRDash = 317,
        cDrawPriority_CollectionCoin = 318,
        cDrawPriority_CollectionCoinLine = 319,
        cDrawPriority_CollectionCoinLineGroup = 320,
        cDrawPriority_CollectionCoinVolt = 321,
        cDrawPriority_CollectionCoinParent = 322,
        cDrawPriority_CollectionCoinParentRDash = 323,
        cDrawPriority_CollectionCoinParentRDashEx = 324,
        cDrawPriority_CollectionCoinParentR6C = 325,
        cDrawPriority_CollectionCoinSnake = 326,
        cDrawPriority_CollectionCoinRotAppear = 327,
        cDrawPriority_RedCoin = 328,
        cDrawPriority_GreenCoin = 329,
        cDrawPriority_GreenCoinChild = 330,
        cDrawPriority_CoinWiperChild = 331,
        cDrawPriority_CoinWiperParent = 332,
        cDrawPriority_Choropu = 333,
        cDrawPriority_ChoropooHole = 334,
        cDrawPriority_Fruit = 335,
        cDrawPriority_IronBallHole = 336,
        cDrawPriority_IronBallHoleRDash = 337,
        cDrawPriority_WakiDokanTogeTekkyu = 338,
        cDrawPriority_Hammer = 339,
        cDrawPriority_HammerBros = 340,
        cDrawPriority_Boomerang = 341,
        cDrawPriority_BoomerangBros = 342,
        cDrawPriority_FireBallBros = 343,
        cDrawPriority_FireBros = 344,
        cDrawPriority_IceBallBros = 345,
        cDrawPriority_IceBros = 346,
        cDrawPriority_MegaHammer = 347,
        cDrawPriority_HimanBros = 348,
        cDrawPriority_Birikyu = 349,
        cDrawPriority_ElectricKoopa = 350,
        cDrawPriority_ElectricSingleKoopa = 351,
        cDrawPriority_ActorBlockHatena = 352,
        cDrawPriority_ActorBlockHatenaRDash = 353,
        cDrawPriority_ActorBlockRenga = 354,
        cDrawPriority_ActorBlockRengaRDash = 355,
        cDrawPriority_ActorBlockRengaRailV = 356,
        cDrawPriority_ActorBlockClarity = 357,
        cDrawPriority_ActorBlockClarityRDash = 358,
        cDrawPriority_ActorBlockHatenaLine = 359,
        cDrawPriority_ActorBlockRengaLine = 360,
        cDrawPriority_ActorBlockGroupHatenaLine = 361,
        cDrawPriority_ActorBlockGroupRengaLine = 362,
        cDrawPriority_ActorBlockHatenaAngle = 363,
        cDrawPriority_ActorBlockHatenaAngleR99 = 364,
        cDrawPriority_ActorBlockRengaAngle = 365,
        cDrawPriority_ActorBlockRengaAngleRDash = 366,
        cDrawPriority_ActorBlockRengaAngleR99 = 367,
        cDrawPriority_ActorBlockHatenaRotAppear = 368,
        cDrawPriority_ActorBlockRengaRotAppear = 369,
        cDrawPriority_ActorBlockHatenaFollowDisp = 370,
        cDrawPriority_ActorBlockRengaFollowDisp = 371,
        cDrawPriority_ActorBlockHatenaEnemyCourse = 372,
        cDrawPriority_ActorBlockPataEnemyCourse = 373,
        cDrawPriority_ActorBlockOutDrc = 374,
        cDrawPriority_ActorBlockPata = 375,
        cDrawPriority_ActorBlockWater = 376,
        cDrawPriority_ActorBlockCloud = 377,
        cDrawPriority_ActorBlockSwitch = 378,
        cDrawPriority_ActorBlockPSwitch = 379,
        cDrawPriority_ActorBlockJump = 380,
        cDrawPriority_ActorBlockStone = 381,
        cDrawPriority_ActorBlockHard = 382,
        cDrawPriority_ActorBlockWood = 383,
        cDrawPriority_ActorBlockHelp = 384,
        cDrawPriority_RDashLuigiBlock = 385,
        cDrawPriority_ActorBlockSnake = 386,
        cDrawPriority_ActorBlockYoshiChild = 387,
        cDrawPriority_ActorBlockBigRenga = 388,
        cDrawPriority_ActorBlockBigHatena = 389,
        cDrawPriority_RouletBlock = 390,
        cDrawPriority_ChikuwaBlock = 391,
        cDrawPriority_KameckBlock = 392,
        cDrawPriority_DrcHideBlock = 393,
        cDrawPriority_ActorCoin = 394,
        cDrawPriority_ActorCoinRDash = 395,
        cDrawPriority_ActorCoinFreezer = 396,
        cDrawPriority_ActorCoinObjpol = 397,
        cDrawPriority_ActorCoinDemoJump = 398,
        cDrawPriority_ActorCoinHopJump = 399,
        cDrawPriority_ActorCoinJump = 400,
        cDrawPriority_ActorCoinBattleJump = 401,
        cDrawPriority_ActorCoinTatsunonJump = 402,
        cDrawPriority_ActorCoinShowerJump = 403,
        cDrawPriority_ActorCoinAngle = 404,
        cDrawPriority_ActorCoinAngleBoard = 405,
        cDrawPriority_ActorCoinWater = 406,
        cDrawPriority_ActorCoinFollowDisp = 407,
        cDrawPriority_ActorCoinBubble = 408,
        cDrawPriority_ActorCoinJugem = 409,
        cDrawPriority_ActorCoinPass = 410,
        cDrawPriority_ActorCoinAkoya = 411,
        cDrawPriority_ActorCoinRotAppear = 412,
        cDrawPriority_ActorCoinPassRotAppear = 413,
        cDrawPriority_ActorCoinRotateFloor = 414,
        cDrawPriority_ActorCoinVolt = 415,
        cDrawPriority_ActorCoinParachuteParent = 416,
        cDrawPriority_ActorCoinParachute = 417,
        cDrawPriority_ActorCoinSnake = 418,
        cDrawPriority_ActorCoinKinokoLift = 419,
        cDrawPriority_ActorCoinBalloon = 420,
        cDrawPriority_ActorCoinGravity = 421,
        cDrawPriority_ActorCoinUnitPowBlock = 422,
        cDrawPriority_ActorCoinOutDrc = 423,
        cDrawPriority_ActorCoinEat = 424,
        cDrawPriority_BlueCoin = 425,
        cDrawPriority_Basabasa = 426,
        cDrawPriority_Sanbo = 427,
        cDrawPriority_SanboDeadEl = 428,
        cDrawPriority_WakiBigHanachan = 429,
        cDrawPriority_Hanachan = 430,
        cDrawPriority_HanachanRDash = 431,
        cDrawPriority_BigHanachan = 432,
        cDrawPriority_Kirifuki = 433,
        cDrawPriority_KirifukiRDash = 434,
        cDrawPriority_TrplnCloud = 435,
        cDrawPriority_TrplnCloudRideOn = 436,
        cDrawPriority_LiftSpinRotation = 437,
        cDrawPriority_LiftSpinRotationSync = 438,
        cDrawPriority_TorchLight = 439,
        cDrawPriority_KillerHoudai = 440,
        cDrawPriority_KillerHoudaiSlide = 441,
        cDrawPriority_MagnumKillerHoudai = 442,
        cDrawPriority_MagnumKillerHoudaiDown = 443,
        cDrawPriority_KillerHoudaiSearch = 444,
        cDrawPriority_MagnumKillerHoudaiSearch = 445,
        cDrawPriority_MagnumKillerHoudaiDownSearch = 446,
        cDrawPriority_MagnumKillerHoudaiRDash = 447,
        cDrawPriority_MagnumKillerHoudaiDownRDash = 448,
        cDrawPriority_MagnumKillerHoudaiSearchRDash = 449,
        cDrawPriority_MagnumKillerHoudaiDownSearchRDash = 450,
        cDrawPriority_KaitenHoudai = 451,
        cDrawPriority_ManyGunHoudai = 452,
        cDrawPriority_ShipCannon = 453,
        cDrawPriority_RotCannon = 454,
        cDrawPriority_RotBigCannon = 455,
        cDrawPriority_CannonBullet = 456,
        cDrawPriority_DokanCannon = 457,
        cDrawPriority_Killer = 458,
        cDrawPriority_MagnumKiller = 459,
        cDrawPriority_SearchKiller = 460,
        cDrawPriority_MagnumSearchKiller = 461,
        cDrawPriority_KingKiller = 462,
        cDrawPriority_KingKillerRDash = 463,
        cDrawPriority_Dossun = 464,
        cDrawPriority_BigDossun = 465,
        cDrawPriority_SwitchHatenaButton = 466,
        cDrawPriority_SwitchPbutton = 467,
        cDrawPriority_SwitchPbuttonRDash = 468,
        cDrawPriority_SwitchPbuttonDisSlide = 469,
        cDrawPriority_SwitchBossKoopaButton = 470,
        cDrawPriority_SwitchBossKoopaOnoButton = 471,
        cDrawPriority_Cloud = 472,
        cDrawPriority_DarkCloud = 473,
        cDrawPriority_CloudLt = 474,
        cDrawPriority_BubbleControl = 475,
        cDrawPriority_ObjSnow = 476,
        cDrawPriority_ObjSpark = 477,
        cDrawPriority_TagWind = 478,
        cDrawPriority_TarzanIvy = 479,
        cDrawPriority_TarzanChain = 480,
        cDrawPriority_Ladder = 481,
        cDrawPriority_SnakeBlock = 482,
        cDrawPriority_SnakeBlockR76 = 483,
        cDrawPriority_SnakeBlockRDash = 484,
        cDrawPriority_BlockLight = 485,
        cDrawPriority_CircleLight = 486,
        cDrawPriority_LightWater = 487,
        cDrawPriority_RotObjObake = 488,
        cDrawPriority_NoboribouObake = 489,
        cDrawPriority_WaterStream = 490,
        cDrawPriority_BigShell = 491,
        cDrawPriority_LiftWaterWheel = 492,
        cDrawPriority_FruitTree = 493,
        cDrawPriority_Koton = 494,
        cDrawPriority_GroupKoton = 495,
        cDrawPriority_Intermittent = 496,
        cDrawPriority_IntermittentJochu = 497,
        cDrawPriority_WaterIntermittent = 498,
        cDrawPriority_WaterIntermittentJochu = 499,
        cDrawPriority_WaterIntermittentJochuRD33 = 500,
        cDrawPriority_WaterIntermittentBoss = 501,
        cDrawPriority_WaterIntermittentBossAct = 502,
        cDrawPriority_YoganIntermittent = 503,
        cDrawPriority_Woochan = 504,
        cDrawPriority_ManholePuu = 505,
        cDrawPriority_Spana = 506,
        cDrawPriority_Manhole = 507,
        cDrawPriority_JugemThrowActor = 508,
        cDrawPriority_JugemCloud = 509,
        cDrawPriority_JugemCloudCoin = 510,
        cDrawPriority_JugemCloudMultiPlay = 511,
        cDrawPriority_JugemBody = 512,
        cDrawPriority_JugemBodyMultiPlay = 513,
        cDrawPriority_LiftMoveOn = 514,
        cDrawPriority_LiftRideMove = 515,
        cDrawPriority_LiftRideMoveSky = 516,
        cDrawPriority_ObjMoveOnGhost = 517,
        cDrawPriority_LiftMoveOnNormal = 518,
        cDrawPriority_LiftChangeDirByRideOn = 519,
        cDrawPriority_LiftRideOffYougan = 520,
        cDrawPriority_BlockChallenge = 521,
        cDrawPriority_BlockOdai = 522,
        cDrawPriority_QuestBlock = 523,
        cDrawPriority_LineTrain = 524,
        cDrawPriority_LineTrainParentRDash = 525,
        cDrawPriority_LineTrainChildRDash = 526,
        cDrawPriority_BlockAppearByLight = 527,
        cDrawPriority_LiftZenKaitenita = 528,
        cDrawPriority_LiftZenHanebashiArm = 529,
        cDrawPriority_LiftZenHanebashiSupport = 530,
        cDrawPriority_LiftZenHanebashiTomegu = 531,
        cDrawPriority_LiftZenYoko = 532,
        cDrawPriority_ElasticKinokoParent = 533,
        cDrawPriority_ElasticKinoko = 534,
        cDrawPriority_ElasticLiftV = 535,
        cDrawPriority_LiftScales = 536,
        cDrawPriority_LiftScalesBack = 537,
        cDrawPriority_LiftScalesStep = 538,
        cDrawPriority_WireMove = 539,
        cDrawPriority_KaronHead = 540,
        cDrawPriority_Karon = 541,
        cDrawPriority_BigKaron = 542,
        cDrawPriority_Mouse = 543,
        cDrawPriority_Chorobon = 544,
        cDrawPriority_GroupChorobon = 545,
        cDrawPriority_LiftRotationFull = 546,
        cDrawPriority_RotBlockChika = 547,
        cDrawPriority_RotBlockKinoko = 548,
        cDrawPriority_RotBlockWood = 549,
        cDrawPriority_RotBlockWoodRDash = 550,
        cDrawPriority_RotBlockStone = 551,
        cDrawPriority_RotBlockGhost = 552,
        cDrawPriority_RotBlockGhostRD4Obake = 553,
        cDrawPriority_LiftObakeChikeiHeya = 554,
        cDrawPriority_RotBlockColor = 555,
        cDrawPriority_RotBlockIron = 556,
        cDrawPriority_RotBlockIronRDash = 557,
        cDrawPriority_RotBlockIronRDash2 = 558,
        cDrawPriority_RotBlockGhostShip = 559,
        cDrawPriority_ObjPolygonObake = 560,
        cDrawPriority_LiftZenHammer = 561,
        cDrawPriority_Moai = 562,
        cDrawPriority_MoaiRD24 = 563,
        cDrawPriority_MoaiDown = 564,
        cDrawPriority_MoaiDownRD24 = 565,
        cDrawPriority_MoaiRD55 = 566,
        cDrawPriority_PalmTree = 567,
        cDrawPriority_BlockOutIvy = 568,
        cDrawPriority_HandLight = 569,
        cDrawPriority_LiftZenYokoTomegu = 570,
        cDrawPriority_LiftRideVmove = 571,
        cDrawPriority_GroupLiftRideVmove = 572,
        cDrawPriority_LiftRideHmove = 573,
        cDrawPriority_GroupLiftRideHmove = 574,
        cDrawPriority_LiftWaki = 575,
        cDrawPriority_LiftWakiStep = 576,
        cDrawPriority_LiftLine = 577,
        cDrawPriority_GroupLiftLine = 578,
        cDrawPriority_LiftLineRDash = 579,
        cDrawPriority_LiftWheel = 580,
        cDrawPriority_LiftSeeSaw = 581,
        cDrawPriority_LiftSeeSawRDash = 582,
        cDrawPriority_LiftObjBgHmove = 583,
        cDrawPriority_LiftObjBgVmove = 584,
        cDrawPriority_IceCube = 585,
        cDrawPriority_Stand = 586,
        cDrawPriority_GuraRock = 587,
        cDrawPriority_Polter = 588,
        cDrawPriority_Bakubaku = 589,
        cDrawPriority_Ibaramushi = 590,
        cDrawPriority_NiseMusa = 591,
        cDrawPriority_Crow = 592,
        cDrawPriority_LiftLeaf = 593,
        cDrawPriority_WanwanPile = 594,
        cDrawPriority_WanwanPileRDash = 595,
        cDrawPriority_Wanwan = 596,
        cDrawPriority_Icicle = 597,
        cDrawPriority_IcicleBig = 598,
        cDrawPriority_IcicleFixed = 599,
        cDrawPriority_Teresa = 600,
        cDrawPriority_TeresaBig = 601,
        cDrawPriority_TeresaRot = 602,
        cDrawPriority_TeresaRotParent = 603,
        cDrawPriority_TeresaRotParentRDash = 604,
        cDrawPriority_IceAshiba = 605,
        cDrawPriority_IceAshibaWater = 606,
        cDrawPriority_IceAshibaRail = 607,
        cDrawPriority_FloatBox = 608,
        cDrawPriority_FloatBoxBig = 609,
        cDrawPriority_Maruta = 610,
        cDrawPriority_Barrel = 611,
        cDrawPriority_WaterMove = 612,
        cDrawPriority_FloorGyration = 613,
        cDrawPriority_FloorHoleDokan = 614,
        cDrawPriority_GearGyration = 615,
        cDrawPriority_GearGyrationRDash = 616,
        cDrawPriority_LiftSlideKinoko = 617,
        cDrawPriority_LiftSlideKinokoResident = 618,
        cDrawPriority_LiftSlideRamage = 619,
        cDrawPriority_PataMet = 620,
        cDrawPriority_PataMetBig = 621,
        cDrawPriority_PataMetRDash = 622,
        cDrawPriority_Bubble = 623,
        cDrawPriority_BubbleSync = 624,
        cDrawPriority_BubbleRDash = 625,
        cDrawPriority_BubbleSyncRDash = 626,
        cDrawPriority_Crasher = 627,
        cDrawPriority_Unabon = 628,
        cDrawPriority_UnabonCheckPoint = 629,
        cDrawPriority_UnabonDokan = 630,
        cDrawPriority_UnabonRDash = 631,
        cDrawPriority_KK = 632,
        cDrawPriority_KKJochu = 633,
        cDrawPriority_KKLift = 634,
        cDrawPriority_KKThunder = 635,
        cDrawPriority_AkoyaShellFish = 636,
        cDrawPriority_LiftRemoconBalanceRideOff = 637,
        cDrawPriority_LiftRemoconBalanceRideOffRDash = 638,
        cDrawPriority_LiftRemoconSeesaw = 639,
        cDrawPriority_LiftRemoconXline = 640,
        cDrawPriority_Guruguru = 641,
        cDrawPriority_Gesso = 642,
        cDrawPriority_GessoChild = 643,
        cDrawPriority_BaramakiGesso = 644,
        cDrawPriority_PlayerIce = 645,
        cDrawPriority_Nut = 646,
        cDrawPriority_WoodBox = 647,
        cDrawPriority_IronBox = 648,
        cDrawPriority_IronBoxRDash = 649,
        cDrawPriority_IronBoxShortCreate = 650,
        cDrawPriority_WakiWoodBox = 651,
        cDrawPriority_WakiIronBox = 652,
        cDrawPriority_StrongBox = 653,
        cDrawPriority_StrongBoxKey = 654,
        cDrawPriority_BattleItem = 655,
        cDrawPriority_TottenGoalItem = 656,
        cDrawPriority_TogeMet = 657,
        cDrawPriority_GroupTogeMet = 658,
        cDrawPriority_LiftHurikoYoganCenter = 659,
        cDrawPriority_TorpedoBase = 660,
        cDrawPriority_SearchTorpedoBase = 661,
        cDrawPriority_NormalTorpedo = 662,
        cDrawPriority_GroupTorpedo = 663,
        cDrawPriority_SearchTorpedo = 664,
        cDrawPriority_YoshiEgg = 665,
        cDrawPriority_KokoopaShipLemmy = 666,
        cDrawPriority_KokoopaShipMorton = 667,
        cDrawPriority_KokoopaShipLarry = 668,
        cDrawPriority_KokoopaShipWendy = 669,
        cDrawPriority_KokoopaShipIggy = 670,
        cDrawPriority_KokoopaShipRoy = 671,
        cDrawPriority_KokoopaShipLudwig = 672,
        cDrawPriority_KokoopaShipWarpCannon = 673,
        cDrawPriority_Peach = 674,
        cDrawPriority_PeachDemoShadowkun = 675,
        cDrawPriority_FinalDVPeach = 676,
        cDrawPriority_FinalDVPeachShutter = 677,
        cDrawPriority_SpModeResDemoPeach = 678,
        cDrawPriority_BalloonHangingActor = 679,
        cDrawPriority_MagicHandPaa = 680,
        cDrawPriority_MagicHandGoo = 681,
        cDrawPriority_MagicHandGooRDash = 682,
        cDrawPriority_MagicHandW5 = 683,
        cDrawPriority_MagicHandW7 = 684,
        cDrawPriority_BossKoopaFootHold = 685,
        cDrawPriority_KoopaJrFire = 686,
        cDrawPriority_KoopaJrBall = 687,
        cDrawPriority_KoopaJrFloor = 688,
        cDrawPriority_KoopaJrFloorMgr = 689,
        cDrawPriority_WaterKoopaJr = 690,
        cDrawPriority_WaterKoopaJrClown = 691,
        cDrawPriority_WaterKoopaJrPos = 692,
        cDrawPriority_BoxingKoopaJr = 693,
        cDrawPriority_BoxingKoopaJrClown = 694,
        cDrawPriority_DemoBoxingKoopaJr = 695,
        cDrawPriority_DemoBoxingKoopaJrClown = 696,
        cDrawPriority_BgActorWater = 697,
        cDrawPriority_BgActorLava = 698,
        cDrawPriority_BgActorPoison = 699,
        cDrawPriority_BgActorSand = 700,
        cDrawPriority_BgActorCloud = 701,
        cDrawPriority_BgActorMist = 702,
        cDrawPriority_BgActorBrosFloor = 703,
        cDrawPriority_BgActorAtackFloor = 704,
        cDrawPriority_YoganJimen = 705,
        cDrawPriority_YoganJimenRDash = 706,
        cDrawPriority_MonorailBlock = 707,
        cDrawPriority_MonorailBlockRail = 708,
        cDrawPriority_SlotChibiYoshi = 709,
        cDrawPriority_MiniGamePanel = 710,
        cDrawPriority_SlotItem = 711,
        cDrawPriority_ShuffleBlock = 712,
        cDrawPriority_CoinMakiCoin = 713,
        cDrawPriority_CoinMakiItem = 714,
        cDrawPriority_CoinMakiCannon = 715,
        cDrawPriority_MiniGameKinopio = 716,
        cDrawPriority_PeaPlant = 717,
        cDrawPriority_DokanJoint = 718,
        cDrawPriority_DokanJointMame = 719,
        cDrawPriority_GoalKinokoHouse = 720,
        cDrawPriority_AirShipBottom = 721,
        cDrawPriority_AirShipBottomWaku = 722,
        cDrawPriority_AirShipBottomRDash = 723,
        cDrawPriority_Cookie = 724,
        cDrawPriority_Gattan = 725,
        cDrawPriority_DrcTouchLight = 726,
        cDrawPriority_StaffRollMgr = 727,
        cDrawPriority_StaffRollMgrRDash = 728,
        cDrawPriority_StaffRollChibiYoshiBubble = 729,
        cDrawPriority_StaffRollChibiYoshiBalloon = 730,
        cDrawPriority_StaffRollChibiYoshiBalloonEndGlad = 731,
        cDrawPriority_StaffRollChibiYoshiLight = 732,
        cDrawPriority_StaffRollChibiYoshiLightEndGlad = 733,
        cDrawPriority_StaffRollChibiBubbleLetter = 734,
        cDrawPriority_StaffRollChibiBubbleExtra = 735,
        cDrawPriority_StaffRollShadowkun = 736,
        cDrawPriority_CourseSelectPlayer = 737,
        cDrawPriority_CourseSelectPlayer2P = 738,
        cDrawPriority_CourseSelectPlayerEgg = 739,
        cDrawPriority_CourseSelectCamera = 740,
        cDrawPriority_CourseSelectCastle = 741,
        cDrawPriority_CourseSelectToride = 742,
        cDrawPriority_CourseSelectKinokoHouse1up = 743,
        cDrawPriority_CourseSelectKinokoHouseShuffle = 744,
        cDrawPriority_CourseSelectKinokoHouseSlot = 745,
        cDrawPriority_CourseSelectPeachGates1st = 746,
        cDrawPriority_CourseSelectPeachGates2nd = 747,
        cDrawPriority_CourseSelectCoursePoint = 748,
        cDrawPriority_CourseSelectWarpCannon = 749,
        cDrawPriority_CourseSelectGhostHouse = 750,
        cDrawPriority_CourseSelectW8DarkCloud = 751,
        cDrawPriority_CourseSelectW2Bros = 752,
        cDrawPriority_CourseSelectEventAssistant = 753,
        cDrawPriority_CourseSelectShipLemmy = 754,
        cDrawPriority_CourseSelectShipMorton = 755,
        cDrawPriority_CourseSelectShipLarry = 756,
        cDrawPriority_CourseSelectShipWendy = 757,
        cDrawPriority_CourseSelectShipIggy = 758,
        cDrawPriority_CourseSelectShipRoy = 759,
        cDrawPriority_CourseSelectShipLudwig = 760,
        cDrawPriority_CourseSelectShipKoopaJr = 761,
        cDrawPriority_CourseSelectShipBoroKoopaJr = 762,
        cDrawPriority_CourseSelectSurrender = 763,
        cDrawPriority_CourseSelectSwitchA = 764,
        cDrawPriority_CourseSelectSwitchB = 765,
        cDrawPriority_CourseSelectTeresa = 766,
        cDrawPriority_CourseSelectOpeningKameck = 767,
        cDrawPriority_CourseSelectTorideBoss = 768,
        cDrawPriority_CourseSelectPakkun = 769,
        cDrawPriority_CourseSelectReportKinopio = 770,
        cDrawPriority_CourseSelectTobipuku = 771,
        cDrawPriority_CourseSelectChorobon = 772,
        cDrawPriority_CourseSelectW7Item = 773,
        cDrawPriority_CourseSelectW5Teresa = 774,
        cDrawPriority_CourseSelectFlagPeach = 775,
        cDrawPriority_CourseSelectMusasabi = 777,
        cDrawPriority_CourseSelectWaterPillar = 778,
        cDrawPriority_CourseSelectW7Bridge = 779,
        cDrawPriority_CourseSelectMiiBalloon = 780,
        cDrawPriority_CourseSelectPentaro = 781,
        cDrawPriority_CourseSelectW4Item = 782,
        cDrawPriority_CourseSelectW2Kuribo = 783,
        cDrawPriority_CourseSelectPakkunBig = 784,
        cDrawPriority_CourseSelectShadowIcon = 785,
        cDrawPriority_CourseSelectDekaUnira = 786,
        cDrawPriority_CourseSelectTomb = 787,
        cDrawPriority_CourseSelectShadowkun = 788,
        cDrawPriority_CourseSelectLineTrain = 789,
        cDrawPriority_CourseSelectKoopaJr = 790,
        cDrawPriority_CourseSelectPeach = 791,
        cDrawPriority_CourseSelectW1Item = 792,
        cDrawPriority_CourseSelectStarGate = 793,
        cDrawPriority_SampleActor = 794,
        cDrawPriority_SampleChildActor = 795,

        // No Draw
        cDrawPriority_SampleTag = 0 - 0x3FF,
        cDrawPriority_BreakBlock = 1 - 0x3FF,
        cDrawPriority_ZoomKun = 2 - 0x3FF,
        cDrawPriority_ZoomKunRDash = 3 - 0x3FF,
        cDrawPriority_LimitSpeedKun = 4 - 0x3FF,
        cDrawPriority_MaxUeLeft = 5 - 0x3FF,
        cDrawPriority_MaxUeRight = 6 - 0x3FF,
        cDrawPriority_LrStopUp = 7 - 0x3FF,
        cDrawPriority_LrStopDw = 8 - 0x3FF,
        cDrawPriority_HyperMaxUeLeft = 9 - 0x3FF,
        cDrawPriority_HyperMaxUeRight = 10 - 0x3FF,
        cDrawPriority_AutoScrollTag = 11 - 0x3FF,
        cDrawPriority_ScrollTag = 12 - 0x3FF,
        cDrawPriority_KoopaAreaObj = 13 - 0x3FF,
        cDrawPriority_BgCenter = 14 - 0x3FF,
        cDrawPriority_EnvTag = 15 - 0x3FF,
        cDrawPriority_EnvSoundTag = 16 - 0x3FF,
        cDrawPriority_FlagSwitchTag = 17 - 0x3FF,
        cDrawPriority_FlagSwitchAnd = 18 - 0x3FF,
        cDrawPriority_FlagSwitchOr = 19 - 0x3FF,
        cDrawPriority_FlagSwitchRandom = 20 - 0x3FF,
        cDrawPriority_FlagSwitchChange = 21 - 0x3FF,
        cDrawPriority_FlagSwitchIf = 22 - 0x3FF,
        cDrawPriority_FlagSwitchIfRDash = 23 - 0x3FF,
        cDrawPriority_FlagSwitchIfR63 = 24 - 0x3FF,
        cDrawPriority_FlagSwitchContinue = 25 - 0x3FF,
        cDrawPriority_FlagSwitchCycle = 26 - 0x3FF,
        cDrawPriority_PairObjParent = 27 - 0x3FF,
        cDrawPriority_RDashPairObjParent = 28 - 0x3FF,
        cDrawPriority_RailPolyParent = 29 - 0x3FF,
        cDrawPriority_CenterSwing = 30 - 0x3FF,
        cDrawPriority_CenterRotation = 31 - 0x3FF,
        cDrawPriority_CenterSwingRail = 32 - 0x3FF,
        cDrawPriority_CenterRotationRail = 33 - 0x3FF,
        cDrawPriority_ActorCoinWaki = 34 - 0x3FF,
        cDrawPriority_ActorCoinWakiFunsuiTag = 35 - 0x3FF,
        cDrawPriority_FlyingKinokoWaki = 36 - 0x3FF,
        cDrawPriority_WakiDokan = 37 - 0x3FF,
        cDrawPriority_WakiPukupuku = 38 - 0x3FF,
        cDrawPriority_WakiPukupukuSearch = 39 - 0x3FF,
        cDrawPriority_WakiPukupukuEscape = 40 - 0x3FF,
        cDrawPriority_PukupukuGroupTag = 41 - 0x3FF,
        cDrawPriority_PukupukuParent = 42 - 0x3FF,
        cDrawPriority_NextGotoBlock = 43 - 0x3FF,
        cDrawPriority_WakiJugem = 44 - 0x3FF,
        cDrawPriority_WakiJugemMultiPlay = 45 - 0x3FF,
        cDrawPriority_WakiTobipuku = 46 - 0x3FF,
        cDrawPriority_WakiTobipukuMecha = 47 - 0x3FF,
        cDrawPriority_WakiPentaro = 48 - 0x3FF,
        cDrawPriority_CoinCenterParent = 49 - 0x3FF,
        cDrawPriority_PassCoinCenterParent = 50 - 0x3FF,
        cDrawPriority_NiceCoinEspial = 51 - 0x3FF,
        cDrawPriority_NiceCoinEspialRegular = 52 - 0x3FF,
        cDrawPriority_NiceCoinAreaEspial = 53 - 0x3FF,
        cDrawPriority_BunbunDemo = 54 - 0x3FF,
        cDrawPriority_KokoopaDemo = 55 - 0x3FF,
        cDrawPriority_KoopaJrDemo = 56 - 0x3FF,
        cDrawPriority_KameckDemo = 57 - 0x3FF,
        cDrawPriority_BossKKDemo = 58 - 0x3FF,
        cDrawPriority_QuakeKoopaJrDemo = 59 - 0x3FF,
        cDrawPriority_KoopaDemo = 60 - 0x3FF,
        cDrawPriority_FinalKoopaDemo = 61 - 0x3FF,
        cDrawPriority_PeachDemo = 62 - 0x3FF,
        cDrawPriority_KameckIciclePos = 63 - 0x3FF,
        cDrawPriority_KameckPos = 64 - 0x3FF,
        cDrawPriority_GroupId = 65 - 0x3FF,
        cDrawPriority_GroupIdTogeMet = 66 - 0x3FF,
        cDrawPriority_RotateAppear = 67 - 0x3FF,
        cDrawPriority_IfFlagRotateAppear = 68 - 0x3FF,
        cDrawPriority_ChangeBlock = 69 - 0x3FF,
        cDrawPriority_ChangeBlockRDash = 70 - 0x3FF,
        cDrawPriority_ActorTouchDrc = 71 - 0x3FF,
        cDrawPriority_BarnarSyncMgr = 72 - 0x3FF,
        cDrawPriority_KinokoLiftParent = 73 - 0x3FF,
        cDrawPriority_LiftRemoconBalanceClinch = 74 - 0x3FF,
        cDrawPriority_WakiCoinParachute = 75 - 0x3FF,
        cDrawPriority_SnakeCoinParent = 76 - 0x3FF,
        cDrawPriority_ChoropuCoinMgr = 77 - 0x3FF,
        cDrawPriority_MiniGameMgr = 78 - 0x3FF,
        cDrawPriority_MiniGameMgrRDash = 79 - 0x3FF,
        cDrawPriority_ShuffleBlockMgr = 80 - 0x3FF,
        cDrawPriority_SlotMgr = 81 - 0x3FF,
        cDrawPriority_CoinMakiMgr = 82 - 0x3FF,
        cDrawPriority_WakiHipAttackActor = 83 - 0x3FF,
        cDrawPriority_WakiSearchMagKiller = 84 - 0x3FF,
        cDrawPriority_TorpedoTag = 85 - 0x3FF,
        cDrawPriority_MagicHandTag = 86 - 0x3FF,
        cDrawPriority_MagicHandTagGoo = 87 - 0x3FF,
        cDrawPriority_MagicHandTagGooFast = 88 - 0x3FF,
        cDrawPriority_WakiKoopaFire = 89 - 0x3FF,
        cDrawPriority_TagFrame = 90 - 0x3FF,
        cDrawPriority_WaterBubbleTag = 91 - 0x3FF,
        cDrawPriority_ElectricKoopaTag = 92 - 0x3FF,
        cDrawPriority_ShadowHouseReadTag = 93 - 0x3FF,
        cDrawPriority_TitleDemoTag = 94 - 0x3FF,
        cDrawPriority_ShootingStar = 95 - 0x3FF,
        cDrawPriority_ElectricShock = 96 - 0x3FF,
        cDrawPriority_WakiFugumannen = 97 - 0x3FF,
        cDrawPriority_WakiFugumannenBig = 98 - 0x3FF,
        cDrawPriority_WaterEffectFilter = 99 - 0x3FF,
        cDrawPriority_WaterEffectFilterRDash = 100 - 0x3FF,
        cDrawPriority_WaterBubble = 101 - 0x3FF,
        cDrawPriority_RoyLift = 102 - 0x3FF,
        cDrawPriority_WakiBakubaku = 103 - 0x3FF,
        cDrawPriority_FlyingPlayerReferTag = 104 - 0x3FF,
        cDrawPriority_SpModeResDemoTag = 105 - 0x3FF,
        cDrawPriority_FlowerKindTag = 106 - 0x3FF,
        cDrawPriority_WakiKeronpa = 107 - 0x3FF,
        cDrawPriority_WakiUnabon = 108 - 0x3FF,
        cDrawPriority_WakiUnabonRDash = 109 - 0x3FF,
        cDrawPriority_TouchNonActor = 110 - 0x3FF,
        cDrawPriority_PmusaBlock = 111 - 0x3FF,
        cDrawPriority_BalloonProtectAreaTag = 112 - 0x3FF,
        cDrawPriority_EditCoinActorSetTag = 113 - 0x3FF,
        cDrawPriority_FeverEffectActor = 114 - 0x3FF,
        cDrawPriority_RailCreateEffectBlock = 115 - 0x3FF,
        cDrawPriority_PlayerSidePressTag = 116 - 0x3FF,
        cDrawPriority_FastLookCameraTag = 117 - 0x3FF
    };

    // Address: 0x10001940
    static const s16               cDrawPriority[Profile::cProfileID_Max];
    // Address: 0x10002064
    static const s8                cResType[Profile::cProfileID_Max];
    // Address: 0x100023F8
    static const u8                cResNum[Profile::cProfileID_Max];
    // Address: 0x101C321C
    static const sead::SafeString* cResList[Profile::cProfileID_Max];

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
    static const s32 cProfileID_FlagSwitchContinue;
    /**
     * @brief 9
     * @par Address: 0x10003D78
     */
    static const s32 cProfileID_FlagSwitchCycle;
    /**
     * @brief 10
     * @par Address: 0x10003D7C
     */
    static const s32 cProfileID_ActorTouchDrc;
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
    static const s32 cProfileID_NiceCoinEspial;
    /**
     * @brief 15
     * @par Address: 0x10003D90
     */
    static const s32 cProfileID_NiceCoinEspialRegular;
    /**
     * @brief 16
     * @par Address: 0x10003D94
     */
    static const s32 cProfileID_NiceCoinAreaEspial;
    /**
     * @brief 17
     * @par Address: 0x10003D98
     */
    static const s32 cProfileID_GroupId;
    /**
     * @brief 18
     * @par Address: 0x10003D9C
     */
    static const s32 cProfileID_GroupIdTogeMet;
    /**
     * @brief 19
     * @par Address: 0x10003DA0
     */
    static const s32 cProfileID_ElectricKoopaTag;
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
    static const s32 cProfileID_CoinMakiMgr;
    /**
     * @brief 29
     * @par Address: 0x10003DC8
     */
    static const s32 cProfileID_MagicHandTag;
    /**
     * @brief 30
     * @par Address: 0x10003DCC
     */
    static const s32 cProfileID_MagicHandTagGoo;
    /**
     * @brief 31
     * @par Address: 0x10003DD0
     */
    static const s32 cProfileID_MagicHandTagGooFast;
    /**
     * @brief 32
     * @par Address: 0x10003DD4
     */
    static const s32 cProfileID_WaterBubbleTag;
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
    static const s32 cProfileID_SpModeResDemoTag;
    /**
     * @brief 37
     * @par Address: 0x10003DE8
     */
    static const s32 cProfileID_KoopaJrFloorMgr;
    /**
     * @brief 38
     * @par Address: 0x10003DEC
     */
    static const s32 cProfileID_PukupukuGroupTag;
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
    static const s32 cProfileID_CenterRotationRail;
    /**
     * @brief 43
     * @par Address: 0x10003E00
     */
    static const s32 cProfileID_RotGuruguru;
    /**
     * @brief 44
     * @par Address: 0x10003E04
     */
    static const s32 cProfileID_RotGuruguruRDash;
    /**
     * @brief 45
     * @par Address: 0x10003E08
     */
    static const s32 cProfileID_CoinCenterParent;
    /**
     * @brief 46
     * @par Address: 0x10003E0C
     */
    static const s32 cProfileID_PassCoinCenterParent;
    /**
     * @brief 47
     * @par Address: 0x10003E10
     */
    static const s32 cProfileID_RotateAppear;
    /**
     * @brief 48
     * @par Address: 0x10003E14
     */
    static const s32 cProfileID_IfFlagRotateAppear;
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
    static const s32 cProfileID_ObjSpinParent;
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
    static const s32 cProfileID_ObjPolKougen;
    /**
     * @brief 58
     * @par Address: 0x10003E3C
     */
    static const s32 cProfileID_ObjPolScroll;
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
    static const s32 cProfileID_PairObjChildKougen;
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
    static const s32 cProfileID_PairObjChildNoharaHan;
    /**
     * @brief 76
     * @par Address: 0x10003E84
     */
    static const s32 cProfileID_PairObjChildKinoko;
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
    static const s32 cProfileID_TrplnCloud;
    /**
     * @brief 83
     * @par Address: 0x10003EA0
     */
    static const s32 cProfileID_TrplnCloudRideOn;
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
    static const s32 cProfileID_BgActorSand;
    /**
     * @brief 88
     * @par Address: 0x10003EB4
     */
    static const s32 cProfileID_BgActorCloud;
    /**
     * @brief 89
     * @par Address: 0x10003EB8
     */
    static const s32 cProfileID_BgActorMist;
    /**
     * @brief 90
     * @par Address: 0x10003EBC
     */
    static const s32 cProfileID_BgActorBrosFloor;
    /**
     * @brief 91
     * @par Address: 0x10003EC0
     */
    static const s32 cProfileID_BgActorAtackFloor;
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
    static const s32 cProfileID_GroupLineKinokoBlock;
    /**
     * @brief 95
     * @par Address: 0x10003ED0
     */
    static const s32 cProfileID_LiftRotHalfRev;
    /**
     * @brief 96
     * @par Address: 0x10003ED4
     */
    static const s32 cProfileID_LiftRotHalfRevRDash;
    /**
     * @brief 97
     * @par Address: 0x10003ED8
     */
    static const s32 cProfileID_LiftHanRotateLight;
    /**
     * @brief 98
     * @par Address: 0x10003EDC
     */
    static const s32 cProfileID_LiftHurikoYogan;
    /**
     * @brief 99
     * @par Address: 0x10003EE0
     */
    static const s32 cProfileID_LiftHurikoYoganRDash;
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
    static const s32 cProfileID_KillerHoudaiSlide;
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
    static const s32 cProfileID_KillerHoudaiSearch;
    /**
     * @brief 106
     * @par Address: 0x10003EFC
     */
    static const s32 cProfileID_MagnumKillerHoudaiSearch;
    /**
     * @brief 107
     * @par Address: 0x10003F00
     */
    static const s32 cProfileID_MagnumKillerHoudaiDownSearch;
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
    static const s32 cProfileID_MagnumKillerHoudaiSearchRDash;
    /**
     * @brief 111
     * @par Address: 0x10003F10
     */
    static const s32 cProfileID_MagnumKillerHoudaiDownSearchRDash;
    /**
     * @brief 112
     * @par Address: 0x10003F14
     */
    static const s32 cProfileID_KaitenHoudai;
    /**
     * @brief 113
     * @par Address: 0x10003F18
     */
    static const s32 cProfileID_ManyGunHoudai;
    /**
     * @brief 114
     * @par Address: 0x10003F1C
     */
    static const s32 cProfileID_ShipCannon;
    /**
     * @brief 115
     * @par Address: 0x10003F20
     */
    static const s32 cProfileID_RotCannon;
    /**
     * @brief 116
     * @par Address: 0x10003F24
     */
    static const s32 cProfileID_RotBigCannon;
    /**
     * @brief 117
     * @par Address: 0x10003F28
     */
    static const s32 cProfileID_DokanCannon;
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
    static const s32 cProfileID_IntermittentJochu;
    /**
     * @brief 123
     * @par Address: 0x10003F40
     */
    static const s32 cProfileID_WaterIntermittent;
    /**
     * @brief 124
     * @par Address: 0x10003F44
     */
    static const s32 cProfileID_WaterIntermittentJochu;
    /**
     * @brief 125
     * @par Address: 0x10003F48
     */
    static const s32 cProfileID_WaterIntermittentJochuRD33;
    /**
     * @brief 126
     * @par Address: 0x10003F4C
     */
    static const s32 cProfileID_WaterIntermittentBoss;
    /**
     * @brief 127
     * @par Address: 0x10003F50
     */
    static const s32 cProfileID_WaterIntermittentBossAct;
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
    static const s32 cProfileID_ObjMamePipeRight;
    /**
     * @brief 131
     * @par Address: 0x10003F60
     */
    static const s32 cProfileID_ObjMamePipeLeft;
    /**
     * @brief 132
     * @par Address: 0x10003F64
     */
    static const s32 cProfileID_ObjMamePipeUp;
    /**
     * @brief 133
     * @par Address: 0x10003F68
     */
    static const s32 cProfileID_ObjMamePipeDown;
    /**
     * @brief 134
     * @par Address: 0x10003F6C
     */
    static const s32 cProfileID_ObjPipeDownNG;
    /**
     * @brief 135
     * @par Address: 0x10003F70
     */
    static const s32 cProfileID_CoinBattlePipeUp;
    /**
     * @brief 136
     * @par Address: 0x10003F74
     */
    static const s32 cProfileID_CoinBattlePipeDown;
    /**
     * @brief 137
     * @par Address: 0x10003F78
     */
    static const s32 cProfileID_CoinBattlePipeLeft;
    /**
     * @brief 138
     * @par Address: 0x10003F7C
     */
    static const s32 cProfileID_CoinBattlePipeRight;
    /**
     * @brief 139
     * @par Address: 0x10003F80
     */
    static const s32 cProfileID_ZoomPipeRight;
    /**
     * @brief 140
     * @par Address: 0x10003F84
     */
    static const s32 cProfileID_ZoomPipeLeft;
    /**
     * @brief 141
     * @par Address: 0x10003F88
     */
    static const s32 cProfileID_ZoomPipe;
    /**
     * @brief 142
     * @par Address: 0x10003F8C
     */
    static const s32 cProfileID_ZoomPipeDown;
    /**
     * @brief 143
     * @par Address: 0x10003F90
     */
    static const s32 cProfileID_RotPipe;
    /**
     * @brief 144
     * @par Address: 0x10003F94
     */
    static const s32 cProfileID_RotPipeRDash;
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
    static const s32 cProfileID_LiftZenHanebashiArm;
    /**
     * @brief 148
     * @par Address: 0x10003FA4
     */
    static const s32 cProfileID_LiftZenHanebashiSupport;
    /**
     * @brief 149
     * @par Address: 0x10003FA8
     */
    static const s32 cProfileID_LiftZenHanebashiTomegu;
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
    static const s32 cProfileID_RotBlockChika;
    /**
     * @brief 154
     * @par Address: 0x10003FBC
     */
    static const s32 cProfileID_RotBlockKinoko;
    /**
     * @brief 155
     * @par Address: 0x10003FC0
     */
    static const s32 cProfileID_RotBlockWood;
    /**
     * @brief 156
     * @par Address: 0x10003FC4
     */
    static const s32 cProfileID_RotBlockWoodRDash;
    /**
     * @brief 157
     * @par Address: 0x10003FC8
     */
    static const s32 cProfileID_RotBlockStone;
    /**
     * @brief 158
     * @par Address: 0x10003FCC
     */
    static const s32 cProfileID_RotBlockGhost;
    /**
     * @brief 159
     * @par Address: 0x10003FD0
     */
    static const s32 cProfileID_RotBlockGhostRD4Obake;
    /**
     * @brief 160
     * @par Address: 0x10003FD4
     */
    static const s32 cProfileID_ObjPolygonObake;
    /**
     * @brief 161
     * @par Address: 0x10003FD8
     */
    static const s32 cProfileID_LiftObakeChikeiHeya;
    /**
     * @brief 162
     * @par Address: 0x10003FDC
     */
    static const s32 cProfileID_RotBlockColor;
    /**
     * @brief 163
     * @par Address: 0x10003FE0
     */
    static const s32 cProfileID_RotBlockIron;
    /**
     * @brief 164
     * @par Address: 0x10003FE4
     */
    static const s32 cProfileID_RotBlockIronRDash;
    /**
     * @brief 165
     * @par Address: 0x10003FE8
     */
    static const s32 cProfileID_RotBlockIronRDash2;
    /**
     * @brief 166
     * @par Address: 0x10003FEC
     */
    static const s32 cProfileID_RotBlockGhostShip;
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
    static const s32 cProfileID_MoaiRD24;
    /**
     * @brief 170
     * @par Address: 0x10003FFC
     */
    static const s32 cProfileID_MoaiDown;
    /**
     * @brief 171
     * @par Address: 0x10004000
     */
    static const s32 cProfileID_MoaiDownRD24;
    /**
     * @brief 172
     * @par Address: 0x10004004
     */
    static const s32 cProfileID_MoaiRD55;
    /**
     * @brief 173
     * @par Address: 0x10004008
     */
    static const s32 cProfileID_ObjSpinChild;
    /**
     * @brief 174
     * @par Address: 0x1000400C
     */
    static const s32 cProfileID_ObjSpinChildPyramid;
    /**
     * @brief 175
     * @par Address: 0x10004010
     */
    static const s32 cProfileID_ObjSpinChildPyramidJochu;
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
    static const s32 cProfileID_LiftRideOffYougan;
    /**
     * @brief 181
     * @par Address: 0x10004028
     */
    static const s32 cProfileID_BlockChallenge;
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
    static const s32 cProfileID_BlockAppearByLight;
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
    static const s32 cProfileID_IronBallHoleRDash;
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
    static const s32 cProfileID_RotObjObake;
    /**
     * @brief 200
     * @par Address: 0x10004074
     */
    static const s32 cProfileID_BlockLight;
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
    static const s32 cProfileID_ElasticKinoko;
    /**
     * @brief 204
     * @par Address: 0x10004084
     */
    static const s32 cProfileID_ElasticLiftV;
    /**
     * @brief 205
     * @par Address: 0x10004088
     */
    static const s32 cProfileID_PataMet;
    /**
     * @brief 206
     * @par Address: 0x1000408C
     */
    static const s32 cProfileID_PataMetBig;
    /**
     * @brief 207
     * @par Address: 0x10004090
     */
    static const s32 cProfileID_PataMetRDash;
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
    static const s32 cProfileID_LiftRideVmove;
    /**
     * @brief 212
     * @par Address: 0x100040A4
     */
    static const s32 cProfileID_LiftRideHmove;
    /**
     * @brief 213
     * @par Address: 0x100040A8
     */
    static const s32 cProfileID_GroupLiftRideHmove;
    /**
     * @brief 214
     * @par Address: 0x100040AC
     */
    static const s32 cProfileID_GroupLiftRideVmove;
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
    static const s32 cProfileID_GroupLiftLine;
    /**
     * @brief 219
     * @par Address: 0x100040C0
     */
    static const s32 cProfileID_LiftLineRDash;
    /**
     * @brief 220
     * @par Address: 0x100040C4
     */
    static const s32 cProfileID_LiftSeeSaw;
    /**
     * @brief 221
     * @par Address: 0x100040C8
     */
    static const s32 cProfileID_LiftSeeSawRDash;
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
    static const s32 cProfileID_BarnarRot;
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
    static const s32 cProfileID_LiftScalesBack;
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
    static const s32 cProfileID_TarzanChain;
    /**
     * @brief 240
     * @par Address: 0x10004114
     */
    static const s32 cProfileID_Ladder;
    /**
     * @brief 241
     * @par Address: 0x10004118
     */
    static const s32 cProfileID_WakiWoodBox;
    /**
     * @brief 242
     * @par Address: 0x1000411C
     */
    static const s32 cProfileID_WakiIronBox;
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
    static const s32 cProfileID_ActorBlockHelp;
    /**
     * @brief 249
     * @par Address: 0x10004138
     */
    static const s32 cProfileID_RDashLuigiBlock;
    /**
     * @brief 250
     * @par Address: 0x1000413C
     */
    static const s32 cProfileID_LiftObjBgHmove;
    /**
     * @brief 251
     * @par Address: 0x10004140
     */
    static const s32 cProfileID_LiftObjBgVmove;
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
    static const s32 cProfileID_RotHalf;
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
    static const s32 cProfileID_LiftSlideRamage;
    /**
     * @brief 264
     * @par Address: 0x10004174
     */
    static const s32 cProfileID_BossKoopaFootHold;
    /**
     * @brief 265
     * @par Address: 0x10004178
     */
    static const s32 cProfileID_KoopaShutter;
    /**
     * @brief 266
     * @par Address: 0x1000417C
     */
    static const s32 cProfileID_AirShipBottom;
    /**
     * @brief 267
     * @par Address: 0x10004180
     */
    static const s32 cProfileID_AirShipBottomWaku;
    /**
     * @brief 268
     * @par Address: 0x10004184
     */
    static const s32 cProfileID_AirShipBottomRDash;
    /**
     * @brief 269
     * @par Address: 0x10004188
     */
    static const s32 cProfileID_QuakeKoopaJrLiftV;
    /**
     * @brief 270
     * @par Address: 0x1000418C
     */
    static const s32 cProfileID_QuakeKoopaJrLiftH;
    /**
     * @brief 271
     * @par Address: 0x10004190
     */
    static const s32 cProfileID_QuakeKoopaJrLiftPairObjChild;
    /**
     * @brief 272
     * @par Address: 0x10004194
     */
    static const s32 cProfileID_RoyLiftStep;
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
    static const s32 cProfileID_GoalPolePicStage;
    /**
     * @brief 277
     * @par Address: 0x100041A8
     */
    static const s32 cProfileID_GoalPoleRDash;
    /**
     * @brief 278
     * @par Address: 0x100041AC
     */
    static const s32 cProfileID_GoalPolePicStageRDash;
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
    static const s32 cProfileID_MagicHandW5;
    /**
     * @brief 282
     * @par Address: 0x100041BC
     */
    static const s32 cProfileID_MagicHandW7;
    /**
     * @brief 283
     * @par Address: 0x100041C0
     */
    static const s32 cProfileID_Freezer;
    /**
     * @brief 284
     * @par Address: 0x100041C4
     */
    static const s32 cProfileID_PmusaBlock;
    /**
     * @brief 285
     * @par Address: 0x100041C8
     */
    static const s32 cProfileID_FloatBox;
    /**
     * @brief 286
     * @par Address: 0x100041CC
     */
    static const s32 cProfileID_FloatBoxBig;
    /**
     * @brief 287
     * @par Address: 0x100041D0
     */
    static const s32 cProfileID_Block;
    /**
     * @brief 288
     * @par Address: 0x100041D4
     */
    static const s32 cProfileID_BreakBlock;
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
    static const s32 cProfileID_ActorBlockRengaRailV;
    /**
     * @brief 294
     * @par Address: 0x100041EC
     */
    static const s32 cProfileID_ActorBlockClarity;
    /**
     * @brief 295
     * @par Address: 0x100041F0
     */
    static const s32 cProfileID_ActorBlockClarityRDash;
    /**
     * @brief 296
     * @par Address: 0x100041F4
     */
    static const s32 cProfileID_ActorBlockHatenaLine;
    /**
     * @brief 297
     * @par Address: 0x100041F8
     */
    static const s32 cProfileID_ActorBlockRengaLine;
    /**
     * @brief 298
     * @par Address: 0x100041FC
     */
    static const s32 cProfileID_ActorBlockGroupHatenaLine;
    /**
     * @brief 299
     * @par Address: 0x10004200
     */
    static const s32 cProfileID_ActorBlockGroupRengaLine;
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
    static const s32 cProfileID_ActorBlockHatenaRotAppear;
    /**
     * @brief 306
     * @par Address: 0x1000421C
     */
    static const s32 cProfileID_ActorBlockRengaRotAppear;
    /**
     * @brief 307
     * @par Address: 0x10004220
     */
    static const s32 cProfileID_ActorBlockHatenaFollowDisp;
    /**
     * @brief 308
     * @par Address: 0x10004224
     */
    static const s32 cProfileID_ActorBlockRengaFollowDisp;
    /**
     * @brief 309
     * @par Address: 0x10004228
     */
    static const s32 cProfileID_ActorBlockOutDrc;
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
    static const s32 cProfileID_ActorBlockSnake;
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
    static const s32 cProfileID_ActorBlockYoshiChild;
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
    static const s32 cProfileID_RouletBlock;
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
    static const s32 cProfileID_IronBoxShortCreate;
    /**
     * @brief 328
     * @par Address: 0x10004274
     */
    static const s32 cProfileID_MagicHandPaa;
    /**
     * @brief 329
     * @par Address: 0x10004278
     */
    static const s32 cProfileID_MagicHandGoo;
    /**
     * @brief 330
     * @par Address: 0x1000427C
     */
    static const s32 cProfileID_MagicHandGooRDash;
    /**
     * @brief 331
     * @par Address: 0x10004280
     */
    static const s32 cProfileID_DrcHideBlock;
    /**
     * @brief 332
     * @par Address: 0x10004284
     */
    static const s32 cProfileID_RailCreateEffectBlock;
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
    static const s32 cProfileID_GroupObjPipeRight;
    /**
     * @brief 338
     * @par Address: 0x1000429C
     */
    static const s32 cProfileID_GroupObjPipeLeft;
    /**
     * @brief 339
     * @par Address: 0x100042A0
     */
    static const s32 cProfileID_GroupObjPipeUp;
    /**
     * @brief 340
     * @par Address: 0x100042A4
     */
    static const s32 cProfileID_GroupObjPipeDown;
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
    static const s32 cProfileID_SwitchPbutton;
    /**
     * @brief 346
     * @par Address: 0x100042BC
     */
    static const s32 cProfileID_SwitchPbuttonRDash;
    /**
     * @brief 347
     * @par Address: 0x100042C0
     */
    static const s32 cProfileID_SwitchPbuttonDisSlide;
    /**
     * @brief 348
     * @par Address: 0x100042C4
     */
    static const s32 cProfileID_SwitchBossKoopaButton;
    /**
     * @brief 349
     * @par Address: 0x100042C8
     */
    static const s32 cProfileID_SwitchBossKoopaOnoButton;
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
    static const s32 cProfileID_AkoyaShellFish;
    /**
     * @brief 354
     * @par Address: 0x100042DC
     */
    static const s32 cProfileID_IceCube;
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
    static const s32 cProfileID_LiftRemoconBalanceRideOff;
    /**
     * @brief 361
     * @par Address: 0x100042F8
     */
    static const s32 cProfileID_LiftRemoconBalanceRideOffRDash;
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
    static const s32 cProfileID_LiftChangeDirByRideOn;
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
    static const s32 cProfileID_KameckIcicle;
    /**
     * @brief 369
     * @par Address: 0x10004318
     */
    static const s32 cProfileID_WendyIcicle;
    /**
     * @brief 370
     * @par Address: 0x1000431C
     */
    static const s32 cProfileID_QuakeKoopaJrClown;
    /**
     * @brief 371
     * @par Address: 0x10004320
     */
    static const s32 cProfileID_BoxingKoopaJrClown;
    /**
     * @brief 372
     * @par Address: 0x10004324
     */
    static const s32 cProfileID_KoopaJrFloor;
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
    static const s32 cProfileID_RotFireBar;
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
    static const s32 cProfileID_MetMiddle;
    /**
     * @brief 383
     * @par Address: 0x10004350
     */
    static const s32 cProfileID_Unira;
    /**
     * @brief 384
     * @par Address: 0x10004354
     */
    static const s32 cProfileID_UniraRDashNarrowBC;
    /**
     * @brief 385
     * @par Address: 0x10004358
     */
    static const s32 cProfileID_DekaUnira;
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
    static const s32 cProfileID_ActorCoinWaki;
    /**
     * @brief 394
     * @par Address: 0x1000437C
     */
    static const s32 cProfileID_ActorCoinWakiFunsuiTag;
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
    static const s32 cProfileID_ActorCoinFreezer;
    /**
     * @brief 398
     * @par Address: 0x1000438C
     */
    static const s32 cProfileID_ActorCoinObjpol;
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
    static const s32 cProfileID_ActorCoinBattleJump;
    /**
     * @brief 403
     * @par Address: 0x100043A0
     */
    static const s32 cProfileID_ActorCoinTatsunonJump;
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
    static const s32 cProfileID_ActorCoinAngleBoard;
    /**
     * @brief 407
     * @par Address: 0x100043B0
     */
    static const s32 cProfileID_ActorCoinWater;
    /**
     * @brief 408
     * @par Address: 0x100043B4
     */
    static const s32 cProfileID_ActorCoinFollowDisp;
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
    static const s32 cProfileID_ActorCoinRotAppear;
    /**
     * @brief 414
     * @par Address: 0x100043CC
     */
    static const s32 cProfileID_ActorCoinPassRotAppear;
    /**
     * @brief 415
     * @par Address: 0x100043D0
     */
    static const s32 cProfileID_ActorCoinVolt;
    /**
     * @brief 416
     * @par Address: 0x100043D4
     */
    static const s32 cProfileID_ActorCoinRotateFloor;
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
    static const s32 cProfileID_ActorCoinUnitPowBlock;
    /**
     * @brief 423
     * @par Address: 0x100043F0
     */
    static const s32 cProfileID_ActorCoinOutDrc;
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
    static const s32 cProfileID_CollectionCoinVolt;
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
    static const s32 cProfileID_CollectionCoinParentRDashEx;
    /**
     * @brief 433
     * @par Address: 0x10004418
     */
    static const s32 cProfileID_CollectionCoinParentR6C;
    /**
     * @brief 434
     * @par Address: 0x1000441C
     */
    static const s32 cProfileID_CollectionCoinSnake;
    /**
     * @brief 435
     * @par Address: 0x10004420
     */
    static const s32 cProfileID_CollectionCoinRotAppear;
    /**
     * @brief 436
     * @par Address: 0x10004424
     */
    static const s32 cProfileID_CoinWiperParent;
    /**
     * @brief 437
     * @par Address: 0x10004428
     */
    static const s32 cProfileID_CoinWiperChild;
    /**
     * @brief 438
     * @par Address: 0x1000442C
     */
    static const s32 cProfileID_CoinMakiCoin;
    /**
     * @brief 439
     * @par Address: 0x10004430
     */
    static const s32 cProfileID_FastLookCameraTag;
    /**
     * @brief 440
     * @par Address: 0x10004434
     */
    static const s32 cProfileID_BalloonProtectAreaTag;
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
    static const s32 cProfileID_PlayerTotten;
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
    static const s32 cProfileID_BubbleYoshi;
    /**
     * @brief 448
     * @par Address: 0x10004454
     */
    static const s32 cProfileID_BalloonYoshi;
    /**
     * @brief 449
     * @par Address: 0x10004458
     */
    static const s32 cProfileID_LightYoshi;
    /**
     * @brief 450
     * @par Address: 0x1000445C
     */
    static const s32 cProfileID_CloudYoshi;
    /**
     * @brief 451
     * @par Address: 0x10004460
     */
    static const s32 cProfileID_ChibiBubble;
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
    static const s32 cProfileID_WakiHipAttackActor;
    /**
     * @brief 455
     * @par Address: 0x10004470
     */
    static const s32 cProfileID_DokanNextGotoAddTimeTag;
    /**
     * @brief 456
     * @par Address: 0x10004474
     */
    static const s32 cProfileID_QuestActorTag;
    /**
     * @brief 457
     * @par Address: 0x10004478
     */
    static const s32 cProfileID_QuestDemoLocationTag;
    /**
     * @brief 458
     * @par Address: 0x1000447C
     */
    static const s32 cProfileID_QuestEscapeTag;
    /**
     * @brief 459
     * @par Address: 0x10004480
     */
    static const s32 cProfileID_Shadowkun;
    /**
     * @brief 460
     * @par Address: 0x10004484
     */
    static const s32 cProfileID_ShadowkunNoFukuro;
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
    static const s32 cProfileID_EnemyCourseShadowkun;
    /**
     * @brief 465
     * @par Address: 0x10004498
     */
    static const s32 cProfileID_TitleShadowkun;
    /**
     * @brief 466
     * @par Address: 0x1000449C
     */
    static const s32 cProfileID_BalloonHangingActor;
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
    static const s32 cProfileID_DokanFirePakkunUp;
    /**
     * @brief 484
     * @par Address: 0x100044E4
     */
    static const s32 cProfileID_DokanFirePakkunDown;
    /**
     * @brief 485
     * @par Address: 0x100044E8
     */
    static const s32 cProfileID_DokanFirePakkunLeft;
    /**
     * @brief 486
     * @par Address: 0x100044EC
     */
    static const s32 cProfileID_DokanFirePakkunRight;
    /**
     * @brief 487
     * @par Address: 0x100044F0
     */
    static const s32 cProfileID_DokanIcePakkunUp;
    /**
     * @brief 488
     * @par Address: 0x100044F4
     */
    static const s32 cProfileID_DokanIcePakkunDown;
    /**
     * @brief 489
     * @par Address: 0x100044F8
     */
    static const s32 cProfileID_DokanIcePakkunLeft;
    /**
     * @brief 490
     * @par Address: 0x100044FC
     */
    static const s32 cProfileID_DokanIcePakkunRight;
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
    static const s32 cProfileID_JimenFirePakkun;
    /**
     * @brief 496
     * @par Address: 0x10004514
     */
    static const s32 cProfileID_JimenIcePakkun;
    /**
     * @brief 497
     * @par Address: 0x10004518
     */
    static const s32 cProfileID_JimenBigPakkun;
    /**
     * @brief 498
     * @par Address: 0x1000451C
     */
    static const s32 cProfileID_JimenBigFirePakkun;
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
    static const s32 cProfileID_BlackPakkun;
    /**
     * @brief 503
     * @par Address: 0x10004530
     */
    static const s32 cProfileID_BlackPakkunOBJ;
    /**
     * @brief 504
     * @par Address: 0x10004534
     */
    static const s32 cProfileID_NiseMusa;
    /**
     * @brief 505
     * @par Address: 0x10004538
     */
    static const s32 cProfileID_Sanbo;
    /**
     * @brief 506
     * @par Address: 0x1000453C
     */
    static const s32 cProfileID_SanboDeadEl;
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
    static const s32 cProfileID_HanachanRDash;
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
    static const s32 cProfileID_NokonokoHeight;
    /**
     * @brief 514
     * @par Address: 0x1000455C
     */
    static const s32 cProfileID_NokonokoBig;
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
    static const s32 cProfileID_ReverseTogezo;
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
    static const s32 cProfileID_Bombhei;
    /**
     * @brief 522
     * @par Address: 0x1000457C
     */
    static const s32 cProfileID_BombheiPara;
    /**
     * @brief 523
     * @par Address: 0x10004580
     */
    static const s32 cProfileID_BombheiParaRDash;
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
    static const s32 cProfileID_PentaroGlass;
    /**
     * @brief 527
     * @par Address: 0x10004590
     */
    static const s32 cProfileID_WakiPentaro;
    /**
     * @brief 528
     * @par Address: 0x10004594
     */
    static const s32 cProfileID_HoneMet;
    /**
     * @brief 529
     * @par Address: 0x10004598
     */
    static const s32 cProfileID_HoneMetHead;
    /**
     * @brief 530
     * @par Address: 0x1000459C
     */
    static const s32 cProfileID_Pukupuku;
    /**
     * @brief 531
     * @par Address: 0x100045A0
     */
    static const s32 cProfileID_PukupukuGroup;
    /**
     * @brief 532
     * @par Address: 0x100045A4
     */
    static const s32 cProfileID_PukupukuMiddle;
    /**
     * @brief 533
     * @par Address: 0x100045A8
     */
    static const s32 cProfileID_PukupukuMiddleGroup;
    /**
     * @brief 534
     * @par Address: 0x100045AC
     */
    static const s32 cProfileID_PukupukuSearch;
    /**
     * @brief 535
     * @par Address: 0x100045B0
     */
    static const s32 cProfileID_PukupukuSearchMiddle;
    /**
     * @brief 536
     * @par Address: 0x100045B4
     */
    static const s32 cProfileID_PukupukuEscape;
    /**
     * @brief 537
     * @par Address: 0x100045B8
     */
    static const s32 cProfileID_PukupukuEscapeMiddle;
    /**
     * @brief 538
     * @par Address: 0x100045BC
     */
    static const s32 cProfileID_PukupukuMecha;
    /**
     * @brief 539
     * @par Address: 0x100045C0
     */
    static const s32 cProfileID_PukupukuToge;
    /**
     * @brief 540
     * @par Address: 0x100045C4
     */
    static const s32 cProfileID_Tobipuku;
    /**
     * @brief 541
     * @par Address: 0x100045C8
     */
    static const s32 cProfileID_TobipukuMecha;
    /**
     * @brief 542
     * @par Address: 0x100045CC
     */
    static const s32 cProfileID_WakiPukupuku;
    /**
     * @brief 543
     * @par Address: 0x100045D0
     */
    static const s32 cProfileID_WakiPukupukuSearch;
    /**
     * @brief 544
     * @par Address: 0x100045D4
     */
    static const s32 cProfileID_WakiPukupukuEscape;
    /**
     * @brief 545
     * @par Address: 0x100045D8
     */
    static const s32 cProfileID_WakiTobipuku;
    /**
     * @brief 546
     * @par Address: 0x100045DC
     */
    static const s32 cProfileID_WakiTobipukuMecha;
    /**
     * @brief 547
     * @par Address: 0x100045E0
     */
    static const s32 cProfileID_PukupukuParent;
    /**
     * @brief 548
     * @par Address: 0x100045E4
     */
    static const s32 cProfileID_FishBone;
    /**
     * @brief 549
     * @par Address: 0x100045E8
     */
    static const s32 cProfileID_Fugumannen;
    /**
     * @brief 550
     * @par Address: 0x100045EC
     */
    static const s32 cProfileID_FugumannenBig;
    /**
     * @brief 551
     * @par Address: 0x100045F0
     */
    static const s32 cProfileID_WakiFugumannen;
    /**
     * @brief 552
     * @par Address: 0x100045F4
     */
    static const s32 cProfileID_WakiFugumannenBig;
    /**
     * @brief 553
     * @par Address: 0x100045F8
     */
    static const s32 cProfileID_JellyFish;
    /**
     * @brief 554
     * @par Address: 0x100045FC
     */
    static const s32 cProfileID_ChochinAnkoh;
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
    static const s32 cProfileID_Gorogoro;
    /**
     * @brief 563
     * @par Address: 0x10004620
     */
    static const s32 cProfileID_GorogoroBig;
    /**
     * @brief 564
     * @par Address: 0x10004624
     */
    static const s32 cProfileID_GorogoroBigRDash;
    /**
     * @brief 565
     * @par Address: 0x10004628
     */
    static const s32 cProfileID_CheckPointFlag;
    /**
     * @brief 566
     * @par Address: 0x1000462C
     */
    static const s32 cProfileID_BigPileUnder;
    /**
     * @brief 567
     * @par Address: 0x10004630
     */
    static const s32 cProfileID_BigPileUpper;
    /**
     * @brief 568
     * @par Address: 0x10004634
     */
    static const s32 cProfileID_BigPileRight;
    /**
     * @brief 569
     * @par Address: 0x10004638
     */
    static const s32 cProfileID_BigPileLeft;
    /**
     * @brief 570
     * @par Address: 0x1000463C
     */
    static const s32 cProfileID_SuperBigPileRight;
    /**
     * @brief 571
     * @par Address: 0x10004640
     */
    static const s32 cProfileID_SuperBigPileLeft;
    /**
     * @brief 572
     * @par Address: 0x10004644
     */
    static const s32 cProfileID_KazandanMgr;
    /**
     * @brief 573
     * @par Address: 0x10004648
     */
    static const s32 cProfileID_WakiKazandan;
    /**
     * @brief 574
     * @par Address: 0x1000464C
     */
    static const s32 cProfileID_Kazandan;
    /**
     * @brief 575
     * @par Address: 0x10004650
     */
    static const s32 cProfileID_ZoomKun;
    /**
     * @brief 576
     * @par Address: 0x10004654
     */
    static const s32 cProfileID_ZoomKunRDash;
    /**
     * @brief 577
     * @par Address: 0x10004658
     */
    static const s32 cProfileID_LimitSpeedKun;
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
    static const s32 cProfileID_LrStopUp;
    /**
     * @brief 581
     * @par Address: 0x10004668
     */
    static const s32 cProfileID_LrStopDw;
    /**
     * @brief 582
     * @par Address: 0x1000466C
     */
    static const s32 cProfileID_HyperMaxUeLeft;
    /**
     * @brief 583
     * @par Address: 0x10004670
     */
    static const s32 cProfileID_HyperMaxUeRight;
    /**
     * @brief 584
     * @par Address: 0x10004674
     */
    static const s32 cProfileID_AutoScrollTag;
    /**
     * @brief 585
     * @par Address: 0x10004678
     */
    static const s32 cProfileID_ScrollTag;
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
    static const s32 cProfileID_EnvTag;
    /**
     * @brief 589
     * @par Address: 0x10004688
     */
    static const s32 cProfileID_FlowerKindTag;
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
    static const s32 cProfileID_ThreeUpMoon;
    /**
     * @brief 600
     * @par Address: 0x100046B4
     */
    static const s32 cProfileID_TitleDemoItem;
    /**
     * @brief 601
     * @par Address: 0x100046B8
     */
    static const s32 cProfileID_SeaWeed;
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
    static const s32 cProfileID_ChoropooHole;
    /**
     * @brief 612
     * @par Address: 0x100046E4
     */
    static const s32 cProfileID_Basabasa;
    /**
     * @brief 613
     * @par Address: 0x100046E8
     */
    static const s32 cProfileID_TorchLight;
    /**
     * @brief 614
     * @par Address: 0x100046EC
     */
    static const s32 cProfileID_WakiDokan;
    /**
     * @brief 615
     * @par Address: 0x100046F0
     */
    static const s32 cProfileID_FlyingKinokoWaki;
    /**
     * @brief 616
     * @par Address: 0x100046F4
     */
    static const s32 cProfileID_ManholePuu;
    /**
     * @brief 617
     * @par Address: 0x100046F8
     */
    static const s32 cProfileID_Spana;
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
    static const s32 cProfileID_JugemCloud;
    /**
     * @brief 621
     * @par Address: 0x10004708
     */
    static const s32 cProfileID_JugemCloudCoin;
    /**
     * @brief 622
     * @par Address: 0x1000470C
     */
    static const s32 cProfileID_JugemCloudMultiPlay;
    /**
     * @brief 623
     * @par Address: 0x10004710
     */
    static const s32 cProfileID_JugemBody;
    /**
     * @brief 624
     * @par Address: 0x10004714
     */
    static const s32 cProfileID_JugemBodyMultiPlay;
    /**
     * @brief 625
     * @par Address: 0x10004718
     */
    static const s32 cProfileID_WakiJugem;
    /**
     * @brief 626
     * @par Address: 0x1000471C
     */
    static const s32 cProfileID_WakiJugemMultiPlay;
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
    static const s32 cProfileID_MagnumSearchKiller;
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
    static const s32 cProfileID_Dossun;
    /**
     * @brief 636
     * @par Address: 0x10004744
     */
    static const s32 cProfileID_BigDossun;
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
    static const s32 cProfileID_GabonJochu;
    /**
     * @brief 640
     * @par Address: 0x10004754
     */
    static const s32 cProfileID_GabonBall;
    /**
     * @brief 641
     * @par Address: 0x10004758
     */
    static const s32 cProfileID_RockGabon;
    /**
     * @brief 642
     * @par Address: 0x1000475C
     */
    static const s32 cProfileID_RockGabonJochu;
    /**
     * @brief 643
     * @par Address: 0x10004760
     */
    static const s32 cProfileID_RockGabonBall;
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
    static const s32 cProfileID_GroupChorobon;
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
    static const s32 cProfileID_UnabonCheckPoint;
    /**
     * @brief 661
     * @par Address: 0x100047A8
     */
    static const s32 cProfileID_UnabonDokan;
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
    static const s32 cProfileID_KKJochu;
    /**
     * @brief 667
     * @par Address: 0x100047C0
     */
    static const s32 cProfileID_KKLift;
    /**
     * @brief 668
     * @par Address: 0x100047C4
     */
    static const s32 cProfileID_KKThunder;
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
    static const s32 cProfileID_GroupTogeMet;
    /**
     * @brief 678
     * @par Address: 0x100047EC
     */
    static const s32 cProfileID_Bunbun;
    /**
     * @brief 679
     * @par Address: 0x100047F0
     */
    static const s32 cProfileID_BunbunW2;
    /**
     * @brief 680
     * @par Address: 0x100047F4
     */
    static const s32 cProfileID_BunbunW3;
    /**
     * @brief 681
     * @par Address: 0x100047F8
     */
    static const s32 cProfileID_BunbunW4;
    /**
     * @brief 682
     * @par Address: 0x100047FC
     */
    static const s32 cProfileID_BunbunW5;
    /**
     * @brief 683
     * @par Address: 0x10004800
     */
    static const s32 cProfileID_BunbunW6;
    /**
     * @brief 684
     * @par Address: 0x10004804
     */
    static const s32 cProfileID_BunbunDemo;
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
    static const s32 cProfileID_QuakeKoopaJrDemo;
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
    static const s32 cProfileID_KokoopaFire;
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
    static const s32 cProfileID_MortonSanboEl;
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
    static const s32 cProfileID_LudwigCopy;
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
    static const s32 cProfileID_RoyLift;
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
    static const s32 cProfileID_KameckIciclePos;
    /**
     * @brief 712
     * @par Address: 0x10004874
     */
    static const s32 cProfileID_KameckPos;
    /**
     * @brief 713
     * @par Address: 0x10004878
     */
    static const s32 cProfileID_KameckMagic;
    /**
     * @brief 714
     * @par Address: 0x1000487C
     */
    static const s32 cProfileID_QuakeKoopaJr;
    /**
     * @brief 715
     * @par Address: 0x10004880
     */
    static const s32 cProfileID_Koopa;
    /**
     * @brief 716
     * @par Address: 0x10004884
     */
    static const s32 cProfileID_WakiKoopaFire;
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
    static const s32 cProfileID_BunbunDemoKameck;
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
    static const s32 cProfileID_FinalDVPeachShutter;
    /**
     * @brief 739
     * @par Address: 0x100048E0
     */
    static const s32 cProfileID_SpModeResDemoPeach;
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
    static const s32 cProfileID_KanbanArrowRDashEx;
    /**
     * @brief 743
     * @par Address: 0x100048F0
     */
    static const s32 cProfileID_LuigiKanban;
    /**
     * @brief 744
     * @par Address: 0x100048F4
     */
    static const s32 cProfileID_LuigiKanbanNine;
    /**
     * @brief 745
     * @par Address: 0x100048F8
     */
    static const s32 cProfileID_MovingFlower;
    /**
     * @brief 746
     * @par Address: 0x100048FC
     */
    static const s32 cProfileID_DvputFlower;
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
    static const s32 cProfileID_ElectricKoopa;
    /**
     * @brief 769
     * @par Address: 0x10004958
     */
    static const s32 cProfileID_ElectricSingleKoopa;
    /**
     * @brief 770
     * @par Address: 0x1000495C
     */
    static const s32 cProfileID_ElectricShock;
    /**
     * @brief 771
     * @par Address: 0x10004960
     */
    static const s32 cProfileID_Koton;
    /**
     * @brief 772
     * @par Address: 0x10004964
     */
    static const s32 cProfileID_GroupKoton;
    /**
     * @brief 773
     * @par Address: 0x10004968
     */
    static const s32 cProfileID_RotDokanFirePakkun;
    /**
     * @brief 774
     * @par Address: 0x1000496C
     */
    static const s32 cProfileID_RotDokanPakkunUp;
    /**
     * @brief 775
     * @par Address: 0x10004970
     */
    static const s32 cProfileID_RotDokanPakkunDown;
    /**
     * @brief 776
     * @par Address: 0x10004974
     */
    static const s32 cProfileID_RotDokanPakkunLeft;
    /**
     * @brief 777
     * @par Address: 0x10004978
     */
    static const s32 cProfileID_RotDokanPakkunRight;
    /**
     * @brief 778
     * @par Address: 0x1000497C
     */
    static const s32 cProfileID_Icicle;
    /**
     * @brief 779
     * @par Address: 0x10004980
     */
    static const s32 cProfileID_IcicleFixed;
    /**
     * @brief 780
     * @par Address: 0x10004984
     */
    static const s32 cProfileID_Teresa;
    /**
     * @brief 781
     * @par Address: 0x10004988
     */
    static const s32 cProfileID_TeresaBig;
    /**
     * @brief 782
     * @par Address: 0x1000498C
     */
    static const s32 cProfileID_TeresaRot;
    /**
     * @brief 783
     * @par Address: 0x10004990
     */
    static const s32 cProfileID_TeresaRotParent;
    /**
     * @brief 784
     * @par Address: 0x10004994
     */
    static const s32 cProfileID_TeresaRotParentRDash;
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
    static const s32 cProfileID_DarkCloud;
    /**
     * @brief 789
     * @par Address: 0x100049A8
     */
    static const s32 cProfileID_CloudLt;
    /**
     * @brief 790
     * @par Address: 0x100049AC
     */
    static const s32 cProfileID_BubbleControl;
    /**
     * @brief 791
     * @par Address: 0x100049B0
     */
    static const s32 cProfileID_ObjSnow;
    /**
     * @brief 792
     * @par Address: 0x100049B4
     */
    static const s32 cProfileID_ObjSpark;
    /**
     * @brief 793
     * @par Address: 0x100049B8
     */
    static const s32 cProfileID_TagWind;
    /**
     * @brief 794
     * @par Address: 0x100049BC
     */
    static const s32 cProfileID_TagFrame;
    /**
     * @brief 795
     * @par Address: 0x100049C0
     */
    static const s32 cProfileID_ShadowHouseReadTag;
    /**
     * @brief 796
     * @par Address: 0x100049C4
     */
    static const s32 cProfileID_TitleDemoTag;
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
    static const s32 cProfileID_LiftHurikoYoganCenter;
    /**
     * @brief 802
     * @par Address: 0x100049DC
     */
    static const s32 cProfileID_Guruguru;
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
    static const s32 cProfileID_TottenGoalItem;
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
    static const s32 cProfileID_TorpedoTag;
    /**
     * @brief 815
     * @par Address: 0x10004A10
     */
    static const s32 cProfileID_NormalTorpedo;
    /**
     * @brief 816
     * @par Address: 0x10004A14
     */
    static const s32 cProfileID_GroupTorpedo;
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
    static const s32 cProfileID_WaterKoopaJr;
    /**
     * @brief 821
     * @par Address: 0x10004A28
     */
    static const s32 cProfileID_WaterKoopaJrClown;
    /**
     * @brief 822
     * @par Address: 0x10004A2C
     */
    static const s32 cProfileID_WaterKoopaJrPos;
    /**
     * @brief 823
     * @par Address: 0x10004A30
     */
    static const s32 cProfileID_BoxingKoopaJr;
    /**
     * @brief 824
     * @par Address: 0x10004A34
     */
    static const s32 cProfileID_DemoBoxingKoopaJr;
    /**
     * @brief 825
     * @par Address: 0x10004A38
     */
    static const s32 cProfileID_DemoBoxingKoopaJrClown;
    /**
     * @brief 826
     * @par Address: 0x10004A3C
     */
    static const s32 cProfileID_MiniGamePanel;
    /**
     * @brief 827
     * @par Address: 0x10004A40
     */
    static const s32 cProfileID_SlotItem;
    /**
     * @brief 828
     * @par Address: 0x10004A44
     */
    static const s32 cProfileID_CoinMakiCannon;
    /**
     * @brief 829
     * @par Address: 0x10004A48
     */
    static const s32 cProfileID_CoinMakiItem;
    /**
     * @brief 830
     * @par Address: 0x10004A4C
     */
    static const s32 cProfileID_MiniGameKinopio;
    /**
     * @brief 831
     * @par Address: 0x10004A50
     */
    static const s32 cProfileID_PeaPlant;
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
    static const s32 cProfileID_WaterBubble;
    /**
     * @brief 838
     * @par Address: 0x10004A6C
     */
    static const s32 cProfileID_FlyingPlayerReferTag;
    /**
     * @brief 839
     * @par Address: 0x10004A70
     */
    static const s32 cProfileID_PlayerSidePressTag;
    /**
     * @brief 840
     * @par Address: 0x10004A74
     */
    static const s32 cProfileID_StaffRollChibiYoshiBubble;
    /**
     * @brief 841
     * @par Address: 0x10004A78
     */
    static const s32 cProfileID_StaffRollChibiYoshiBalloon;
    /**
     * @brief 842
     * @par Address: 0x10004A7C
     */
    static const s32 cProfileID_StaffRollChibiYoshiBalloonEndGlad;
    /**
     * @brief 843
     * @par Address: 0x10004A80
     */
    static const s32 cProfileID_StaffRollChibiYoshiLight;
    /**
     * @brief 844
     * @par Address: 0x10004A84
     */
    static const s32 cProfileID_StaffRollChibiYoshiLightEndGlad;
    /**
     * @brief 845
     * @par Address: 0x10004A88
     */
    static const s32 cProfileID_StaffRollChibiBubbleLetter;
    /**
     * @brief 846
     * @par Address: 0x10004A8C
     */
    static const s32 cProfileID_StaffRollChibiBubbleExtra;
    /**
     * @brief 847
     * @par Address: 0x10004A90
     */
    static const s32 cProfileID_StaffRollShadowkun;
    /**
     * @brief 848
     * @par Address: 0x10004A94
     */
    static const s32 cProfileID_DrcTouchLight;
    /**
     * @brief 849
     * @par Address: 0x10004A98
     */
    static const s32 cProfileID_TouchNonActor;
    /**
     * @brief 850
     * @par Address: 0x10004A9C
     */
    static const s32 cProfileID_EditCoinActorSetTag;
    /**
     * @brief 851
     * @par Address: 0x10004AA0
     */
    static const s32 cProfileID_FeverEffectActor;
    /**
     * @brief 852
     * @par Address: 0x10004AA4
     */
    static const s32 cProfileID_FeverStar;
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
    static const s32 cProfileID_CourseSelectPlayer2P;
    /**
     * @brief 856
     * @par Address: 0x10004AB4
     */
    static const s32 cProfileID_CourseSelectPlayerEgg;
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
    static const s32 cProfileID_CourseSelectWarpCannon;
    /**
     * @brief 867
     * @par Address: 0x10004AE0
     */
    static const s32 cProfileID_CourseSelectW8DarkCloud;
    /**
     * @brief 868
     * @par Address: 0x10004AE4
     */
    static const s32 cProfileID_CourseSelectGhostHouse;
    /**
     * @brief 869 (The Japanese Profile name says "Hammer Bros" LOL)
     * @par Address: 0x10004AE8
     */
    static const s32 cProfileID_CourseSelectW2Bros;
    /**
     * @brief 870
     * @par Address: 0x10004AEC
     */
    static const s32 cProfileID_CourseSelectShipLemmy;
    /**
     * @brief 871
     * @par Address: 0x10004AF0
     */
    static const s32 cProfileID_CourseSelectShipMorton;
    /**
     * @brief 872
     * @par Address: 0x10004AF4
     */
    static const s32 cProfileID_CourseSelectShipLarry;
    /**
     * @brief 873
     * @par Address: 0x10004AF8
     */
    static const s32 cProfileID_CourseSelectShipWendy;
    /**
     * @brief 874
     * @par Address: 0x10004AFC
     */
    static const s32 cProfileID_CourseSelectShipIggy;
    /**
     * @brief 875
     * @par Address: 0x10004B00
     */
    static const s32 cProfileID_CourseSelectShipRoy;
    /**
     * @brief 876
     * @par Address: 0x10004B04
     */
    static const s32 cProfileID_CourseSelectShipLudwig;
    /**
     * @brief 877
     * @par Address: 0x10004B08
     */
    static const s32 cProfileID_CourseSelectShipKoopaJr;
    /**
     * @brief 878
     * @par Address: 0x10004B0C
     */
    static const s32 cProfileID_CourseSelectShipBoroKoopaJr;
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
    static const s32 cProfileID_CourseSelectReportKinopio;
    /**
     * @brief 887
     * @par Address: 0x10004B30
     */
    static const s32 cProfileID_CourseSelectTobipuku;
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
    static const s32 cProfileID_CourseSelectFlagPeach;
    /**
     * @brief 892
     * @par Address: 0x10004B44
     */
    static const s32 cProfileID_CourseSelectMusasabi;
    /**
     * @brief 893
     * @par Address: 0x10004B48
     */
    static const s32 cProfileID_CourseSelectWaterPillar;
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
    static const s32 cProfileID_CourseSelectPentaro;
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
    static const s32 cProfileID_CourseSelectShadowIcon;
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
    static const s32 cProfileID_CourseSelectShadowkun;
    /**
     * @brief 904
     * @par Address: 0x10004B74
     */
    static const s32 cProfileID_CourseSelectLineTrain;
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
    /**
     * @brief 910
     * @par Address: Deleted
     */
    static const s32 cProfileID_SampleActor;
    /**
     * @brief 911
     * @par Address: Deleted
     */
    static const s32 cProfileID_SampleChildActor;
    /**
     * @brief 912
     * @par Address: Deleted
     */
    static const s32 cProfileID_SampleTag;
};
