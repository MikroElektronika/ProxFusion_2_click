
_systemInit:

;Click_ProxFusion_2_PIC.c,41 :: 		void systemInit()
;Click_ProxFusion_2_PIC.c,43 :: 		mikrobus_gpioInit( _MIKROBUS1, _MIKROBUS_INT_PIN, _GPIO_INPUT );
	CLRF        FARG_mikrobus_gpioInit_bus+0 
	MOVLW       7
	MOVWF       FARG_mikrobus_gpioInit_pin+0 
	MOVLW       1
	MOVWF       FARG_mikrobus_gpioInit_direction+0 
	CALL        _mikrobus_gpioInit+0, 0
;Click_ProxFusion_2_PIC.c,44 :: 		mikrobus_i2cInit( _MIKROBUS1, &_PROXFUSION2_I2C_CFG[0] );
	CLRF        FARG_mikrobus_i2cInit_bus+0 
	MOVLW       __PROXFUSION2_I2C_CFG+0
	MOVWF       FARG_mikrobus_i2cInit_cfg+0 
	MOVLW       hi_addr(__PROXFUSION2_I2C_CFG+0)
	MOVWF       FARG_mikrobus_i2cInit_cfg+1 
	MOVLW       higher_addr(__PROXFUSION2_I2C_CFG+0)
	MOVWF       FARG_mikrobus_i2cInit_cfg+2 
	CALL        _mikrobus_i2cInit+0, 0
;Click_ProxFusion_2_PIC.c,45 :: 		mikrobus_logInit( _MIKROBUS3, 9600 );
	MOVLW       2
	MOVWF       FARG_mikrobus_logInit_port+0 
	MOVLW       128
	MOVWF       FARG_mikrobus_logInit_baud+0 
	MOVLW       37
	MOVWF       FARG_mikrobus_logInit_baud+1 
	MOVLW       0
	MOVWF       FARG_mikrobus_logInit_baud+2 
	MOVWF       FARG_mikrobus_logInit_baud+3 
	CALL        _mikrobus_logInit+0, 0
;Click_ProxFusion_2_PIC.c,46 :: 		mikrobus_logWrite(" --- System Init ---", _LOG_LINE);
	MOVLW       ?lstr1_Click_ProxFusion_2_PIC+0
	MOVWF       FARG_mikrobus_logWrite_data_+0 
	MOVLW       hi_addr(?lstr1_Click_ProxFusion_2_PIC+0)
	MOVWF       FARG_mikrobus_logWrite_data_+1 
	MOVLW       2
	MOVWF       FARG_mikrobus_logWrite_format+0 
	CALL        _mikrobus_logWrite+0, 0
;Click_ProxFusion_2_PIC.c,47 :: 		Delay_ms( 100 );
	MOVLW       9
	MOVWF       R11, 0
	MOVLW       30
	MOVWF       R12, 0
	MOVLW       228
	MOVWF       R13, 0
L_systemInit0:
	DECFSZ      R13, 1, 1
	BRA         L_systemInit0
	DECFSZ      R12, 1, 1
	BRA         L_systemInit0
	DECFSZ      R11, 1, 1
	BRA         L_systemInit0
	NOP
;Click_ProxFusion_2_PIC.c,48 :: 		}
L_end_systemInit:
	RETURN      0
; end of _systemInit

_applicationInit:

;Click_ProxFusion_2_PIC.c,50 :: 		void applicationInit()
;Click_ProxFusion_2_PIC.c,52 :: 		proxfusion2_i2cDriverInit( (T_PROXFUSION2_P)&_MIKROBUS1_GPIO, (T_PROXFUSION2_P)&_MIKROBUS1_I2C, 0x44 );
	MOVLW       __MIKROBUS1_GPIO+0
	MOVWF       FARG_proxfusion2_i2cDriverInit_gpioObj+0 
	MOVLW       hi_addr(__MIKROBUS1_GPIO+0)
	MOVWF       FARG_proxfusion2_i2cDriverInit_gpioObj+1 
	MOVLW       higher_addr(__MIKROBUS1_GPIO+0)
	MOVWF       FARG_proxfusion2_i2cDriverInit_gpioObj+2 
	MOVLW       __MIKROBUS1_I2C+0
	MOVWF       FARG_proxfusion2_i2cDriverInit_i2cObj+0 
	MOVLW       hi_addr(__MIKROBUS1_I2C+0)
	MOVWF       FARG_proxfusion2_i2cDriverInit_i2cObj+1 
	MOVLW       higher_addr(__MIKROBUS1_I2C+0)
	MOVWF       FARG_proxfusion2_i2cDriverInit_i2cObj+2 
	MOVLW       68
	MOVWF       FARG_proxfusion2_i2cDriverInit_slave+0 
	CALL        _proxfusion2_i2cDriverInit+0, 0
;Click_ProxFusion_2_PIC.c,53 :: 		mikrobus_logWrite("---- Initalizaion and configuration --- ", _LOG_LINE);
	MOVLW       ?lstr2_Click_ProxFusion_2_PIC+0
	MOVWF       FARG_mikrobus_logWrite_data_+0 
	MOVLW       hi_addr(?lstr2_Click_ProxFusion_2_PIC+0)
	MOVWF       FARG_mikrobus_logWrite_data_+1 
	MOVLW       2
	MOVWF       FARG_mikrobus_logWrite_format+0 
	CALL        _mikrobus_logWrite+0, 0
;Click_ProxFusion_2_PIC.c,54 :: 		proxfusion2_init();
	CALL        _proxfusion2_init+0, 0
;Click_ProxFusion_2_PIC.c,55 :: 		proxfusion2_configuration();
	CALL        _proxfusion2_configuration+0, 0
;Click_ProxFusion_2_PIC.c,56 :: 		Delay_100ms();
	CALL        _Delay_100ms+0, 0
;Click_ProxFusion_2_PIC.c,57 :: 		mikrobus_logWrite("--- Start measurement ---", _LOG_LINE);
	MOVLW       ?lstr3_Click_ProxFusion_2_PIC+0
	MOVWF       FARG_mikrobus_logWrite_data_+0 
	MOVLW       hi_addr(?lstr3_Click_ProxFusion_2_PIC+0)
	MOVWF       FARG_mikrobus_logWrite_data_+1 
	MOVLW       2
	MOVWF       FARG_mikrobus_logWrite_format+0 
	CALL        _mikrobus_logWrite+0, 0
;Click_ProxFusion_2_PIC.c,58 :: 		}
L_end_applicationInit:
	RETURN      0
; end of _applicationInit

_applicationTask:

;Click_ProxFusion_2_PIC.c,60 :: 		void applicationTask()
;Click_ProxFusion_2_PIC.c,62 :: 		mikrobus_logWrite("_________________________________________________________________________", _LOG_LINE);
	MOVLW       ?lstr4_Click_ProxFusion_2_PIC+0
	MOVWF       FARG_mikrobus_logWrite_data_+0 
	MOVLW       hi_addr(?lstr4_Click_ProxFusion_2_PIC+0)
	MOVWF       FARG_mikrobus_logWrite_data_+1 
	MOVLW       2
	MOVWF       FARG_mikrobus_logWrite_format+0 
	CALL        _mikrobus_logWrite+0, 0
;Click_ProxFusion_2_PIC.c,63 :: 		mikrobus_logWrite("| TOUCH  |  T - UI  | AMBIENT | ALS RANGE |  ALS UI  |  HALL  | HALL UI |",_LOG_LINE);
	MOVLW       ?lstr5_Click_ProxFusion_2_PIC+0
	MOVWF       FARG_mikrobus_logWrite_data_+0 
	MOVLW       hi_addr(?lstr5_Click_ProxFusion_2_PIC+0)
	MOVWF       FARG_mikrobus_logWrite_data_+1 
	MOVLW       2
	MOVWF       FARG_mikrobus_logWrite_format+0 
	CALL        _mikrobus_logWrite+0, 0
;Click_ProxFusion_2_PIC.c,66 :: 		Touch = proxfusion2_readByte(0x13);
	MOVLW       19
	MOVWF       FARG_proxfusion2_readByte_reg+0 
	CALL        _proxfusion2_readByte+0, 0
	MOVF        R0, 0 
	MOVWF       _Touch+0 
;Click_ProxFusion_2_PIC.c,67 :: 		if ((Touch & 0x02) != 0)
	MOVLW       2
	ANDWF       R0, 0 
	MOVWF       R1 
	MOVF        R1, 0 
	XORLW       0
	BTFSC       STATUS+0, 2 
	GOTO        L_applicationTask1
;Click_ProxFusion_2_PIC.c,69 :: 		mikrobus_logWrite("|  YES   |", _LOG_TEXT);
	MOVLW       ?lstr6_Click_ProxFusion_2_PIC+0
	MOVWF       FARG_mikrobus_logWrite_data_+0 
	MOVLW       hi_addr(?lstr6_Click_ProxFusion_2_PIC+0)
	MOVWF       FARG_mikrobus_logWrite_data_+1 
	MOVLW       1
	MOVWF       FARG_mikrobus_logWrite_format+0 
	CALL        _mikrobus_logWrite+0, 0
;Click_ProxFusion_2_PIC.c,70 :: 		}
	GOTO        L_applicationTask2
L_applicationTask1:
;Click_ProxFusion_2_PIC.c,73 :: 		mikrobus_logWrite("|   NO   |", _LOG_TEXT);
	MOVLW       ?lstr7_Click_ProxFusion_2_PIC+0
	MOVWF       FARG_mikrobus_logWrite_data_+0 
	MOVLW       hi_addr(?lstr7_Click_ProxFusion_2_PIC+0)
	MOVWF       FARG_mikrobus_logWrite_data_+1 
	MOVLW       1
	MOVWF       FARG_mikrobus_logWrite_format+0 
	CALL        _mikrobus_logWrite+0, 0
;Click_ProxFusion_2_PIC.c,74 :: 		}
L_applicationTask2:
;Click_ProxFusion_2_PIC.c,75 :: 		dataRead = proxfusion2_readData( _PROXFUSION2_HYSTERESIS_UI_OUTPUT );
	MOVLW       __PROXFUSION2_HYSTERESIS_UI_OUTPUT
	MOVWF       FARG_proxfusion2_readData_reg+0 
	CALL        _proxfusion2_readData+0, 0
	MOVF        R0, 0 
	MOVWF       _dataRead+0 
	MOVF        R1, 0 
	MOVWF       _dataRead+1 
;Click_ProxFusion_2_PIC.c,76 :: 		IntToStr(dataRead, demoText);
	MOVF        R0, 0 
	MOVWF       FARG_IntToStr_input+0 
	MOVF        R1, 0 
	MOVWF       FARG_IntToStr_input+1 
	MOVLW       _demoText+0
	MOVWF       FARG_IntToStr_output+0 
	MOVLW       hi_addr(_demoText+0)
	MOVWF       FARG_IntToStr_output+1 
	CALL        _IntToStr+0, 0
;Click_ProxFusion_2_PIC.c,77 :: 		mikrobus_logWrite(demoText, _LOG_TEXT);
	MOVLW       _demoText+0
	MOVWF       FARG_mikrobus_logWrite_data_+0 
	MOVLW       hi_addr(_demoText+0)
	MOVWF       FARG_mikrobus_logWrite_data_+1 
	MOVLW       1
	MOVWF       FARG_mikrobus_logWrite_format+0 
	CALL        _mikrobus_logWrite+0, 0
;Click_ProxFusion_2_PIC.c,78 :: 		mikrobus_logWrite("    |",_LOG_TEXT);
	MOVLW       ?lstr8_Click_ProxFusion_2_PIC+0
	MOVWF       FARG_mikrobus_logWrite_data_+0 
	MOVLW       hi_addr(?lstr8_Click_ProxFusion_2_PIC+0)
	MOVWF       FARG_mikrobus_logWrite_data_+1 
	MOVLW       1
	MOVWF       FARG_mikrobus_logWrite_format+0 
	CALL        _mikrobus_logWrite+0, 0
;Click_ProxFusion_2_PIC.c,81 :: 		darkLight_ambient = proxfusion2_detectDark_Light(&ALS_range);
	MOVLW       _ALS_range+0
	MOVWF       FARG_proxfusion2_detectDark_Light_ALS_range+0 
	MOVLW       hi_addr(_ALS_range+0)
	MOVWF       FARG_proxfusion2_detectDark_Light_ALS_range+1 
	CALL        _proxfusion2_detectDark_Light+0, 0
	MOVF        R0, 0 
	MOVWF       _darkLight_ambient+0 
;Click_ProxFusion_2_PIC.c,82 :: 		if (darkLight_ambient == _PROXFUSION2_DARK_AMBIENT )
	MOVF        R0, 0 
	XORLW       __PROXFUSION2_DARK_AMBIENT
	BTFSS       STATUS+0, 2 
	GOTO        L_applicationTask3
;Click_ProxFusion_2_PIC.c,84 :: 		mikrobus_logWrite("  DARK   |",_LOG_TEXT);
	MOVLW       ?lstr9_Click_ProxFusion_2_PIC+0
	MOVWF       FARG_mikrobus_logWrite_data_+0 
	MOVLW       hi_addr(?lstr9_Click_ProxFusion_2_PIC+0)
	MOVWF       FARG_mikrobus_logWrite_data_+1 
	MOVLW       1
	MOVWF       FARG_mikrobus_logWrite_format+0 
	CALL        _mikrobus_logWrite+0, 0
;Click_ProxFusion_2_PIC.c,85 :: 		}
	GOTO        L_applicationTask4
L_applicationTask3:
;Click_ProxFusion_2_PIC.c,88 :: 		mikrobus_logWrite(" LIGHT   |",_LOG_TEXT);
	MOVLW       ?lstr10_Click_ProxFusion_2_PIC+0
	MOVWF       FARG_mikrobus_logWrite_data_+0 
	MOVLW       hi_addr(?lstr10_Click_ProxFusion_2_PIC+0)
	MOVWF       FARG_mikrobus_logWrite_data_+1 
	MOVLW       1
	MOVWF       FARG_mikrobus_logWrite_format+0 
	CALL        _mikrobus_logWrite+0, 0
;Click_ProxFusion_2_PIC.c,89 :: 		}
L_applicationTask4:
;Click_ProxFusion_2_PIC.c,90 :: 		IntToStr(ALS_range, demoText);
	MOVF        _ALS_range+0, 0 
	MOVWF       FARG_IntToStr_input+0 
	MOVLW       0
	MOVWF       FARG_IntToStr_input+1 
	MOVLW       _demoText+0
	MOVWF       FARG_IntToStr_output+0 
	MOVLW       hi_addr(_demoText+0)
	MOVWF       FARG_IntToStr_output+1 
	CALL        _IntToStr+0, 0
;Click_ProxFusion_2_PIC.c,91 :: 		mikrobus_logWrite(demoText, _LOG_TEXT);
	MOVLW       _demoText+0
	MOVWF       FARG_mikrobus_logWrite_data_+0 
	MOVLW       hi_addr(_demoText+0)
	MOVWF       FARG_mikrobus_logWrite_data_+1 
	MOVLW       1
	MOVWF       FARG_mikrobus_logWrite_format+0 
	CALL        _mikrobus_logWrite+0, 0
;Click_ProxFusion_2_PIC.c,92 :: 		mikrobus_logWrite("     |",_LOG_TEXT);
	MOVLW       ?lstr11_Click_ProxFusion_2_PIC+0
	MOVWF       FARG_mikrobus_logWrite_data_+0 
	MOVLW       hi_addr(?lstr11_Click_ProxFusion_2_PIC+0)
	MOVWF       FARG_mikrobus_logWrite_data_+1 
	MOVLW       1
	MOVWF       FARG_mikrobus_logWrite_format+0 
	CALL        _mikrobus_logWrite+0, 0
;Click_ProxFusion_2_PIC.c,94 :: 		dataRead = proxfusion2_readData( _PROXFUSION2_ALS_UI_OUTPUT );
	MOVLW       __PROXFUSION2_ALS_UI_OUTPUT
	MOVWF       FARG_proxfusion2_readData_reg+0 
	CALL        _proxfusion2_readData+0, 0
	MOVF        R0, 0 
	MOVWF       _dataRead+0 
	MOVF        R1, 0 
	MOVWF       _dataRead+1 
;Click_ProxFusion_2_PIC.c,95 :: 		IntToStr(dataRead, demoText);
	MOVF        R0, 0 
	MOVWF       FARG_IntToStr_input+0 
	MOVF        R1, 0 
	MOVWF       FARG_IntToStr_input+1 
	MOVLW       _demoText+0
	MOVWF       FARG_IntToStr_output+0 
	MOVLW       hi_addr(_demoText+0)
	MOVWF       FARG_IntToStr_output+1 
	CALL        _IntToStr+0, 0
;Click_ProxFusion_2_PIC.c,96 :: 		mikrobus_logWrite(demoText, _LOG_TEXT);
	MOVLW       _demoText+0
	MOVWF       FARG_mikrobus_logWrite_data_+0 
	MOVLW       hi_addr(_demoText+0)
	MOVWF       FARG_mikrobus_logWrite_data_+1 
	MOVLW       1
	MOVWF       FARG_mikrobus_logWrite_format+0 
	CALL        _mikrobus_logWrite+0, 0
;Click_ProxFusion_2_PIC.c,97 :: 		mikrobus_logWrite("    |",_LOG_TEXT);
	MOVLW       ?lstr12_Click_ProxFusion_2_PIC+0
	MOVWF       FARG_mikrobus_logWrite_data_+0 
	MOVLW       hi_addr(?lstr12_Click_ProxFusion_2_PIC+0)
	MOVWF       FARG_mikrobus_logWrite_data_+1 
	MOVLW       1
	MOVWF       FARG_mikrobus_logWrite_format+0 
	CALL        _mikrobus_logWrite+0, 0
;Click_ProxFusion_2_PIC.c,100 :: 		hall_detect = proxfusion2_detectHall();
	CALL        _proxfusion2_detectHall+0, 0
	MOVF        R0, 0 
	MOVWF       _hall_detect+0 
;Click_ProxFusion_2_PIC.c,101 :: 		if (hall_detect != 0)
	MOVF        R0, 0 
	XORLW       0
	BTFSC       STATUS+0, 2 
	GOTO        L_applicationTask5
;Click_ProxFusion_2_PIC.c,103 :: 		if( hall_detect == 1 )
	MOVF        _hall_detect+0, 0 
	XORLW       1
	BTFSS       STATUS+0, 2 
	GOTO        L_applicationTask6
;Click_ProxFusion_2_PIC.c,105 :: 		mikrobus_logWrite(" NORTH  |",_LOG_TEXT);
	MOVLW       ?lstr13_Click_ProxFusion_2_PIC+0
	MOVWF       FARG_mikrobus_logWrite_data_+0 
	MOVLW       hi_addr(?lstr13_Click_ProxFusion_2_PIC+0)
	MOVWF       FARG_mikrobus_logWrite_data_+1 
	MOVLW       1
	MOVWF       FARG_mikrobus_logWrite_format+0 
	CALL        _mikrobus_logWrite+0, 0
;Click_ProxFusion_2_PIC.c,106 :: 		}
	GOTO        L_applicationTask7
L_applicationTask6:
;Click_ProxFusion_2_PIC.c,109 :: 		mikrobus_logWrite(" SOUTH  |",_LOG_TEXT);
	MOVLW       ?lstr14_Click_ProxFusion_2_PIC+0
	MOVWF       FARG_mikrobus_logWrite_data_+0 
	MOVLW       hi_addr(?lstr14_Click_ProxFusion_2_PIC+0)
	MOVWF       FARG_mikrobus_logWrite_data_+1 
	MOVLW       1
	MOVWF       FARG_mikrobus_logWrite_format+0 
	CALL        _mikrobus_logWrite+0, 0
;Click_ProxFusion_2_PIC.c,110 :: 		}
L_applicationTask7:
;Click_ProxFusion_2_PIC.c,111 :: 		}
L_applicationTask5:
;Click_ProxFusion_2_PIC.c,112 :: 		dataRead = proxfusion2_readData( _PROXFUSION2_HALL_EFFECT_UI_OUTPUT );
	MOVLW       __PROXFUSION2_HALL_EFFECT_UI_OUTPUT
	MOVWF       FARG_proxfusion2_readData_reg+0 
	CALL        _proxfusion2_readData+0, 0
	MOVF        R0, 0 
	MOVWF       _dataRead+0 
	MOVF        R1, 0 
	MOVWF       _dataRead+1 
;Click_ProxFusion_2_PIC.c,113 :: 		IntToStr(dataRead, demoText);
	MOVF        R0, 0 
	MOVWF       FARG_IntToStr_input+0 
	MOVF        R1, 0 
	MOVWF       FARG_IntToStr_input+1 
	MOVLW       _demoText+0
	MOVWF       FARG_IntToStr_output+0 
	MOVLW       hi_addr(_demoText+0)
	MOVWF       FARG_IntToStr_output+1 
	CALL        _IntToStr+0, 0
;Click_ProxFusion_2_PIC.c,114 :: 		mikrobus_logWrite(demoText, _LOG_TEXT);
	MOVLW       _demoText+0
	MOVWF       FARG_mikrobus_logWrite_data_+0 
	MOVLW       hi_addr(_demoText+0)
	MOVWF       FARG_mikrobus_logWrite_data_+1 
	MOVLW       1
	MOVWF       FARG_mikrobus_logWrite_format+0 
	CALL        _mikrobus_logWrite+0, 0
;Click_ProxFusion_2_PIC.c,115 :: 		mikrobus_logWrite("   |",_LOG_LINE);
	MOVLW       ?lstr15_Click_ProxFusion_2_PIC+0
	MOVWF       FARG_mikrobus_logWrite_data_+0 
	MOVLW       hi_addr(?lstr15_Click_ProxFusion_2_PIC+0)
	MOVWF       FARG_mikrobus_logWrite_data_+1 
	MOVLW       2
	MOVWF       FARG_mikrobus_logWrite_format+0 
	CALL        _mikrobus_logWrite+0, 0
;Click_ProxFusion_2_PIC.c,116 :: 		Delay_ms(3000);
	MOVLW       244
	MOVWF       R11, 0
	MOVLW       130
	MOVWF       R12, 0
	MOVLW       5
	MOVWF       R13, 0
L_applicationTask8:
	DECFSZ      R13, 1, 1
	BRA         L_applicationTask8
	DECFSZ      R12, 1, 1
	BRA         L_applicationTask8
	DECFSZ      R11, 1, 1
	BRA         L_applicationTask8
;Click_ProxFusion_2_PIC.c,117 :: 		}
L_end_applicationTask:
	RETURN      0
; end of _applicationTask

_main:

;Click_ProxFusion_2_PIC.c,119 :: 		void main()
;Click_ProxFusion_2_PIC.c,121 :: 		systemInit();
	CALL        _systemInit+0, 0
;Click_ProxFusion_2_PIC.c,122 :: 		applicationInit();
	CALL        _applicationInit+0, 0
;Click_ProxFusion_2_PIC.c,124 :: 		while (1)
L_main9:
;Click_ProxFusion_2_PIC.c,126 :: 		applicationTask();
	CALL        _applicationTask+0, 0
;Click_ProxFusion_2_PIC.c,127 :: 		}
	GOTO        L_main9
;Click_ProxFusion_2_PIC.c,128 :: 		}
L_end_main:
	GOTO        $+0
; end of _main
