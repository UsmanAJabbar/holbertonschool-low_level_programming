#include "holberton.h"

/**
 * _islower - if c is lowercase, returns 1
 *
 * @c: a variable, being pulled from the main file
 *
 * Return: Always (0)
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
	return (1);
	}

	else
	{
	return (0);
	}
}
