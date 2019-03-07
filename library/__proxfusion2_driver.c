/*
    __proxfusion2_driver.c

-----------------------------------------------------------------------------

  This file is part of mikroSDK.

  Copyright (c) 2017, MikroElektonika - http://www.mikroe.com

  All rights reserved.

----------------------------------------------------------------------------- */

#include "__proxfusion2_driver.h"
#include "__proxfusion2_hal.c"

/* ------------------------------------------------------------------- MACROS */

/* Register */

// Device Information Data
const uint8_t _PROXFUSION2_REG_PRODUCT_NUMBER = 0x00; // 0x46  IQS621 product number
const uint8_t _PROXFUSION2_REG_SOFTWARE_NUMBER = 0x01; // 0x09 IQS621 production software number
const uint8_t _PROXFUSION2_REG_HARDWARE_NUMBER = 0x02; // 0x82 IQS621 hardware number
// Flags and user interface data
const uint8_t _PROXFUSION2_REG_SYSTEM_FLAGS              = 0x10;
const uint8_t _PROXFUSION2_REG_GLOBAL_EVENTS             = 0x11;
const uint8_t _PROXFUSION2_REG_PROXFUSION_UI_FLAGS       = 0x12;
const uint8_t _PROXFUSION2_REG_HYSTERESIS_UI_FLAGS       = 0x13;
const uint8_t _PROXFUSION2_REG_HYSTERESIS_UI_OUTPUT_LSB  = 0x14;
const uint8_t _PROXFUSION2_REG_HYSTERESIS_UI_OUTPUT_MSB  = 0x15;
const uint8_t _PROXFUSION2_REG_ALS_UI_FLAGS              = 0x16;
const uint8_t _PROXFUSION2_REG_ALS_UI_OUTPUT_LSB         = 0x17;
const uint8_t _PROXFUSION2_REG_ALS_UI_OUTPUT_MSB         = 0x18;
const uint8_t _PROXFUSION2_REG_HALL_EFFECT_UI_FLAGS      = 0x19;
const uint8_t _PROXFUSION2_REG_HALL_EFFECT_UI_OUTPUT_LSB = 0x1A;
const uint8_t _PROXFUSION2_REG_HALL_EFFECT_UI_OUTPUT_MSB = 0x1B;
const uint8_t _PROXFUSION2_REG_TEMPERATURE_UI_FLAGS      = 0x1C;
const uint8_t _PROXFUSION2_REG_TEMPERATURE_UI_OUTPUT_LSB = 0x1D;
const uint8_t _PROXFUSION2_REG_TEMPERATURE_UI_OUTPUT_MSB = 0x1E;
// Channel counts (raw data)
const uint8_t _PROXFUSION2_REG_CHANNEL_COUNTS_CH0_LSB = 0x20;
const uint8_t _PROXFUSION2_REG_CHANNEL_COUNTS_CH0_MSB = 0x21;
const uint8_t _PROXFUSION2_REG_CHANNEL_COUNTS_CH1_LSB = 0x22;
const uint8_t _PROXFUSION2_REG_CHANNEL_COUNTS_CH1_MSB = 0x23;
const uint8_t _PROXFUSION2_REG_CHANNEL_COUNTS_CH2_LSB = 0x24;
const uint8_t _PROXFUSION2_REG_CHANNEL_COUNTS_CH2_MSB = 0x25;
const uint8_t _PROXFUSION2_REG_CHANNEL_COUNTS_CH3_LSB = 0x26;
const uint8_t _PROXFUSION2_REG_CHANNEL_COUNTS_CH3_MSB = 0x27;
const uint8_t _PROXFUSION2_REG_CHANNEL_COUNTS_CH4_LSB = 0x28;
const uint8_t _PROXFUSION2_REG_CHANNEL_COUNTS_CH4_MSB = 0x29;
const uint8_t _PROXFUSION2_REG_CHANNEL_COUNTS_CH5_LSB = 0x2A;
const uint8_t _PROXFUSION2_REG_CHANNEL_COUNTS_CH5_MSB = 0x2B;
const uint8_t _PROXFUSION2_REG_CHANNEL_COUNTS_CH6_LSB = 0x2C;
const uint8_t _PROXFUSION2_REG_CHANNEL_COUNTS_CH6_MSB = 0x2D;
// LTA values (filtered data)
const uint8_t _PROXFUSION2_REG_LTA_VALUES_CH0_LSB = 0x30;
const uint8_t _PROXFUSION2_REG_LTA_VALUES_CH0_MSB = 0x31;
const uint8_t _PROXFUSION2_REG_LTA_VALUES_CH1_LSB = 0x32;
const uint8_t _PROXFUSION2_REG_LTA_VALUES_CH1_MSB = 0x33;
// ProxFusion sensor settings block 1
const uint8_t _PROXFUSION2_REG_PROXFUSION_SETTINGS_00 = 0x40;
const uint8_t _PROXFUSION2_REG_PROXFUSION_SETTINGS_01 = 0x41;
const uint8_t _PROXFUSION2_REG_PROXFUSION_SETTINGS_10 = 0x42;
const uint8_t _PROXFUSION2_REG_PROXFUSION_SETTINGS_11 = 0x43;
// ProxFusion sensor settings block 2
const uint8_t _PROXFUSION2_REG_PROXFUSION_SETTINGS_20 = 0x44;
const uint8_t _PROXFUSION2_REG_PROXFUSION_SETTINGS_21 = 0x45;
const uint8_t _PROXFUSION2_REG_PROXFUSION_SETTINGS_30 = 0x46;
const uint8_t _PROXFUSION2_REG_PROXFUSION_SETTINGS_31 = 0x47;
const uint8_t _PROXFUSION2_REG_PROXFUSION_SETTINGS_4  = 0x48;
// ProxFusion UI settings
const uint8_t _PROXFUSION2_REG_PROX_THRESHOLD_CH0      = 0x50;
const uint8_t _PROXFUSION2_REG_PROX_THRESHOLD_CH1      = 0x52;
const uint8_t _PROXFUSION2_REG_TOUCH_THRESHOLD_CH0     = 0x51;
const uint8_t _PROXFUSION2_REG_TOUCH_THRESHOLD_CH1     = 0x53;
const uint8_t _PROXFUSION2_REG_DISCRETE_UI_HALT_TIME   = 0x54;
// Hysteresis UI settings
const uint8_t _PROXFUSION2_REG_HYSTERESIS_UI_SETTINGS               = 0x60;
const uint8_t _PROXFUSION2_REG_HYSTERESIS_UI_FILTER_HALT_THRESHOLD  = 0x61;
const uint8_t _PROXFUSION2_REG_HYSTERESIS_UI_PROXIMITY_THRESHOLD    = 0x62;
const uint8_t _PROXFUSION2_REG_HYSTERESIS_UI_TOUCH_THRESHOLD        = 0x63;
// ALS sensor settings
const uint8_t _PROXFUSION2_REG_ALS_settings_0            = 0x70;
const uint8_t _PROXFUSION2_REG_ALS_settings_1            = 0x71;
const uint8_t _PROXFUSION2_REG_ALS_SETTINGS_FILTER_SPEED = 0x72;
const uint8_t _PROXFUSION2_REG_MULTIPLIERS_CH34          = 0x73;
// ALS UI settings
const uint8_t _PROXFUSION2_REG_ALS_DARK_THRESHOLD      = 0x80;
const uint8_t _PROXFUSION2_REG_ALS_LIGHT_THRESHOLD     = 0x81;
const uint8_t _PROXFUSION2_REG_ALS_RAW_TO_LUX_DIVIDER  = 0x82;
const uint8_t _PROXFUSION2_REG_ALS_IR_COMPENSATION     = 0x83;
// Hall-effect sensor settings
const uint8_t _PROXFUSION2_REG_HALL_EFFECT_SETTINGS_0    = 0x90;
const uint8_t _PROXFUSION2_REG_HALL_EFFECT_SETTINGS_1    = 0x91;
const uint8_t _PROXFUSION2_REG_COMPENSATION_CH56         = 0x92;
const uint8_t _PROXFUSION2_REG_MULTIPLIERS_CH56          = 0x93;
// Hall-effect switch UI settings
const uint8_t _PROXFUSION2_REG_HALL_EFFECT_UI_SETTINGS     = 0xA0;
const uint8_t _PROXFUSION2_REG_HALL_PROXIMITY_THRESHOLD    = 0xA1;
const uint8_t _PROXFUSION2_REG_HALL_TOUCH_THRESHOLD        = 0xA2;
// Temperature monitoring UI settings
const uint8_t _PROXFUSION2_REG_TEMPERATURE_UI_SETTINGS     = 0xC0;
const uint8_t _PROXFUSION2_REG_MULTIPLIER_CH2              = 0xC1;
const uint8_t _PROXFUSION2_REG_TEMPERATURE_CALIBRATION_0   = 0xC2;
const uint8_t _PROXFUSION2_REG_TEMPERATURE_CALIBRATION_1   = 0xC3;
// Device and power mode settings
const uint8_t _PROXFUSION2_REG_SYSTEM_SETTINGS                    = 0xD0;
const uint8_t _PROXFUSION2_REG_ACTIVE_CHANNELS                    = 0xD1;
const uint8_t _PROXFUSION2_REG_POWER_MODE_SETTINGS                = 0xD2;
const uint8_t _PROXFUSION2_REG_NORMAL_POWER_MODE_REPORT_RATE      = 0xD3;
const uint8_t _PROXFUSION2_REG_LOW_POWER_MODE_REPORT_RATE         = 0xD4;
const uint8_t _PROXFUSION2_REG_UALTRA_LOW_POWER_MODE_REPORT_RATE  = 0xD5;
const uint8_t _PROXFUSION2_REG_AUTO_MODE_TIMER                    = 0xD6;
const uint8_t _PROXFUSION2_REG_GLOBAL_EVENT_MASK                  = 0xD7;
const uint8_t _PROXFUSION2_REG_RDY_TIMEOUT_PERIOD                 = 0xD8;
const uint8_t _PROXFUSION2_REG_I2C_SETTINGS                       = 0xD9;

/* System flags (R) */
const uint8_t _PROXFUSION2_SF_SHOW_RESET                = 0x80;
const uint8_t _PROXFUSION2_SF_NO_RESET                  = 0x00;
const uint8_t _PROXFUSION2_SF_NORMAL_MODE               = 0x00;
const uint8_t _PROXFUSION2_SF_ULTRA_LOW_POWER_MODE      = 0x10;
const uint8_t _PROXFUSION2_SF_LOW_POWER_MODE            = 0x08;
const uint8_t _PROXFUSION2_SF_HALT_MODE                 = 0x00;
const uint8_t _PROXFUSION2_SF_ACTIVE_ATI                = 0x04;
const uint8_t _PROXFUSION2_SF_NO_ATI                    = 0x00;
const uint8_t _PROXFUSION2_SF_NO_NEW_EVENT              = 0x00;
const uint8_t _PROXFUSION2_SF_NEW_EVENT                 = 0x02;
const uint8_t _PROXFUSION2_SF_NOT_PERFORMING_NM_UPDATE  = 0x00;
const uint8_t _PROXFUSION2_SF_BUSY_PERFORMING_NM_UPDATE = 0x02;

/* Global events (R) */
const uint8_t _PROXFUSION2_GE_POWER_MODE_EVENT_ACTIVE     = 0x40;
const uint8_t _PROXFUSION2_GE_SYS_EVENT_ACTIVE            = 0x20;
const uint8_t _PROXFUSION2_GE_TEMP_EVENT_ACTIVE           = 0x10;
const uint8_t _PROXFUSION2_GE_HYSTERESIS_UI_EVENT_ACTIVE  = 0x08;
const uint8_t _PROXFUSION2_GE_ALS_EVENT_ACTIVE            = 0x04;
const uint8_t _PROXFUSION2_GE_HALL_EVENT_ACTIVE           = 0x02;
const uint8_t _PROXFUSION2_GE_PROXSENSE_EVENT_ACTIVE      = 0x01;

/* ProxFusion UI flags (R) */
const uint8_t _PROXFUSION2_PFUIF_CH1_TOUCH_DELTA_BELOW     = 0x00;
const uint8_t _PROXFUSION2_PFUIF_CH0_TOUCH_DELTA_BELOW     = 0x00;
const uint8_t _PROXFUSION2_PFUIF_CH1_TOUCH_DELTA_ABOVE     = 0x20;
const uint8_t _PROXFUSION2_PFUIF_CH0_TOUCH_DELTA_ABOVE     = 0x10;
const uint8_t _PROXFUSION2_PFUIF_CH1_PROXIMITY_DELTA_BELOW = 0x00;
const uint8_t _PROXFUSION2_PFUIF_CH0_PROXIMITY_DELTA_BELOW = 0x00;
const uint8_t _PROXFUSION2_PFUIF_CH1_PROXIMITY_DELTA_ABOVE = 0x02;
const uint8_t _PROXFUSION2_PFUIF_CH0_PROXIMITY_DELTA_ABOVE = 0x01;

/* Hysteresis UI flags (R) */
const uint8_t _PROXFUSION2_HIUIF_COUNTS_RISE_ABOVE_THE_LTA    = 0x00;
const uint8_t _PROXFUSION2_HIUIF_COUNTS_FALL_BELOW_THE_LTA    = 0x04;
const uint8_t _PROXFUSION2_HIUIF_DELTA_BELOW_TOUCH_THRESHOLD  = 0x00;
const uint8_t _PROXFUSION2_HIUIF_DELTA_ABOVE_TOUCH_THRESHOLD  = 0x02;
const uint8_t _PROXFUSION2_HIUIF_DELTA_BELOW_PROX_THRESHOLD   = 0x00;
const uint8_t _PROXFUSION2_HIUIF_DELTA_ABOVE_PROX_THRESHOLD   = 0x01;

/* ALS UI flags (R) */
const uint8_t _PROXFUSION2_ALSUIF_LIGHT_INDICATION = 0x00;
const uint8_t _PROXFUSION2_ALSUIF_DARK_INDICATION  = 0x80;

/* Hall-effect UI flags (R) */
const uint8_t _PROXFUSION2_HEUIF_FIELD_STRENGTH_BELOW_TOUCH_LEVEL = 0x00;
const uint8_t _PROXFUSION2_HEUIF_FIELD_STRENGTH_ABOVE_TOUCH_LEVEL = 0x04;
const uint8_t _PROXFUSION2_HEUIF_FIELD_STRENGTH_BELOW_PROX_LEVEL  = 0x00;
const uint8_t _PROXFUSION2_HEUIF_FIELD_STRENGTH_ABOVE_PROX_LEVEL  = 0x02;
const uint8_t _PROXFUSION2_HEUIF_NORTH_FIELD_PRESENT              = 0x00;
const uint8_t _PROXFUSION2_HEUIF_SOUTH_FIELD_PRESENT              = 0x01;

/* Temperature UI flags (R) */
const uint8_t _PROXFUSION2_TUIF_TEMPERATURE_BELOW_TRIP_LEVEL   = 0x00;
const uint8_t _PROXFUSION2_TUIF_TEMPERATURE_ABOVE_TRIP_LEVEL   = 0x80;

/* ProxFusion settings 0_0 (RW) */
const uint8_t _PROXFUSION2_PFS00_CAPACITIVE_SENSING_MODE   = 0x00;
const uint8_t _PROXFUSION2_PFS00_TX0_AND_TX1_DISABLED      = 0x00;
const uint8_t _PROXFUSION2_PFS00_RX0_AND_RX1_DISABLED      = 0x00;
const uint8_t _PROXFUSION2_PFS00_RX0_ENABLE                = 0x01;
const uint8_t _PROXFUSION2_PFS00_RX1_ENABLE                = 0x02;
const uint8_t _PROXFUSION2_PFS00_RX0_AND_RX1_ENABLE        = 0x03;

/* ProxFusion settings 0_1 (RW) */
const uint8_t _PROXFUSION2_PFS01_INDUCTIVE_SENSOR_MODE     = 0x80;
const uint8_t _PROXFUSION2_PFS01_MULTIPLIER_RANGE_LARGE    = 0x00;
const uint8_t _PROXFUSION2_PFS01_MULTIPLIER_RANGE_SMALL    = 0x01;
const uint8_t _PROXFUSION2_PFS01_TX0_AND_TX1_DISABLED      = 0x00;
const uint8_t _PROXFUSION2_PFS01_TX0_AND_TX1_ENABLE        = 0x03;

/* ProxFusion settings 1_0 (RW) */
const uint8_t _PROXFUSION2_PFS10_CAPACITOR_15pF          = 0x00;
const uint8_t _PROXFUSION2_PFS10_CAPACITOR_60pF          = 0x40;
const uint8_t _PROXFUSION2_PFS10_FREQUENCY_DIVIDER_1_2   = 0x00;
const uint8_t _PROXFUSION2_PFS10_FREQUENCY_DIVIDER_1_4   = 0x10;
const uint8_t _PROXFUSION2_PFS10_FREQUENCY_DIVIDER_1_8   = 0x20;
const uint8_t _PROXFUSION2_PFS10_FREQUENCY_DIVIDER_1_16  = 0x30;
const uint8_t _PROXFUSION2_PFS10_ATI_MODE_DISABLE        = 0x00;
const uint8_t _PROXFUSION2_PFS10_PARTIAL_ATI             = 0x01;
const uint8_t _PROXFUSION2_PFS10_SEMI_PARTIAL_ATI        = 0x02;
const uint8_t _PROXFUSION2_PFS10_FULL_ATI                = 0x03;

/* ProxFusion settings 1_1 (RW) */
const uint8_t _PROXFUSION2_PFS11_CAPACITOR_15pF                  = 0x00;
const uint8_t _PROXFUSION2_PFS11_CAPACITOR_60pF                  = 0x40;
const uint8_t _PROXFUSION2_PFS11_FREQUENCY_DIVIDER_1_2           = 0x00;
const uint8_t _PROXFUSION2_PFS11_FREQUENCY_DIVIDER_1_4           = 0x10;
const uint8_t _PROXFUSION2_PFS11_FREQUENCY_DIVIDER_1_8           = 0x20;
const uint8_t _PROXFUSION2_PFS11_FREQUENCY_DIVIDER_1_16          = 0x30;
const uint8_t _PROXFUSION2_PFS11_INTERNAL_RESISTOR_2_5uA_88kOhm  = 0x00;
const uint8_t _PROXFUSION2_PFS11_INTERNAL_RESISTOR_5uA_66kOhm    = 0x04;
const uint8_t _PROXFUSION2_PFS11_INTERNAL_RESISTOR_10uA_44kOhm   = 0x08;
const uint8_t _PROXFUSION2_PFS11_INTERNAL_RESISTOR_20uA_22kOhm   = 0x0C;
const uint8_t _PROXFUSION2_PFS11_ATI_MODE_DISABLE                = 0x00;
const uint8_t _PROXFUSION2_PFS11_PARTIAL_ATI                     = 0x01;
const uint8_t _PROXFUSION2_PFS11_SEMI_PARTIAL_ATI                = 0x02;
const uint8_t _PROXFUSION2_PFS11_FULL_ATI                        = 0x03;

/* ProxFusion settings 2_0 and 2_1 (RW) */
const uint8_t _PROXFUSION2_PFS201_ATI_BASE_VALUE_75    = 0x00;
const uint8_t _PROXFUSION2_PFS201_ATI_BASE_VALUE_100   = 0x40;
const uint8_t _PROXFUSION2_PFS201_ATI_BASE_VALUE_150   = 0x80;
const uint8_t _PROXFUSION2_PFS201_ATI_BASE_VALUE_200   = 0xC0;

/* ProxFusion settings 4 (RW) */
const uint8_t _PROXFUSION2_PFS4_HYSTERESIS_UI_DISABLED             = 0x00;
const uint8_t _PROXFUSION2_PFS4_HYSTERESIS_UI_ENABLE               = 0x40;
const uint8_t _PROXFUSION2_PFS4_BIDIRECTIONAL_DETECTION_DISABLED   = 0x00;
const uint8_t _PROXFUSION2_PFS4_BIDIRECTIONAL_DETECTION_ENABLE     = 0x20;
const uint8_t _PROXFUSION2_PFS4_AC_FILTER_ENABLED                  = 0x00;
const uint8_t _PROXFUSION2_PFS4_AC_FILTER_DISABLED                 = 0x10;
const uint8_t _PROXFUSION2_PFS4_LONG_TERM_AVERAGE_BETA_VALUE_7     = 0x00;
const uint8_t _PROXFUSION2_PFS4_LONG_TERM_AVERAGE_BETA_VALUE_8     = 0x04;
const uint8_t _PROXFUSION2_PFS4_LONG_TERM_AVERAGE_BETA_VALUE_9     = 0x08;
const uint8_t _PROXFUSION2_PFS4_LONG_TERM_AVERAGE_BETA_VALUE_10    = 0x0C;
const uint8_t _PROXFUSION2_PFS4_AC_FILTER_BETA_VALUE_1             = 0x00;
const uint8_t _PROXFUSION2_PFS4_AC_FILTER_BETA_VALUE_2             = 0x01;
const uint8_t _PROXFUSION2_PFS4_AC_FILTER_BETA_VALUE_3             = 0x02;
const uint8_t _PROXFUSION2_PFS4_AC_FILTER_BETA_VALUE_4             = 0x03;

/* Hysteresis UI settings (RW) */
const uint8_t _PROXFUSION2_HIUIS_TOUCH_HYSTERESIS_DISABLED                = 0x00;
const uint8_t _PROXFUSION2_HIUIS_TOUCH_HYSTERESIS_1_8_OF_THRESHOLD        = 0x20;
const uint8_t _PROXFUSION2_HIUIS_TOUCH_HYSTERESIS_1_4_OF_THRESHOLD        = 0x10;
const uint8_t _PROXFUSION2_HIUIS_TOUCH_HYSTERESIS_1_16_OF_THRESHOLD       = 0x30;
const uint8_t _PROXFUSION2_HIUIS_PROXIMITY_HYSTERESIS_DISABLED            = 0x00;
const uint8_t _PROXFUSION2_HIUIS_PROXIMITY_HYSTERESIS_1_8_OF_THRESHOLD    = 0x02;
const uint8_t _PROXFUSION2_HIUIS_PROXIMITY_HYSTERESIS_1_4_OF_THRESHOLD    = 0x01;
const uint8_t _PROXFUSION2_HIUIS_PROXIMITY_HYSTERESIS_1_16_OF_THRESHOLD   = 0x03;

const uint8_t _PROXFUSION2_TOUCH_IS_DETECTED = 0x01;
const uint8_t _PROXFUSION2_DARK_AMBIENT  = 0x01;
const uint8_t _PROXFUSION2_LIGHT_AMBIENT = 0x00;
const uint8_t _PROXFUSION2_HALL_NORTH = 0x00;
const uint8_t _PROXFUSION2_HALL_SOUTH = 0x01;

const uint8_t _PROXFUSION2_HYSTERESIS_UI_OUTPUT  = 0x14;
const uint8_t _PROXFUSION2_ALS_UI_OUTPUT         = 0x17;
const uint8_t _PROXFUSION2_HALL_EFFECT_UI_OUTPUT = 0x1A;
const uint8_t _PROXFUSION2_TEMPERATURE_UI_OUTPUT = 0x1D;

/* ---------------------------------------------------------------- VARIABLES */

#ifdef   __PROXFUSION2_DRV_I2C__
static uint8_t _slaveAddress;
#endif

static const uint8_t DEVICE_ERROR   = 0x01;
static const uint8_t DEVICE_OK      = 0x00;
static const uint8_t TOUCH_DETECTED = 0x01;
static const uint8_t NO_TOUCH       = 0x00;
static const uint8_t DETECT_DARK    = 0x01;
static const uint8_t DETECT_LIGHT   = 0x00;
static const uint8_t HALL_NORTH     = 0x01;
static const uint8_t HALL_SOUTH     = 0x02;
static const uint8_t NO_HALL        = 0x00;

/* -------------------------------------------- PRIVATE FUNCTION DECLARATIONS */



/* --------------------------------------------- PRIVATE FUNCTION DEFINITIONS */



/* --------------------------------------------------------- PUBLIC FUNCTIONS */

#ifdef   __PROXFUSION2_DRV_SPI__

void proxfusion2_spiDriverInit(T_PROXFUSION2_P gpioObj, T_PROXFUSION2_P spiObj)
{
    hal_spiMap( (T_HAL_P)spiObj );
    hal_gpioMap( (T_HAL_P)gpioObj );
}

#endif
#ifdef   __PROXFUSION2_DRV_I2C__

void proxfusion2_i2cDriverInit(T_PROXFUSION2_P gpioObj, T_PROXFUSION2_P i2cObj, uint8_t slave)
{
    _slaveAddress = slave;
    hal_i2cMap( (T_HAL_P)i2cObj );
    hal_gpioMap( (T_HAL_P)gpioObj );
}

#endif
#ifdef   __PROXFUSION2_DRV_UART__

void proxfusion2_uartDriverInit(T_PROXFUSION2_P gpioObj, T_PROXFUSION2_P uartObj)
{
    hal_uartMap( (T_HAL_P)uartObj );
    hal_gpioMap( (T_HAL_P)gpioObj );
}

#endif

/* ----------------------------------------------------------- IMPLEMENTATION */

void proxfusion2_writeByte(uint8_t reg, uint8_t _data)
{
    uint8_t writeReg[ 2 ];
    
    writeReg[ 0 ] = reg;
    writeReg[ 1 ] = _data;
    
    hal_i2cStart();
    hal_i2cWrite(_slaveAddress, writeReg, 2, END_MODE_STOP );
}

uint8_t proxfusion2_readByte(uint8_t reg)
{
    uint8_t writeReg[ 1 ];
    uint8_t readReg[ 1 ];
    
    writeReg[ 0 ] = reg;
    
    hal_i2cStart();
    hal_i2cWrite(_slaveAddress, writeReg, 1, END_MODE_STOP );
    Delay_10ms();
    hal_i2cStart();
    hal_i2cRead(_slaveAddress, readReg, 1, END_MODE_STOP );
    
    return readReg[ 0 ];
}

uint16_t proxfusion2_readData(uint8_t reg)
{
    uint8_t writeReg[ 1 ];
    uint8_t readReg[ 2 ];
    uint16_t readData;
    
    writeReg[ 0 ] = reg;
    
    hal_i2cStart();
    hal_i2cWrite(_slaveAddress, writeReg, 1, END_MODE_RESTART );
    hal_i2cRead(_slaveAddress, readReg, 2, END_MODE_STOP );
    
    readData = readReg[ 1 ];
    readData = readData << 8;
    readData = readData | readReg[ 0 ];
    
    return readData;
}

void proxfusion2_defaultConfig()
{
    /* Change the Prox Sensor Settings 0 */
    proxfusion2_writeByte(0x40, 0x01);
    proxfusion2_writeByte(0x41, 0x01);
    proxfusion2_writeByte(0x42, 0x02);
    proxfusion2_writeByte(0x43, 0x67);
    proxfusion2_writeByte(0x44, 0x67);
    proxfusion2_writeByte(0x45, 0x67);
    proxfusion2_writeByte(0x46, 0xE0);
    proxfusion2_writeByte(0x47, 0xE0);
    proxfusion2_writeByte(0x48, 0xD0);
    proxfusion2_writeByte(0x49, 0x06);
    proxfusion2_writeByte(0x4A, 0x06);
    proxfusion2_writeByte(0x4B, 0x06);
    proxfusion2_writeByte(0x4C, 0x01);
    proxfusion2_writeByte(0x4D, 0x01);
    proxfusion2_writeByte(0x4E, 0x06);
    proxfusion2_writeByte(0x4F, 0x06);

    /* Change the Prox Sensor Settings 1 */
    proxfusion2_writeByte(0x50, 0x80);
    proxfusion2_writeByte(0x51, 0x01);
    proxfusion2_writeByte(0x52, 0xAA);
    proxfusion2_writeByte(0x53, 0xB0);
    proxfusion2_writeByte(0x54, 0x8C);
    proxfusion2_writeByte(0x55, 0x18);
    proxfusion2_writeByte(0x56, 0x18);
    proxfusion2_writeByte(0x57, 0x19);
    
    /* Change the Prox UI Settings */
    proxfusion2_writeByte(0x60, 0x32);
    proxfusion2_writeByte(0x61, 0x4E);
    proxfusion2_writeByte(0x62, 0x32);
    proxfusion2_writeByte(0x63, 0x4E);
    proxfusion2_writeByte(0x64, 0x28);
    proxfusion2_writeByte(0x65, 0x20);
    proxfusion2_writeByte(0x66, 0x16);
    proxfusion2_writeByte(0x67, 0x20);
    proxfusion2_writeByte(0x68, 0x28);

    proxfusion2_writeByte(0x70, 0x04); // ALS settings 0
    
    /* Change the Metal Detect UI Settings */
    proxfusion2_writeByte(0x80, 0x11);
    proxfusion2_writeByte(0x81, 0x1E);
    proxfusion2_writeByte(0x82, 0x32);
    proxfusion2_writeByte(0x83, 0x4E);
    
    /* Change the HALL Sensor Settings */
    proxfusion2_writeByte(0x90, 0x03);
    proxfusion2_writeByte(0x91, 0x50);
    proxfusion2_writeByte(0x92, 0x00);
    proxfusion2_writeByte(0x93, 0x48);
    proxfusion2_writeByte(0x94, 0x00);
    proxfusion2_writeByte(0x95, 0x19);
    proxfusion2_writeByte(0x96, 0x19);

    proxfusion2_writeByte(0xA0, 0x55); // Hall-effect UI settings
    
    proxfusion2_writeByte(0xC0, 0x00); // Temperature UI settings
    proxfusion2_writeByte(0xC1, 0x06);
    proxfusion2_writeByte(0xC2, 0x00);
    proxfusion2_writeByte(0xC3, 0x00);
    
    proxfusion2_writeByte(0xD0, 0x29); // System settings
    proxfusion2_writeByte(0xD1, 0x7F); // Active channels - all
    proxfusion2_writeByte(0xD2, 0xC3); // Power mode settings
    proxfusion2_writeByte(0xD7, 0x28); // Global event mask
    Delay_1sec();
}

uint8_t proxfusion2_init()
{
    uint8_t product_number;
    uint8_t sw_number;
    uint8_t hw_number;
    
    product_number = proxfusion2_readByte( 0x00 );
    sw_number = proxfusion2_readByte( 0x01 );
    hw_number = proxfusion2_readByte( 0x02 );
    
    if( product_number != 0x46 )
    {
        return DEVICE_ERROR;
    }
    if( sw_number != 0x09 )
    {
        return DEVICE_ERROR;
    }
    if( hw_number != 0x82 )
    {
        return DEVICE_ERROR;
    }
    return DEVICE_OK;
}

uint8_t proxfusion2_detectTouch()
{
    uint8_t touch;
    
    touch = proxfusion2_readByte( 0x13 );
    
    if((touch & 0x02) != 0 )
    {
        return TOUCH_DETECTED;
    }
    return NO_TOUCH;
}

uint8_t proxfusion2_detectDark_Light(uint8_t *ALS_range)
{
    uint8_t tmp;
    
    tmp = proxfusion2_readByte( 0x16 );
    *ALS_range = tmp & 0x0F;
    
    if((tmp & 0x80) == 0)
    {
        return  DETECT_DARK;
    }
    return DETECT_LIGHT;
}

uint8_t proxfusion2_detectHall()
{
    uint8_t tmp;
    
    tmp = proxfusion2_readByte( 0x19 );
    
    if((tmp & 0x03) != 0)
    {
       if((tmp & 0x01) == 0)
       {
           return HALL_NORTH;
       }
       return HALL_SOUTH;
    }
    return NO_HALL;
}

/* -------------------------------------------------------------------------- */
/*
  __proxfusion2_driver.c

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