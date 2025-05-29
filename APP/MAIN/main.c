/*
 * First LED Lab.c
 *
 * Created: 9/9/2023 1:43:45 PM
 * Author : Eyad
 */ 


#include "LED_Core.h"
#include "Button_Core.h"
#include "SevSeg_Core.h"
#include "PORT_Core.h"
#include "DIO_Core.h"
#include "LCD_Core.h"
#include "KeyPad_Core.h"
#include "IRQH_Core.h"
#include "ADC_Core.h"
#include "GPT_Core.h"
#include "PWM_Core.h"
#include "DcMotor_Core.h"
#include "WDT.h"
#include "STEPMOTOR_CORE.h"
#include "UltraSonic_Core.h"

int main (void)
{
	uint32 distance=0;
	PORT_Init();
	IRQH_SetGlobalInterrupts(INTERRUPT_ENABLED);
	GPT_Init();
	ICU_Intit();
	LCD_Init();
			 	

	 while(1)
	 {
		
		 UltraSonic_Trigger();
		 distance=UltraSonic_CalculateDistance();
		 	 STEPMOTOR(CLOCK_WISE);
		 if(distance !=0)
		 {
			 LCD_GoTo(0,4);
			 LCD_WiteInteger(distance);
			 if(distance <=50)
			 {
					
 
			 }
			 distance=0;
		 }
	 }
}
