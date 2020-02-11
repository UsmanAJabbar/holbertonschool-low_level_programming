#include "holberton.h"

/**
 * jack_bauer - fancy name that'll print out time
 */

void jack_bauer(void)
{
int hours;
int mins;

	for (hours = 0; hours <= 23; hours++)
	{

		for (mins = 0; mins <= 59; mins++)
		{
			_putchar((hours / 10) + '0');
			_putchar((hours %  10) + '0');
			_putchar(58);
			_putchar((mins / 10) + '0');
			_putchar((mins % 10) + '0');
			_putchar('\n');
		}
	}
}
