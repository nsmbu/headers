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
        cDrawPriority_1B9                                       =   0,
        cDrawPriority_PlayerObject                              =   1,
        cDrawPriority_TottenPlayer                              =   2,
        cDrawPriority_Yoshi                                     =   3,
        cDrawPriority_1BD                                       =   4,
        cDrawPriority_Kuribo                                    =   5,
        cDrawPriority_Kakibo                                    =   6,
        cDrawPriority_PataKuribo                                =   7,
        cDrawPriority_1D6                                       =   8,
        cDrawPriority_1D7                                       =   9,
        cDrawPriority_1D8                                       =  10,
        cDrawPriority_1D9                                       =  11,
        cDrawPriority_IceBall                                   =  12,
        cDrawPriority_IceBallPakkun                             =  13,
        cDrawPriority_FireBallPlayer                            =  14,
        cDrawPriority_FireBallPakkun                            =  15,
        cDrawPriority_YoshiFire                                 =  16,
        cDrawPriority_1DF                                       =  17,
        cDrawPriority_1E0                                       =  18,
        cDrawPriority_1E1                                       =  19,
        cDrawPriority_1E2                                       =  20,
        cDrawPriority_305                                       =  21,
        cDrawPriority_306                                       =  22,
        cDrawPriority_307                                       =  23,
        cDrawPriority_308                                       =  24,
        cDrawPriority_309                                       =  25,
        cDrawPriority_1E3                                       =  26,
        cDrawPriority_1E4                                       =  27,
        cDrawPriority_1E5                                       =  28,
        cDrawPriority_1E6                                       =  29,
        cDrawPriority_1E7                                       =  30,
        cDrawPriority_1E8                                       =  31,
        cDrawPriority_1E9                                       =  32,
        cDrawPriority_1EA                                       =  33,
        cDrawPriority_1EB                                       =  34,
        cDrawPriority_1EC                                       =  35,
        cDrawPriority_1ED                                       =  36,
        cDrawPriority_1EE                                       =  37,
        cDrawPriority_1EF                                       =  38,
        cDrawPriority_1F0                                       =  39,
        cDrawPriority_1F1                                       =  40,
        cDrawPriority_1F2                                       =  41,
        cDrawPriority_1F3                                       =  42,
        cDrawPriority_1F4                                       =  43,
        cDrawPriority_1F5                                       =  44,
        cDrawPriority_1F6                                       =  45,
        cDrawPriority_1F7                                       =  46,
        cDrawPriority_11B                                       =  47,
        cDrawPriority_14D                                       =  48,
        cDrawPriority_14E                                       =  49,
        cDrawPriority_14F                                       =  50,
        cDrawPriority_ObjPipeDown                               =  51,
        cDrawPriority_151                                       =  52,
        cDrawPriority_152                                       =  53,
        cDrawPriority_153                                       =  54,
        cDrawPriority_ObjPipeDownGroup                          =  55,
        cDrawPriority_082                                       =  56,
        cDrawPriority_083                                       =  57,
        cDrawPriority_084                                       =  58,
        cDrawPriority_085                                       =  59,
        cDrawPriority_155                                       =  60,
        cDrawPriority_156                                       =  61,
        cDrawPriority_157                                       =  62,
        cDrawPriority_ObjPipeDownNG                             =  63,
        cDrawPriority_087                                       =  64,
        cDrawPriority_088                                       =  65,
        cDrawPriority_089                                       =  66,
        cDrawPriority_08A                                       =  67,
        cDrawPriority_08B                                       =  68,
        cDrawPriority_08C                                       =  69,
        cDrawPriority_08D                                       =  70,
        cDrawPriority_08E                                       =  71,
        cDrawPriority_05F                                       =  72,
        cDrawPriority_060                                       =  73,
        cDrawPriority_061                                       =  74,
        cDrawPriority_102                                       =  75,
        cDrawPriority_08F                                       =  76,
        cDrawPriority_090                                       =  77,
        cDrawPriority_062                                       =  78,
        cDrawPriority_063                                       =  79,
        cDrawPriority_05C                                       =  80,
        cDrawPriority_05D                                       =  81,
        cDrawPriority_05E                                       =  82,
        cDrawPriority_064                                       =  83,
        cDrawPriority_091                                       =  84,
        cDrawPriority_092                                       =  85,
        cDrawPriority_1FF                                       =  86,
        cDrawPriority_Nokonoko                                  =  87,
        cDrawPriority_201                                       =  88,
        cDrawPriority_202                                       =  89,
        cDrawPriority_203                                       =  90,
        cDrawPriority_204                                       =  91,
        cDrawPriority_17D                                       =  92,
        cDrawPriority_17E                                       =  93,
        cDrawPriority_205                                       =  94,
        cDrawPriority_206                                       =  95,
        cDrawPriority_208                                       =  96,
        cDrawPriority_207                                       =  97,
        cDrawPriority_209                                       =  98,
        cDrawPriority_20A                                       =  99,
        cDrawPriority_20B                                       = 100,
        cDrawPriority_MechaKoopa                                = 101,
        cDrawPriority_20D                                       = 102,
        cDrawPriority_20E                                       = 103,
        cDrawPriority_PentaroIce                                = 104,
        cDrawPriority_210                                       = 105,
        cDrawPriority_211                                       = 106,
        cDrawPriority_212                                       = 107,
        cDrawPriority_213                                       = 108,
        cDrawPriority_214                                       = 109,
        cDrawPriority_215                                       = 110,
        cDrawPriority_216                                       = 111,
        cDrawPriority_217                                       = 112,
        cDrawPriority_218                                       = 113,
        cDrawPriority_219                                       = 114,
        cDrawPriority_21A                                       = 115,
        cDrawPriority_21B                                       = 116,
        cDrawPriority_21C                                       = 117,
        cDrawPriority_21D                                       = 118,
        cDrawPriority_224                                       = 119,
        cDrawPriority_17F                                       = 120,
        cDrawPriority_180                                       = 121,
        cDrawPriority_181                                       = 122,
        cDrawPriority_182                                       = 123,
        cDrawPriority_225                                       = 124,
        cDrawPriority_226                                       = 125,
        cDrawPriority_229                                       = 126,
        cDrawPriority_22A                                       = 127,
        cDrawPriority_FireBar                                   = 128,
        cDrawPriority_FireBarSync                               = 129,
        cDrawPriority_179                                       = 130,
        cDrawPriority_17A                                       = 131,
        cDrawPriority_Burner                                    = 132,
        cDrawPriority_0E1                                       = 133,
        cDrawPriority_0E2                                       = 134,
        cDrawPriority_0E3                                       = 135,
        cDrawPriority_0EB                                       = 136,
        cDrawPriority_22C                                       = 137,
        cDrawPriority_22D                                       = 138,
        cDrawPriority_FireBallKeronpa                           = 139,
        cDrawPriority_FireBallKeronpaRDash                      = 140,
        cDrawPriority_FireSnake                                 = 141,
        cDrawPriority_27D                                       = 142,
        cDrawPriority_27E                                       = 143,
        cDrawPriority_27F                                       = 144,
        cDrawPriority_GabonRock                                 = 145,
        cDrawPriority_281                                       = 146,
        cDrawPriority_282                                       = 147,
        cDrawPriority_RockGabonRock                             = 148,
        cDrawPriority_284                                       = 149,
        cDrawPriority_SeichanSnowBall                           = 150,
        cDrawPriority_286                                       = 151,
        cDrawPriority_232                                       = 152,
        cDrawPriority_233                                       = 153,
        cDrawPriority_234                                       = 154,
        cDrawPriority_236                                       = 155,
        cDrawPriority_237                                       = 156,
        cDrawPriority_238                                       = 157,
        cDrawPriority_239                                       = 158,
        cDrawPriority_23A                                       = 159,
        cDrawPriority_23B                                       = 160,
        cDrawPriority_23C                                       = 161,
        cDrawPriority_23D                                       = 162,
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
        cDrawPriority_PeachFinalCastleKoopaJrLiftHmove          = 200,
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
        cDrawPriority_033                                       = 218,
        cDrawPriority_0AD                                       = 219,
        cDrawPriority_0AE                                       = 220,
        cDrawPriority_0AF                                       = 221,
        cDrawPriority_0B0                                       = 222,
        cDrawPriority_0B1                                       = 223,
        cDrawPriority_050                                       = 224,
        cDrawPriority_17C                                       = 225,
        cDrawPriority_051                                       = 226,
        cDrawPriority_235                                       = 227,
        cDrawPriority_16D                                       = 228,
        cDrawPriority_Block                                     = 229,
        cDrawPriority_1BE                                       = 230,
        cDrawPriority_1BF                                       = 231,
        cDrawPriority_1C4                                       = 232,
        cDrawPriority_1C3                                       = 233,
        cDrawPriority_1C0                                       = 234,
        cDrawPriority_1C1                                       = 235,
        cDrawPriority_1C2                                       = 236,
        cDrawPriority_1C7                                       = 237,
        cDrawPriority_1C8                                       = 238,
        cDrawPriority_1C9                                       = 239,
        cDrawPriority_1CA                                       = 240,
        cDrawPriority_1CB                                       = 241,
        cDrawPriority_1CC                                       = 242,
        cDrawPriority_1CD                                       = 243,
        cDrawPriority_1CE                                       = 244,
        cDrawPriority_QuestPrizeItem                            = 245,
        cDrawPriority_1D0                                       = 246,
        cDrawPriority_1D1                                       = 247,
        cDrawPriority_183                                       = 248,
        cDrawPriority_184                                       = 249,
        cDrawPriority_185                                       = 250,
        cDrawPriority_186                                       = 251,
        cDrawPriority_22B                                       = 252,
        cDrawPriority_187                                       = 253,
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
        cDrawPriority_097                                       = 266,
        cDrawPriority_036                                       = 267,
        cDrawPriority_037                                       = 268,
        cDrawPriority_038                                       = 269,
        cDrawPriority_039                                       = 270,
        cDrawPriority_03A                                       = 271,
        cDrawPriority_03B                                       = 272,
        cDrawPriority_PairObjChild                              = 273,
        cDrawPriority_03D                                       = 274,
        cDrawPriority_03E                                       = 275,
        cDrawPriority_03F                                       = 276,
        cDrawPriority_040                                       = 277,
        cDrawPriority_041                                       = 278,
        cDrawPriority_042                                       = 279,
        cDrawPriority_043                                       = 280,
        cDrawPriority_044                                       = 281,
        cDrawPriority_045                                       = 282,
        cDrawPriority_046                                       = 283,
        cDrawPriority_047                                       = 284,
        cDrawPriority_048                                       = 285,
        cDrawPriority_049                                       = 286,
        cDrawPriority_04A                                       = 287,
        cDrawPriority_04B                                       = 288,
        cDrawPriority_04C                                       = 289,
        cDrawPriority_188                                       = 290,
        cDrawPriority_113                                       = 291,
        cDrawPriority_114                                       = 292,
        cDrawPriority_115                                       = 293,
        cDrawPriority_116                                       = 294,
        cDrawPriority_2E4                                       = 295,
        cDrawPriority_2E5                                       = 296,
        cDrawPriority_2E6                                       = 297,
        cDrawPriority_2E7                                       = 298,
        cDrawPriority_2E8                                       = 299,
        cDrawPriority_2E9                                       = 300,
        cDrawPriority_2EA                                       = 301,
        cDrawPriority_259                                       = 302,
        cDrawPriority_2EE                                       = 303,
        cDrawPriority_2EF                                       = 304,
        cDrawPriority_2F0                                       = 305,
        cDrawPriority_2F1                                       = 306,
        cDrawPriority_2F2                                       = 307,
        cDrawPriority_02B                                       = 308,
        cDrawPriority_02C                                       = 309,
        cDrawPriority_25A                                       = 310,
        cDrawPriority_25B                                       = 311,
        cDrawPriority_25C                                       = 312,
        cDrawPriority_25D                                       = 313,
        cDrawPriority_25E                                       = 314,
        cDrawPriority_25F                                       = 315,
        cDrawPriority_260                                       = 316,
        cDrawPriority_261                                       = 317,
        cDrawPriority_1AA                                       = 318,
        cDrawPriority_1AB                                       = 319,
        cDrawPriority_1AC                                       = 320,
        cDrawPriority_1AD                                       = 321,
        cDrawPriority_1AE                                       = 322,
        cDrawPriority_1AF                                       = 323,
        cDrawPriority_1B0                                       = 324,
        cDrawPriority_1B1                                       = 325,
        cDrawPriority_1B2                                       = 326,
        cDrawPriority_1B3                                       = 327,
        cDrawPriority_076                                       = 328,
        cDrawPriority_077                                       = 329,
        cDrawPriority_078                                       = 330,
        cDrawPriority_1B5                                       = 331,
        cDrawPriority_1B4                                       = 332,
        cDrawPriority_262                                       = 333,
        cDrawPriority_263                                       = 334,
        cDrawPriority_2F3                                       = 335,
        cDrawPriority_0BF                                       = 336,
        cDrawPriority_0C0                                       = 337,
        cDrawPriority_0C1                                       = 338,
        cDrawPriority_Hammer                                    = 339,
        cDrawPriority_2F5                                       = 340,
        cDrawPriority_Boomerang                                 = 341,
        cDrawPriority_2F7                                       = 342,
        cDrawPriority_FireBallBros                              = 343,
        cDrawPriority_2F9                                       = 344,
        cDrawPriority_IceBallBros                               = 345,
        cDrawPriority_2FB                                       = 346,
        cDrawPriority_MegaHammer                                = 347,
        cDrawPriority_2FD                                       = 348,
        cDrawPriority_2FF                                       = 349,
        cDrawPriority_300                                       = 350,
        cDrawPriority_301                                       = 351,
        cDrawPriority_121                                       = 352,
        cDrawPriority_122                                       = 353,
        cDrawPriority_ActorBlockRenga                           = 354,
        cDrawPriority_124                                       = 355,
        cDrawPriority_125                                       = 356,
        cDrawPriority_126                                       = 357,
        cDrawPriority_127                                       = 358,
        cDrawPriority_128                                       = 359,
        cDrawPriority_129                                       = 360,
        cDrawPriority_12A                                       = 361,
        cDrawPriority_12B                                       = 362,
        cDrawPriority_12C                                       = 363,
        cDrawPriority_12D                                       = 364,
        cDrawPriority_12E                                       = 365,
        cDrawPriority_12F                                       = 366,
        cDrawPriority_130                                       = 367,
        cDrawPriority_131                                       = 368,
        cDrawPriority_132                                       = 369,
        cDrawPriority_133                                       = 370,
        cDrawPriority_134                                       = 371,
        cDrawPriority_13F                                       = 372,
        cDrawPriority_140                                       = 373,
        cDrawPriority_ActorBlockMakeDRC                         = 374,
        cDrawPriority_136                                       = 375,
        cDrawPriority_137                                       = 376,
        cDrawPriority_138                                       = 377,
        cDrawPriority_13A                                       = 378,
        cDrawPriority_13B                                       = 379,
        cDrawPriority_0E4                                       = 380,
        cDrawPriority_0F5                                       = 381,
        cDrawPriority_0F6                                       = 382,
        cDrawPriority_0F7                                       = 383,
        cDrawPriority_0F8                                       = 384,
        cDrawPriority_0F9                                       = 385,
        cDrawPriority_139                                       = 386,
        cDrawPriority_13C                                       = 387,
        cDrawPriority_13D                                       = 388,
        cDrawPriority_13E                                       = 389,
        cDrawPriority_141                                       = 390,
        cDrawPriority_142                                       = 391,
        cDrawPriority_143                                       = 392,
        cDrawPriority_14B                                       = 393,
        cDrawPriority_ActorCoin                                 = 394,
        cDrawPriority_18C                                       = 395,
        cDrawPriority_18D                                       = 396,
        cDrawPriority_18E                                       = 397,
        cDrawPriority_18F                                       = 398,
        cDrawPriority_190                                       = 399,
        cDrawPriority_191                                       = 400,
        cDrawPriority_192                                       = 401,
        cDrawPriority_193                                       = 402,
        cDrawPriority_194                                       = 403,
        cDrawPriority_195                                       = 404,
        cDrawPriority_196                                       = 405,
        cDrawPriority_197                                       = 406,
        cDrawPriority_198                                       = 407,
        cDrawPriority_199                                       = 408,
        cDrawPriority_19A                                       = 409,
        cDrawPriority_19B                                       = 410,
        cDrawPriority_19C                                       = 411,
        cDrawPriority_19D                                       = 412,
        cDrawPriority_19E                                       = 413,
        cDrawPriority_1A0                                       = 414,
        cDrawPriority_19F                                       = 415,
        cDrawPriority_032                                       = 416,
        cDrawPriority_1A1                                       = 417,
        cDrawPriority_1A2                                       = 418,
        cDrawPriority_1A3                                       = 419,
        cDrawPriority_1A4                                       = 420,
        cDrawPriority_1A5                                       = 421,
        cDrawPriority_1A6                                       = 422,
        cDrawPriority_1A7                                       = 423,
        cDrawPriority_1A8                                       = 424,
        cDrawPriority_BlueCoin                                  = 425,
        cDrawPriority_264                                       = 426,
        cDrawPriority_1F9                                       = 427,
        cDrawPriority_1FA                                       = 428,
        cDrawPriority_1FB                                       = 429,
        cDrawPriority_1FC                                       = 430,
        cDrawPriority_1FD                                       = 431,
        cDrawPriority_1FE                                       = 432,
        cDrawPriority_311                                       = 433,
        cDrawPriority_312                                       = 434,
        cDrawPriority_052                                       = 435,
        cDrawPriority_053                                       = 436,
        cDrawPriority_0C5                                       = 437,
        cDrawPriority_0C6                                       = 438,
        cDrawPriority_265                                       = 439,
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
        cDrawPriority_070                                       = 451,
        cDrawPriority_071                                       = 452,
        cDrawPriority_072                                       = 453,
        cDrawPriority_073                                       = 454,
        cDrawPriority_074                                       = 455,
        cDrawPriority_273                                       = 456,
        cDrawPriority_075                                       = 457,
        cDrawPriority_274                                       = 458,
        cDrawPriority_275                                       = 459,
        cDrawPriority_SearchKiller                              = 460,
        cDrawPriority_277                                       = 461,
        cDrawPriority_278                                       = 462,
        cDrawPriority_279                                       = 463,
        cDrawPriority_27B                                       = 464,
        cDrawPriority_27C                                       = 465,
        cDrawPriority_SwitchHatenaButton                        = 466,
        cDrawPriority_SwitchPbutton                             = 467,
        cDrawPriority_SwitchPbuttonRDash                        = 468,
        cDrawPriority_SwitchPbuttonNoWallKick                   = 469,
        cDrawPriority_15C                                       = 470,
        cDrawPriority_15D                                       = 471,
        cDrawPriority_313                                       = 472,
        cDrawPriority_314                                       = 473,
        cDrawPriority_315                                       = 474,
        cDrawPriority_316                                       = 475,
        cDrawPriority_317                                       = 476,
        cDrawPriority_318                                       = 477,
        cDrawPriority_319                                       = 478,
        cDrawPriority_TarzanIvy                                 = 479,
        cDrawPriority_0EF                                       = 480,
        cDrawPriority_0F0                                       = 481,
        cDrawPriority_SnakeBlock                                = 482,
        cDrawPriority_0C3                                       = 483,
        cDrawPriority_0C4                                       = 484,
        cDrawPriority_0C8                                       = 485,
        cDrawPriority_31E                                       = 486,
        cDrawPriority_31D                                       = 487,
        cDrawPriority_0C7                                       = 488,
        cDrawPriority_0E5                                       = 489,
        cDrawPriority_117                                       = 490,
        cDrawPriority_31F                                       = 491,
        cDrawPriority_166                                       = 492,
        cDrawPriority_2F4                                       = 493,
        cDrawPriority_303                                       = 494,
        cDrawPriority_304                                       = 495,
        cDrawPriority_Intermittent                              = 496,
        cDrawPriority_IntermittentPermanent                     = 497,
        cDrawPriority_WaterIntermittent                         = 498,
        cDrawPriority_WaterIntermittentPermanent                = 499,
        cDrawPriority_WaterIntermittentPermanentRD3_3           = 500,
        cDrawPriority_07E                                       = 501,
        cDrawPriority_WaterIntermittentBossChild                = 502,
        cDrawPriority_YoganIntermittent                         = 503,
        cDrawPriority_Woochan                                   = 504,
        cDrawPriority_268                                       = 505,
        cDrawPriority_Spanner                                   = 506,
        cDrawPriority_26A                                       = 507,
        cDrawPriority_26B                                       = 508,
        cDrawPriority_26C                                       = 509,
        cDrawPriority_26D                                       = 510,
        cDrawPriority_26E                                       = 511,
        cDrawPriority_26F                                       = 512,
        cDrawPriority_270                                       = 513,
        cDrawPriority_0B2                                       = 514,
        cDrawPriority_100                                       = 515,
        cDrawPriority_101                                       = 516,
        cDrawPriority_0B3                                       = 517,
        cDrawPriority_16B                                       = 518,
        cDrawPriority_16C                                       = 519,
        cDrawPriority_0B4                                       = 520,
        cDrawPriority_0B5                                       = 521,
        cDrawPriority_0B6                                       = 522,
        cDrawPriority_0B7                                       = 523,
        cDrawPriority_LineSpinLift                              = 524,
        cDrawPriority_LineSpinLiftParentRDash                   = 525,
        cDrawPriority_LineSpinLiftChildRDash                    = 526,
        cDrawPriority_0BC                                       = 527,
        cDrawPriority_081                                       = 528,
        cDrawPriority_093                                       = 529,
        cDrawPriority_094                                       = 530,
        cDrawPriority_095                                       = 531,
        cDrawPriority_096                                       = 532,
        cDrawPriority_ElasticKinokoParent                       = 533,
        cDrawPriority_0CB                                       = 534,
        cDrawPriority_0CC                                       = 535,
        cDrawPriority_0E7                                       = 536,
        cDrawPriority_0E8                                       = 537,
        cDrawPriority_0E6                                       = 538,
        cDrawPriority_0EA                                       = 539,
        cDrawPriority_287                                       = 540,
        cDrawPriority_288                                       = 541,
        cDrawPriority_289                                       = 542,
        cDrawPriority_28B                                       = 543,
        cDrawPriority_28C                                       = 544,
        cDrawPriority_28D                                       = 545,
        cDrawPriority_098                                       = 546,
        cDrawPriority_099                                       = 547,
        cDrawPriority_09A                                       = 548,
        cDrawPriority_09B                                       = 549,
        cDrawPriority_09C                                       = 550,
        cDrawPriority_09D                                       = 551,
        cDrawPriority_09E                                       = 552,
        cDrawPriority_09F                                       = 553,
        cDrawPriority_0A1                                       = 554,
        cDrawPriority_0A2                                       = 555,
        cDrawPriority_0A3                                       = 556,
        cDrawPriority_0A4                                       = 557,
        cDrawPriority_0A5                                       = 558,
        cDrawPriority_0A6                                       = 559,
        cDrawPriority_0A0                                       = 560,
        cDrawPriority_0A7                                       = 561,
        cDrawPriority_0A8                                       = 562,
        cDrawPriority_0A9                                       = 563,
        cDrawPriority_0AA                                       = 564,
        cDrawPriority_0AB                                       = 565,
        cDrawPriority_0AC                                       = 566,
        cDrawPriority_0BE                                       = 567,
        cDrawPriority_0BD                                       = 568,
        cDrawPriority_0BB                                       = 569,
        cDrawPriority_320                                       = 570,
        cDrawPriority_0D3                                       = 571,
        cDrawPriority_0D6                                       = 572,
        cDrawPriority_0D4                                       = 573,
        cDrawPriority_0D5                                       = 574,
        cDrawPriority_0D7                                       = 575,
        cDrawPriority_0D8                                       = 576,
        cDrawPriority_0D9                                       = 577,
        cDrawPriority_0DA                                       = 578,
        cDrawPriority_0DB                                       = 579,
        cDrawPriority_103                                       = 580,
        cDrawPriority_0DC                                       = 581,
        cDrawPriority_0DD                                       = 582,
        cDrawPriority_0FA                                       = 583,
        cDrawPriority_0FB                                       = 584,
        cDrawPriority_162                                       = 585,
        cDrawPriority_29F                                       = 586,
        cDrawPriority_0E9                                       = 587,
        cDrawPriority_29E                                       = 588,
        cDrawPriority_2A1                                       = 589,
        cDrawPriority_2A2                                       = 590,
        cDrawPriority_1F8                                       = 591,
        cDrawPriority_2A3                                       = 592,
        cDrawPriority_104                                       = 593,
        cDrawPriority_16E                                       = 594,
        cDrawPriority_16F                                       = 595,
        cDrawPriority_29D                                       = 596,
        cDrawPriority_30A                                       = 597,
        cDrawPriority_IcicleBig                                 = 598,
        cDrawPriority_30B                                       = 599,
        cDrawPriority_30C                                       = 600,
        cDrawPriority_30D                                       = 601,
        cDrawPriority_30E                                       = 602,
        cDrawPriority_30F                                       = 603,
        cDrawPriority_310                                       = 604,
        cDrawPriority_163                                       = 605,
        cDrawPriority_164                                       = 606,
        cDrawPriority_165                                       = 607,
        cDrawPriority_11D                                       = 608,
        cDrawPriority_11E                                       = 609,
        cDrawPriority_Maruta                                    = 610,
        cDrawPriority_0DF                                       = 611,
        cDrawPriority_0EC                                       = 612,
        cDrawPriority_FloorGyration                             = 613,
        cDrawPriority_FloorHoleDokan                            = 614,
        cDrawPriority_0D0                                       = 615,
        cDrawPriority_0D1                                       = 616,
        cDrawPriority_0C9                                       = 617,
        cDrawPriority_0CA                                       = 618,
        cDrawPriority_107                                       = 619,
        cDrawPriority_0CD                                       = 620,
        cDrawPriority_0CE                                       = 621,
        cDrawPriority_0CF                                       = 622,
        cDrawPriority_Bubble                                    = 623,
        cDrawPriority_BubbleSync                                = 624,
        cDrawPriority_BubbleRDash                               = 625,
        cDrawPriority_BubbleSyncRDash                           = 626,
        cDrawPriority_292                                       = 627,
        cDrawPriority_293                                       = 628,
        cDrawPriority_294                                       = 629,
        cDrawPriority_295                                       = 630,
        cDrawPriority_298                                       = 631,
        cDrawPriority_299                                       = 632,
        cDrawPriority_29A                                       = 633,
        cDrawPriority_29B                                       = 634,
        cDrawPriority_29C                                       = 635,
        cDrawPriority_161                                       = 636,
        cDrawPriority_168                                       = 637,
        cDrawPriority_169                                       = 638,
        cDrawPriority_0F3                                       = 639,
        cDrawPriority_0F4                                       = 640,
        cDrawPriority_322                                       = 641,
        cDrawPriority_323                                       = 642,
        cDrawPriority_324                                       = 643,
        cDrawPriority_325                                       = 644,
        cDrawPriority_PlayerIce                                 = 645,
        cDrawPriority_326                                       = 646,
        cDrawPriority_144                                       = 647,
        cDrawPriority_145                                       = 648,
        cDrawPriority_146                                       = 649,
        cDrawPriority_147                                       = 650,
        cDrawPriority_0F1                                       = 651,
        cDrawPriority_0F2                                       = 652,
        cDrawPriority_327                                       = 653,
        cDrawPriority_328                                       = 654,
        cDrawPriority_BattleItem                                = 655,
        cDrawPriority_VsBattleItem                              = 656,
        cDrawPriority_2A4                                       = 657,
        cDrawPriority_2A5                                       = 658,
        cDrawPriority_321                                       = 659,
        cDrawPriority_32C                                       = 660,
        cDrawPriority_32D                                       = 661,
        cDrawPriority_32F                                       = 662,
        cDrawPriority_330                                       = 663,
        cDrawPriority_331                                       = 664,
        cDrawPriority_32A                                       = 665,
        cDrawPriority_KokoopaShipLemmy                          = 666,
        cDrawPriority_KokoopaShipMorton                         = 667,
        cDrawPriority_KokoopaShipLarry                          = 668,
        cDrawPriority_KokoopaShipWendy                          = 669,
        cDrawPriority_KokoopaShipIggy                           = 670,
        cDrawPriority_KokoopaShipRoy                            = 671,
        cDrawPriority_KokoopaShipLudwig                         = 672,
        cDrawPriority_KokoopaShipWarpCannon                     = 673,
        cDrawPriority_Peach                                     = 674,
        cDrawPriority_2E0                                       = 675,
        cDrawPriority_FinalDVPeach                              = 676,
        cDrawPriority_FinalDVShutter                            = 677,
        cDrawPriority_2E3                                       = 678,
        cDrawPriority_1D2                                       = 679,
        cDrawPriority_148                                       = 680,
        cDrawPriority_149                                       = 681,
        cDrawPriority_14A                                       = 682,
        cDrawPriority_119                                       = 683,
        cDrawPriority_11A                                       = 684,
        cDrawPriority_108                                       = 685,
        cDrawPriority_KoopaJrFire                               = 686,
        cDrawPriority_KoopaJrBall                               = 687,
        cDrawPriority_174                                       = 688,
        cDrawPriority_025                                       = 689,
        cDrawPriority_UnderwaterKoopaJr                         = 690,
        cDrawPriority_UnderwaterKoopaJrClown                    = 691,
        cDrawPriority_UnderwaterKoopaJrRetreatPos               = 692,
        cDrawPriority_BoxingKoopaJr                             = 693,
        cDrawPriority_BoxingKoopaJrClown                        = 694,
        cDrawPriority_BoxingKoopaJrPostBattleDemo               = 695,
        cDrawPriority_BoxingKoopaJrClownPostBattleDemo          = 696,
        cDrawPriority_054                                       = 697,
        cDrawPriority_055                                       = 698,
        cDrawPriority_056                                       = 699,
        cDrawPriority_057                                       = 700,
        cDrawPriority_058                                       = 701,
        cDrawPriority_059                                       = 702,
        cDrawPriority_BgActorYukaMario                          = 703,
        cDrawPriority_05B                                       = 704,
        cDrawPriority_0FC                                       = 705,
        cDrawPriority_0FD                                       = 706,
        cDrawPriority_0FE                                       = 707,
        cDrawPriority_0FF                                       = 708,
        cDrawPriority_SlotChibiYoshi                            = 709,
        cDrawPriority_MiniGamePanelItem                         = 710,
        cDrawPriority_SlotItem                                  = 711,
        cDrawPriority_ShuffleBlock                              = 712,
        cDrawPriority_CoinmakiCoin                              = 713,
        cDrawPriority_CoinmakiItem                              = 714,
        cDrawPriority_CoinmakiCannon                            = 715,
        cDrawPriority_MiniGameKinopio                           = 716,
        cDrawPriority_33F                                       = 717,
        cDrawPriority_340                                       = 718,
        cDrawPriority_341                                       = 719,
        cDrawPriority_342                                       = 720,
        cDrawPriority_10A                                       = 721,
        cDrawPriority_10B                                       = 722,
        cDrawPriority_10C                                       = 723,
        cDrawPriority_118                                       = 724,
        cDrawPriority_17B                                       = 725,
        cDrawPriority_350                                       = 726,
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
        cDrawPriority_38E                                       = 794,
        cDrawPriority_38F                                       = 795,

        // No Draw
        cDrawPriority_390                                       =   0 - 0x3ff,
        cDrawPriority_120                                       =   1 - 0x3ff,
        cDrawPriority_23F                                       =   2 - 0x3ff,
        cDrawPriority_240                                       =   3 - 0x3ff,
        cDrawPriority_241                                       =   4 - 0x3ff,
        cDrawPriority_242                                       =   5 - 0x3ff,
        cDrawPriority_243                                       =   6 - 0x3ff,
        cDrawPriority_244                                       =   7 - 0x3ff,
        cDrawPriority_245                                       =   8 - 0x3ff,
        cDrawPriority_246                                       =   9 - 0x3ff,
        cDrawPriority_247                                       =  10 - 0x3ff,
        cDrawPriority_248                                       =  11 - 0x3ff,
        cDrawPriority_249                                       =  12 - 0x3ff,
        cDrawPriority_24A                                       =  13 - 0x3ff,
        cDrawPriority_BgCenter                                  =  14 - 0x3ff,
        cDrawPriority_24C                                       =  15 - 0x3ff,
        cDrawPriority_24E                                       =  16 - 0x3ff,
        cDrawPriority_000                                       =  17 - 0x3ff,
        cDrawPriority_001                                       =  18 - 0x3ff,
        cDrawPriority_002                                       =  19 - 0x3ff,
        cDrawPriority_003                                       =  20 - 0x3ff,
        cDrawPriority_004                                       =  21 - 0x3ff,
        cDrawPriority_005                                       =  22 - 0x3ff,
        cDrawPriority_006                                       =  23 - 0x3ff,
        cDrawPriority_007                                       =  24 - 0x3ff,
        cDrawPriority_008                                       =  25 - 0x3ff,
        cDrawPriority_009                                       =  26 - 0x3ff,
        cDrawPriority_00B                                       =  27 - 0x3ff,
        cDrawPriority_00C                                       =  28 - 0x3ff,
        cDrawPriority_00D                                       =  29 - 0x3ff,
        cDrawPriority_027                                       =  30 - 0x3ff,
        cDrawPriority_028                                       =  31 - 0x3ff,
        cDrawPriority_029                                       =  32 - 0x3ff,
        cDrawPriority_02A                                       =  33 - 0x3ff,
        cDrawPriority_189                                       =  34 - 0x3ff,
        cDrawPriority_18A                                       =  35 - 0x3ff,
        cDrawPriority_267                                       =  36 - 0x3ff,
        cDrawPriority_266                                       =  37 - 0x3ff,
        cDrawPriority_21E                                       =  38 - 0x3ff,
        cDrawPriority_21F                                       =  39 - 0x3ff,
        cDrawPriority_220                                       =  40 - 0x3ff,
        cDrawPriority_026                                       =  41 - 0x3ff,
        cDrawPriority_223                                       =  42 - 0x3ff,
        cDrawPriority_2EB                                       =  43 - 0x3ff,
        cDrawPriority_271                                       =  44 - 0x3ff,
        cDrawPriority_272                                       =  45 - 0x3ff,
        cDrawPriority_221                                       =  46 - 0x3ff,
        cDrawPriority_222                                       =  47 - 0x3ff,
        cDrawPriority_20F                                       =  48 - 0x3ff,
        cDrawPriority_02D                                       =  49 - 0x3ff,
        cDrawPriority_02E                                       =  50 - 0x3ff,
        cDrawPriority_00E                                       =  51 - 0x3ff,
        cDrawPriority_00F                                       =  52 - 0x3ff,
        cDrawPriority_010                                       =  53 - 0x3ff,
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
        cDrawPriority_011                                       =  65 - 0x3ff,
        cDrawPriority_012                                       =  66 - 0x3ff,
        cDrawPriority_02F                                       =  67 - 0x3ff,
        cDrawPriority_030                                       =  68 - 0x3ff,
        cDrawPriority_2EC                                       =  69 - 0x3ff,
        cDrawPriority_2ED                                       =  70 - 0x3ff,
        cDrawPriority_00A                                       =  71 - 0x3ff,
        cDrawPriority_014                                       =  72 - 0x3ff,
        cDrawPriority_031                                       =  73 - 0x3ff,
        cDrawPriority_167                                       =  74 - 0x3ff,
        cDrawPriority_015                                       =  75 - 0x3ff,
        cDrawPriority_016                                       =  76 - 0x3ff,
        cDrawPriority_017                                       =  77 - 0x3ff,
        cDrawPriority_MiniGameMgr                               =  78 - 0x3ff,
        cDrawPriority_MiniGameMgrRDash                          =  79 - 0x3ff,
        cDrawPriority_ShuffleBlockMgr                           =  80 - 0x3ff,
        cDrawPriority_SlotMgr                                   =  81 - 0x3ff,
        cDrawPriority_CoinmakiMgr                               =  82 - 0x3ff,
        cDrawPriority_1C6                                       =  83 - 0x3ff,
        cDrawPriority_WakiSearchMagKiller                       =  84 - 0x3ff,
        cDrawPriority_32E                                       =  85 - 0x3ff,
        cDrawPriority_01D                                       =  86 - 0x3ff,
        cDrawPriority_01E                                       =  87 - 0x3ff,
        cDrawPriority_01F                                       =  88 - 0x3ff,
        cDrawPriority_KoopaFireWaki                             =  89 - 0x3ff,
        cDrawPriority_31A                                       =  90 - 0x3ff,
        cDrawPriority_020                                       =  91 - 0x3ff,
        cDrawPriority_013                                       =  92 - 0x3ff,
        cDrawPriority_31B                                       =  93 - 0x3ff,
        cDrawPriority_31C                                       =  94 - 0x3ff,
        cDrawPriority_ShootingStar                              =  95 - 0x3ff,
        cDrawPriority_302                                       =  96 - 0x3ff,
        cDrawPriority_227                                       =  97 - 0x3ff,
        cDrawPriority_228                                       =  98 - 0x3ff,
        cDrawPriority_343                                       =  99 - 0x3ff,
        cDrawPriority_344                                       = 100 - 0x3ff,
        cDrawPriority_345                                       = 101 - 0x3ff,
        cDrawPriority_RoyLiftWaki                               = 102 - 0x3ff,
        cDrawPriority_2A0                                       = 103 - 0x3ff,
        cDrawPriority_346                                       = 104 - 0x3ff,
        cDrawPriority_024                                       = 105 - 0x3ff,
        cDrawPriority_24D                                       = 106 - 0x3ff,
        cDrawPriority_230                                       = 107 - 0x3ff,
        cDrawPriority_296                                       = 108 - 0x3ff,
        cDrawPriority_297                                       = 109 - 0x3ff,
        cDrawPriority_351                                       = 110 - 0x3ff,
        cDrawPriority_11C                                       = 111 - 0x3ff,
        cDrawPriority_1B8                                       = 112 - 0x3ff,
        cDrawPriority_352                                       = 113 - 0x3ff,
        cDrawPriority_353                                       = 114 - 0x3ff,
        cDrawPriority_14C                                       = 115 - 0x3ff,
        cDrawPriority_347                                       = 116 - 0x3ff,
        cDrawPriority_1B7                                       = 117 - 0x3ff
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
    static const s32 cProfileID_000;
    /**
     * @brief 1
     * @par Address: 0x10003D58
     */
    static const s32 cProfileID_001;
    /**
     * @brief 2
     * @par Address: 0x10003D5C
     */
    static const s32 cProfileID_002;
    /**
     * @brief 3
     * @par Address: 0x10003D60
     */
    static const s32 cProfileID_003;
    /**
     * @brief 4
     * @par Address: 0x10003D64
     */
    static const s32 cProfileID_004;
    /**
     * @brief 5
     * @par Address: 0x10003D68
     */
    static const s32 cProfileID_005;
    /**
     * @brief 6
     * @par Address: 0x10003D6C
     */
    static const s32 cProfileID_006;
    /**
     * @brief 7
     * @par Address: 0x10003D70
     */
    static const s32 cProfileID_007;
    /**
     * @brief 8
     * @par Address: 0x10003D74
     */
    static const s32 cProfileID_008;
    /**
     * @brief 9
     * @par Address: 0x10003D78
     */
    static const s32 cProfileID_009;
    /**
     * @brief 10
     * @par Address: 0x10003D7C
     */
    static const s32 cProfileID_00A;
    /**
     * @brief 11
     * @par Address: 0x10003D80
     */
    static const s32 cProfileID_00B;
    /**
     * @brief 12
     * @par Address: 0x10003D84
     */
    static const s32 cProfileID_00C;
    /**
     * @brief 13
     * @par Address: 0x10003D88
     */
    static const s32 cProfileID_00D;
    /**
     * @brief 14
     * @par Address: 0x10003D8C
     */
    static const s32 cProfileID_00E;
    /**
     * @brief 15
     * @par Address: 0x10003D90
     */
    static const s32 cProfileID_00F;
    /**
     * @brief 16
     * @par Address: 0x10003D94
     */
    static const s32 cProfileID_010;
    /**
     * @brief 17
     * @par Address: 0x10003D98
     */
    static const s32 cProfileID_011;
    /**
     * @brief 18
     * @par Address: 0x10003D9C
     */
    static const s32 cProfileID_012;
    /**
     * @brief 19
     * @par Address: 0x10003DA0
     */
    static const s32 cProfileID_013;
    /**
     * @brief 20
     * @par Address: 0x10003DA4
     */
    static const s32 cProfileID_014;
    /**
     * @brief 21
     * @par Address: 0x10003DA8
     */
    static const s32 cProfileID_015;
    /**
     * @brief 22
     * @par Address: 0x10003DAC
     */
    static const s32 cProfileID_016;
    /**
     * @brief 23
     * @par Address: 0x10003DB0
     */
    static const s32 cProfileID_017;
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
    static const s32 cProfileID_01D;
    /**
     * @brief 30
     * @par Address: 0x10003DCC
     */
    static const s32 cProfileID_01E;
    /**
     * @brief 31
     * @par Address: 0x10003DD0
     */
    static const s32 cProfileID_01F;
    /**
     * @brief 32
     * @par Address: 0x10003DD4
     */
    static const s32 cProfileID_020;
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
    static const s32 cProfileID_024;
    /**
     * @brief 37
     * @par Address: 0x10003DE8
     */
    static const s32 cProfileID_025;
    /**
     * @brief 38
     * @par Address: 0x10003DEC
     */
    static const s32 cProfileID_026;
    /**
     * @brief 39
     * @par Address: 0x10003DF0
     */
    static const s32 cProfileID_027;
    /**
     * @brief 40
     * @par Address: 0x10003DF4
     */
    static const s32 cProfileID_028;
    /**
     * @brief 41
     * @par Address: 0x10003DF8
     */
    static const s32 cProfileID_029;
    /**
     * @brief 42
     * @par Address: 0x10003DFC
     */
    static const s32 cProfileID_02A;
    /**
     * @brief 43
     * @par Address: 0x10003E00
     */
    static const s32 cProfileID_02B;
    /**
     * @brief 44
     * @par Address: 0x10003E04
     */
    static const s32 cProfileID_02C;
    /**
     * @brief 45
     * @par Address: 0x10003E08
     */
    static const s32 cProfileID_02D;
    /**
     * @brief 46
     * @par Address: 0x10003E0C
     */
    static const s32 cProfileID_02E;
    /**
     * @brief 47
     * @par Address: 0x10003E10
     */
    static const s32 cProfileID_02F;
    /**
     * @brief 48
     * @par Address: 0x10003E14
     */
    static const s32 cProfileID_030;
    /**
     * @brief 49
     * @par Address: 0x10003E18
     */
    static const s32 cProfileID_031;
    /**
     * @brief 50
     * @par Address: 0x10003E1C
     */
    static const s32 cProfileID_032;
    /**
     * @brief 51
     * @par Address: 0x10003E20
     */
    static const s32 cProfileID_033;
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
    static const s32 cProfileID_036;
    /**
     * @brief 55
     * @par Address: 0x10003E30
     */
    static const s32 cProfileID_037;
    /**
     * @brief 56
     * @par Address: 0x10003E34
     */
    static const s32 cProfileID_038;
    /**
     * @brief 57
     * @par Address: 0x10003E38
     */
    static const s32 cProfileID_039;
    /**
     * @brief 58
     * @par Address: 0x10003E3C
     */
    static const s32 cProfileID_03A;
    /**
     * @brief 59
     * @par Address: 0x10003E40
     */
    static const s32 cProfileID_03B;
    /**
     * @brief 60
     * @par Address: 0x10003E44
     */
    static const s32 cProfileID_PairObjChild;
    /**
     * @brief 61
     * @par Address: 0x10003E48
     */
    static const s32 cProfileID_03D;
    /**
     * @brief 62
     * @par Address: 0x10003E4C
     */
    static const s32 cProfileID_03E;
    /**
     * @brief 63
     * @par Address: 0x10003E50
     */
    static const s32 cProfileID_03F;
    /**
     * @brief 64
     * @par Address: 0x10003E54
     */
    static const s32 cProfileID_040;
    /**
     * @brief 65
     * @par Address: 0x10003E58
     */
    static const s32 cProfileID_041;
    /**
     * @brief 66
     * @par Address: 0x10003E5C
     */
    static const s32 cProfileID_042;
    /**
     * @brief 67
     * @par Address: 0x10003E60
     */
    static const s32 cProfileID_043;
    /**
     * @brief 68
     * @par Address: 0x10003E64
     */
    static const s32 cProfileID_044;
    /**
     * @brief 69
     * @par Address: 0x10003E68
     */
    static const s32 cProfileID_045;
    /**
     * @brief 70
     * @par Address: 0x10003E6C
     */
    static const s32 cProfileID_046;
    /**
     * @brief 71
     * @par Address: 0x10003E70
     */
    static const s32 cProfileID_047;
    /**
     * @brief 72
     * @par Address: 0x10003E74
     */
    static const s32 cProfileID_048;
    /**
     * @brief 73
     * @par Address: 0x10003E78
     */
    static const s32 cProfileID_049;
    /**
     * @brief 74
     * @par Address: 0x10003E7C
     */
    static const s32 cProfileID_04A;
    /**
     * @brief 75
     * @par Address: 0x10003E80
     */
    static const s32 cProfileID_04B;
    /**
     * @brief 76
     * @par Address: 0x10003E84
     */
    static const s32 cProfileID_04C;
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
    static const s32 cProfileID_050;
    /**
     * @brief 81
     * @par Address: 0x10003E98
     */
    static const s32 cProfileID_051;
    /**
     * @brief 82
     * @par Address: 0x10003E9C
     */
    static const s32 cProfileID_052;
    /**
     * @brief 83
     * @par Address: 0x10003EA0
     */
    static const s32 cProfileID_053;
    /**
     * @brief 84
     * @par Address: 0x10003EA4
     */
    static const s32 cProfileID_054;
    /**
     * @brief 85
     * @par Address: 0x10003EA8
     */
    static const s32 cProfileID_055;
    /**
     * @brief 86
     * @par Address: 0x10003EAC
     */
    static const s32 cProfileID_056;
    /**
     * @brief 87
     * @par Address: 0x10003EB0
     */
    static const s32 cProfileID_057;
    /**
     * @brief 88
     * @par Address: 0x10003EB4
     */
    static const s32 cProfileID_058;
    /**
     * @brief 89
     * @par Address: 0x10003EB8
     */
    static const s32 cProfileID_059;
    /**
     * @brief 90
     * @par Address: 0x10003EBC
     */
    static const s32 cProfileID_BgActorYukaMario;
    /**
     * @brief 91
     * @par Address: 0x10003EC0
     */
    static const s32 cProfileID_05B;
    /**
     * @brief 92
     * @par Address: 0x10003EC4
     */
    static const s32 cProfileID_05C;
    /**
     * @brief 93
     * @par Address: 0x10003EC8
     */
    static const s32 cProfileID_05D;
    /**
     * @brief 94
     * @par Address: 0x10003ECC
     */
    static const s32 cProfileID_05E;
    /**
     * @brief 95
     * @par Address: 0x10003ED0
     */
    static const s32 cProfileID_05F;
    /**
     * @brief 96
     * @par Address: 0x10003ED4
     */
    static const s32 cProfileID_060;
    /**
     * @brief 97
     * @par Address: 0x10003ED8
     */
    static const s32 cProfileID_061;
    /**
     * @brief 98
     * @par Address: 0x10003EDC
     */
    static const s32 cProfileID_062;
    /**
     * @brief 99
     * @par Address: 0x10003EE0
     */
    static const s32 cProfileID_063;
    /**
     * @brief 100
     * @par Address: 0x10003EE4
     */
    static const s32 cProfileID_064;
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
    static const s32 cProfileID_070;
    /**
     * @brief 113
     * @par Address: 0x10003F18
     */
    static const s32 cProfileID_071;
    /**
     * @brief 114
     * @par Address: 0x10003F1C
     */
    static const s32 cProfileID_072;
    /**
     * @brief 115
     * @par Address: 0x10003F20
     */
    static const s32 cProfileID_073;
    /**
     * @brief 116
     * @par Address: 0x10003F24
     */
    static const s32 cProfileID_074;
    /**
     * @brief 117
     * @par Address: 0x10003F28
     */
    static const s32 cProfileID_075;
    /**
     * @brief 118
     * @par Address: 0x10003F2C
     */
    static const s32 cProfileID_076;
    /**
     * @brief 119
     * @par Address: 0x10003F30
     */
    static const s32 cProfileID_077;
    /**
     * @brief 120
     * @par Address: 0x10003F34
     */
    static const s32 cProfileID_078;
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
    static const s32 cProfileID_07E;
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
    static const s32 cProfileID_081;
    /**
     * @brief 130
     * @par Address: 0x10003F5C
     */
    static const s32 cProfileID_082;
    /**
     * @brief 131
     * @par Address: 0x10003F60
     */
    static const s32 cProfileID_083;
    /**
     * @brief 132
     * @par Address: 0x10003F64
     */
    static const s32 cProfileID_084;
    /**
     * @brief 133
     * @par Address: 0x10003F68
     */
    static const s32 cProfileID_085;
    /**
     * @brief 134
     * @par Address: 0x10003F6C
     */
    static const s32 cProfileID_ObjPipeDownNG;
    /**
     * @brief 135
     * @par Address: 0x10003F70
     */
    static const s32 cProfileID_087;
    /**
     * @brief 136
     * @par Address: 0x10003F74
     */
    static const s32 cProfileID_088;
    /**
     * @brief 137
     * @par Address: 0x10003F78
     */
    static const s32 cProfileID_089;
    /**
     * @brief 138
     * @par Address: 0x10003F7C
     */
    static const s32 cProfileID_08A;
    /**
     * @brief 139
     * @par Address: 0x10003F80
     */
    static const s32 cProfileID_08B;
    /**
     * @brief 140
     * @par Address: 0x10003F84
     */
    static const s32 cProfileID_08C;
    /**
     * @brief 141
     * @par Address: 0x10003F88
     */
    static const s32 cProfileID_08D;
    /**
     * @brief 142
     * @par Address: 0x10003F8C
     */
    static const s32 cProfileID_08E;
    /**
     * @brief 143
     * @par Address: 0x10003F90
     */
    static const s32 cProfileID_08F;
    /**
     * @brief 144
     * @par Address: 0x10003F94
     */
    static const s32 cProfileID_090;
    /**
     * @brief 145
     * @par Address: 0x10003F98
     */
    static const s32 cProfileID_091;
    /**
     * @brief 146
     * @par Address: 0x10003F9C
     */
    static const s32 cProfileID_092;
    /**
     * @brief 147
     * @par Address: 0x10003FA0
     */
    static const s32 cProfileID_093;
    /**
     * @brief 148
     * @par Address: 0x10003FA4
     */
    static const s32 cProfileID_094;
    /**
     * @brief 149
     * @par Address: 0x10003FA8
     */
    static const s32 cProfileID_095;
    /**
     * @brief 150
     * @par Address: 0x10003FAC
     */
    static const s32 cProfileID_096;
    /**
     * @brief 151
     * @par Address: 0x10003FB0
     */
    static const s32 cProfileID_097;
    /**
     * @brief 152
     * @par Address: 0x10003FB4
     */
    static const s32 cProfileID_098;
    /**
     * @brief 153
     * @par Address: 0x10003FB8
     */
    static const s32 cProfileID_099;
    /**
     * @brief 154
     * @par Address: 0x10003FBC
     */
    static const s32 cProfileID_09A;
    /**
     * @brief 155
     * @par Address: 0x10003FC0
     */
    static const s32 cProfileID_09B;
    /**
     * @brief 156
     * @par Address: 0x10003FC4
     */
    static const s32 cProfileID_09C;
    /**
     * @brief 157
     * @par Address: 0x10003FC8
     */
    static const s32 cProfileID_09D;
    /**
     * @brief 158
     * @par Address: 0x10003FCC
     */
    static const s32 cProfileID_09E;
    /**
     * @brief 159
     * @par Address: 0x10003FD0
     */
    static const s32 cProfileID_09F;
    /**
     * @brief 160
     * @par Address: 0x10003FD4
     */
    static const s32 cProfileID_0A0;
    /**
     * @brief 161
     * @par Address: 0x10003FD8
     */
    static const s32 cProfileID_0A1;
    /**
     * @brief 162
     * @par Address: 0x10003FDC
     */
    static const s32 cProfileID_0A2;
    /**
     * @brief 163
     * @par Address: 0x10003FE0
     */
    static const s32 cProfileID_0A3;
    /**
     * @brief 164
     * @par Address: 0x10003FE4
     */
    static const s32 cProfileID_0A4;
    /**
     * @brief 165
     * @par Address: 0x10003FE8
     */
    static const s32 cProfileID_0A5;
    /**
     * @brief 166
     * @par Address: 0x10003FEC
     */
    static const s32 cProfileID_0A6;
    /**
     * @brief 167
     * @par Address: 0x10003FF0
     */
    static const s32 cProfileID_0A7;
    /**
     * @brief 168
     * @par Address: 0x10003FF4
     */
    static const s32 cProfileID_0A8;
    /**
     * @brief 169
     * @par Address: 0x10003FF8
     */
    static const s32 cProfileID_0A9;
    /**
     * @brief 170
     * @par Address: 0x10003FFC
     */
    static const s32 cProfileID_0AA;
    /**
     * @brief 171
     * @par Address: 0x10004000
     */
    static const s32 cProfileID_0AB;
    /**
     * @brief 172
     * @par Address: 0x10004004
     */
    static const s32 cProfileID_0AC;
    /**
     * @brief 173
     * @par Address: 0x10004008
     */
    static const s32 cProfileID_0AD;
    /**
     * @brief 174
     * @par Address: 0x1000400C
     */
    static const s32 cProfileID_0AE;
    /**
     * @brief 175
     * @par Address: 0x10004010
     */
    static const s32 cProfileID_0AF;
    /**
     * @brief 176
     * @par Address: 0x10004014
     */
    static const s32 cProfileID_0B0;
    /**
     * @brief 177
     * @par Address: 0x10004018
     */
    static const s32 cProfileID_0B1;
    /**
     * @brief 178
     * @par Address: 0x1000401C
     */
    static const s32 cProfileID_0B2;
    /**
     * @brief 179
     * @par Address: 0x10004020
     */
    static const s32 cProfileID_0B3;
    /**
     * @brief 180
     * @par Address: 0x10004024
     */
    static const s32 cProfileID_0B4;
    /**
     * @brief 181
     * @par Address: 0x10004028
     */
    static const s32 cProfileID_0B5;
    /**
     * @brief 182
     * @par Address: 0x1000402C
     */
    static const s32 cProfileID_0B6;
    /**
     * @brief 183
     * @par Address: 0x10004030
     */
    static const s32 cProfileID_0B7;
    /**
     * @brief 184
     * @par Address: 0x10004034
     */
    static const s32 cProfileID_LineSpinLift;
    /**
     * @brief 185
     * @par Address: 0x10004038
     */
    static const s32 cProfileID_LineSpinLiftParentRDash;
    /**
     * @brief 186
     * @par Address: 0x1000403C
     */
    static const s32 cProfileID_LineSpinLiftChildRDash;
    /**
     * @brief 187
     * @par Address: 0x10004040
     */
    static const s32 cProfileID_0BB;
    /**
     * @brief 188
     * @par Address: 0x10004044
     */
    static const s32 cProfileID_0BC;
    /**
     * @brief 189
     * @par Address: 0x10004048
     */
    static const s32 cProfileID_0BD;
    /**
     * @brief 190
     * @par Address: 0x1000404C
     */
    static const s32 cProfileID_0BE;
    /**
     * @brief 191
     * @par Address: 0x10004050
     */
    static const s32 cProfileID_0BF;
    /**
     * @brief 192
     * @par Address: 0x10004054
     */
    static const s32 cProfileID_0C0;
    /**
     * @brief 193
     * @par Address: 0x10004058
     */
    static const s32 cProfileID_0C1;
    /**
     * @brief 194
     * @par Address: 0x1000405C
     */
    static const s32 cProfileID_SnakeBlock;
    /**
     * @brief 195
     * @par Address: 0x10004060
     */
    static const s32 cProfileID_0C3;
    /**
     * @brief 196
     * @par Address: 0x10004064
     */
    static const s32 cProfileID_0C4;
    /**
     * @brief 197
     * @par Address: 0x10004068
     */
    static const s32 cProfileID_0C5;
    /**
     * @brief 198
     * @par Address: 0x1000406C
     */
    static const s32 cProfileID_0C6;
    /**
     * @brief 199
     * @par Address: 0x10004070
     */
    static const s32 cProfileID_0C7;
    /**
     * @brief 200
     * @par Address: 0x10004074
     */
    static const s32 cProfileID_0C8;
    /**
     * @brief 201
     * @par Address: 0x10004078
     */
    static const s32 cProfileID_0C9;
    /**
     * @brief 202
     * @par Address: 0x1000407C
     */
    static const s32 cProfileID_0CA;
    /**
     * @brief 203
     * @par Address: 0x10004080
     */
    static const s32 cProfileID_0CB;
    /**
     * @brief 204
     * @par Address: 0x10004084
     */
    static const s32 cProfileID_0CC;
    /**
     * @brief 205
     * @par Address: 0x10004088
     */
    static const s32 cProfileID_0CD;
    /**
     * @brief 206
     * @par Address: 0x1000408C
     */
    static const s32 cProfileID_0CE;
    /**
     * @brief 207
     * @par Address: 0x10004090
     */
    static const s32 cProfileID_0CF;
    /**
     * @brief 208
     * @par Address: 0x10004094
     */
    static const s32 cProfileID_0D0;
    /**
     * @brief 209
     * @par Address: 0x10004098
     */
    static const s32 cProfileID_0D1;
    /**
     * @brief 210
     * @par Address: 0x1000409C
     */
    static const s32 cProfileID_FloorHoleDokan;
    /**
     * @brief 211
     * @par Address: 0x100040A0
     */
    static const s32 cProfileID_0D3;
    /**
     * @brief 212
     * @par Address: 0x100040A4
     */
    static const s32 cProfileID_0D4;
    /**
     * @brief 213
     * @par Address: 0x100040A8
     */
    static const s32 cProfileID_0D5;
    /**
     * @brief 214
     * @par Address: 0x100040AC
     */
    static const s32 cProfileID_0D6;
    /**
     * @brief 215
     * @par Address: 0x100040B0
     */
    static const s32 cProfileID_0D7;
    /**
     * @brief 216
     * @par Address: 0x100040B4
     */
    static const s32 cProfileID_0D8;
    /**
     * @brief 217
     * @par Address: 0x100040B8
     */
    static const s32 cProfileID_0D9;
    /**
     * @brief 218
     * @par Address: 0x100040BC
     */
    static const s32 cProfileID_0DA;
    /**
     * @brief 219
     * @par Address: 0x100040C0
     */
    static const s32 cProfileID_0DB;
    /**
     * @brief 220
     * @par Address: 0x100040C4
     */
    static const s32 cProfileID_0DC;
    /**
     * @brief 221
     * @par Address: 0x100040C8
     */
    static const s32 cProfileID_0DD;
    /**
     * @brief 222
     * @par Address: 0x100040CC
     */
    static const s32 cProfileID_Maruta;
    /**
     * @brief 223
     * @par Address: 0x100040D0
     */
    static const s32 cProfileID_0DF;
    /**
     * @brief 224
     * @par Address: 0x100040D4
     */
    static const s32 cProfileID_Burner;
    /**
     * @brief 225
     * @par Address: 0x100040D8
     */
    static const s32 cProfileID_0E1;
    /**
     * @brief 226
     * @par Address: 0x100040DC
     */
    static const s32 cProfileID_0E2;
    /**
     * @brief 227
     * @par Address: 0x100040E0
     */
    static const s32 cProfileID_0E3;
    /**
     * @brief 228
     * @par Address: 0x100040E4
     */
    static const s32 cProfileID_0E4;
    /**
     * @brief 229
     * @par Address: 0x100040E8
     */
    static const s32 cProfileID_0E5;
    /**
     * @brief 230
     * @par Address: 0x100040EC
     */
    static const s32 cProfileID_0E6;
    /**
     * @brief 231
     * @par Address: 0x100040F0
     */
    static const s32 cProfileID_0E7;
    /**
     * @brief 232
     * @par Address: 0x100040F4
     */
    static const s32 cProfileID_0E8;
    /**
     * @brief 233
     * @par Address: 0x100040F8
     */
    static const s32 cProfileID_0E9;
    /**
     * @brief 234
     * @par Address: 0x100040FC
     */
    static const s32 cProfileID_0EA;
    /**
     * @brief 235
     * @par Address: 0x10004100
     */
    static const s32 cProfileID_0EB;
    /**
     * @brief 236
     * @par Address: 0x10004104
     */
    static const s32 cProfileID_0EC;
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
    static const s32 cProfileID_0EF;
    /**
     * @brief 240
     * @par Address: 0x10004114
     */
    static const s32 cProfileID_0F0;
    /**
     * @brief 241
     * @par Address: 0x10004118
     */
    static const s32 cProfileID_0F1;
    /**
     * @brief 242
     * @par Address: 0x1000411C
     */
    static const s32 cProfileID_0F2;
    /**
     * @brief 243
     * @par Address: 0x10004120
     */
    static const s32 cProfileID_0F3;
    /**
     * @brief 244
     * @par Address: 0x10004124
     */
    static const s32 cProfileID_0F4;
    /**
     * @brief 245
     * @par Address: 0x10004128
     */
    static const s32 cProfileID_0F5;
    /**
     * @brief 246
     * @par Address: 0x1000412C
     */
    static const s32 cProfileID_0F6;
    /**
     * @brief 247
     * @par Address: 0x10004130
     */
    static const s32 cProfileID_0F7;
    /**
     * @brief 248
     * @par Address: 0x10004134
     */
    static const s32 cProfileID_0F8;
    /**
     * @brief 249
     * @par Address: 0x10004138
     */
    static const s32 cProfileID_0F9;
    /**
     * @brief 250
     * @par Address: 0x1000413C
     */
    static const s32 cProfileID_0FA;
    /**
     * @brief 251
     * @par Address: 0x10004140
     */
    static const s32 cProfileID_0FB;
    /**
     * @brief 252
     * @par Address: 0x10004144
     */
    static const s32 cProfileID_0FC;
    /**
     * @brief 253
     * @par Address: 0x10004148
     */
    static const s32 cProfileID_0FD;
    /**
     * @brief 254
     * @par Address: 0x1000414C
     */
    static const s32 cProfileID_0FE;
    /**
     * @brief 255
     * @par Address: 0x10004150
     */
    static const s32 cProfileID_0FF;
    /**
     * @brief 256
     * @par Address: 0x10004154
     */
    static const s32 cProfileID_100;
    /**
     * @brief 257
     * @par Address: 0x10004158
     */
    static const s32 cProfileID_101;
    /**
     * @brief 258
     * @par Address: 0x1000415C
     */
    static const s32 cProfileID_102;
    /**
     * @brief 259
     * @par Address: 0x10004160
     */
    static const s32 cProfileID_103;
    /**
     * @brief 260
     * @par Address: 0x10004164
     */
    static const s32 cProfileID_104;
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
    static const s32 cProfileID_107;
    /**
     * @brief 264
     * @par Address: 0x10004174
     */
    static const s32 cProfileID_108;
    /**
     * @brief 265
     * @par Address: 0x10004178
     */
    static const s32 cProfileID_KoopaShutter;
    /**
     * @brief 266
     * @par Address: 0x1000417C
     */
    static const s32 cProfileID_10A;
    /**
     * @brief 267
     * @par Address: 0x10004180
     */
    static const s32 cProfileID_10B;
    /**
     * @brief 268
     * @par Address: 0x10004184
     */
    static const s32 cProfileID_10C;
    /**
     * @brief 269
     * @par Address: 0x10004188
     */
    static const s32 cProfileID_PeachFinalCastleKoopaJrLift;
    /**
     * @brief 270
     * @par Address: 0x1000418C
     */
    static const s32 cProfileID_PeachFinalCastleKoopaJrLiftHmove;
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
    static const s32 cProfileID_113;
    /**
     * @brief 276
     * @par Address: 0x100041A4
     */
    static const s32 cProfileID_114;
    /**
     * @brief 277
     * @par Address: 0x100041A8
     */
    static const s32 cProfileID_115;
    /**
     * @brief 278
     * @par Address: 0x100041AC
     */
    static const s32 cProfileID_116;
    /**
     * @brief 279
     * @par Address: 0x100041B0
     */
    static const s32 cProfileID_117;
    /**
     * @brief 280
     * @par Address: 0x100041B4
     */
    static const s32 cProfileID_118;
    /**
     * @brief 281
     * @par Address: 0x100041B8
     */
    static const s32 cProfileID_119;
    /**
     * @brief 282
     * @par Address: 0x100041BC
     */
    static const s32 cProfileID_11A;
    /**
     * @brief 283
     * @par Address: 0x100041C0
     */
    static const s32 cProfileID_Freezer;
    /**
     * @brief 284
     * @par Address: 0x100041C4
     */
    static const s32 cProfileID_11C;
    /**
     * @brief 285
     * @par Address: 0x100041C8
     */
    static const s32 cProfileID_11D;
    /**
     * @brief 286
     * @par Address: 0x100041CC
     */
    static const s32 cProfileID_11E;
    /**
     * @brief 287
     * @par Address: 0x100041D0
     */
    static const s32 cProfileID_Block;
    /**
     * @brief 288
     * @par Address: 0x100041D4
     */
    static const s32 cProfileID_120;
    /**
     * @brief 289
     * @par Address: 0x100041D8
     */
    static const s32 cProfileID_121;
    /**
     * @brief 290
     * @par Address: 0x100041DC
     */
    static const s32 cProfileID_122;
    /**
     * @brief 291
     * @par Address: 0x100041E0
     */
    static const s32 cProfileID_ActorBlockRenga;
    /**
     * @brief 292
     * @par Address: 0x100041E4
     */
    static const s32 cProfileID_124;
    /**
     * @brief 293
     * @par Address: 0x100041E8
     */
    static const s32 cProfileID_125;
    /**
     * @brief 294
     * @par Address: 0x100041EC
     */
    static const s32 cProfileID_126;
    /**
     * @brief 295
     * @par Address: 0x100041F0
     */
    static const s32 cProfileID_127;
    /**
     * @brief 296
     * @par Address: 0x100041F4
     */
    static const s32 cProfileID_128;
    /**
     * @brief 297
     * @par Address: 0x100041F8
     */
    static const s32 cProfileID_129;
    /**
     * @brief 298
     * @par Address: 0x100041FC
     */
    static const s32 cProfileID_12A;
    /**
     * @brief 299
     * @par Address: 0x10004200
     */
    static const s32 cProfileID_12B;
    /**
     * @brief 300
     * @par Address: 0x10004204
     */
    static const s32 cProfileID_12C;
    /**
     * @brief 301
     * @par Address: 0x10004208
     */
    static const s32 cProfileID_12D;
    /**
     * @brief 302
     * @par Address: 0x1000420C
     */
    static const s32 cProfileID_12E;
    /**
     * @brief 303
     * @par Address: 0x10004210
     */
    static const s32 cProfileID_12F;
    /**
     * @brief 304
     * @par Address: 0x10004214
     */
    static const s32 cProfileID_130;
    /**
     * @brief 305
     * @par Address: 0x10004218
     */
    static const s32 cProfileID_131;
    /**
     * @brief 306
     * @par Address: 0x1000421C
     */
    static const s32 cProfileID_132;
    /**
     * @brief 307
     * @par Address: 0x10004220
     */
    static const s32 cProfileID_133;
    /**
     * @brief 308
     * @par Address: 0x10004224
     */
    static const s32 cProfileID_134;
    /**
     * @brief 309
     * @par Address: 0x10004228
     */
    static const s32 cProfileID_ActorBlockMakeDRC;
    /**
     * @brief 310
     * @par Address: 0x1000422C
     */
    static const s32 cProfileID_136;
    /**
     * @brief 311
     * @par Address: 0x10004230
     */
    static const s32 cProfileID_137;
    /**
     * @brief 312
     * @par Address: 0x10004234
     */
    static const s32 cProfileID_138;
    /**
     * @brief 313
     * @par Address: 0x10004238
     */
    static const s32 cProfileID_139;
    /**
     * @brief 314
     * @par Address: 0x1000423C
     */
    static const s32 cProfileID_13A;
    /**
     * @brief 315
     * @par Address: 0x10004240
     */
    static const s32 cProfileID_13B;
    /**
     * @brief 316
     * @par Address: 0x10004244
     */
    static const s32 cProfileID_13C;
    /**
     * @brief 317
     * @par Address: 0x10004248
     */
    static const s32 cProfileID_13D;
    /**
     * @brief 318
     * @par Address: 0x1000424C
     */
    static const s32 cProfileID_13E;
    /**
     * @brief 319
     * @par Address: 0x10004250
     */
    static const s32 cProfileID_13F;
    /**
     * @brief 320
     * @par Address: 0x10004254
     */
    static const s32 cProfileID_140;
    /**
     * @brief 321
     * @par Address: 0x10004258
     */
    static const s32 cProfileID_141;
    /**
     * @brief 322
     * @par Address: 0x1000425C
     */
    static const s32 cProfileID_142;
    /**
     * @brief 323
     * @par Address: 0x10004260
     */
    static const s32 cProfileID_143;
    /**
     * @brief 324
     * @par Address: 0x10004264
     */
    static const s32 cProfileID_144;
    /**
     * @brief 325
     * @par Address: 0x10004268
     */
    static const s32 cProfileID_145;
    /**
     * @brief 326
     * @par Address: 0x1000426C
     */
    static const s32 cProfileID_146;
    /**
     * @brief 327
     * @par Address: 0x10004270
     */
    static const s32 cProfileID_147;
    /**
     * @brief 328
     * @par Address: 0x10004274
     */
    static const s32 cProfileID_148;
    /**
     * @brief 329
     * @par Address: 0x10004278
     */
    static const s32 cProfileID_149;
    /**
     * @brief 330
     * @par Address: 0x1000427C
     */
    static const s32 cProfileID_14A;
    /**
     * @brief 331
     * @par Address: 0x10004280
     */
    static const s32 cProfileID_14B;
    /**
     * @brief 332
     * @par Address: 0x10004284
     */
    static const s32 cProfileID_14C;
    /**
     * @brief 333
     * @par Address: 0x10004288
     */
    static const s32 cProfileID_14D;
    /**
     * @brief 334
     * @par Address: 0x1000428C
     */
    static const s32 cProfileID_14E;
    /**
     * @brief 335
     * @par Address: 0x10004290
     */
    static const s32 cProfileID_14F;
    /**
     * @brief 336
     * @par Address: 0x10004294
     */
    static const s32 cProfileID_ObjPipeDown;
    /**
     * @brief 337
     * @par Address: 0x10004298
     */
    static const s32 cProfileID_151;
    /**
     * @brief 338
     * @par Address: 0x1000429C
     */
    static const s32 cProfileID_152;
    /**
     * @brief 339
     * @par Address: 0x100042A0
     */
    static const s32 cProfileID_153;
    /**
     * @brief 340
     * @par Address: 0x100042A4
     */
    static const s32 cProfileID_ObjPipeDownGroup;
    /**
     * @brief 341
     * @par Address: 0x100042A8
     */
    static const s32 cProfileID_155;
    /**
     * @brief 342
     * @par Address: 0x100042AC
     */
    static const s32 cProfileID_156;
    /**
     * @brief 343
     * @par Address: 0x100042B0
     */
    static const s32 cProfileID_157;
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
    static const s32 cProfileID_SwitchPbuttonNoWallKick;
    /**
     * @brief 348
     * @par Address: 0x100042C4
     */
    static const s32 cProfileID_15C;
    /**
     * @brief 349
     * @par Address: 0x100042C8
     */
    static const s32 cProfileID_15D;
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
    static const s32 cProfileID_161;
    /**
     * @brief 354
     * @par Address: 0x100042DC
     */
    static const s32 cProfileID_162;
    /**
     * @brief 355
     * @par Address: 0x100042E0
     */
    static const s32 cProfileID_163;
    /**
     * @brief 356
     * @par Address: 0x100042E4
     */
    static const s32 cProfileID_164;
    /**
     * @brief 357
     * @par Address: 0x100042E8
     */
    static const s32 cProfileID_165;
    /**
     * @brief 358
     * @par Address: 0x100042EC
     */
    static const s32 cProfileID_166;
    /**
     * @brief 359
     * @par Address: 0x100042F0
     */
    static const s32 cProfileID_167;
    /**
     * @brief 360
     * @par Address: 0x100042F4
     */
    static const s32 cProfileID_168;
    /**
     * @brief 361
     * @par Address: 0x100042F8
     */
    static const s32 cProfileID_169;
    /**
     * @brief 362
     * @par Address: 0x100042FC
     */
    static const s32 cProfileID_PentaroIce;
    /**
     * @brief 363
     * @par Address: 0x10004300
     */
    static const s32 cProfileID_16B;
    /**
     * @brief 364
     * @par Address: 0x10004304
     */
    static const s32 cProfileID_16C;
    /**
     * @brief 365
     * @par Address: 0x10004308
     */
    static const s32 cProfileID_16D;
    /**
     * @brief 366
     * @par Address: 0x1000430C
     */
    static const s32 cProfileID_16E;
    /**
     * @brief 367
     * @par Address: 0x10004310
     */
    static const s32 cProfileID_16F;
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
    static const s32 cProfileID_174;
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
    static const s32 cProfileID_179;
    /**
     * @brief 378
     * @par Address: 0x1000433C
     */
    static const s32 cProfileID_17A;
    /**
     * @brief 379
     * @par Address: 0x10004340
     */
    static const s32 cProfileID_17B;
    /**
     * @brief 380
     * @par Address: 0x10004344
     */
    static const s32 cProfileID_17C;
    /**
     * @brief 381
     * @par Address: 0x10004348
     */
    static const s32 cProfileID_17D;
    /**
     * @brief 382
     * @par Address: 0x1000434C
     */
    static const s32 cProfileID_17E;
    /**
     * @brief 383
     * @par Address: 0x10004350
     */
    static const s32 cProfileID_17F;
    /**
     * @brief 384
     * @par Address: 0x10004354
     */
    static const s32 cProfileID_180;
    /**
     * @brief 385
     * @par Address: 0x10004358
     */
    static const s32 cProfileID_181;
    /**
     * @brief 386
     * @par Address: 0x1000435C
     */
    static const s32 cProfileID_182;
    /**
     * @brief 387
     * @par Address: 0x10004360
     */
    static const s32 cProfileID_183;
    /**
     * @brief 388
     * @par Address: 0x10004364
     */
    static const s32 cProfileID_184;
    /**
     * @brief 389
     * @par Address: 0x10004368
     */
    static const s32 cProfileID_185;
    /**
     * @brief 390
     * @par Address: 0x1000436C
     */
    static const s32 cProfileID_186;
    /**
     * @brief 391
     * @par Address: 0x10004370
     */
    static const s32 cProfileID_187;
    /**
     * @brief 392
     * @par Address: 0x10004374
     */
    static const s32 cProfileID_188;
    /**
     * @brief 393
     * @par Address: 0x10004378
     */
    static const s32 cProfileID_189;
    /**
     * @brief 394
     * @par Address: 0x1000437C
     */
    static const s32 cProfileID_18A;
    /**
     * @brief 395
     * @par Address: 0x10004380
     */
    static const s32 cProfileID_ActorCoin;
    /**
     * @brief 396
     * @par Address: 0x10004384
     */
    static const s32 cProfileID_18C;
    /**
     * @brief 397
     * @par Address: 0x10004388
     */
    static const s32 cProfileID_18D;
    /**
     * @brief 398
     * @par Address: 0x1000438C
     */
    static const s32 cProfileID_18E;
    /**
     * @brief 399
     * @par Address: 0x10004390
     */
    static const s32 cProfileID_18F;
    /**
     * @brief 400
     * @par Address: 0x10004394
     */
    static const s32 cProfileID_190;
    /**
     * @brief 401
     * @par Address: 0x10004398
     */
    static const s32 cProfileID_191;
    /**
     * @brief 402
     * @par Address: 0x1000439C
     */
    static const s32 cProfileID_192;
    /**
     * @brief 403
     * @par Address: 0x100043A0
     */
    static const s32 cProfileID_193;
    /**
     * @brief 404
     * @par Address: 0x100043A4
     */
    static const s32 cProfileID_194;
    /**
     * @brief 405
     * @par Address: 0x100043A8
     */
    static const s32 cProfileID_195;
    /**
     * @brief 406
     * @par Address: 0x100043AC
     */
    static const s32 cProfileID_196;
    /**
     * @brief 407
     * @par Address: 0x100043B0
     */
    static const s32 cProfileID_197;
    /**
     * @brief 408
     * @par Address: 0x100043B4
     */
    static const s32 cProfileID_198;
    /**
     * @brief 409
     * @par Address: 0x100043B8
     */
    static const s32 cProfileID_199;
    /**
     * @brief 410
     * @par Address: 0x100043BC
     */
    static const s32 cProfileID_19A;
    /**
     * @brief 411
     * @par Address: 0x100043C0
     */
    static const s32 cProfileID_19B;
    /**
     * @brief 412
     * @par Address: 0x100043C4
     */
    static const s32 cProfileID_19C;
    /**
     * @brief 413
     * @par Address: 0x100043C8
     */
    static const s32 cProfileID_19D;
    /**
     * @brief 414
     * @par Address: 0x100043CC
     */
    static const s32 cProfileID_19E;
    /**
     * @brief 415
     * @par Address: 0x100043D0
     */
    static const s32 cProfileID_19F;
    /**
     * @brief 416
     * @par Address: 0x100043D4
     */
    static const s32 cProfileID_1A0;
    /**
     * @brief 417
     * @par Address: 0x100043D8
     */
    static const s32 cProfileID_1A1;
    /**
     * @brief 418
     * @par Address: 0x100043DC
     */
    static const s32 cProfileID_1A2;
    /**
     * @brief 419
     * @par Address: 0x100043E0
     */
    static const s32 cProfileID_1A3;
    /**
     * @brief 420
     * @par Address: 0x100043E4
     */
    static const s32 cProfileID_1A4;
    /**
     * @brief 421
     * @par Address: 0x100043E8
     */
    static const s32 cProfileID_1A5;
    /**
     * @brief 422
     * @par Address: 0x100043EC
     */
    static const s32 cProfileID_1A6;
    /**
     * @brief 423
     * @par Address: 0x100043F0
     */
    static const s32 cProfileID_1A7;
    /**
     * @brief 424
     * @par Address: 0x100043F4
     */
    static const s32 cProfileID_1A8;
    /**
     * @brief 425
     * @par Address: 0x100043F8
     */
    static const s32 cProfileID_BlueCoin;
    /**
     * @brief 426
     * @par Address: 0x100043FC
     */
    static const s32 cProfileID_1AA;
    /**
     * @brief 427
     * @par Address: 0x10004400
     */
    static const s32 cProfileID_1AB;
    /**
     * @brief 428
     * @par Address: 0x10004404
     */
    static const s32 cProfileID_1AC;
    /**
     * @brief 429
     * @par Address: 0x10004408
     */
    static const s32 cProfileID_1AD;
    /**
     * @brief 430
     * @par Address: 0x1000440C
     */
    static const s32 cProfileID_1AE;
    /**
     * @brief 431
     * @par Address: 0x10004410
     */
    static const s32 cProfileID_1AF;
    /**
     * @brief 432
     * @par Address: 0x10004414
     */
    static const s32 cProfileID_1B0;
    /**
     * @brief 433
     * @par Address: 0x10004418
     */
    static const s32 cProfileID_1B1;
    /**
     * @brief 434
     * @par Address: 0x1000441C
     */
    static const s32 cProfileID_1B2;
    /**
     * @brief 435
     * @par Address: 0x10004420
     */
    static const s32 cProfileID_1B3;
    /**
     * @brief 436
     * @par Address: 0x10004424
     */
    static const s32 cProfileID_1B4;
    /**
     * @brief 437
     * @par Address: 0x10004428
     */
    static const s32 cProfileID_1B5;
    /**
     * @brief 438
     * @par Address: 0x1000442C
     */
    static const s32 cProfileID_CoinmakiCoin;
    /**
     * @brief 439
     * @par Address: 0x10004430
     */
    static const s32 cProfileID_1B7;
    /**
     * @brief 440
     * @par Address: 0x10004434
     */
    static const s32 cProfileID_1B8;
    /**
     * @brief 441
     * @par Address: 0x10004438
     */
    static const s32 cProfileID_1B9;
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
    static const s32 cProfileID_1BD;
    /**
     * @brief 446
     * @par Address: 0x1000444C
     */
    static const s32 cProfileID_1BE;
    /**
     * @brief 447
     * @par Address: 0x10004450
     */
    static const s32 cProfileID_1BF;
    /**
     * @brief 448
     * @par Address: 0x10004454
     */
    static const s32 cProfileID_1C0;
    /**
     * @brief 449
     * @par Address: 0x10004458
     */
    static const s32 cProfileID_1C1;
    /**
     * @brief 450
     * @par Address: 0x1000445C
     */
    static const s32 cProfileID_1C2;
    /**
     * @brief 451
     * @par Address: 0x10004460
     */
    static const s32 cProfileID_1C3;
    /**
     * @brief 452
     * @par Address: 0x10004464
     */
    static const s32 cProfileID_1C4;
    /**
     * @brief 453
     * @par Address: 0x10004468
     */
    static const s32 cProfileID_SlotChibiYoshi;
    /**
     * @brief 454
     * @par Address: 0x1000446C
     */
    static const s32 cProfileID_1C6;
    /**
     * @brief 455
     * @par Address: 0x10004470
     */
    static const s32 cProfileID_1C7;
    /**
     * @brief 456
     * @par Address: 0x10004474
     */
    static const s32 cProfileID_1C8;
    /**
     * @brief 457
     * @par Address: 0x10004478
     */
    static const s32 cProfileID_1C9;
    /**
     * @brief 458
     * @par Address: 0x1000447C
     */
    static const s32 cProfileID_1CA;
    /**
     * @brief 459
     * @par Address: 0x10004480
     */
    static const s32 cProfileID_1CB;
    /**
     * @brief 460
     * @par Address: 0x10004484
     */
    static const s32 cProfileID_1CC;
    /**
     * @brief 461
     * @par Address: 0x10004488
     */
    static const s32 cProfileID_1CD;
    /**
     * @brief 462
     * @par Address: 0x1000448C
     */
    static const s32 cProfileID_1CE;
    /**
     * @brief 463
     * @par Address: 0x10004490
     */
    static const s32 cProfileID_QuestPrizeItem;
    /**
     * @brief 464
     * @par Address: 0x10004494
     */
    static const s32 cProfileID_1D0;
    /**
     * @brief 465
     * @par Address: 0x10004498
     */
    static const s32 cProfileID_1D1;
    /**
     * @brief 466
     * @par Address: 0x1000449C
     */
    static const s32 cProfileID_1D2;
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
    static const s32 cProfileID_1D6;
    /**
     * @brief 471
     * @par Address: 0x100044B0
     */
    static const s32 cProfileID_1D7;
    /**
     * @brief 472
     * @par Address: 0x100044B4
     */
    static const s32 cProfileID_1D8;
    /**
     * @brief 473
     * @par Address: 0x100044B8
     */
    static const s32 cProfileID_1D9;
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
    static const s32 cProfileID_1DF;
    /**
     * @brief 480
     * @par Address: 0x100044D4
     */
    static const s32 cProfileID_1E0;
    /**
     * @brief 481
     * @par Address: 0x100044D8
     */
    static const s32 cProfileID_1E1;
    /**
     * @brief 482
     * @par Address: 0x100044DC
     */
    static const s32 cProfileID_1E2;
    /**
     * @brief 483
     * @par Address: 0x100044E0
     */
    static const s32 cProfileID_1E3;
    /**
     * @brief 484
     * @par Address: 0x100044E4
     */
    static const s32 cProfileID_1E4;
    /**
     * @brief 485
     * @par Address: 0x100044E8
     */
    static const s32 cProfileID_1E5;
    /**
     * @brief 486
     * @par Address: 0x100044EC
     */
    static const s32 cProfileID_1E6;
    /**
     * @brief 487
     * @par Address: 0x100044F0
     */
    static const s32 cProfileID_1E7;
    /**
     * @brief 488
     * @par Address: 0x100044F4
     */
    static const s32 cProfileID_1E8;
    /**
     * @brief 489
     * @par Address: 0x100044F8
     */
    static const s32 cProfileID_1E9;
    /**
     * @brief 490
     * @par Address: 0x100044FC
     */
    static const s32 cProfileID_1EA;
    /**
     * @brief 491
     * @par Address: 0x10004500
     */
    static const s32 cProfileID_1EB;
    /**
     * @brief 492
     * @par Address: 0x10004504
     */
    static const s32 cProfileID_1EC;
    /**
     * @brief 493
     * @par Address: 0x10004508
     */
    static const s32 cProfileID_1ED;
    /**
     * @brief 494
     * @par Address: 0x1000450C
     */
    static const s32 cProfileID_1EE;
    /**
     * @brief 495
     * @par Address: 0x10004510
     */
    static const s32 cProfileID_1EF;
    /**
     * @brief 496
     * @par Address: 0x10004514
     */
    static const s32 cProfileID_1F0;
    /**
     * @brief 497
     * @par Address: 0x10004518
     */
    static const s32 cProfileID_1F1;
    /**
     * @brief 498
     * @par Address: 0x1000451C
     */
    static const s32 cProfileID_1F2;
    /**
     * @brief 499
     * @par Address: 0x10004520
     */
    static const s32 cProfileID_1F3;
    /**
     * @brief 500
     * @par Address: 0x10004524
     */
    static const s32 cProfileID_1F4;
    /**
     * @brief 501
     * @par Address: 0x10004528
     */
    static const s32 cProfileID_1F5;
    /**
     * @brief 502
     * @par Address: 0x1000452C
     */
    static const s32 cProfileID_1F6;
    /**
     * @brief 503
     * @par Address: 0x10004530
     */
    static const s32 cProfileID_1F7;
    /**
     * @brief 504
     * @par Address: 0x10004534
     */
    static const s32 cProfileID_1F8;
    /**
     * @brief 505
     * @par Address: 0x10004538
     */
    static const s32 cProfileID_1F9;
    /**
     * @brief 506
     * @par Address: 0x1000453C
     */
    static const s32 cProfileID_1FA;
    /**
     * @brief 507
     * @par Address: 0x10004540
     */
    static const s32 cProfileID_1FB;
    /**
     * @brief 508
     * @par Address: 0x10004544
     */
    static const s32 cProfileID_1FC;
    /**
     * @brief 509
     * @par Address: 0x10004548
     */
    static const s32 cProfileID_1FD;
    /**
     * @brief 510
     * @par Address: 0x1000454C
     */
    static const s32 cProfileID_1FE;
    /**
     * @brief 511
     * @par Address: 0x10004550
     */
    static const s32 cProfileID_1FF;
    /**
     * @brief 512
     * @par Address: 0x10004554
     */
    static const s32 cProfileID_Nokonoko;
    /**
     * @brief 513
     * @par Address: 0x10004558
     */
    static const s32 cProfileID_201;
    /**
     * @brief 514
     * @par Address: 0x1000455C
     */
    static const s32 cProfileID_202;
    /**
     * @brief 515
     * @par Address: 0x10004560
     */
    static const s32 cProfileID_203;
    /**
     * @brief 516
     * @par Address: 0x10004564
     */
    static const s32 cProfileID_204;
    /**
     * @brief 517
     * @par Address: 0x10004568
     */
    static const s32 cProfileID_205;
    /**
     * @brief 518
     * @par Address: 0x1000456C
     */
    static const s32 cProfileID_206;
    /**
     * @brief 519
     * @par Address: 0x10004570
     */
    static const s32 cProfileID_207;
    /**
     * @brief 520
     * @par Address: 0x10004574
     */
    static const s32 cProfileID_208;
    /**
     * @brief 521
     * @par Address: 0x10004578
     */
    static const s32 cProfileID_209;
    /**
     * @brief 522
     * @par Address: 0x1000457C
     */
    static const s32 cProfileID_20A;
    /**
     * @brief 523
     * @par Address: 0x10004580
     */
    static const s32 cProfileID_20B;
    /**
     * @brief 524
     * @par Address: 0x10004584
     */
    static const s32 cProfileID_MechaKoopa;
    /**
     * @brief 525
     * @par Address: 0x10004588
     */
    static const s32 cProfileID_20D;
    /**
     * @brief 526
     * @par Address: 0x1000458C
     */
    static const s32 cProfileID_20E;
    /**
     * @brief 527
     * @par Address: 0x10004590
     */
    static const s32 cProfileID_20F;
    /**
     * @brief 528
     * @par Address: 0x10004594
     */
    static const s32 cProfileID_210;
    /**
     * @brief 529
     * @par Address: 0x10004598
     */
    static const s32 cProfileID_211;
    /**
     * @brief 530
     * @par Address: 0x1000459C
     */
    static const s32 cProfileID_212;
    /**
     * @brief 531
     * @par Address: 0x100045A0
     */
    static const s32 cProfileID_213;
    /**
     * @brief 532
     * @par Address: 0x100045A4
     */
    static const s32 cProfileID_214;
    /**
     * @brief 533
     * @par Address: 0x100045A8
     */
    static const s32 cProfileID_215;
    /**
     * @brief 534
     * @par Address: 0x100045AC
     */
    static const s32 cProfileID_216;
    /**
     * @brief 535
     * @par Address: 0x100045B0
     */
    static const s32 cProfileID_217;
    /**
     * @brief 536
     * @par Address: 0x100045B4
     */
    static const s32 cProfileID_218;
    /**
     * @brief 537
     * @par Address: 0x100045B8
     */
    static const s32 cProfileID_219;
    /**
     * @brief 538
     * @par Address: 0x100045BC
     */
    static const s32 cProfileID_21A;
    /**
     * @brief 539
     * @par Address: 0x100045C0
     */
    static const s32 cProfileID_21B;
    /**
     * @brief 540
     * @par Address: 0x100045C4
     */
    static const s32 cProfileID_21C;
    /**
     * @brief 541
     * @par Address: 0x100045C8
     */
    static const s32 cProfileID_21D;
    /**
     * @brief 542
     * @par Address: 0x100045CC
     */
    static const s32 cProfileID_21E;
    /**
     * @brief 543
     * @par Address: 0x100045D0
     */
    static const s32 cProfileID_21F;
    /**
     * @brief 544
     * @par Address: 0x100045D4
     */
    static const s32 cProfileID_220;
    /**
     * @brief 545
     * @par Address: 0x100045D8
     */
    static const s32 cProfileID_221;
    /**
     * @brief 546
     * @par Address: 0x100045DC
     */
    static const s32 cProfileID_222;
    /**
     * @brief 547
     * @par Address: 0x100045E0
     */
    static const s32 cProfileID_223;
    /**
     * @brief 548
     * @par Address: 0x100045E4
     */
    static const s32 cProfileID_224;
    /**
     * @brief 549
     * @par Address: 0x100045E8
     */
    static const s32 cProfileID_225;
    /**
     * @brief 550
     * @par Address: 0x100045EC
     */
    static const s32 cProfileID_226;
    /**
     * @brief 551
     * @par Address: 0x100045F0
     */
    static const s32 cProfileID_227;
    /**
     * @brief 552
     * @par Address: 0x100045F4
     */
    static const s32 cProfileID_228;
    /**
     * @brief 553
     * @par Address: 0x100045F8
     */
    static const s32 cProfileID_229;
    /**
     * @brief 554
     * @par Address: 0x100045FC
     */
    static const s32 cProfileID_22A;
    /**
     * @brief 555
     * @par Address: 0x10004600
     */
    static const s32 cProfileID_22B;
    /**
     * @brief 556
     * @par Address: 0x10004604
     */
    static const s32 cProfileID_22C;
    /**
     * @brief 557
     * @par Address: 0x10004608
     */
    static const s32 cProfileID_22D;
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
    static const s32 cProfileID_230;
    /**
     * @brief 561
     * @par Address: 0x10004618
     */
    static const s32 cProfileID_FireSnake;
    /**
     * @brief 562
     * @par Address: 0x1000461C
     */
    static const s32 cProfileID_Grrrol;
    /**
     * @brief 563
     * @par Address: 0x10004620
     */
    static const s32 cProfileID_BigGrrrol;
    /**
     * @brief 564
     * @par Address: 0x10004624
     */
    static const s32 cProfileID_BigGrrrolRDash;
    /**
     * @brief 565
     * @par Address: 0x10004628
     */
    static const s32 cProfileID_235;
    /**
     * @brief 566
     * @par Address: 0x1000462C
     */
    static const s32 cProfileID_236;
    /**
     * @brief 567
     * @par Address: 0x10004630
     */
    static const s32 cProfileID_237;
    /**
     * @brief 568
     * @par Address: 0x10004634
     */
    static const s32 cProfileID_238;
    /**
     * @brief 569
     * @par Address: 0x10004638
     */
    static const s32 cProfileID_239;
    /**
     * @brief 570
     * @par Address: 0x1000463C
     */
    static const s32 cProfileID_23A;
    /**
     * @brief 571
     * @par Address: 0x10004640
     */
    static const s32 cProfileID_23B;
    /**
     * @brief 572
     * @par Address: 0x10004644
     */
    static const s32 cProfileID_23C;
    /**
     * @brief 573
     * @par Address: 0x10004648
     */
    static const s32 cProfileID_23D;
    /**
     * @brief 574
     * @par Address: 0x1000464C
     */
    static const s32 cProfileID_Kazandan;
    /**
     * @brief 575
     * @par Address: 0x10004650
     */
    static const s32 cProfileID_23F;
    /**
     * @brief 576
     * @par Address: 0x10004654
     */
    static const s32 cProfileID_240;
    /**
     * @brief 577
     * @par Address: 0x10004658
     */
    static const s32 cProfileID_241;
    /**
     * @brief 578
     * @par Address: 0x1000465C
     */
    static const s32 cProfileID_242;
    /**
     * @brief 579
     * @par Address: 0x10004660
     */
    static const s32 cProfileID_243;
    /**
     * @brief 580
     * @par Address: 0x10004664
     */
    static const s32 cProfileID_244;
    /**
     * @brief 581
     * @par Address: 0x10004668
     */
    static const s32 cProfileID_245;
    /**
     * @brief 582
     * @par Address: 0x1000466C
     */
    static const s32 cProfileID_246;
    /**
     * @brief 583
     * @par Address: 0x10004670
     */
    static const s32 cProfileID_247;
    /**
     * @brief 584
     * @par Address: 0x10004674
     */
    static const s32 cProfileID_248;
    /**
     * @brief 585
     * @par Address: 0x10004678
     */
    static const s32 cProfileID_249;
    /**
     * @brief 586
     * @par Address: 0x1000467C
     */
    static const s32 cProfileID_24A;
    /**
     * @brief 587
     * @par Address: 0x10004680
     */
    static const s32 cProfileID_BgCenter;
    /**
     * @brief 588
     * @par Address: 0x10004684
     */
    static const s32 cProfileID_24C;
    /**
     * @brief 589
     * @par Address: 0x10004688
     */
    static const s32 cProfileID_24D;
    /**
     * @brief 590
     * @par Address: 0x1000468C
     */
    static const s32 cProfileID_24E;
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
    static const s32 cProfileID_259;
    /**
     * @brief 602
     * @par Address: 0x100046BC
     */
    static const s32 cProfileID_25A;
    /**
     * @brief 603
     * @par Address: 0x100046C0
     */
    static const s32 cProfileID_25B;
    /**
     * @brief 604
     * @par Address: 0x100046C4
     */
    static const s32 cProfileID_25C;
    /**
     * @brief 605
     * @par Address: 0x100046C8
     */
    static const s32 cProfileID_25D;
    /**
     * @brief 606
     * @par Address: 0x100046CC
     */
    static const s32 cProfileID_25E;
    /**
     * @brief 607
     * @par Address: 0x100046D0
     */
    static const s32 cProfileID_25F;
    /**
     * @brief 608
     * @par Address: 0x100046D4
     */
    static const s32 cProfileID_260;
    /**
     * @brief 609
     * @par Address: 0x100046D8
     */
    static const s32 cProfileID_261;
    /**
     * @brief 610
     * @par Address: 0x100046DC
     */
    static const s32 cProfileID_262;
    /**
     * @brief 611
     * @par Address: 0x100046E0
     */
    static const s32 cProfileID_263;
    /**
     * @brief 612
     * @par Address: 0x100046E4
     */
    static const s32 cProfileID_264;
    /**
     * @brief 613
     * @par Address: 0x100046E8
     */
    static const s32 cProfileID_265;
    /**
     * @brief 614
     * @par Address: 0x100046EC
     */
    static const s32 cProfileID_266;
    /**
     * @brief 615
     * @par Address: 0x100046F0
     */
    static const s32 cProfileID_267;
    /**
     * @brief 616
     * @par Address: 0x100046F4
     */
    static const s32 cProfileID_268;
    /**
     * @brief 617
     * @par Address: 0x100046F8
     */
    static const s32 cProfileID_Spanner;
    /**
     * @brief 618
     * @par Address: 0x100046FC
     */
    static const s32 cProfileID_26A;
    /**
     * @brief 619
     * @par Address: 0x10004700
     */
    static const s32 cProfileID_26B;
    /**
     * @brief 620
     * @par Address: 0x10004704
     */
    static const s32 cProfileID_26C;
    /**
     * @brief 621
     * @par Address: 0x10004708
     */
    static const s32 cProfileID_26D;
    /**
     * @brief 622
     * @par Address: 0x1000470C
     */
    static const s32 cProfileID_26E;
    /**
     * @brief 623
     * @par Address: 0x10004710
     */
    static const s32 cProfileID_26F;
    /**
     * @brief 624
     * @par Address: 0x10004714
     */
    static const s32 cProfileID_270;
    /**
     * @brief 625
     * @par Address: 0x10004718
     */
    static const s32 cProfileID_271;
    /**
     * @brief 626
     * @par Address: 0x1000471C
     */
    static const s32 cProfileID_272;
    /**
     * @brief 627
     * @par Address: 0x10004720
     */
    static const s32 cProfileID_273;
    /**
     * @brief 628
     * @par Address: 0x10004724
     */
    static const s32 cProfileID_274;
    /**
     * @brief 629
     * @par Address: 0x10004728
     */
    static const s32 cProfileID_275;
    /**
     * @brief 630
     * @par Address: 0x1000472C
     */
    static const s32 cProfileID_SearchKiller;
    /**
     * @brief 631
     * @par Address: 0x10004730
     */
    static const s32 cProfileID_277;
    /**
     * @brief 632
     * @par Address: 0x10004734
     */
    static const s32 cProfileID_278;
    /**
     * @brief 633
     * @par Address: 0x10004738
     */
    static const s32 cProfileID_279;
    /**
     * @brief 634
     * @par Address: 0x1000473C
     */
    static const s32 cProfileID_WakiSearchMagKiller;
    /**
     * @brief 635
     * @par Address: 0x10004740
     */
    static const s32 cProfileID_27B;
    /**
     * @brief 636
     * @par Address: 0x10004744
     */
    static const s32 cProfileID_27C;
    /**
     * @brief 637
     * @par Address: 0x10004748
     */
    static const s32 cProfileID_27D;
    /**
     * @brief 638
     * @par Address: 0x1000474C
     */
    static const s32 cProfileID_27E;
    /**
     * @brief 639
     * @par Address: 0x10004750
     */
    static const s32 cProfileID_27F;
    /**
     * @brief 640
     * @par Address: 0x10004754
     */
    static const s32 cProfileID_GabonRock;
    /**
     * @brief 641
     * @par Address: 0x10004758
     */
    static const s32 cProfileID_281;
    /**
     * @brief 642
     * @par Address: 0x1000475C
     */
    static const s32 cProfileID_282;
    /**
     * @brief 643
     * @par Address: 0x10004760
     */
    static const s32 cProfileID_RockGabonRock;
    /**
     * @brief 644
     * @par Address: 0x10004764
     */
    static const s32 cProfileID_284;
    /**
     * @brief 645
     * @par Address: 0x10004768
     */
    static const s32 cProfileID_SeichanSnowBall;
    /**
     * @brief 646
     * @par Address: 0x1000476C
     */
    static const s32 cProfileID_286;
    /**
     * @brief 647
     * @par Address: 0x10004770
     */
    static const s32 cProfileID_287;
    /**
     * @brief 648
     * @par Address: 0x10004774
     */
    static const s32 cProfileID_288;
    /**
     * @brief 649
     * @par Address: 0x10004778
     */
    static const s32 cProfileID_289;
    /**
     * @brief 650
     * @par Address: 0x1000477C
     */
    static const s32 cProfileID_Woochan;
    /**
     * @brief 651
     * @par Address: 0x10004780
     */
    static const s32 cProfileID_28B;
    /**
     * @brief 652
     * @par Address: 0x10004784
     */
    static const s32 cProfileID_28C;
    /**
     * @brief 653
     * @par Address: 0x10004788
     */
    static const s32 cProfileID_28D;
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
    static const s32 cProfileID_292;
    /**
     * @brief 659
     * @par Address: 0x100047A0
     */
    static const s32 cProfileID_293;
    /**
     * @brief 660
     * @par Address: 0x100047A4
     */
    static const s32 cProfileID_294;
    /**
     * @brief 661
     * @par Address: 0x100047A8
     */
    static const s32 cProfileID_295;
    /**
     * @brief 662
     * @par Address: 0x100047AC
     */
    static const s32 cProfileID_296;
    /**
     * @brief 663
     * @par Address: 0x100047B0
     */
    static const s32 cProfileID_297;
    /**
     * @brief 664
     * @par Address: 0x100047B4
     */
    static const s32 cProfileID_298;
    /**
     * @brief 665
     * @par Address: 0x100047B8
     */
    static const s32 cProfileID_299;
    /**
     * @brief 666
     * @par Address: 0x100047BC
     */
    static const s32 cProfileID_29A;
    /**
     * @brief 667
     * @par Address: 0x100047C0
     */
    static const s32 cProfileID_29B;
    /**
     * @brief 668
     * @par Address: 0x100047C4
     */
    static const s32 cProfileID_29C;
    /**
     * @brief 669
     * @par Address: 0x100047C8
     */
    static const s32 cProfileID_29D;
    /**
     * @brief 670
     * @par Address: 0x100047CC
     */
    static const s32 cProfileID_29E;
    /**
     * @brief 671
     * @par Address: 0x100047D0
     */
    static const s32 cProfileID_29F;
    /**
     * @brief 672
     * @par Address: 0x100047D4
     */
    static const s32 cProfileID_2A0;
    /**
     * @brief 673
     * @par Address: 0x100047D8
     */
    static const s32 cProfileID_2A1;
    /**
     * @brief 674
     * @par Address: 0x100047DC
     */
    static const s32 cProfileID_2A2;
    /**
     * @brief 675
     * @par Address: 0x100047E0
     */
    static const s32 cProfileID_2A3;
    /**
     * @brief 676
     * @par Address: 0x100047E4
     */
    static const s32 cProfileID_2A4;
    /**
     * @brief 677
     * @par Address: 0x100047E8
     */
    static const s32 cProfileID_2A5;
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
    static const s32 cProfileID_2E0;
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
    static const s32 cProfileID_2E3;
    /**
     * @brief 740
     * @par Address: 0x100048E4
     */
    static const s32 cProfileID_2E4;
    /**
     * @brief 741
     * @par Address: 0x100048E8
     */
    static const s32 cProfileID_2E5;
    /**
     * @brief 742
     * @par Address: 0x100048EC
     */
    static const s32 cProfileID_2E6;
    /**
     * @brief 743
     * @par Address: 0x100048F0
     */
    static const s32 cProfileID_2E7;
    /**
     * @brief 744
     * @par Address: 0x100048F4
     */
    static const s32 cProfileID_2E8;
    /**
     * @brief 745
     * @par Address: 0x100048F8
     */
    static const s32 cProfileID_2E9;
    /**
     * @brief 746
     * @par Address: 0x100048FC
     */
    static const s32 cProfileID_2EA;
    /**
     * @brief 747
     * @par Address: 0x10004900
     */
    static const s32 cProfileID_2EB;
    /**
     * @brief 748
     * @par Address: 0x10004904
     */
    static const s32 cProfileID_2EC;
    /**
     * @brief 749
     * @par Address: 0x10004908
     */
    static const s32 cProfileID_2ED;
    /**
     * @brief 750
     * @par Address: 0x1000490C
     */
    static const s32 cProfileID_2EE;
    /**
     * @brief 751
     * @par Address: 0x10004910
     */
    static const s32 cProfileID_2EF;
    /**
     * @brief 752
     * @par Address: 0x10004914
     */
    static const s32 cProfileID_2F0;
    /**
     * @brief 753
     * @par Address: 0x10004918
     */
    static const s32 cProfileID_2F1;
    /**
     * @brief 754
     * @par Address: 0x1000491C
     */
    static const s32 cProfileID_2F2;
    /**
     * @brief 755
     * @par Address: 0x10004920
     */
    static const s32 cProfileID_2F3;
    /**
     * @brief 756
     * @par Address: 0x10004924
     */
    static const s32 cProfileID_2F4;
    /**
     * @brief 757
     * @par Address: 0x10004928
     */
    static const s32 cProfileID_2F5;
    /**
     * @brief 758
     * @par Address: 0x1000492C
     */
    static const s32 cProfileID_Hammer;
    /**
     * @brief 759
     * @par Address: 0x10004930
     */
    static const s32 cProfileID_2F7;
    /**
     * @brief 760
     * @par Address: 0x10004934
     */
    static const s32 cProfileID_Boomerang;
    /**
     * @brief 761
     * @par Address: 0x10004938
     */
    static const s32 cProfileID_2F9;
    /**
     * @brief 762
     * @par Address: 0x1000493C
     */
    static const s32 cProfileID_FireBallBros;
    /**
     * @brief 763
     * @par Address: 0x10004940
     */
    static const s32 cProfileID_2FB;
    /**
     * @brief 764
     * @par Address: 0x10004944
     */
    static const s32 cProfileID_IceBallBros;
    /**
     * @brief 765
     * @par Address: 0x10004948
     */
    static const s32 cProfileID_2FD;
    /**
     * @brief 766
     * @par Address: 0x1000494C
     */
    static const s32 cProfileID_MegaHammer;
    /**
     * @brief 767
     * @par Address: 0x10004950
     */
    static const s32 cProfileID_2FF;
    /**
     * @brief 768
     * @par Address: 0x10004954
     */
    static const s32 cProfileID_300;
    /**
     * @brief 769
     * @par Address: 0x10004958
     */
    static const s32 cProfileID_301;
    /**
     * @brief 770
     * @par Address: 0x1000495C
     */
    static const s32 cProfileID_302;
    /**
     * @brief 771
     * @par Address: 0x10004960
     */
    static const s32 cProfileID_303;
    /**
     * @brief 772
     * @par Address: 0x10004964
     */
    static const s32 cProfileID_304;
    /**
     * @brief 773
     * @par Address: 0x10004968
     */
    static const s32 cProfileID_305;
    /**
     * @brief 774
     * @par Address: 0x1000496C
     */
    static const s32 cProfileID_306;
    /**
     * @brief 775
     * @par Address: 0x10004970
     */
    static const s32 cProfileID_307;
    /**
     * @brief 776
     * @par Address: 0x10004974
     */
    static const s32 cProfileID_308;
    /**
     * @brief 777
     * @par Address: 0x10004978
     */
    static const s32 cProfileID_309;
    /**
     * @brief 778
     * @par Address: 0x1000497C
     */
    static const s32 cProfileID_30A;
    /**
     * @brief 779
     * @par Address: 0x10004980
     */
    static const s32 cProfileID_30B;
    /**
     * @brief 780
     * @par Address: 0x10004984
     */
    static const s32 cProfileID_30C;
    /**
     * @brief 781
     * @par Address: 0x10004988
     */
    static const s32 cProfileID_30D;
    /**
     * @brief 782
     * @par Address: 0x1000498C
     */
    static const s32 cProfileID_30E;
    /**
     * @brief 783
     * @par Address: 0x10004990
     */
    static const s32 cProfileID_30F;
    /**
     * @brief 784
     * @par Address: 0x10004994
     */
    static const s32 cProfileID_310;
    /**
     * @brief 785
     * @par Address: 0x10004998
     */
    static const s32 cProfileID_311;
    /**
     * @brief 786
     * @par Address: 0x1000499C
     */
    static const s32 cProfileID_312;
    /**
     * @brief 787
     * @par Address: 0x100049A0
     */
    static const s32 cProfileID_313;
    /**
     * @brief 788
     * @par Address: 0x100049A4
     */
    static const s32 cProfileID_314;
    /**
     * @brief 789
     * @par Address: 0x100049A8
     */
    static const s32 cProfileID_315;
    /**
     * @brief 790
     * @par Address: 0x100049AC
     */
    static const s32 cProfileID_316;
    /**
     * @brief 791
     * @par Address: 0x100049B0
     */
    static const s32 cProfileID_317;
    /**
     * @brief 792
     * @par Address: 0x100049B4
     */
    static const s32 cProfileID_318;
    /**
     * @brief 793
     * @par Address: 0x100049B8
     */
    static const s32 cProfileID_319;
    /**
     * @brief 794
     * @par Address: 0x100049BC
     */
    static const s32 cProfileID_31A;
    /**
     * @brief 795
     * @par Address: 0x100049C0
     */
    static const s32 cProfileID_31B;
    /**
     * @brief 796
     * @par Address: 0x100049C4
     */
    static const s32 cProfileID_31C;
    /**
     * @brief 797
     * @par Address: 0x100049C8
     */
    static const s32 cProfileID_31D;
    /**
     * @brief 798
     * @par Address: 0x100049CC
     */
    static const s32 cProfileID_31E;
    /**
     * @brief 799
     * @par Address: 0x100049D0
     */
    static const s32 cProfileID_31F;
    /**
     * @brief 800
     * @par Address: 0x100049D4
     */
    static const s32 cProfileID_320;
    /**
     * @brief 801
     * @par Address: 0x100049D8
     */
    static const s32 cProfileID_321;
    /**
     * @brief 802
     * @par Address: 0x100049DC
     */
    static const s32 cProfileID_322;
    /**
     * @brief 803
     * @par Address: 0x100049E0
     */
    static const s32 cProfileID_323;
    /**
     * @brief 804
     * @par Address: 0x100049E4
     */
    static const s32 cProfileID_324;
    /**
     * @brief 805
     * @par Address: 0x100049E8
     */
    static const s32 cProfileID_325;
    /**
     * @brief 806
     * @par Address: 0x100049EC
     */
    static const s32 cProfileID_326;
    /**
     * @brief 807
     * @par Address: 0x100049F0
     */
    static const s32 cProfileID_327;
    /**
     * @brief 808
     * @par Address: 0x100049F4
     */
    static const s32 cProfileID_328;
    /**
     * @brief 809
     * @par Address: 0x100049F8
     */
    static const s32 cProfileID_BattleItem;
    /**
     * @brief 810
     * @par Address: 0x100049FC
     */
    static const s32 cProfileID_32A;
    /**
     * @brief 811
     * @par Address: 0x10004A00
     */
    static const s32 cProfileID_VsBattleItem;
    /**
     * @brief 812
     * @par Address: 0x10004A04
     */
    static const s32 cProfileID_32C;
    /**
     * @brief 813
     * @par Address: 0x10004A08
     */
    static const s32 cProfileID_32D;
    /**
     * @brief 814
     * @par Address: 0x10004A0C
     */
    static const s32 cProfileID_32E;
    /**
     * @brief 815
     * @par Address: 0x10004A10
     */
    static const s32 cProfileID_32F;
    /**
     * @brief 816
     * @par Address: 0x10004A14
     */
    static const s32 cProfileID_330;
    /**
     * @brief 817
     * @par Address: 0x10004A18
     */
    static const s32 cProfileID_331;
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
    static const s32 cProfileID_33F;
    /**
     * @brief 832
     * @par Address: 0x10004A54
     */
    static const s32 cProfileID_340;
    /**
     * @brief 833
     * @par Address: 0x10004A58
     */
    static const s32 cProfileID_341;
    /**
     * @brief 834
     * @par Address: 0x10004A5C
     */
    static const s32 cProfileID_342;
    /**
     * @brief 835
     * @par Address: 0x10004A60
     */
    static const s32 cProfileID_343;
    /**
     * @brief 836
     * @par Address: 0x10004A64
     */
    static const s32 cProfileID_344;
    /**
     * @brief 837
     * @par Address: 0x10004A68
     */
    static const s32 cProfileID_345;
    /**
     * @brief 838
     * @par Address: 0x10004A6C
     */
    static const s32 cProfileID_346;
    /**
     * @brief 839
     * @par Address: 0x10004A70
     */
    static const s32 cProfileID_347;
    /**
     * @brief 840
     * @par Address: 0x10004A74
     */
    static const s32 cProfileID_StaffRollChibiYoshiChar;
    /**
     * @brief 841
     * @par Address: 0x10004A78
     */
    static const s32 cProfileID_StaffRollChibiYoshiBalloon;
    /**
     * @brief 842
     * @par Address: 0x10004A7C
     */
    static const s32 cProfileID_StaffRollChibiYoshiBalloonCheer;
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
    static const s32 cProfileID_350;
    /**
     * @brief 849
     * @par Address: 0x10004A98
     */
    static const s32 cProfileID_351;
    /**
     * @brief 850
     * @par Address: 0x10004A9C
     */
    static const s32 cProfileID_352;
    /**
     * @brief 851
     * @par Address: 0x10004AA0
     */
    static const s32 cProfileID_353;
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
