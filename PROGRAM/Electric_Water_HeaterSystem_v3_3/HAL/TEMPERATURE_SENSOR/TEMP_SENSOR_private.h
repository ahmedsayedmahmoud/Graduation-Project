/*
 * TEMP_SENSOR_private.h
 *
 *      Author: Ahmed Sayed
                , Abdallah MAgdy
 */

#ifndef HAL_TEMPERATURE_SENSOR_TEMP_SENSOR_PRIVATE_H_
#define HAL_TEMPERATURE_SENSOR_TEMP_SENSOR_PRIVATE_H_


#define TEMP_SENSOR_FLAG_RISED												1
#define TEMP_SENSOR_FLAG_NOT_RISED											0

#define TEMP_SENSOR_EXTERNAL_INTERRUPT_SOURCES								3
#define TEMPSENSOR_INITIALVALUE 											0
#define TWO_BITS_SHIFT														2
#define FOUR_BITS_SHIFT														4
#define SIX_BITS_SHIFT														6
#define EIGHT_BITS_SHIFT													8
#define TEN_BITS_SHIFT														10
#define TWELVE_BITS_SHIFT													12
#define FOURTEEN_BITS_SHIFT													14
#define SIXTEEN_BITS_SHIFT													16
#define EIGHTEEN_BITS_SHIFT													18
#define TWENTY_BITS_SHIFT													20
#define MAXIMUM_TEMPERATURE_TEN_READING										10
#define TEMPSENSOR_CEACKVALUE_SIXTEEN										0b010101010101010101


#define TEMPSENSOR_CEACKVALUE_TWENTY										0b01010101010101010101

#define TEMPSENSOR_CEACKVALUE_FOURTEEN										0b0101010101010101
#define TEMPSENSOR_CEACKVALUE_ONE											0b01

#define ADC_VOLTAGE_EQUATION_STEP											((u32_t)5000000 / 1024ul)

#define ADC_READING_DIVISION_FACTOR 										10000ul


#endif /* HAL_TEMPERATURE_SENSOR_TEMP_SENSOR_PRIVATE_H_ */
