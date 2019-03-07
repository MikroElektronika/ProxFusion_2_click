#line 1 "D:/Clicks_git/P/ProxFusion_2_Click/SW/example/c/PIC/Click_ProxFusion_2_PIC.c"
#line 1 "d:/clicks_git/p/proxfusion_2_click/sw/example/c/pic/click_proxfusion_2_types.h"
#line 1 "c:/users/public/documents/mikroelektronika/mikroc pro for pic/include/stdint.h"




typedef signed char int8_t;
typedef signed int int16_t;
typedef signed long int int32_t;


typedef unsigned char uint8_t;
typedef unsigned int uint16_t;
typedef unsigned long int uint32_t;


typedef signed char int_least8_t;
typedef signed int int_least16_t;
typedef signed long int int_least32_t;


typedef unsigned char uint_least8_t;
typedef unsigned int uint_least16_t;
typedef unsigned long int uint_least32_t;



typedef signed char int_fast8_t;
typedef signed int int_fast16_t;
typedef signed long int int_fast32_t;


typedef unsigned char uint_fast8_t;
typedef unsigned int uint_fast16_t;
typedef unsigned long int uint_fast32_t;


typedef signed int intptr_t;
typedef unsigned int uintptr_t;


typedef signed long int intmax_t;
typedef unsigned long int uintmax_t;
#line 1 "d:/clicks_git/p/proxfusion_2_click/sw/example/c/pic/click_proxfusion_2_config.h"
#line 1 "d:/clicks_git/p/proxfusion_2_click/sw/example/c/pic/click_proxfusion_2_types.h"
#line 3 "d:/clicks_git/p/proxfusion_2_click/sw/example/c/pic/click_proxfusion_2_config.h"
const uint32_t _PROXFUSION2_I2C_CFG[ 1 ] =
{
 100000
};
#line 1 "d:/clicks_git/p/proxfusion_2_click/sw/library/__proxfusion2_driver.h"
#line 1 "c:/users/public/documents/mikroelektronika/mikroc pro for pic/include/stdint.h"
#line 60 "d:/clicks_git/p/proxfusion_2_click/sw/library/__proxfusion2_driver.h"
extern const uint8_t _PROXFUSION2_REG_PRODUCT_NUMBER;
extern const uint8_t _PROXFUSION2_REG_SOFTWARE_NUMBER;
extern const uint8_t _PROXFUSION2_REG_HARDWARE_NUMBER;

extern const uint8_t _PROXFUSION2_REG_SYSTEM_FLAGS ;
extern const uint8_t _PROXFUSION2_REG_GLOBAL_EVENTS ;
extern const uint8_t _PROXFUSION2_REG_PROXFUSION_UI_FLAGS ;
extern const uint8_t _PROXFUSION2_REG_HYSTERESIS_UI_FLAGS ;
extern const uint8_t _PROXFUSION2_REG_HYSTERESIS_UI_OUTPUT_LSB ;
extern const uint8_t _PROXFUSION2_REG_HYSTERESIS_UI_OUTPUT_MSB ;
extern const uint8_t _PROXFUSION2_REG_ALS_UI_FLAGS ;
extern const uint8_t _PROXFUSION2_REG_ALS_UI_OUTPUT_LSB ;
extern const uint8_t _PROXFUSION2_REG_ALS_UI_OUTPUT_MSB ;
extern const uint8_t _PROXFUSION2_REG_HALL_EFFECT_UI_FLAGS ;
extern const uint8_t _PROXFUSION2_REG_HALL_EFFECT_UI_OUTPUT_LSB;
extern const uint8_t _PROXFUSION2_REG_HALL_EFFECT_UI_OUTPUT_MSB;
extern const uint8_t _PROXFUSION2_REG_TEMPERATURE_UI_FLAGS ;
extern const uint8_t _PROXFUSION2_REG_TEMPERATURE_UI_OUTPUT_LSB;
extern const uint8_t _PROXFUSION2_REG_TEMPERATURE_UI_OUTPUT_MSB;

extern const uint8_t _PROXFUSION2_REG_CHANNEL_COUNTS_CH0_LSB;
extern const uint8_t _PROXFUSION2_REG_CHANNEL_COUNTS_CH0_MSB;
extern const uint8_t _PROXFUSION2_REG_CHANNEL_COUNTS_CH1_LSB;
extern const uint8_t _PROXFUSION2_REG_CHANNEL_COUNTS_CH1_MSB;
extern const uint8_t _PROXFUSION2_REG_CHANNEL_COUNTS_CH2_LSB;
extern const uint8_t _PROXFUSION2_REG_CHANNEL_COUNTS_CH2_MSB;
extern const uint8_t _PROXFUSION2_REG_CHANNEL_COUNTS_CH3_LSB;
extern const uint8_t _PROXFUSION2_REG_CHANNEL_COUNTS_CH3_MSB;
extern const uint8_t _PROXFUSION2_REG_CHANNEL_COUNTS_CH4_LSB;
extern const uint8_t _PROXFUSION2_REG_CHANNEL_COUNTS_CH4_MSB;
extern const uint8_t _PROXFUSION2_REG_CHANNEL_COUNTS_CH5_LSB;
extern const uint8_t _PROXFUSION2_REG_CHANNEL_COUNTS_CH5_MSB;
extern const uint8_t _PROXFUSION2_REG_CHANNEL_COUNTS_CH6_LSB;
extern const uint8_t _PROXFUSION2_REG_CHANNEL_COUNTS_CH6_MSB;

extern const uint8_t _PROXFUSION2_REG_LTA_VALUES_CH0_LSB;
extern const uint8_t _PROXFUSION2_REG_LTA_VALUES_CH0_MSB;
extern const uint8_t _PROXFUSION2_REG_LTA_VALUES_CH1_LSB;
extern const uint8_t _PROXFUSION2_REG_LTA_VALUES_CH1_MSB;

extern const uint8_t _PROXFUSION2_REG_PROXFUSION_SETTINGS_00;
extern const uint8_t _PROXFUSION2_REG_PROXFUSION_SETTINGS_01;
extern const uint8_t _PROXFUSION2_REG_PROXFUSION_SETTINGS_10;
extern const uint8_t _PROXFUSION2_REG_PROXFUSION_SETTINGS_11;

extern const uint8_t _PROXFUSION2_REG_PROXFUSION_SETTINGS_20;
extern const uint8_t _PROXFUSION2_REG_PROXFUSION_SETTINGS_21;
extern const uint8_t _PROXFUSION2_REG_PROXFUSION_SETTINGS_30;
extern const uint8_t _PROXFUSION2_REG_PROXFUSION_SETTINGS_31;
extern const uint8_t _PROXFUSION2_REG_PROXFUSION_SETTINGS_4 ;

extern const uint8_t _PROXFUSION2_REG_PROX_THRESHOLD_CH0 ;
extern const uint8_t _PROXFUSION2_REG_PROX_THRESHOLD_CH1 ;
extern const uint8_t _PROXFUSION2_REG_TOUCH_THRESHOLD_CH0 ;
extern const uint8_t _PROXFUSION2_REG_TOUCH_THRESHOLD_CH1 ;
extern const uint8_t _PROXFUSION2_REG_DISCRETE_UI_HALT_TIME;

extern const uint8_t _PROXFUSION2_REG_HYSTERESIS_UI_SETTINGS ;
extern const uint8_t _PROXFUSION2_REG_HYSTERESIS_UI_FILTER_HALT_THRESHOLD;
extern const uint8_t _PROXFUSION2_REG_HYSTERESIS_UI_PROXIMITY_THRESHOLD ;
extern const uint8_t _PROXFUSION2_REG_HYSTERESIS_UI_TOUCH_THRESHOLD ;

extern const uint8_t _PROXFUSION2_REG_ALS_settings_0 ;
extern const uint8_t _PROXFUSION2_REG_ALS_settings_1 ;
extern const uint8_t _PROXFUSION2_REG_ALS_SETTINGS_FILTER_SPEED;
extern const uint8_t _PROXFUSION2_REG_MULTIPLIERS_CH34 ;

extern const uint8_t _PROXFUSION2_REG_ALS_DARK_THRESHOLD ;
extern const uint8_t _PROXFUSION2_REG_ALS_LIGHT_THRESHOLD ;
extern const uint8_t _PROXFUSION2_REG_ALS_RAW_TO_LUX_DIVIDER;
extern const uint8_t _PROXFUSION2_REG_ALS_IR_COMPENSATION ;

extern const uint8_t _PROXFUSION2_REG_HALL_EFFECT_SETTINGS_0;
extern const uint8_t _PROXFUSION2_REG_HALL_EFFECT_SETTINGS_1;
extern const uint8_t _PROXFUSION2_REG_COMPENSATION_CH56 ;
extern const uint8_t _PROXFUSION2_REG_MULTIPLIERS_CH56 ;

extern const uint8_t _PROXFUSION2_REG_HALL_EFFECT_UI_SETTINGS ;
extern const uint8_t _PROXFUSION2_REG_HALL_PROXIMITY_THRESHOLD;
extern const uint8_t _PROXFUSION2_REG_HALL_TOUCH_THRESHOLD ;

extern const uint8_t _PROXFUSION2_REG_TEMPERATURE_UI_SETTINGS ;
extern const uint8_t _PROXFUSION2_REG_MULTIPLIER_CH2 ;
extern const uint8_t _PROXFUSION2_REG_TEMPERATURE_CALIBRATION_0;
extern const uint8_t _PROXFUSION2_REG_TEMPERATURE_CALIBRATION_1;

extern const uint8_t _PROXFUSION2_REG_SYSTEM_SETTINGS ;
extern const uint8_t _PROXFUSION2_REG_ACTIVE_CHANNELS ;
extern const uint8_t _PROXFUSION2_REG_POWER_MODE_SETTINGS ;
extern const uint8_t _PROXFUSION2_REG_NORMAL_POWER_MODE_REPORT_RATE ;
extern const uint8_t _PROXFUSION2_REG_LOW_POWER_MODE_REPORT_RATE ;
extern const uint8_t _PROXFUSION2_REG_UALTRA_LOW_POWER_MODE_REPORT_RATE;
extern const uint8_t _PROXFUSION2_REG_AUTO_MODE_TIMER ;
extern const uint8_t _PROXFUSION2_REG_GLOBAL_EVENT_MASK ;
extern const uint8_t _PROXFUSION2_REG_RDY_TIMEOUT_PERIOD ;
extern const uint8_t _PROXFUSION2_REG_I2C_SETTINGS ;


extern const uint8_t _PROXFUSION2_SF_SHOW_RESET ;
extern const uint8_t _PROXFUSION2_SF_NO_RESET ;
extern const uint8_t _PROXFUSION2_SF_NORMAL_MODE ;
extern const uint8_t _PROXFUSION2_SF_ULTRA_LOW_POWER_MODE ;
extern const uint8_t _PROXFUSION2_SF_LOW_POWER_MODE ;
extern const uint8_t _PROXFUSION2_SF_HALT_MODE ;
extern const uint8_t _PROXFUSION2_SF_ACTIVE_ATI ;
extern const uint8_t _PROXFUSION2_SF_NO_ATI ;
extern const uint8_t _PROXFUSION2_SF_NO_NEW_EVENT ;
extern const uint8_t _PROXFUSION2_SF_NEW_EVENT ;
extern const uint8_t _PROXFUSION2_SF_NOT_PERFORMING_NM_UPDATE ;
extern const uint8_t _PROXFUSION2_SF_BUSY_PERFORMING_NM_UPDATE ;


extern const uint8_t _PROXFUSION2_GE_POWER_MODE_EVENT_ACTIVE ;
extern const uint8_t _PROXFUSION2_GE_SYS_EVENT_ACTIVE ;
extern const uint8_t _PROXFUSION2_GE_TEMP_EVENT_ACTIVE ;
extern const uint8_t _PROXFUSION2_GE_HYSTERESIS_UI_EVENT_ACTIVE;
extern const uint8_t _PROXFUSION2_GE_ALS_EVENT_ACTIVE ;
extern const uint8_t _PROXFUSION2_GE_HALL_EVENT_ACTIVE ;
extern const uint8_t _PROXFUSION2_GE_PROXSENSE_EVENT_ACTIVE ;


extern const uint8_t _PROXFUSION2_PFUIF_CH1_TOUCH_DELTA_BELOW ;
extern const uint8_t _PROXFUSION2_PFUIF_CH0_TOUCH_DELTA_BELOW ;
extern const uint8_t _PROXFUSION2_PFUIF_CH1_TOUCH_DELTA_ABOVE ;
extern const uint8_t _PROXFUSION2_PFUIF_CH0_TOUCH_DELTA_ABOVE ;
extern const uint8_t _PROXFUSION2_PFUIF_CH1_PROXIMITY_DELTA_BELOW;
extern const uint8_t _PROXFUSION2_PFUIF_CH0_PROXIMITY_DELTA_BELOW;
extern const uint8_t _PROXFUSION2_PFUIF_CH1_PROXIMITY_DELTA_ABOVE;
extern const uint8_t _PROXFUSION2_PFUIF_CH0_PROXIMITY_DELTA_ABOVE;


extern const uint8_t _PROXFUSION2_HIUIF_COUNTS_RISE_ABOVE_THE_LTA ;
extern const uint8_t _PROXFUSION2_HIUIF_COUNTS_FALL_BELOW_THE_LTA ;
extern const uint8_t _PROXFUSION2_HIUIF_DELTA_BELOW_TOUCH_THRESHOLD;
extern const uint8_t _PROXFUSION2_HIUIF_DELTA_ABOVE_TOUCH_THRESHOLD;
extern const uint8_t _PROXFUSION2_HIUIF_DELTA_BELOW_PROX_THRESHOLD ;
extern const uint8_t _PROXFUSION2_HIUIF_DELTA_ABOVE_PROX_THRESHOLD ;


extern const uint8_t _PROXFUSION2_ALSUIF_LIGHT_INDICATION;
extern const uint8_t _PROXFUSION2_ALSUIF_DARK_INDICATION ;


extern const uint8_t _PROXFUSION2_HEUIF_FIELD_STRENGTH_BELOW_TOUCH_LEVEL;
extern const uint8_t _PROXFUSION2_HEUIF_FIELD_STRENGTH_ABOVE_TOUCH_LEVEL;
extern const uint8_t _PROXFUSION2_HEUIF_FIELD_STRENGTH_BELOW_PROX_LEVEL ;
extern const uint8_t _PROXFUSION2_HEUIF_FIELD_STRENGTH_ABOVE_PROX_LEVEL ;
extern const uint8_t _PROXFUSION2_HEUIF_NORTH_FIELD_PRESENT ;
extern const uint8_t _PROXFUSION2_HEUIF_SOUTH_FIELD_PRESENT ;


extern const uint8_t _PROXFUSION2_TUIF_TEMPERATURE_BELOW_TRIP_LEVEL;
extern const uint8_t _PROXFUSION2_TUIF_TEMPERATURE_ABOVE_TRIP_LEVEL;


extern const uint8_t _PROXFUSION2_PFS00_CAPACITIVE_SENSING_MODE;
extern const uint8_t _PROXFUSION2_PFS00_TX0_AND_TX1_DISABLED ;
extern const uint8_t _PROXFUSION2_PFS00_RX0_AND_RX1_DISABLED ;
extern const uint8_t _PROXFUSION2_PFS00_RX0_ENABLE ;
extern const uint8_t _PROXFUSION2_PFS00_RX1_ENABLE ;
extern const uint8_t _PROXFUSION2_PFS00_RX0_AND_RX1_ENABLE ;


extern const uint8_t _PROXFUSION2_PFS01_INDUCTIVE_SENSOR_MODE ;
extern const uint8_t _PROXFUSION2_PFS01_MULTIPLIER_RANGE_LARGE;
extern const uint8_t _PROXFUSION2_PFS01_MULTIPLIER_RANGE_SMALL;
extern const uint8_t _PROXFUSION2_PFS01_TX0_AND_TX1_DISABLED ;
extern const uint8_t _PROXFUSION2_PFS01_TX0_AND_TX1_ENABLE ;


extern const uint8_t _PROXFUSION2_PFS10_CAPACITOR_15pF ;
extern const uint8_t _PROXFUSION2_PFS10_CAPACITOR_60pF ;
extern const uint8_t _PROXFUSION2_PFS10_FREQUENCY_DIVIDER_1_2 ;
extern const uint8_t _PROXFUSION2_PFS10_FREQUENCY_DIVIDER_1_4 ;
extern const uint8_t _PROXFUSION2_PFS10_FREQUENCY_DIVIDER_1_8 ;
extern const uint8_t _PROXFUSION2_PFS10_FREQUENCY_DIVIDER_1_16;
extern const uint8_t _PROXFUSION2_PFS10_ATI_MODE_DISABLE ;
extern const uint8_t _PROXFUSION2_PFS10_PARTIAL_ATI ;
extern const uint8_t _PROXFUSION2_PFS10_SEMI_PARTIAL_ATI ;
extern const uint8_t _PROXFUSION2_PFS10_FULL_ATI ;


extern const uint8_t _PROXFUSION2_PFS11_CAPACITOR_15pF ;
extern const uint8_t _PROXFUSION2_PFS11_CAPACITOR_60pF ;
extern const uint8_t _PROXFUSION2_PFS11_FREQUENCY_DIVIDER_1_2 ;
extern const uint8_t _PROXFUSION2_PFS11_FREQUENCY_DIVIDER_1_4 ;
extern const uint8_t _PROXFUSION2_PFS11_FREQUENCY_DIVIDER_1_8 ;
extern const uint8_t _PROXFUSION2_PFS11_FREQUENCY_DIVIDER_1_16 ;
extern const uint8_t _PROXFUSION2_PFS11_INTERNAL_RESISTOR_2_5uA_88kOhm;
extern const uint8_t _PROXFUSION2_PFS11_INTERNAL_RESISTOR_5uA_66kOhm ;
extern const uint8_t _PROXFUSION2_PFS11_INTERNAL_RESISTOR_10uA_44kOhm ;
extern const uint8_t _PROXFUSION2_PFS11_INTERNAL_RESISTOR_20uA_22kOhm ;
extern const uint8_t _PROXFUSION2_PFS11_ATI_MODE_DISABLE ;
extern const uint8_t _PROXFUSION2_PFS11_PARTIAL_ATI ;
extern const uint8_t _PROXFUSION2_PFS11_SEMI_PARTIAL_ATI ;
extern const uint8_t _PROXFUSION2_PFS11_FULL_ATI ;


extern const uint8_t _PROXFUSION2_PFS201_ATI_BASE_VALUE_75 ;
extern const uint8_t _PROXFUSION2_PFS201_ATI_BASE_VALUE_100;
extern const uint8_t _PROXFUSION2_PFS201_ATI_BASE_VALUE_150;
extern const uint8_t _PROXFUSION2_PFS201_ATI_BASE_VALUE_200;


extern const uint8_t _PROXFUSION2_PFS4_HYSTERESIS_UI_DISABLED ;
extern const uint8_t _PROXFUSION2_PFS4_HYSTERESIS_UI_ENABLE ;
extern const uint8_t _PROXFUSION2_PFS4_BIDIRECTIONAL_DETECTION_DISABLED ;
extern const uint8_t _PROXFUSION2_PFS4_BIDIRECTIONAL_DETECTION_ENABLE ;
extern const uint8_t _PROXFUSION2_PFS4_AC_FILTER_ENABLED ;
extern const uint8_t _PROXFUSION2_PFS4_AC_FILTER_DISABLED ;
extern const uint8_t _PROXFUSION2_PFS4_LONG_TERM_AVERAGE_BETA_VALUE_7 ;
extern const uint8_t _PROXFUSION2_PFS4_LONG_TERM_AVERAGE_BETA_VALUE_8 ;
extern const uint8_t _PROXFUSION2_PFS4_LONG_TERM_AVERAGE_BETA_VALUE_9 ;
extern const uint8_t _PROXFUSION2_PFS4_LONG_TERM_AVERAGE_BETA_VALUE_10 ;
extern const uint8_t _PROXFUSION2_PFS4_AC_FILTER_BETA_VALUE_1 ;
extern const uint8_t _PROXFUSION2_PFS4_AC_FILTER_BETA_VALUE_2 ;
extern const uint8_t _PROXFUSION2_PFS4_AC_FILTER_BETA_VALUE_3 ;
extern const uint8_t _PROXFUSION2_PFS4_AC_FILTER_BETA_VALUE_4 ;


extern const uint8_t _PROXFUSION2_HIUIS_TOUCH_HYSTERESIS_DISABLED ;
extern const uint8_t _PROXFUSION2_HIUIS_TOUCH_HYSTERESIS_1_8_OF_THRESHOLD ;
extern const uint8_t _PROXFUSION2_HIUIS_TOUCH_HYSTERESIS_1_4_OF_THRESHOLD ;
extern const uint8_t _PROXFUSION2_HIUIS_TOUCH_HYSTERESIS_1_16_OF_THRESHOLD ;
extern const uint8_t _PROXFUSION2_HIUIS_PROXIMITY_HYSTERESIS_DISABLED ;
extern const uint8_t _PROXFUSION2_HIUIS_PROXIMITY_HYSTERESIS_1_8_OF_THRESHOLD ;
extern const uint8_t _PROXFUSION2_HIUIS_PROXIMITY_HYSTERESIS_1_4_OF_THRESHOLD ;
extern const uint8_t _PROXFUSION2_HIUIS_PROXIMITY_HYSTERESIS_1_16_OF_THRESHOLD;

extern const uint8_t _PROXFUSION2_TOUCH_IS_DETECTED;
extern const uint8_t _PROXFUSION2_DARK_AMBIENT;
extern const uint8_t _PROXFUSION2_LIGHT_AMBIENT;
extern const uint8_t _PROXFUSION2_HALL_NORTH;
extern const uint8_t _PROXFUSION2_HALL_SOUTH;

extern const uint8_t _PROXFUSION2_HYSTERESIS_UI_OUTPUT;
extern const uint8_t _PROXFUSION2_ALS_UI_OUTPUT;
extern const uint8_t _PROXFUSION2_HALL_EFFECT_UI_OUTPUT;
extern const uint8_t _PROXFUSION2_TEMPERATURE_UI_OUTPUT;
#line 312 "d:/clicks_git/p/proxfusion_2_click/sw/library/__proxfusion2_driver.h"
void proxfusion2_i2cDriverInit( const uint8_t*  gpioObj,  const uint8_t*  i2cObj, uint8_t slave);
#line 319 "d:/clicks_git/p/proxfusion_2_click/sw/library/__proxfusion2_driver.h"
void proxfusion2_gpioDriverInit( const uint8_t*  gpioObj);
#line 329 "d:/clicks_git/p/proxfusion_2_click/sw/library/__proxfusion2_driver.h"
void proxfusion2_writeByte(uint8_t reg, uint8_t _data);
#line 337 "d:/clicks_git/p/proxfusion_2_click/sw/library/__proxfusion2_driver.h"
uint8_t proxfusion2_readByte(uint8_t reg);
#line 345 "d:/clicks_git/p/proxfusion_2_click/sw/library/__proxfusion2_driver.h"
uint16_t proxfusion2_readData(uint8_t reg);
#line 394 "d:/clicks_git/p/proxfusion_2_click/sw/library/__proxfusion2_driver.h"
void proxfusion2_configuration();
#line 398 "d:/clicks_git/p/proxfusion_2_click/sw/library/__proxfusion2_driver.h"
uint8_t proxfusion2_init();
#line 405 "d:/clicks_git/p/proxfusion_2_click/sw/library/__proxfusion2_driver.h"
uint8_t proxfusion2_detectTouch();
#line 413 "d:/clicks_git/p/proxfusion_2_click/sw/library/__proxfusion2_driver.h"
uint8_t proxfusion2_detectDark_Light(uint8_t *ALS_range);
#line 420 "d:/clicks_git/p/proxfusion_2_click/sw/library/__proxfusion2_driver.h"
uint8_t proxfusion2_detectHall();
#line 33 "D:/Clicks_git/P/ProxFusion_2_Click/SW/example/c/PIC/Click_ProxFusion_2_PIC.c"
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
 mikrobus_logInit( _MIKROBUS3, 9600 );
 mikrobus_logWrite(" --- System Init ---", _LOG_LINE);
 Delay_ms( 100 );
}

void applicationInit()
{
 proxfusion2_i2cDriverInit( ( const uint8_t* )&_MIKROBUS1_GPIO, ( const uint8_t* )&_MIKROBUS1_I2C, 0x44 );
 mikrobus_logWrite("---- Initalizaion and configuration --- ", _LOG_LINE);
 proxfusion2_init();
 proxfusion2_configuration();
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
