#include "holberton.h"
#include <stdio.h>

/**
 * _strchr - prints out everything after
 * it finds the character stored in c
 * @c: contains character to search for.
 * @s: string imported from main
 * Return: Returns new value to pointer s.
 */

char *_strchr(char *s, char c)
{


	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}

	if (*s == c)
	{
		return (s);
	}

	else
		return ('\0');
}
