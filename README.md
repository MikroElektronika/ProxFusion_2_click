![MikroE](http://www.mikroe.com/img/designs/beta/logo_small.png)

---

# ProxFusion_2 Click

- **CIC Prefix**  : PROXFUSION2
- **Author**      : Katarina Perendic
- **Verison**     : 1.0.0
- **Date**        : avg 2018.

---

### Software Support

We provide a library for the ProxFusion_2 Click on our [LibStock](https://libstock.mikroe.com/projects/view/2547/proxfusion-2-click) 
page, as well as a demo application (example), developed using MikroElektronika 
[compilers](http://shop.mikroe.com/compilers). The demo can run on all the main 
MikroElektronika [development boards](http://shop.mikroe.com/development-boards).

**Library Description**

The library initializes and defines the I2C bus or SPI bus driver and drivers that offer a choice for writing data in register.
The library includes function for read ambient light, hall-effect and temperature and function for detect touch.
The user also has the function for initializes chip and configuration chip.

Key functions :

- ``` void proxfusion2_configuration() ``` - Function for configuration chip
- ``` uint8_t proxfusion2_init() ``` - Function for initializes chip
- ``` uint8_t proxfusion2_detectTouch() ``` - Function for detect Touch 
- ``` uint8_t proxfusion2_detectDark_Light(uint8_t *ALS_range) ``` - Function for read ambient light
- ``` uint8_t proxfusion2_detectHall() ``` - Function for read Hall-effect 

**Examples Description**

The application is composed of three sections :

- System Initialization - Initializes I2C module and sets INT pin as INPUT
- Application Initialization - Initializes Driver init and configuraton and init chip
- Application Task - (code snippet):
     1) Checks whether Touch is detected and measures the output detection.
     2) Measures Ambient lighting - whether it's Light or Dark, ALS range and ALS output.
     3) Checks the orientation of the magnet and measures the HALL output.


```.c
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
```

The full application code, and ready to use projects can be found on our 
[LibStock](https://libstock.mikroe.com/projects/view/2547/proxfusion-2-click) page.

Other mikroE Libraries used in the example:

- I2C
- UART

**Additional notes and informations**

Depending on the development board you are using, you may need 
[USB UART click](http://shop.mikroe.com/usb-uart-click), 
[USB UART 2 Click](http://shop.mikroe.com/usb-uart-2-click) or 
[RS232 Click](http://shop.mikroe.com/rs232-click) to connect to your PC, for 
development systems with no UART to USB interface available on the board. The 
terminal available in all Mikroelektronika 
[compilers](http://shop.mikroe.com/compilers), or any other terminal application 
of your choice, can be used to read the message.

---
---
