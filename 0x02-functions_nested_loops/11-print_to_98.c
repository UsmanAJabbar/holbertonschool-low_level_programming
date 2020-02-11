#include "holberton.h"
#include <stdio.h>

void print_to_98(int n)
{
	int fullnum;

	for (fullnum = n; fullnum <= 98; fullnum++)
	{
		if (fullnum >= 0 && fullnum <= 9)
		{
			_putchar((fullnum % 10) + '0');
		}

		if (fullnum <= -10 && fullnum >= -99)
		{
			_putchar('-');
			_putchar((-fullnum / 10) + '0');
			_putchar((-fullnum % 10) + '0');
		}

		if (fullnum < 0 && fullnum >= -9)
		{
			_putchar('-');
			_putchar(-fullnum + '0');
		}

		if (fullnum > 9)
		{
			_putchar((fullnum / 10) + '0');
			_putchar((fullnum % 10) + '0');
		}
		if (fullnum < 98)
		{
			_putchar(',');
			_putchar(' ');
		}
		if (fullnum == 98)
		{
			_putchar('\n');
		}
	}

	for (fullnum = n; fullnum > 98; fullnum--)
	{
		if (fullnum >= 100 && fullnum < 999)
		{
			_putchar((fullnum / 100) + '0');
			_putchar(((fullnum / 10) % 10) + '0');
			_putchar((fullnum % 10) + '0');
		}
		else
                {
			_putchar((fullnum / 10) + '0');
			_putchar((fullnum % 10) + '0');
		}
		if (fullnum > 98)
		{
			_putchar(',');
			_putchar(' ');
		}

		if (fullnum == 98)
		{
			_putchar('\n');
		}
	}
}
