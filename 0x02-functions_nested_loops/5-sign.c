#include "holberton.h"

/**
 * print_sign - prints symbols, comma and then the return value
 *
 * @n: variable
 *
 * Return: 0 if 0, 1 if above 0, -1 if below 0.
 */

int print_sign(int n)
{
int minus = '-';
int plus = '+';
int zero = '0';

	if (n > 0)
	{
	_putchar(plus);
	return (1);
	}

	if (n < 0)
	{
	_putchar(minus);
	return (-1);
	}

	else
	{
	_putchar(zero);
	return (0);
	}
}
