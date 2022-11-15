/*
 * EXTI_private.h
 *
*      Author: Ahmed Sayed
                , Abdallah MAgdy
 */

#ifndef MCAL_EXTI_EXTI_PRIVATE_H_
#define MCAL_EXTI_EXTI_PRIVATE_H_


#define MCUCR     		 *((volatile u8_t*)0x55)
#define MCUCSR    		 *((volatile u8_t*)0x54)
#define GICR      		 *((volatile u8_t*)0x5B)
#define GIFR      		 *((volatile u8_t*)0x5A)



enum
{
	LOW_LEVEL,
	ANY_LOGICAL,
	FALLING,
	RISING,

	DISABLED=0,
	ENABLED,

	INT0=0,
	INT1,
	INT2
};

#endif /* MCAL_EXTI_EXTI_PRIVATE_H_ */
