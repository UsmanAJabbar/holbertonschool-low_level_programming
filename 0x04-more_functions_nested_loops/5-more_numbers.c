#include "holberton.h"

/**
 * more_numbers - prints num 0-14
 */

void more_numbers(void)
{
	int fd;
	int ld;

	for (fd = 0; fd <= 9; fd++)
		for (ld = 0; ld <= 14; ld++)
		{
			if (ld > 9)
				_putchar((ld / 10) + '0');
	
			_putchar((ld % 10) + '0');
		}
	_putchar('\n');
}
