/*
 * main.c
 *
 *      Author: Ahmed Sayed
                , Abdallah MAgdy
 */
#include "std_types.h"
#include "error_state.h"
#include "SYSTEM_interface.h"

extern u8_t Global_u8_tCurrentState;


int main(void)
{

	SYSTEM_enuInit();

while(1)
{
	switch (Global_u8_tCurrentState)
	{
		case ON_STATE:
		{
			SYSTEM_enuOnState();
			break;
		}
		case OFF_STATE:
		{
			SYSTEM_enuOffState();
			break;
		}
		case SETTINT_STATE:
		{
			SYSTEM_enuSettingState();
			break;
		}
		default :
		{
			break;
		}
	}
}

return 0;
}

/*---------------------INTERRUPT BAISED SYSTEM----------------------------*/
/* EXTERNAL INTERRUPT [INT0,INT1,INT2] FOR [TEMP_UP_SWITCH, TEMP_DOWN_SWITCH & ON_OFF_SWITCH	]
 * CONTRILLED BY THE EXTERNAL INTERRUPT INTERRUPT SERVICE ROUTINE[ INSIDE THE SYSTEM MODULE].
 * TIMER ONE COMPARE MATCH CHANNEL B TO TRIGGER THE ADC
 * CONTRILLED BY THE TIMER ONE INTERRUPT CALL BACK FUNCTION.[ INSIDE THE TERMP_SENSOR MODULE]
 * ADC INTERRUPT IS RESPONSIBLE FOR TERMP_SENSOR (LM35) BEHAVIR AND CALCULATION. [ INSIDE THE TERMP_SENSOR MODULE]
 * TIMER ZERO COMPARE MATCH IS RESPONSIBLE FOR LED_SYSTEM BLINING EVERY ONE SECOND & SEVEN_SEGMENT BLINKING EVERY FIVE SECONDS (IF NEEDED).
* CONTRILLED BY THE TIMER ZERO INTERRUPT CALL BACK FUNCTION.[ INSIDE THE TIMER MODULE]
 * TIMER TWO COMPARE MATCH IS RESPONSIBLE FOR THE FIVE SECONDS DELAY BETWEEN EXITING THE SETTING MODE TO NORMAL MODE WHEN NO SWITCH IS PRESSED
 * FOR FIVE SECONDS, TIMER TWO INTERRUPT SERVICE ROUTINE. [ INSIDE THE SYSTEM MODULE].
 * */
