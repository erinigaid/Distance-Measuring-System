 /******************************************************************************
 *
 * Module		: main
 *
 * File Name	: main.c
 *
 * Description	: source file for miniproject 4 - App Layer
 *
 * Author		: Erini Sabry
 *
 * Date Created	: 16.10.2022
 *
 *******************************************************************************/

#include "lcd.h"
#include "gpio.h"
#include "ultrasonic.h"
#include <avr/io.h> /* To use the SREG register */
#include "bit_math.h"


int main(void)
{
	/* Initialize the drivers */
	LCD_init();
	Ultrasonic_init();
	LCD_clearScreen();
	LCD_displayString("Distance =   cm");
	uint16 distanceRet = 0;

	/* Enable Global Interrupt I-Bit */
	SET_BIT(SREG,7);
	while(1)
	{
		distanceRet = Ultrasonic_readDistance();

		LCD_moveCursor(0,11);
		LCD_intgerToString(distanceRet);

		if(distanceRet < 100)
		{
			LCD_displayCharacter(' ');
		}
	}
}
