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
	int index;

	for (index = 0; s != '\0'; s++)
	{
		if (s[index] == c)
			return (s);
	}
return ('\0');
}
