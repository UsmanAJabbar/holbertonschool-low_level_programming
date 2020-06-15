#include "holberton.h"

/**
 * _isdigit - checks if char is
 * a digit, else, prints 0
 * @c: variable imported from main.c
 * Return: 1 if capital letter, else, 0
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
