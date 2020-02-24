#include "holberton.h"
#include <stdio.h>

/**
 * _strpbrk - Prints out everthing
 * after value in accept is first
 * found
 * @s: strin
 * @accept: characters
 * Return: Returns output
 */

char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
				return (s + i);
		}
	}
return (0);
}
