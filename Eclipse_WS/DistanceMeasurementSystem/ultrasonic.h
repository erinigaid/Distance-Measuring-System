 /******************************************************************************
 *
 * Module		: Ultrasonic Sensor
 *
 * File Name	: ultrasonic.h
 *
 * Description	: header file for the ultrasonic driver - HAL Layer
 *
 * Author		: Erini Sabry
 *
 * Date Created	: 16.10.2022
 *
 *******************************************************************************/

/* Header file guard */
#ifndef ULTRASONIC_H_
#define ULTRASONIC_H_

/*******************************************************************************
 *                                Linking Section - INCLUDES
 *******************************************************************************/
#include "std_types.h"

/*******************************************************************************
 *                              Functions Prototype (Public)
 *******************************************************************************/

/*******************************************************************************
 * Function Name: Ultrasonic_init
 *
 * Description :
 * 		initializes the ultrasonic sensor
 *
 * Parameters: void
 *
 * Return: void type
 *
  *******************************************************************************/
void Ultrasonic_init(void);

/*******************************************************************************
 * Function Name: Ultrasonic_trigger
 *
 * Description :
 * 		Send the Trigger pulse to the ultrasonic.
 *
 * Parameters: void
 *
 * Return: void type
 *
  *******************************************************************************/
void Ultrasonic_trigger(void);

/*******************************************************************************
 * Function Name: Ultrasonic_readDistance
 *
 * Description :
 * 		Start the measurements by the ICU from this moment.
 *
 * Parameters: void
 *
 * Return: The measured distance in Centimeter.
 *
  *******************************************************************************/
uint16 Ultrasonic_readDistance(void);

/*******************************************************************************
 * Function Name: Ultrasonic_edgeProcessing
 *
 * Description :
 * 		 This is the call back function called by the ICU driver
 * 		  used to calculate the high time (pulse time) generated by the ultrasonic sensor.
 *
 *
 * Parameters: void
 *
 * Return: void type
 *
  *******************************************************************************/
void Ultrasonic_edgeProcessing(void);

#endif /* ULTRASONIC_H_ */