#include "holberton.h"

/**
 * _sqrt_recursion - finds the
 * square root with the
 * square_root function below
 * @n: contains ints from main
 * Return: Returns final output
 */

int _sqrt_recursion(int n)
{
	int sqr;

	sqr = square_root(1, n);
	return (sqr);
}

/**
 * square_root - calculates and
 * checks the square root
 * @x: acts as the base being a
 * constant during checking
 * @y: acts as the limiter
 * Return: Returns | incremented x |
 * | x if perfect square | -1 if
 * exceeded past y
 */

int square_root(int x, int y)
{
	if ((x * x) < y)
	{
		return (square_root((x + 1), y));
	}

	else if ((x * x) == y)
	{
		return (x);
	}

	else if ((x * x) > y)
	{
		return (-1);
	}
	return (x);
}
