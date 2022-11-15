/*
 * GccApplication18.c
 *
 * Created: 03/11/2022 4:34:42 PM
 * Author : Ahmed
 */ 
/*
 *
 *  Created on: Oct 4, 2021
 *      Author:Ahmed
 */
#include "std_types.h"
#include "error_state.h"
#include "SYSTEM_interface.h"
#include "ADC_interface.h"
#include "DIO_interface.h"
#include "EPROM_interface.h"
#include "LCD_interface.h"
#include "SWITCH_interface.h"
#include "SEVENSEGMENT_interface.h"

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


