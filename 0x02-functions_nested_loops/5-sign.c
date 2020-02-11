#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * _isalpha - checks for captial letters
 *
 * Return: Always 0.
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
