#line 1 "D:/Clicks_git/P/ProxFusion_2_Click/SW/example/c/ARM/STM/Click_ProxFusion_2_STM.c"
#line 1 "d:/clicks_git/p/proxfusion_2_click/sw/example/c/arm/stm/click_proxfusion_2_types.h"
#line 1 "c:/users/public/documents/mikroelektronika/mikroc pro for arm/include/stdint.h"





typedef signed char int8_t;
typedef signed int int16_t;
typedef signed long int int32_t;
typedef signed long long int64_t;


typedef unsigned char uint8_t;
typedef unsigned int uint16_t;
typedef unsigned long int uint32_t;
typedef unsigned long long uint64_t;


typedef signed char int_least8_t;
typedef signed int int_least16_t;
typedef signed long int int_least32_t;
typedef signed long long int_least64_t;


typedef unsigned char uint_least8_t;
typedef unsigned int uint_least16_t;
typedef unsigned long int uint_least32_t;
typedef unsigned long long uint_least64_t;



typedef signed long int int_fast8_t;
typedef signed long int int_fast16_t;
typedef signed long int int_fast32_t;
typedef signed long long int_fast64_t;


typedef unsigned long int uint_fast8_t;
typedef unsigned long int uint_fast16_t;
typedef unsigned long int uint_fast32_t;
typedef unsigned long long uint_fast64_t;


typedef signed long int intptr_t;
typedef unsigned long int uintptr_t;


typedef signed long long intmax_t;
typedef unsigned long long uintmax_t;
#line 1 "d:/clicks_git/p/proxfusion_2_click/sw/example/c/arm/stm/click_proxfusion_2_config.h"
#line 1 "d:/clicks_git/p/proxfusion_2_click/sw/example/c/arm/stm/click_proxfusion_2_types.h"
#line 3 "d:/clicks_git/p/proxfusion_2_click/sw/example/c/arm/stm/click_proxfusion_2_config.h"
const uint32_t _PROXFUSION2_I2C_CFG[ 1 ] =
{
 100000
};
#line 31 "D:/Clicks_git/P/ProxFusion_2_Click/SW/example/c/ARM/STM/Click_ProxFusion_2_STM.c"
uint8_t Touch;
uint8_t ALS_range;
uint8_t darkLight_ambient;
uint8_t hall_detect;
uint16_t dataRead;

char demoText[ 50 ];

void systemInit()
{
 mikrobus_gpioInit( _MIKROBUS1, _MIKROBUS_INT_PIN, _GPIO_INPUT );
 mikrobus_i2cInit( _MIKROBUS1, &_PROXFUSION2_I2C_CFG[0] );
 mikrobus_logInit( _LOG_USBUART_A, 9600 );
 mikrobus_logWrite(" --- System Init ---", _LOG_LINE);
 Delay_ms( 100 );
}

void applicationInit()
{
 proxfusion2_i2cDriverInit( ( const uint8_t* )&_MIKROBUS1_GPIO, ( const uint8_t* )&_MIKROBUS1_I2C, 0x44 );
 mikrobus_logWrite("---- Initalizaion and configuration --- ", _LOG_LINE);
 proxfusion2_init();
 proxfusion2_defaultConfig();
 Delay_100ms();
 mikrobus_logWrite("--- Start measurement ---", _LOG_LINE);
}

void applicationTask()
{
 mikrobus_logWrite("_________________________________________________________________________", _LOG_LINE);
 mikrobus_logWrite("| TOUCH  |  T - UI  | AMBIENT | ALS RANGE |  ALS UI  |  HALL  | HALL UI |",_LOG_LINE);


 Touch = proxfusion2_readByte(0x13);
 if ((Touch & 0x02) != 0)
 {
 mikrobus_logWrite("|  YES   |", _LOG_TEXT);
 }
 else
 {
 mikrobus_logWrite("|   NO   |", _LOG_TEXT);
 }
 dataRead = proxfusion2_readData( _PROXFUSION2_HYSTERESIS_UI_OUTPUT );
 IntToStr(dataRead, demoText);
 mikrobus_logWrite(demoText, _LOG_TEXT);
 mikrobus_logWrite("    |",_LOG_TEXT);


 darkLight_ambient = proxfusion2_detectDark_Light(&ALS_range);
 if (darkLight_ambient == _PROXFUSION2_DARK_AMBIENT )
 {
 mikrobus_logWrite("  DARK   |",_LOG_TEXT);
 }
 else
 {
 mikrobus_logWrite(" LIGHT   |",_LOG_TEXT);
 }
 IntToStr(ALS_range, demoText);
 mikrobus_logWrite(demoText, _LOG_TEXT);
 mikrobus_logWrite("     |",_LOG_TEXT);

 dataRead = proxfusion2_readData( _PROXFUSION2_ALS_UI_OUTPUT );
 IntToStr(dataRead, demoText);
 mikrobus_logWrite(demoText, _LOG_TEXT);
 mikrobus_logWrite("    |",_LOG_TEXT);


 hall_detect = proxfusion2_detectHall();
 if (hall_detect != 0)
 {
 if( hall_detect == 1 )
 {
 mikrobus_logWrite(" NORTH  |",_LOG_TEXT);
 }
 else
 {
 mikrobus_logWrite(" SOUTH  |",_LOG_TEXT);
 }
 }
 dataRead = proxfusion2_readData( _PROXFUSION2_HALL_EFFECT_UI_OUTPUT );
 IntToStr(dataRead, demoText);
 mikrobus_logWrite(demoText, _LOG_TEXT);
 mikrobus_logWrite("   |",_LOG_LINE);
 Delay_ms(3000);
}

void main()
{
 systemInit();
 applicationInit();

 while (1)
 {
 applicationTask();
 }
}
