#include "holberton.h"

/**
 * times_table - computs absolute value
 *
 * @a: var 1
 * @b: var 2
 *
 * Return: Returns result.
 */

void times_table(void)
{
	int a;
	int b;
	int ab;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			ab = a * b;

			if (ab <= 9 && b != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(ab + '0');
			}

			else if (ab >= 10)
			{
					_putchar(',');
					_putchar(' ');
					_putchar((ab / 10) + '0');
					_putchar((ab % 10) + '0');
			}

			else
			{
					_putchar(ab + '0');
			}
		}
	_putchar('\n');
	}
}
