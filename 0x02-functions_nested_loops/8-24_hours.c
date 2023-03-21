#include "main.h"


/**
 * jack_bauer - prints every minute of the day
 * @void: accepts no arguments
 * Return: returns nothing
 */

void jack_bauer(void)
{

	int minute, hours;

	for (hours = 0; hours < 24; hours++)
	{
		for (minute = 0; minute < 60; minute++)
		{

			_putchar((hours / 10) + '0');
			_putchar((hours % 10) + '0');


			_putchar(':');


			_putchar((minute / 10) + '0');
			_putchar((minute % 10) + '0');

			_putchar('\n');

		}

	}

	_putchar('\n');


}
