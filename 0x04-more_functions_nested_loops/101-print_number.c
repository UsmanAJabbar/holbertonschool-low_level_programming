#include "holberton.h"

/**
 * print_number - prints numbers
 * with putchar
 * @n:and pos removes the minus 1 for
 * putchar to process
 */

void print_number(int n)
{
	int pos = -n;

	if (n > 0  && n < 9)
	{
		_putchar(n + '0');
	}

	else if (n > 9 && n <= 99)
	{
		_putchar((n / 10) + '0');
		_putchar((n % 10) + '0');
	}

	else if (n > 99 && n <= 999)
	{
		_putchar((n / 100) + '0');
		_putchar(((n / 10) % 10) + '0');
		_putchar((n % 10) + '0');
	}

	else if (n > 999)
	{
		_putchar((n / 1000) + '0');
		_putchar((n / 100) % 10 + '0');
		_putchar((n / 10) % 10 + '0');
		_putchar((n % 10) + '0');
	}

	else if (n < -9)
	{
		_putchar('-');
		_putchar((pos / 10) + '0');
		_putchar((pos % 10) + '0');
	}

	else if (n == 0)
	{
		_putchar('0');
	}
}
