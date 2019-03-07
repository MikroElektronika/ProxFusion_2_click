/*
    __proxfusion2_driver.h

-----------------------------------------------------------------------------

  This file is part of mikroSDK.
  
  Copyright (c) 2017, MikroElektonika - http://www.mikroe.com

  All rights reserved.

----------------------------------------------------------------------------- */

/**
@file   __proxfusion2_driver.h
@brief    ProxFusion_2 Driver
@mainpage ProxFusion_2 Click
@{

@image html libstock_fb_view.jpg

@}

@defgroup   PROXFUSION2
@brief      ProxFusion_2 Click Driver
@{

| Global Library Prefix | **PROXFUSION2** |
|:---------------------:|:-----------------:|
| Version               | **1.0.0**    |
| Date                  | **avg 2018.**      |
| Developer             | **Katarina Perendic**     |

*/
/* -------------------------------------------------------------------------- */

#include "stdint.h"

#ifndef _PROXFUSION2_H_
#define _PROXFUSION2_H_

/** 
 * @macro T_PROXFUSION2_P
 * @brief Driver Abstract type 
 */
#define T_PROXFUSION2_P    const uint8_t*

/** @defgroup PROXFUSION2_COMPILE Compilation Config */              /** @{ */

//  #define   __PROXFUSION2_DRV_SPI__                            /**<     @macro __PROXFUSION2_DRV_SPI__  @brief SPI driver selector */
   #define   __PROXFUSION2_DRV_I2C__                            /**<     @macro __PROXFUSION2_DRV_I2C__  @brief I2C driver selector */                                          
// #define   __PROXFUSION2_DRV_UART__                           /**<     @macro __PROXFUSION2_DRV_UART__ @brief UART driver selector */ 

                                                                       /** @} */
/** @defgroup PROXFUSION2_VAR Variables */                           /** @{ */

/* Register */

// Device Information Data
extern const uint8_t _PROXFUSION2_REG_PRODUCT_NUMBER;  // 0x46  IQS621 product number
extern const uint8_t _PROXFUSION2_REG_SOFTWARE_NUMBER; // 0x09 IQS621 production software number
extern const uint8_t _PROXFUSION2_REG_HARDWARE_NUMBER; // 0x82 IQS621 hardware number
// Flags and user interface data
extern const uint8_t _PROXFUSION2_REG_SYSTEM_FLAGS             ;
extern const uint8_t _PROXFUSION2_REG_GLOBAL_EVENTS            ;
extern const uint8_t _PROXFUSION2_REG_PROXFUSION_UI_FLAGS      ;
extern const uint8_t _PROXFUSION2_REG_HYSTERESIS_UI_FLAGS      ;
extern const uint8_t _PROXFUSION2_REG_HYSTERESIS_UI_OUTPUT_LSB ;
extern const uint8_t _PROXFUSION2_REG_HYSTERESIS_UI_OUTPUT_MSB ;
extern const uint8_t _PROXFUSION2_REG_ALS_UI_FLAGS             ;
extern const uint8_t _PROXFUSION2_REG_ALS_UI_OUTPUT_LSB        ;
extern const uint8_t _PROXFUSION2_REG_ALS_UI_OUTPUT_MSB        ;
extern const uint8_t _PROXFUSION2_REG_HALL_EFFECT_UI_FLAGS     ;
extern const uint8_t _PROXFUSION2_REG_HALL_EFFECT_UI_OUTPUT_LSB;
extern const uint8_t _PROXFUSION2_REG_HALL_EFFECT_UI_OUTPUT_MSB;
extern const uint8_t _PROXFUSION2_REG_TEMPERATURE_UI_FLAGS     ;
extern const uint8_t _PROXFUSION2_REG_TEMPERATURE_UI_OUTPUT_LSB;
extern const uint8_t _PROXFUSION2_REG_TEMPERATURE_UI_OUTPUT_MSB;
// Channel counts (raw data)
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
// LTA values (filtered data)
extern const uint8_t _PROXFUSION2_REG_LTA_VALUES_CH0_LSB;
extern const uint8_t _PROXFUSION2_REG_LTA_VALUES_CH0_MSB;
extern const uint8_t _PROXFUSION2_REG_LTA_VALUES_CH1_LSB;
extern const uint8_t _PROXFUSION2_REG_LTA_VALUES_CH1_MSB;
// ProxFusion sensor settings block 1
extern const uint8_t _PROXFUSION2_REG_PROXFUSION_SETTINGS_00;
extern const uint8_t _PROXFUSION2_REG_PROXFUSION_SETTINGS_01;
extern const uint8_t _PROXFUSION2_REG_PROXFUSION_SETTINGS_10;
extern const uint8_t _PROXFUSION2_REG_PROXFUSION_SETTINGS_11;
// ProxFusion sensor settings block 2
extern const uint8_t _PROXFUSION2_REG_PROXFUSION_SETTINGS_20;
extern const uint8_t _PROXFUSION2_REG_PROXFUSION_SETTINGS_21;
extern const uint8_t _PROXFUSION2_REG_PROXFUSION_SETTINGS_30;
extern const uint8_t _PROXFUSION2_REG_PROXFUSION_SETTINGS_31;
extern const uint8_t _PROXFUSION2_REG_PROXFUSION_SETTINGS_4 ;
// ProxFusion UI settings
extern const uint8_t _PROXFUSION2_REG_PROX_THRESHOLD_CH0   ;
extern const uint8_t _PROXFUSION2_REG_PROX_THRESHOLD_CH1   ;
extern const uint8_t _PROXFUSION2_REG_TOUCH_THRESHOLD_CH0  ;
extern const uint8_t _PROXFUSION2_REG_TOUCH_THRESHOLD_CH1  ;
extern const uint8_t _PROXFUSION2_REG_DISCRETE_UI_HALT_TIME;
// Hysteresis UI settings
extern const uint8_t _PROXFUSION2_REG_HYSTERESIS_UI_SETTINGS             ;
extern const uint8_t _PROXFUSION2_REG_HYSTERESIS_UI_FILTER_HALT_THRESHOLD;
extern const uint8_t _PROXFUSION2_REG_HYSTERESIS_UI_PROXIMITY_THRESHOLD  ;
extern const uint8_t _PROXFUSION2_REG_HYSTERESIS_UI_TOUCH_THRESHOLD      ;
// ALS sensor settings
extern const uint8_t _PROXFUSION2_REG_ALS_settings_0           ;
extern const uint8_t _PROXFUSION2_REG_ALS_settings_1           ;
extern const uint8_t _PROXFUSION2_REG_ALS_SETTINGS_FILTER_SPEED;
extern const uint8_t _PROXFUSION2_REG_MULTIPLIERS_CH34         ;
// ALS UI settings
extern const uint8_t _PROXFUSION2_REG_ALS_DARK_THRESHOLD    ;
extern const uint8_t _PROXFUSION2_REG_ALS_LIGHT_THRESHOLD   ;
extern const uint8_t _PROXFUSION2_REG_ALS_RAW_TO_LUX_DIVIDER;
extern const uint8_t _PROXFUSION2_REG_ALS_IR_COMPENSATION   ;
// Hall-effect sensor settings
extern const uint8_t _PROXFUSION2_REG_HALL_EFFECT_SETTINGS_0;
extern const uint8_t _PROXFUSION2_REG_HALL_EFFECT_SETTINGS_1;
extern const uint8_t _PROXFUSION2_REG_COMPENSATION_CH56     ;
extern const uint8_t _PROXFUSION2_REG_MULTIPLIERS_CH56      ;
// Hall-effect switch UI settings
extern const uint8_t _PROXFUSION2_REG_HALL_EFFECT_UI_SETTINGS ;
extern const uint8_t _PROXFUSION2_REG_HALL_PROXIMITY_THRESHOLD;
extern const uint8_t _PROXFUSION2_REG_HALL_TOUCH_THRESHOLD    ;
// Temperature monitoring UI settings
extern const uint8_t _PROXFUSION2_REG_TEMPERATURE_UI_SETTINGS  ;
extern const uint8_t _PROXFUSION2_REG_MULTIPLIER_CH2           ;
extern const uint8_t _PROXFUSION2_REG_TEMPERATURE_CALIBRATION_0;
extern const uint8_t _PROXFUSION2_REG_TEMPERATURE_CALIBRATION_1;
// Device and power mode settings
extern const uint8_t _PROXFUSION2_REG_SYSTEM_SETTINGS                  ;
extern const uint8_t _PROXFUSION2_REG_ACTIVE_CHANNELS                  ;
extern const uint8_t _PROXFUSION2_REG_POWER_MODE_SETTINGS              ;
extern const uint8_t _PROXFUSION2_REG_NORMAL_POWER_MODE_REPORT_RATE    ;
extern const uint8_t _PROXFUSION2_REG_LOW_POWER_MODE_REPORT_RATE       ;
extern const uint8_t _PROXFUSION2_REG_UALTRA_LOW_POWER_MODE_REPORT_RATE;
extern const uint8_t _PROXFUSION2_REG_AUTO_MODE_TIMER                  ;
extern const uint8_t _PROXFUSION2_REG_GLOBAL_EVENT_MASK                ;
extern const uint8_t _PROXFUSION2_REG_RDY_TIMEOUT_PERIOD               ;
extern const uint8_t _PROXFUSION2_REG_I2C_SETTINGS                     ;

/* System flags (R) */
extern const uint8_t _PROXFUSION2_SF_SHOW_RESET                ;
extern const uint8_t _PROXFUSION2_SF_NO_RESET                  ;
extern const uint8_t _PROXFUSION2_SF_NORMAL_MODE               ;
extern const uint8_t _PROXFUSION2_SF_ULTRA_LOW_POWER_MODE      ;
extern const uint8_t _PROXFUSION2_SF_LOW_POWER_MODE            ;
extern const uint8_t _PROXFUSION2_SF_HALT_MODE                 ;
extern const uint8_t _PROXFUSION2_SF_ACTIVE_ATI                ;
extern const uint8_t _PROXFUSION2_SF_NO_ATI                    ;
extern const uint8_t _PROXFUSION2_SF_NO_NEW_EVENT              ;
extern const uint8_t _PROXFUSION2_SF_NEW_EVENT                 ;
extern const uint8_t _PROXFUSION2_SF_NOT_PERFORMING_NM_UPDATE  ;
extern const uint8_t _PROXFUSION2_SF_BUSY_PERFORMING_NM_UPDATE ;

/* Global events (R) */
extern const uint8_t _PROXFUSION2_GE_POWER_MODE_EVENT_ACTIVE   ;
extern const uint8_t _PROXFUSION2_GE_SYS_EVENT_ACTIVE          ;
extern const uint8_t _PROXFUSION2_GE_TEMP_EVENT_ACTIVE         ;
extern const uint8_t _PROXFUSION2_GE_HYSTERESIS_UI_EVENT_ACTIVE;
extern const uint8_t _PROXFUSION2_GE_ALS_EVENT_ACTIVE          ;
extern const uint8_t _PROXFUSION2_GE_HALL_EVENT_ACTIVE         ;
extern const uint8_t _PROXFUSION2_GE_PROXSENSE_EVENT_ACTIVE    ;

/* ProxFusion UI flags (R) */
extern const uint8_t _PROXFUSION2_PFUIF_CH1_TOUCH_DELTA_BELOW    ;
extern const uint8_t _PROXFUSION2_PFUIF_CH0_TOUCH_DELTA_BELOW    ;
extern const uint8_t _PROXFUSION2_PFUIF_CH1_TOUCH_DELTA_ABOVE    ;
extern const uint8_t _PROXFUSION2_PFUIF_CH0_TOUCH_DELTA_ABOVE    ;
extern const uint8_t _PROXFUSION2_PFUIF_CH1_PROXIMITY_DELTA_BELOW;
extern const uint8_t _PROXFUSION2_PFUIF_CH0_PROXIMITY_DELTA_BELOW;
extern const uint8_t _PROXFUSION2_PFUIF_CH1_PROXIMITY_DELTA_ABOVE;
extern const uint8_t _PROXFUSION2_PFUIF_CH0_PROXIMITY_DELTA_ABOVE;

/* Hysteresis UI flags (R) */
extern const uint8_t _PROXFUSION2_HIUIF_COUNTS_RISE_ABOVE_THE_LTA  ;
extern const uint8_t _PROXFUSION2_HIUIF_COUNTS_FALL_BELOW_THE_LTA  ;
extern const uint8_t _PROXFUSION2_HIUIF_DELTA_BELOW_TOUCH_THRESHOLD;
extern const uint8_t _PROXFUSION2_HIUIF_DELTA_ABOVE_TOUCH_THRESHOLD;
extern const uint8_t _PROXFUSION2_HIUIF_DELTA_BELOW_PROX_THRESHOLD ;
extern const uint8_t _PROXFUSION2_HIUIF_DELTA_ABOVE_PROX_THRESHOLD ;

/* ALS UI flags (R) */
extern const uint8_t _PROXFUSION2_ALSUIF_LIGHT_INDICATION;
extern const uint8_t _PROXFUSION2_ALSUIF_DARK_INDICATION ;

/* Hall-effect UI flags (R) */
extern const uint8_t _PROXFUSION2_HEUIF_FIELD_STRENGTH_BELOW_TOUCH_LEVEL;
extern const uint8_t _PROXFUSION2_HEUIF_FIELD_STRENGTH_ABOVE_TOUCH_LEVEL;
extern const uint8_t _PROXFUSION2_HEUIF_FIELD_STRENGTH_BELOW_PROX_LEVEL ;
extern const uint8_t _PROXFUSION2_HEUIF_FIELD_STRENGTH_ABOVE_PROX_LEVEL ;
extern const uint8_t _PROXFUSION2_HEUIF_NORTH_FIELD_PRESENT             ;
extern const uint8_t _PROXFUSION2_HEUIF_SOUTH_FIELD_PRESENT             ;

/* Temperature UI flags (R) */
extern const uint8_t _PROXFUSION2_TUIF_TEMPERATURE_BELOW_TRIP_LEVEL;
extern const uint8_t _PROXFUSION2_TUIF_TEMPERATURE_ABOVE_TRIP_LEVEL;

/* ProxFusion settings 0_0 (RW) */
extern const uint8_t _PROXFUSION2_PFS00_CAPACITIVE_SENSING_MODE;
extern const uint8_t _PROXFUSION2_PFS00_TX0_AND_TX1_DISABLED   ;
extern const uint8_t _PROXFUSION2_PFS00_RX0_AND_RX1_DISABLED   ;
extern const uint8_t _PROXFUSION2_PFS00_RX0_ENABLE             ;
extern const uint8_t _PROXFUSION2_PFS00_RX1_ENABLE             ;
extern const uint8_t _PROXFUSION2_PFS00_RX0_AND_RX1_ENABLE     ;

/* ProxFusion settings 0_1 (RW) */
extern const uint8_t _PROXFUSION2_PFS01_INDUCTIVE_SENSOR_MODE ;
extern const uint8_t _PROXFUSION2_PFS01_MULTIPLIER_RANGE_LARGE;
extern const uint8_t _PROXFUSION2_PFS01_MULTIPLIER_RANGE_SMALL;
extern const uint8_t _PROXFUSION2_PFS01_TX0_AND_TX1_DISABLED  ;
extern const uint8_t _PROXFUSION2_PFS01_TX0_AND_TX1_ENABLE    ;

/* ProxFusion settings 1_0 (RW) */
extern const uint8_t _PROXFUSION2_PFS10_CAPACITOR_15pF        ;
extern const uint8_t _PROXFUSION2_PFS10_CAPACITOR_60pF        ;
extern const uint8_t _PROXFUSION2_PFS10_FREQUENCY_DIVIDER_1_2 ;
extern const uint8_t _PROXFUSION2_PFS10_FREQUENCY_DIVIDER_1_4 ;
extern const uint8_t _PROXFUSION2_PFS10_FREQUENCY_DIVIDER_1_8 ;
extern const uint8_t _PROXFUSION2_PFS10_FREQUENCY_DIVIDER_1_16;
extern const uint8_t _PROXFUSION2_PFS10_ATI_MODE_DISABLE      ;
extern const uint8_t _PROXFUSION2_PFS10_PARTIAL_ATI           ;
extern const uint8_t _PROXFUSION2_PFS10_SEMI_PARTIAL_ATI      ;
extern const uint8_t _PROXFUSION2_PFS10_FULL_ATI              ;

/* ProxFusion settings 1_1 (RW) */
extern const uint8_t _PROXFUSION2_PFS11_CAPACITOR_15pF                ;
extern const uint8_t _PROXFUSION2_PFS11_CAPACITOR_60pF                ;
extern const uint8_t _PROXFUSION2_PFS11_FREQUENCY_DIVIDER_1_2         ;
extern const uint8_t _PROXFUSION2_PFS11_FREQUENCY_DIVIDER_1_4         ;
extern const uint8_t _PROXFUSION2_PFS11_FREQUENCY_DIVIDER_1_8         ;
extern const uint8_t _PROXFUSION2_PFS11_FREQUENCY_DIVIDER_1_16        ;
extern const uint8_t _PROXFUSION2_PFS11_INTERNAL_RESISTOR_2_5uA_88kOhm;
extern const uint8_t _PROXFUSION2_PFS11_INTERNAL_RESISTOR_5uA_66kOhm  ;
extern const uint8_t _PROXFUSION2_PFS11_INTERNAL_RESISTOR_10uA_44kOhm ;
extern const uint8_t _PROXFUSION2_PFS11_INTERNAL_RESISTOR_20uA_22kOhm ;
extern const uint8_t _PROXFUSION2_PFS11_ATI_MODE_DISABLE              ;
extern const uint8_t _PROXFUSION2_PFS11_PARTIAL_ATI                   ;
extern const uint8_t _PROXFUSION2_PFS11_SEMI_PARTIAL_ATI              ;
extern const uint8_t _PROXFUSION2_PFS11_FULL_ATI                      ;

/* ProxFusion settings 2_0 and 2_1 (RW) */
extern const uint8_t _PROXFUSION2_PFS201_ATI_BASE_VALUE_75 ;
extern const uint8_t _PROXFUSION2_PFS201_ATI_BASE_VALUE_100;
extern const uint8_t _PROXFUSION2_PFS201_ATI_BASE_VALUE_150;
extern const uint8_t _PROXFUSION2_PFS201_ATI_BASE_VALUE_200;

/* ProxFusion settings 4 (RW) */
extern const uint8_t _PROXFUSION2_PFS4_HYSTERESIS_UI_DISABLED           ;
extern const uint8_t _PROXFUSION2_PFS4_HYSTERESIS_UI_ENABLE             ;
extern const uint8_t _PROXFUSION2_PFS4_BIDIRECTIONAL_DETECTION_DISABLED ;
extern const uint8_t _PROXFUSION2_PFS4_BIDIRECTIONAL_DETECTION_ENABLE   ;
extern const uint8_t _PROXFUSION2_PFS4_AC_FILTER_ENABLED                ;
extern const uint8_t _PROXFUSION2_PFS4_AC_FILTER_DISABLED               ;
extern const uint8_t _PROXFUSION2_PFS4_LONG_TERM_AVERAGE_BETA_VALUE_7   ;
extern const uint8_t _PROXFUSION2_PFS4_LONG_TERM_AVERAGE_BETA_VALUE_8   ;
extern const uint8_t _PROXFUSION2_PFS4_LONG_TERM_AVERAGE_BETA_VALUE_9   ;
extern const uint8_t _PROXFUSION2_PFS4_LONG_TERM_AVERAGE_BETA_VALUE_10  ;
extern const uint8_t _PROXFUSION2_PFS4_AC_FILTER_BETA_VALUE_1           ;
extern const uint8_t _PROXFUSION2_PFS4_AC_FILTER_BETA_VALUE_2           ;
extern const uint8_t _PROXFUSION2_PFS4_AC_FILTER_BETA_VALUE_3           ;
extern const uint8_t _PROXFUSION2_PFS4_AC_FILTER_BETA_VALUE_4           ;

/* Hysteresis UI settings (RW) */
extern const uint8_t _PROXFUSION2_HIUIS_TOUCH_HYSTERESIS_DISABLED             ;
extern const uint8_t _PROXFUSION2_HIUIS_TOUCH_HYSTERESIS_1_8_OF_THRESHOLD     ;
extern const uint8_t _PROXFUSION2_HIUIS_TOUCH_HYSTERESIS_1_4_OF_THRESHOLD     ;
extern const uint8_t _PROXFUSION2_HIUIS_TOUCH_HYSTERESIS_1_16_OF_THRESHOLD    ;
extern const uint8_t _PROXFUSION2_HIUIS_PROXIMITY_HYSTERESIS_DISABLED         ;
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


                                                                       /** @} */
#ifdef __cplusplus
extern "C"{
#endif

/** @defgroup PROXFUSION2_INIT Driver Initialization */              /** @{ */

#ifdef   __PROXFUSION2_DRV_SPI__
void proxfusion2_spiDriverInit(T_PROXFUSION2_P gpioObj, T_PROXFUSION2_P spiObj);
#endif
#ifdef   __PROXFUSION2_DRV_I2C__
void proxfusion2_i2cDriverInit(T_PROXFUSION2_P gpioObj, T_PROXFUSION2_P i2cObj, uint8_t slave);
#endif
#ifdef   __PROXFUSION2_DRV_UART__
void proxfusion2_uartDriverInit(T_PROXFUSION2_P gpioObj, T_PROXFUSION2_P uartObj);
#endif

// GPIO Only Drivers - remove in other cases
void proxfusion2_gpioDriverInit(T_PROXFUSION2_P gpioObj);
                                                                       /** @} */
/** @defgroup PROXFUSION2_FUNC Driver Functions */                   /** @{ */

/**
 * @brief Function for writing one byte into the register
 *
 * @param[in] reg     Register in which the data will be written
 * @param[in] _data   Data which be written in register
 */
void proxfusion2_writeByte(uint8_t reg, uint8_t _data);

/**
 * @brief Function for reads one byte from register
 *
 * @param[in] reg     Register from which the data is read
 * @return data that is read
 */
uint8_t proxfusion2_readByte(uint8_t reg);

/**
 * @brief Function for reads two byte from register
 *
 * @param[in] reg     Register from which the data is read
 * @return data that is read
 */
uint16_t proxfusion2_readData(uint8_t reg);

/**
 * @brief Function for configuration chip
 *
 * The function contains all necessary sensors for operation and measurement.
 *
 */
void proxfusion2_defaultConfig();
/**
 * @brief Function for init chip
 */
uint8_t proxfusion2_init();

/**
 * @brief Function for detect Touch
 *
 * @retval 1 - TOUCH_DETECTED or 0 - NO_TOUCH
 */
uint8_t proxfusion2_detectTouch();

/**
 * @brief Function for read ambient light
 *
 * @param[out] ALS_range  ALS range (0-10)
 * @retval 1 - DARK or 0 - LIGHT
 */
uint8_t proxfusion2_detectDark_Light(uint8_t *ALS_range);

/**
 * @brief Function for read Hall-effect
 *
 * @retval 1 - NORTH, 2 - SOUTH or 0 - NO_HALL
 */
uint8_t proxfusion2_detectHall();



                                                                       /** @} */
#ifdef __cplusplus
} // extern "C"
#endif
#endif

/**
    @example Click_ProxFusion_2_STM.c
    @example Click_ProxFusion_2_TIVA.c
    @example Click_ProxFusion_2_CEC.c
    @example Click_ProxFusion_2_KINETIS.c
    @example Click_ProxFusion_2_MSP.c
    @example Click_ProxFusion_2_PIC.c
    @example Click_ProxFusion_2_PIC32.c
    @example Click_ProxFusion_2_DSPIC.c
    @example Click_ProxFusion_2_AVR.c
    @example Click_ProxFusion_2_FT90x.c
    @example Click_ProxFusion_2_STM.mbas
    @example Click_ProxFusion_2_TIVA.mbas
    @example Click_ProxFusion_2_CEC.mbas
    @example Click_ProxFusion_2_KINETIS.mbas
    @example Click_ProxFusion_2_MSP.mbas
    @example Click_ProxFusion_2_PIC.mbas
    @example Click_ProxFusion_2_PIC32.mbas
    @example Click_ProxFusion_2_DSPIC.mbas
    @example Click_ProxFusion_2_AVR.mbas
    @example Click_ProxFusion_2_FT90x.mbas
    @example Click_ProxFusion_2_STM.mpas
    @example Click_ProxFusion_2_TIVA.mpas
    @example Click_ProxFusion_2_CEC.mpas
    @example Click_ProxFusion_2_KINETIS.mpas
    @example Click_ProxFusion_2_MSP.mpas
    @example Click_ProxFusion_2_PIC.mpas
    @example Click_ProxFusion_2_PIC32.mpas
    @example Click_ProxFusion_2_DSPIC.mpas
    @example Click_ProxFusion_2_AVR.mpas
    @example Click_ProxFusion_2_FT90x.mpas
*/                                                                     /** @} */
/* -------------------------------------------------------------------------- */
/*
  __proxfusion2_driver.h

  Copyright (c) 2017, MikroElektonika - http://www.mikroe.com

  All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are met:

1. Redistributions of source code must retain the above copyright
   notice, this list of conditions and the following disclaimer.

2. Redistributions in binary form must reproduce the above copyright
   notice, this list of conditions and the following disclaimer in the
   documentation and/or other materials provided with the distribution.

3. All advertising materials mentioning features or use of this software
   must display the following acknowledgement:
   This product includes software developed by the MikroElektonika.

4. Neither the name of the MikroElektonika nor the
   names of its contributors may be used to endorse or promote products
   derived from this software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY MIKROELEKTRONIKA ''AS IS'' AND ANY
EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
DISCLAIMED. IN NO EVENT SHALL MIKROELEKTRONIKA BE LIABLE FOR ANY
DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
(INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

----------------------------------------------------------------------------- */