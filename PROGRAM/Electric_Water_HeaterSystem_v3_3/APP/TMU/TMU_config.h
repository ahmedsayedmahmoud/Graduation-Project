/*
 * TMU_config.h
 *      Author: Ahmed Sayed
                , Abdallah MAgdy
 */

#ifndef APP_TMU_TMU_CONFIG_H_
#define APP_TMU_TMU_CONFIG_H_

/*--------------------------------------------------------------------------------------**
*------------------------------ MAXIMUM TASKS NUMBER SELECTION -----------------------------*
**---------------------------------------------------------------------------------------*/
#define MAX_TASKS_NUMBER 														4
/*--------------------------------------------------------------------------------------**
*------------------------- TICK TIME SELECTION IN MILE SECOND ---------------------------*
**------------------ check is a task is ready every TICK_TIME to run --------------------*
**---------------------------------------------------------------------------------------*/
/*---------- periodicity how many tick is desired, but the time has time in msec --------*/

#define TICK_TIME																20


/*--------------------------------------------------------------------------------------**
*----------------------- TIMER SELECTION [TIMER0, TIMER1, TIMER2] --------------------*
**---------------------------------------------------------------------------------------*/

#define USED_TIMER																TIMER0

#endif /* APP_TMU_TMU_CONFIG_H_ */
