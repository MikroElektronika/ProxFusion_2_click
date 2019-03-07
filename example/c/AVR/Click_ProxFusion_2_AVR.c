/*
Example for ProxFusion_2 Click

    Date          : avg 2018.
    Author        : Katarina Perendic

Test configuration AVR :
    
    MCU              : ATMEGA32
    Dev. Board       : EasyAVR v7 
    AVR Compiler ver : v7.0.1.0

---

Description :

The application is composed of three sections :

- System Initialization - Initializes I2C module and sets INT pin as INPUT
- Application Initialization - Initializes Driver init and configuraton and init chip
- Application Task - (code snippet):
     1) Checks whether Touch is detected and measures the output detection.
     2) Measures Ambient lighting - whether it's Light or Dark, ALS range and ALS output.
     3) Checks the orientation of the magnet and measures the HALL output.

*/

#include "Click_ProxFusion_2_types.h"
#include "Click_ProxFusion_2_config.h"

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
    mikrobus_logInit( _LOG_USBUART, 9600 );
    mikrobus_logWrite(" --- System Init ---", _LOG_LINE);
    Delay_ms( 100 );
}

void applicationInit()
{
    proxfusion2_i2cDriverInit( (T_PROXFUSION2_P)&_MIKROBUS1_GPIO, (T_PROXFUSION2_P)&_MIKROBUS1_I2C, 0x44 );
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
   
   // TOUCH
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

   // AMBIENT
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

   // HALL
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