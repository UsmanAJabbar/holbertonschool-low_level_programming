#include "holberton.h"

/**
 * _abs - computs absolute value
 *
 * @n: pulled from the main file
 *
 * Return: Returns result.
 */

void times_table(void)
{
	int a;
	int b;
	int ab;

	a = 0;
	while (a <= 9)
	{
		b = 0;
		while (b <= 9)
		{
			ab = a * b;

			if (ab <= 9 && b != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(ab + '0');;;
			}

			else if (b >= 10)
			{
					_putchar(',');
					_putchar(' ');
					_putchar(b / 10);
					_putchar(b % 10);
			}

			else
			{
					_putchar(b + '0');
			}
		b++;
		}
	a++;
	_putchar('\n');
	}
}
