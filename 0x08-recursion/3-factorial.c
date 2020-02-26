#include "holberton.h"

/**
 * factorial - finds the factorial
 * @n: integer from n
 * Return: Returns -1 | 1 | value
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	else if (n <= 1)
	{
		return (1);
	}

	return (n * factorial(n - 1));
}
