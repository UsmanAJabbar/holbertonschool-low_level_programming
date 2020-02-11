#include "holberton.h"

/**
 * _abs - computs absolute value
 *
 * @n: pulled from the main file
 *
 * Return: Returns result.
 */

int _abs(int n)
{
int mbm1 = n * -1;

	if (n < 0)
	{
		return (mbm1);
	}

	else
	{
		return (n);
	}
}
