#include "holberton.h"

/**
 * _strcmp - compares letters
 * throughout the index
 * once two indexes do not match
 * difference is output in ascii
 * @s1: pointer with the value
 * at main
 * @s2: pointer with the value
 * at main
 * Return: stores final output
 * and returns for use in main
 */

int _strcmp(char *s1, char *s2)
{
	int diff;

	while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2)
		s1++, s2++;

	if (*s1 != *s2)
		return (*s1 - *s2);

return (0);
}
