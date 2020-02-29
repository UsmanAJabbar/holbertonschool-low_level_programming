#include "holberton.h"

/**
 * _isupper - checks if letter is
 * capital, else, prints 0
 * @c: variable imported from main.c
 * Return: 1 if capital letter, else, 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
