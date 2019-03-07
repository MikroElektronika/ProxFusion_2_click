_systemInit:
;Click_ProxFusion_2_STM.c,41 :: 		void systemInit()
SUB	SP, SP, #4
STR	LR, [SP, #0]
;Click_ProxFusion_2_STM.c,43 :: 		mikrobus_gpioInit( _MIKROBUS1, _MIKROBUS_INT_PIN, _GPIO_INPUT );
MOVS	R2, #1
MOVS	R1, #7
MOVS	R0, #0
BL	_mikrobus_gpioInit+0
;Click_ProxFusion_2_STM.c,44 :: 		mikrobus_i2cInit( _MIKROBUS1, &_PROXFUSION2_I2C_CFG[0] );
MOVW	R0, #lo_addr(__PROXFUSION2_I2C_CFG+0)
MOVT	R0, #hi_addr(__PROXFUSION2_I2C_CFG+0)
MOV	R1, R0
MOVS	R0, #0
BL	_mikrobus_i2cInit+0
;Click_ProxFusion_2_STM.c,45 :: 		mikrobus_logInit( _LOG_USBUART_A, 9600 );
MOVW	R1, #9600
MOVS	R0, #32
BL	_mikrobus_logInit+0
;Click_ProxFusion_2_STM.c,46 :: 		mikrobus_logWrite(" --- System Init ---", _LOG_LINE);
MOVW	R0, #lo_addr(?lstr1_Click_ProxFusion_2_STM+0)
MOVT	R0, #hi_addr(?lstr1_Click_ProxFusion_2_STM+0)
MOVS	R1, #2
BL	_mikrobus_logWrite+0
;Click_ProxFusion_2_STM.c,47 :: 		Delay_ms( 100 );
MOVW	R7, #20351
MOVT	R7, #18
NOP
NOP
L_systemInit0:
SUBS	R7, R7, #1
BNE	L_systemInit0
NOP
NOP
NOP
;Click_ProxFusion_2_STM.c,48 :: 		}
L_end_systemInit:
LDR	LR, [SP, #0]
ADD	SP, SP, #4
BX	LR
; end of _systemInit
_applicationInit:
;Click_ProxFusion_2_STM.c,50 :: 		void applicationInit()
SUB	SP, SP, #4
STR	LR, [SP, #0]
;Click_ProxFusion_2_STM.c,52 :: 		proxfusion2_i2cDriverInit( (T_PROXFUSION2_P)&_MIKROBUS1_GPIO, (T_PROXFUSION2_P)&_MIKROBUS1_I2C, 0x44 );
MOVS	R2, #68
MOVW	R1, #lo_addr(__MIKROBUS1_I2C+0)
MOVT	R1, #hi_addr(__MIKROBUS1_I2C+0)
MOVW	R0, #lo_addr(__MIKROBUS1_GPIO+0)
MOVT	R0, #hi_addr(__MIKROBUS1_GPIO+0)
BL	_proxfusion2_i2cDriverInit+0
;Click_ProxFusion_2_STM.c,53 :: 		mikrobus_logWrite("---- Initalizaion and configuration --- ", _LOG_LINE);
MOVW	R0, #lo_addr(?lstr2_Click_ProxFusion_2_STM+0)
MOVT	R0, #hi_addr(?lstr2_Click_ProxFusion_2_STM+0)
MOVS	R1, #2
BL	_mikrobus_logWrite+0
;Click_ProxFusion_2_STM.c,54 :: 		proxfusion2_init();
BL	_proxfusion2_init+0
;Click_ProxFusion_2_STM.c,55 :: 		proxfusion2_defaultConfig();
BL	_proxfusion2_defaultConfig+0
;Click_ProxFusion_2_STM.c,56 :: 		Delay_100ms();
BL	_Delay_100ms+0
;Click_ProxFusion_2_STM.c,57 :: 		mikrobus_logWrite("--- Start measurement ---", _LOG_LINE);
MOVW	R0, #lo_addr(?lstr3_Click_ProxFusion_2_STM+0)
MOVT	R0, #hi_addr(?lstr3_Click_ProxFusion_2_STM+0)
MOVS	R1, #2
BL	_mikrobus_logWrite+0
;Click_ProxFusion_2_STM.c,58 :: 		}
L_end_applicationInit:
LDR	LR, [SP, #0]
ADD	SP, SP, #4
BX	LR
; end of _applicationInit
_applicationTask:
;Click_ProxFusion_2_STM.c,60 :: 		void applicationTask()
SUB	SP, SP, #4
STR	LR, [SP, #0]
;Click_ProxFusion_2_STM.c,62 :: 		mikrobus_logWrite("_________________________________________________________________________", _LOG_LINE);
MOVW	R0, #lo_addr(?lstr4_Click_ProxFusion_2_STM+0)
MOVT	R0, #hi_addr(?lstr4_Click_ProxFusion_2_STM+0)
MOVS	R1, #2
BL	_mikrobus_logWrite+0
;Click_ProxFusion_2_STM.c,63 :: 		mikrobus_logWrite("| TOUCH  |  T - UI  | AMBIENT | ALS RANGE |  ALS UI  |  HALL  | HALL UI |",_LOG_LINE);
MOVW	R0, #lo_addr(?lstr5_Click_ProxFusion_2_STM+0)
MOVT	R0, #hi_addr(?lstr5_Click_ProxFusion_2_STM+0)
MOVS	R1, #2
BL	_mikrobus_logWrite+0
;Click_ProxFusion_2_STM.c,66 :: 		Touch = proxfusion2_readByte(0x13);
MOVS	R0, #19
BL	_proxfusion2_readByte+0
MOVW	R1, #lo_addr(_Touch+0)
MOVT	R1, #hi_addr(_Touch+0)
STRB	R0, [R1, #0]
;Click_ProxFusion_2_STM.c,67 :: 		if ((Touch & 0x02) != 0)
AND	R0, R0, #2
UXTB	R0, R0
CMP	R0, #0
IT	EQ
BEQ	L_applicationTask2
;Click_ProxFusion_2_STM.c,69 :: 		mikrobus_logWrite("|  YES   |", _LOG_TEXT);
MOVW	R0, #lo_addr(?lstr6_Click_ProxFusion_2_STM+0)
MOVT	R0, #hi_addr(?lstr6_Click_ProxFusion_2_STM+0)
MOVS	R1, #1
BL	_mikrobus_logWrite+0
;Click_ProxFusion_2_STM.c,70 :: 		}
IT	AL
BAL	L_applicationTask3
L_applicationTask2:
;Click_ProxFusion_2_STM.c,73 :: 		mikrobus_logWrite("|   NO   |", _LOG_TEXT);
MOVW	R0, #lo_addr(?lstr7_Click_ProxFusion_2_STM+0)
MOVT	R0, #hi_addr(?lstr7_Click_ProxFusion_2_STM+0)
MOVS	R1, #1
BL	_mikrobus_logWrite+0
;Click_ProxFusion_2_STM.c,74 :: 		}
L_applicationTask3:
;Click_ProxFusion_2_STM.c,75 :: 		dataRead = proxfusion2_readData( _PROXFUSION2_HYSTERESIS_UI_OUTPUT );
MOVS	R0, __PROXFUSION2_HYSTERESIS_UI_OUTPUT
BL	_proxfusion2_readData+0
MOVW	R1, #lo_addr(_dataRead+0)
MOVT	R1, #hi_addr(_dataRead+0)
STRH	R0, [R1, #0]
;Click_ProxFusion_2_STM.c,76 :: 		IntToStr(dataRead, demoText);
SXTH	R0, R0
MOVW	R1, #lo_addr(_demoText+0)
MOVT	R1, #hi_addr(_demoText+0)
BL	_IntToStr+0
;Click_ProxFusion_2_STM.c,77 :: 		mikrobus_logWrite(demoText, _LOG_TEXT);
MOVS	R1, #1
MOVW	R0, #lo_addr(_demoText+0)
MOVT	R0, #hi_addr(_demoText+0)
BL	_mikrobus_logWrite+0
;Click_ProxFusion_2_STM.c,78 :: 		mikrobus_logWrite("    |",_LOG_TEXT);
MOVW	R0, #lo_addr(?lstr8_Click_ProxFusion_2_STM+0)
MOVT	R0, #hi_addr(?lstr8_Click_ProxFusion_2_STM+0)
MOVS	R1, #1
BL	_mikrobus_logWrite+0
;Click_ProxFusion_2_STM.c,81 :: 		darkLight_ambient = proxfusion2_detectDark_Light(&ALS_range);
MOVW	R0, #lo_addr(_ALS_range+0)
MOVT	R0, #hi_addr(_ALS_range+0)
BL	_proxfusion2_detectDark_Light+0
MOVW	R1, #lo_addr(_darkLight_ambient+0)
MOVT	R1, #hi_addr(_darkLight_ambient+0)
STRB	R0, [R1, #0]
;Click_ProxFusion_2_STM.c,82 :: 		if (darkLight_ambient == _PROXFUSION2_DARK_AMBIENT )
CMP	R0, __PROXFUSION2_DARK_AMBIENT
IT	NE
BNE	L_applicationTask4
;Click_ProxFusion_2_STM.c,84 :: 		mikrobus_logWrite("  DARK   |",_LOG_TEXT);
MOVW	R0, #lo_addr(?lstr9_Click_ProxFusion_2_STM+0)
MOVT	R0, #hi_addr(?lstr9_Click_ProxFusion_2_STM+0)
MOVS	R1, #1
BL	_mikrobus_logWrite+0
;Click_ProxFusion_2_STM.c,85 :: 		}
IT	AL
BAL	L_applicationTask5
L_applicationTask4:
;Click_ProxFusion_2_STM.c,88 :: 		mikrobus_logWrite(" LIGHT   |",_LOG_TEXT);
MOVW	R0, #lo_addr(?lstr10_Click_ProxFusion_2_STM+0)
MOVT	R0, #hi_addr(?lstr10_Click_ProxFusion_2_STM+0)
MOVS	R1, #1
BL	_mikrobus_logWrite+0
;Click_ProxFusion_2_STM.c,89 :: 		}
L_applicationTask5:
;Click_ProxFusion_2_STM.c,90 :: 		IntToStr(ALS_range, demoText);
MOVW	R0, #lo_addr(_ALS_range+0)
MOVT	R0, #hi_addr(_ALS_range+0)
LDRB	R0, [R0, #0]
MOVW	R1, #lo_addr(_demoText+0)
MOVT	R1, #hi_addr(_demoText+0)
BL	_IntToStr+0
;Click_ProxFusion_2_STM.c,91 :: 		mikrobus_logWrite(demoText, _LOG_TEXT);
MOVS	R1, #1
MOVW	R0, #lo_addr(_demoText+0)
MOVT	R0, #hi_addr(_demoText+0)
BL	_mikrobus_logWrite+0
;Click_ProxFusion_2_STM.c,92 :: 		mikrobus_logWrite("     |",_LOG_TEXT);
MOVW	R0, #lo_addr(?lstr11_Click_ProxFusion_2_STM+0)
MOVT	R0, #hi_addr(?lstr11_Click_ProxFusion_2_STM+0)
MOVS	R1, #1
BL	_mikrobus_logWrite+0
;Click_ProxFusion_2_STM.c,94 :: 		dataRead = proxfusion2_readData( _PROXFUSION2_ALS_UI_OUTPUT );
MOVS	R0, __PROXFUSION2_ALS_UI_OUTPUT
BL	_proxfusion2_readData+0
MOVW	R1, #lo_addr(_dataRead+0)
MOVT	R1, #hi_addr(_dataRead+0)
STRH	R0, [R1, #0]
;Click_ProxFusion_2_STM.c,95 :: 		IntToStr(dataRead, demoText);
SXTH	R0, R0
MOVW	R1, #lo_addr(_demoText+0)
MOVT	R1, #hi_addr(_demoText+0)
BL	_IntToStr+0
;Click_ProxFusion_2_STM.c,96 :: 		mikrobus_logWrite(demoText, _LOG_TEXT);
MOVS	R1, #1
MOVW	R0, #lo_addr(_demoText+0)
MOVT	R0, #hi_addr(_demoText+0)
BL	_mikrobus_logWrite+0
;Click_ProxFusion_2_STM.c,97 :: 		mikrobus_logWrite("    |",_LOG_TEXT);
MOVW	R0, #lo_addr(?lstr12_Click_ProxFusion_2_STM+0)
MOVT	R0, #hi_addr(?lstr12_Click_ProxFusion_2_STM+0)
MOVS	R1, #1
BL	_mikrobus_logWrite+0
;Click_ProxFusion_2_STM.c,100 :: 		hall_detect = proxfusion2_detectHall();
BL	_proxfusion2_detectHall+0
MOVW	R1, #lo_addr(_hall_detect+0)
MOVT	R1, #hi_addr(_hall_detect+0)
STRB	R0, [R1, #0]
;Click_ProxFusion_2_STM.c,101 :: 		if (hall_detect != 0)
CMP	R0, #0
IT	EQ
BEQ	L_applicationTask6
;Click_ProxFusion_2_STM.c,103 :: 		if( hall_detect == 1 )
MOVW	R0, #lo_addr(_hall_detect+0)
MOVT	R0, #hi_addr(_hall_detect+0)
LDRB	R0, [R0, #0]
CMP	R0, #1
IT	NE
BNE	L_applicationTask7
;Click_ProxFusion_2_STM.c,105 :: 		mikrobus_logWrite(" NORTH  |",_LOG_TEXT);
MOVW	R0, #lo_addr(?lstr13_Click_ProxFusion_2_STM+0)
MOVT	R0, #hi_addr(?lstr13_Click_ProxFusion_2_STM+0)
MOVS	R1, #1
BL	_mikrobus_logWrite+0
;Click_ProxFusion_2_STM.c,106 :: 		}
IT	AL
BAL	L_applicationTask8
L_applicationTask7:
;Click_ProxFusion_2_STM.c,109 :: 		mikrobus_logWrite(" SOUTH  |",_LOG_TEXT);
MOVW	R0, #lo_addr(?lstr14_Click_ProxFusion_2_STM+0)
MOVT	R0, #hi_addr(?lstr14_Click_ProxFusion_2_STM+0)
MOVS	R1, #1
BL	_mikrobus_logWrite+0
;Click_ProxFusion_2_STM.c,110 :: 		}
L_applicationTask8:
;Click_ProxFusion_2_STM.c,111 :: 		}
L_applicationTask6:
;Click_ProxFusion_2_STM.c,112 :: 		dataRead = proxfusion2_readData( _PROXFUSION2_HALL_EFFECT_UI_OUTPUT );
MOVS	R0, __PROXFUSION2_HALL_EFFECT_UI_OUTPUT
BL	_proxfusion2_readData+0
MOVW	R1, #lo_addr(_dataRead+0)
MOVT	R1, #hi_addr(_dataRead+0)
STRH	R0, [R1, #0]
;Click_ProxFusion_2_STM.c,113 :: 		IntToStr(dataRead, demoText);
SXTH	R0, R0
MOVW	R1, #lo_addr(_demoText+0)
MOVT	R1, #hi_addr(_demoText+0)
BL	_IntToStr+0
;Click_ProxFusion_2_STM.c,114 :: 		mikrobus_logWrite(demoText, _LOG_TEXT);
MOVS	R1, #1
MOVW	R0, #lo_addr(_demoText+0)
MOVT	R0, #hi_addr(_demoText+0)
BL	_mikrobus_logWrite+0
;Click_ProxFusion_2_STM.c,115 :: 		mikrobus_logWrite("   |",_LOG_LINE);
MOVW	R0, #lo_addr(?lstr15_Click_ProxFusion_2_STM+0)
MOVT	R0, #hi_addr(?lstr15_Click_ProxFusion_2_STM+0)
MOVS	R1, #2
BL	_mikrobus_logWrite+0
;Click_ProxFusion_2_STM.c,116 :: 		Delay_ms(3000);
MOVW	R7, #20735
MOVT	R7, #549
NOP
NOP
L_applicationTask9:
SUBS	R7, R7, #1
BNE	L_applicationTask9
NOP
NOP
NOP
;Click_ProxFusion_2_STM.c,117 :: 		}
L_end_applicationTask:
LDR	LR, [SP, #0]
ADD	SP, SP, #4
BX	LR
; end of _applicationTask
_main:
;Click_ProxFusion_2_STM.c,119 :: 		void main()
;Click_ProxFusion_2_STM.c,121 :: 		systemInit();
BL	_systemInit+0
;Click_ProxFusion_2_STM.c,122 :: 		applicationInit();
BL	_applicationInit+0
;Click_ProxFusion_2_STM.c,124 :: 		while (1)
L_main11:
;Click_ProxFusion_2_STM.c,126 :: 		applicationTask();
BL	_applicationTask+0
;Click_ProxFusion_2_STM.c,127 :: 		}
IT	AL
BAL	L_main11
;Click_ProxFusion_2_STM.c,128 :: 		}
L_end_main:
L__main_end_loop:
B	L__main_end_loop
; end of _main
