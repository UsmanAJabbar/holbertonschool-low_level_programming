#include "holberton.h"

/**
 * _pow_recursion - multiplies
 * x to the power of y
 * @x: x = base
 * @y: exponent
 * Return: Returns x as final output
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}

	if (y == 0)
	{
		return (1);
	}

	x = x * _pow_recursion(x, y - 1);

	return (x);
}
