#ifndef _CUST_BATTERY_METER_TABLE_H
#define _CUST_BATTERY_METER_TABLE_H

#include <mach/mt_typedefs.h>

// ============================================================
// define
// ============================================================
#define BAT_NTC_10 0
#define BAT_NTC_47 1

#if (BAT_NTC_10 == 1)
#define RBAT_PULL_UP_R             24000	
#endif

#if (BAT_NTC_47 == 1)
#define RBAT_PULL_UP_R             90000	
#endif

#define RBAT_PULL_UP_VOLT          2800



// ============================================================
// ENUM
// ============================================================

// ============================================================
// structure
// ============================================================

// ============================================================
// typedef
// ============================================================
typedef struct _BATTERY_PROFILE_STRUC
{
    kal_int32 percentage;
    kal_int32 voltage;
} BATTERY_PROFILE_STRUC, *BATTERY_PROFILE_STRUC_P;

typedef struct _R_PROFILE_STRUC
{
    kal_int32 resistance; // Ohm
    kal_int32 voltage;
} R_PROFILE_STRUC, *R_PROFILE_STRUC_P;

typedef enum
{
    T1_0C,
    T2_25C,
    T3_50C
} PROFILE_TEMPERATURE;

// ============================================================
// External Variables
// ============================================================

// ============================================================
// External function
// ============================================================

// ============================================================
// <DOD, Battery_Voltage> Table
// ============================================================
#if (BAT_NTC_10 == 1)
    BATT_TEMPERATURE Batt_Temperature_Table[] = {
        {-20,68237},
        {-15,53650},
        {-10,42506},
        { -5,33892},
        {  0,27219},
        {  5,22021},
        { 10,17926},
        { 15,14674},
        { 20,12081},
        { 25,10000},
        { 30,8315},
        { 35,6948},
        { 40,5834},
        { 45,4917},
        { 50,4161},
        { 55,3535},
        { 60,3014}
    };
#endif

#if (BAT_NTC_47 == 1)
    BATT_TEMPERATURE Batt_Temperature_Table[] = {
        {-20,483954},
        {-15,360850},
        {-10,271697},
        { -5,206463},
        {  0,158214},
        {  5,122259},
        { 10,95227},
        { 15,74730},
        { 20,59065},
        { 25,47000},
        { 30,37643},
        { 35,30334},
        { 40,24591},
        { 45,20048},
        { 50,16433},
        { 55,13539},
        { 60,11210}        
    };
#endif

// T0 -10C
BATTERY_PROFILE_STRUC battery_profile_t0[] =
{
	{0  ,4393},
	{1  ,4365},
	{3  ,4348},
	{4  ,4331},
	{5  ,4315},
	{7  ,4299},
	{8  ,4283},
	{9  ,4268},
	{11 ,4253},
	{12 ,4238},
	{14 ,4223},
	{15 ,4208},
	{16 ,4193},
	{18 ,4179},
	{19 ,4165},
	{20 ,4150},
	{22 ,4136},
	{23 ,4122},
	{24 ,4107},
	{26 ,4094},
	{27 ,4084},
	{28 ,4078},
	{30 ,4069},
	{31 ,4046},
	{32 ,4018},
	{34 ,3997},
	{35 ,3983},
	{36 ,3973},
	{38 ,3966},
	{39 ,3960},
	{41 ,3951},
	{42 ,3937},
	{43 ,3923},
	{45 ,3907},
	{46 ,3893},
	{47 ,3881},
	{49 ,3872},
	{50 ,3864},
	{51 ,3856},
	{53 ,3849},
	{54 ,3842},
	{55 ,3836},
	{57 ,3830},
	{58 ,3824},
	{59 ,3819},
	{61 ,3814},
	{62 ,3809},
	{64 ,3805},
	{65 ,3800},
	{66 ,3796},
	{68 ,3792},
	{69 ,3788},
	{70 ,3785},
	{72 ,3782},
	{73 ,3779},
	{74 ,3775},
	{76 ,3771},
	{77 ,3766},
	{78 ,3760},
	{80 ,3754},
	{81 ,3748},
	{82 ,3740},
	{84 ,3728},
	{85  , 3717},         
	{86 ,3703},
	{88 ,3698},
	{89 ,3696},
	{91  , 3695},         
	{92 ,3694},
	{93 ,3692},
	{95 ,3687},
	{96 ,3661},
	{97 ,3603},
	{99 ,3523},
	{100,3401}
};      
        
// T1 0C 
BATTERY_PROFILE_STRUC battery_profile_t1[] =
{
	{0  ,4393},
	{1  ,4365},
	{3  ,4348},
	{4  ,4331},
	{5  ,4315},
	{7  ,4299},
	{8  ,4283},
	{9  ,4268},
	{11 ,4253},
	{12 ,4238},
	{14 ,4223},
	{15 ,4208},
	{16 ,4193},
	{18 ,4179},
	{19 ,4165},
	{20 ,4150},
	{22 ,4136},
	{23 ,4122},
	{24 ,4107},
	{26 ,4094},
	{27 ,4084},
	{28 ,4078},
	{30 ,4069},
	{31 ,4046},
	{32 ,4018},
	{34 ,3997},
	{35 ,3983},
	{36 ,3973},
	{38 ,3966},
	{39 ,3960},
	{41 ,3951},
	{42 ,3937},
	{43 ,3923},
	{45 ,3907},
	{46 ,3893},
	{47 ,3881},
	{49 ,3872},
	{50 ,3864},
	{51 ,3856},
	{53 ,3849},
	{54 ,3842},
	{55 ,3836},
	{57 ,3830},
	{58 ,3824},
	{59 ,3819},
	{61 ,3814},
	{62 ,3809},
	{64 ,3805},
	{65 ,3800},
	{66 ,3796},
	{68 ,3792},
	{69 ,3788},
	{70 ,3785},
	{72 ,3782},
	{73 ,3779},
	{74 ,3775},
	{76 ,3771},
	{77 ,3766},
	{78 ,3760},
	{80 ,3754},
	{81 ,3748},
	{82 ,3740},
	{84 ,3728},
	{85 ,3717},
	{86 ,3703},
	{88 ,3698},
	{89 ,3696},
	{91 ,3695},
	{92 ,3694},
	{93 ,3692},
	{95 ,3687},
	{96 ,3661},
	{97 ,3603},
	{99 ,3523},
	{100,3401} 
};           

// T2 25C
BATTERY_PROFILE_STRUC battery_profile_t2[] =
{
	{0  ,4393},
	{1  ,4365},
	{3  ,4348},
	{4  ,4331},
	{5  ,4315},
	{7  ,4299},
	{8  ,4283},
	{9  ,4268},
	{11 ,4253},
	{12 ,4238},
	{14 ,4223},
	{15 ,4208},
	{16 ,4193},
	{18 ,4179},
	{19 ,4165},
	{20 ,4150},
	{22 ,4136},
	{23 ,4122},
	{24 ,4107},
	{26 ,4094},
	{27 ,4084},
	{28 ,4078},
	{30 ,4069},
	{31 ,4046},
	{32 ,4018},
	{34 ,3997},
	{35 ,3983},
	{36 ,3973},
	{38 ,3966},
	{39 ,3960},
	{41 ,3951},
	{42 ,3937},
	{43 ,3923},
	{45 ,3907},
	{46 ,3893},
	{47 ,3881},
	{49 ,3872},
	{50 ,3864},
	{51 ,3856},
	{53 ,3849},
	{54 ,3842},
	{55 ,3836},
	{57 ,3830},
	{58 ,3824},
	{59 ,3819},
	{61 ,3814},
	{62 ,3809},
	{64 ,3805},
	{65 ,3800},
	{66 ,3796},
	{68 ,3792},
	{69 ,3788},
	{70 ,3785},
	{72 ,3782},
	{73 ,3779},
	{74 ,3775},
	{76 ,3771},
	{77 ,3766},
	{78 ,3760},
	{80 ,3754},
	{81 ,3748},
	{82 ,3740},
	{84 ,3728},
	{85 ,3717},
	{86 ,3703},
	{88 ,3698},
	{89 ,3696},
	{91 ,3695},
	{92 ,3694},
	{93 ,3692},
	{95 ,3687},
	{96 ,3661},
	{97 ,3603},
	{99 ,3523},
	{100,3401}
};     

// T3 50C
BATTERY_PROFILE_STRUC battery_profile_t3[] =
{
	{0  ,4393},
	{1  ,4365},
	{3  ,4348},
	{4  ,4331},
	{5  ,4315},
	{7  ,4299},
	{8  ,4283},
	{9  ,4268},
	{11 ,4253},
	{12 ,4238},
	{14 ,4223},
	{15 ,4208},
	{16 ,4193},
	{18 ,4179},
	{19 ,4165},
	{20 ,4150},
	{22 ,4136},
	{23 ,4122},
	{24 ,4107},
	{26 ,4094},
	{27 ,4084},
	{28 ,4078},
	{30 ,4069},
	{31 ,4046},
	{32 ,4018},
	{34 ,3997},
	{35 ,3983},
	{36 ,3973},
	{38 ,3966},
	{39 ,3960},
	{41 ,3951},
	{42 ,3937},
	{43 ,3923},
	{45 ,3907},
	{46 ,3893},
	{47 ,3881},
	{49 ,3872},
	{50 ,3864},
	{51 ,3856},
	{53 ,3849},
	{54 ,3842},
	{55 ,3836},
	{57 ,3830},
	{58 ,3824},
	{59 ,3819},
	{61 ,3814},
	{62 ,3809},
	{64 ,3805},
	{65 ,3800},
	{66 ,3796},
	{68 ,3792},
	{69 ,3788},
	{70 ,3785},
	{72 ,3782},
	{73 ,3779},
	{74 ,3775},
	{76 ,3771},
	{77 ,3766},
	{78 ,3760},
	{80 ,3754},
	{81 ,3748},
	{82 ,3740},
	{84 ,3728},
	{85 ,3717},
	{86 ,3703},
	{88 ,3698},
	{89 ,3696},
	{91 ,3695},
	{92 ,3694},
	{93 ,3692},
	{95 ,3687},
	{96 ,3661},
	{97 ,3603},
	{99 ,3523},
	{100,3401}
};           

// battery profile for actual temperature. The size should be the same as T1, T2 and T3
BATTERY_PROFILE_STRUC battery_profile_temperature[] =
{
  {0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },  
	{0  , 0 }, 
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },  
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 }
};    

// ============================================================
// <Rbat, Battery_Voltage> Table
// ============================================================
// T0 -10C
R_PROFILE_STRUC r_profile_t0[] =
{
    {198,4393},
  	{198,4365},
  	{203,4348},
  	{203,4331},
  	{208,4315},
  	{208,4299},
  	{208,4283},
  	{208,4268},
  	{210,4253},
  	{210,4238},
  	{213,4223},
  	{215,4208},
  	{215,4193},
  	{218,4179},
  	{220,4165},
  	{220,4150},
  	{220,4136},
  	{225,4122},
  	{223,4107},
  	{225,4094},
  	{230,4084},
  	{240,4078},
  	{248,4069},
  	{238,4046},
  	{233,4018},
  	{235,3997},
  	{238,3983},
  	{240,3973},
  	{243,3966},
  	{245,3960},
  	{243,3951},
  	{233,3937},
  	{223,3923},
  	{208,3907},
  	{198,3893},
  	{193,3881},
  	{193,3872},
  	{193,3864},
  	{193,3856},
  	{193,3849},
  	{193,3842},
  	{195,3836},
  	{198,3830},
  	{195,3824},
  	{198,3819},
  	{200,3814},
  	{200,3809},
  	{203,3805},
  	{203,3800},
  	{205,3796},
  	{205,3792},
  	{205,3788},
  	{205,3785},
  	{205,3782},
  	{205,3779},
  	{203,3775},
  	{200,3771},
  	{198,3766},
  	{193,3760},
  	{193,3754},
  	{198,3748},
  	{198,3740},
  	{195,3728},
  	{198,3717},
  	{193,3703},
  	{193,3698},
  	{195,3696},
  	{205,3695},
  	{218,3694},
  	{233,3692},
  	{245,3687},
  	{235,3661},
  	{238,3603},
  	{258,3523},
  	{293,3401}
};      

// T1 0C
R_PROFILE_STRUC r_profile_t1[] =
{
    {198,4393},
  	{198,4365},
  	{203,4348},
  	{203,4331},
  	{208,4315},
  	{208,4299},
  	{208,4283},
  	{208,4268},
  	{210,4253},
  	{210,4238},
  	{213,4223},
  	{215,4208},
  	{215,4193},
  	{218,4179},
  	{220,4165},
  	{220,4150},
  	{220,4136},
  	{225,4122},
  	{223,4107},
  	{225,4094},
  	{230,4084},
  	{240,4078},
  	{248,4069},
  	{238,4046},
  	{233,4018},
  	{235,3997},
  	{238,3983},
  	{240,3973},
  	{243,3966},
  	{245,3960},
  	{243,3951},
  	{233,3937},
  	{223,3923},
  	{208,3907},
  	{198,3893},
  	{193,3881},
  	{193,3872},
  	{193,3864},
  	{193,3856},
  	{193,3849},
  	{193,3842},
  	{195,3836},
  	{198,3830},
  	{195,3824},
  	{198,3819},
  	{200,3814},
  	{200,3809},
  	{203,3805},
  	{203,3800},
  	{205,3796},
  	{205,3792},
  	{205,3788},
  	{205,3785},
  	{205,3782},
  	{205,3779},
  	{203,3775},
  	{200,3771},
  	{198,3766},
  	{193,3760},
  	{193,3754},
  	{198,3748},
  	{198,3740},
  	{195,3728},
  	{198,3717},
  	{193,3703},
  	{193,3698},
  	{195,3696},
  	{205,3695},
  	{218,3694},
  	{233,3692},
  	{245,3687},
  	{235,3661},
  	{238,3603},
  	{258,3523},
  	{293,3401}
};     

// T2 25C
R_PROFILE_STRUC r_profile_t2[] =
{
    {198,4393},
  	{198,4365},
  	{203,4348},
  	{203,4331},
  	{208,4315},
  	{208,4299},
  	{208,4283},
  	{208,4268},
  	{210,4253},
  	{210,4238},
  	{213,4223},
  	{215,4208},
  	{215,4193},
  	{218,4179},
  	{220,4165},
  	{220,4150},
  	{220,4136},
  	{225,4122},
  	{223,4107},
  	{225,4094},
  	{230,4084},
  	{240,4078},
  	{248,4069},
  	{238,4046},
  	{233,4018},
  	{235,3997},
  	{238,3983},
  	{240,3973},
  	{243,3966},
  	{245,3960},
  	{243,3951},
  	{233,3937},
  	{223,3923},
  	{208,3907},
  	{198,3893},
  	{193,3881},
  	{193,3872},
  	{193,3864},
  	{193,3856},
  	{193,3849},
  	{193,3842},
  	{195,3836},
  	{198,3830},
  	{195,3824},
  	{198,3819},
  	{200,3814},
  	{200,3809},
  	{203,3805},
  	{203,3800},
  	{205,3796},
  	{205,3792},
  	{205,3788},
  	{205,3785},
  	{205,3782},
  	{205,3779},
  	{203,3775},
  	{200,3771},
  	{198,3766},
  	{193,3760},
  	{193,3754},
  	{198,3748},
  	{198,3740},
  	{195,3728},
  	{198,3717},
  	{193,3703},
  	{193,3698},
  	{195,3696},
  	{205,3695},
  	{218,3694},
  	{233,3692},
  	{245,3687},
  	{235,3661},
  	{238,3603},
  	{258,3523},
  	{293,3401}     
}; 

// T3 50C
R_PROFILE_STRUC r_profile_t3[] =
{
    {198,4393},
  	{198,4365},
  	{203,4348},
  	{203,4331},
  	{208,4315},
  	{208,4299},
  	{208,4283},
  	{208,4268},
  	{210,4253},
  	{210,4238},
  	{213,4223},
  	{215,4208},
  	{215,4193},
  	{218,4179},
  	{220,4165},
  	{220,4150},
  	{220,4136},
  	{225,4122},
  	{223,4107},
  	{225,4094},
  	{230,4084},
  	{240,4078},
  	{248,4069},
  	{238,4046},
  	{233,4018},
  	{235,3997},
  	{238,3983},
  	{240,3973},
  	{243,3966},
  	{245,3960},
  	{243,3951},
  	{233,3937},
  	{223,3923},
  	{208,3907},
  	{198,3893},
  	{193,3881},
  	{193,3872},
  	{193,3864},
  	{193,3856},
  	{193,3849},
  	{193,3842},
  	{195,3836},
  	{198,3830},
  	{195,3824},
  	{198,3819},
  	{200,3814},
  	{200,3809},
  	{203,3805},
  	{203,3800},
  	{205,3796},
  	{205,3792},
  	{205,3788},
  	{205,3785},
  	{205,3782},
  	{205,3779},
  	{203,3775},
  	{200,3771},
  	{198,3766},
  	{193,3760},
  	{193,3754},
  	{198,3748},
  	{198,3740},
  	{195,3728},
  	{198,3717},
  	{193,3703},
  	{193,3698},
  	{195,3696},
  	{205,3695},
  	{218,3694},
  	{233,3692},
  	{245,3687},
  	{235,3661},
  	{238,3603},
  	{258,3523},
  	{293,3401}      
}; 

// r-table profile for actual temperature. The size should be the same as T1, T2 and T3
R_PROFILE_STRUC r_profile_temperature[] =
{
  {0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },  
	{0  , 0 }, 
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },  
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 }
};    

// ============================================================
// function prototype
// ============================================================
int fgauge_get_saddles(void);
BATTERY_PROFILE_STRUC_P fgauge_get_profile(kal_uint32 temperature);

int fgauge_get_saddles_r_table(void);
R_PROFILE_STRUC_P fgauge_get_profile_r_table(kal_uint32 temperature);

#endif	//#ifndef _CUST_BATTERY_METER_TABLE_H
