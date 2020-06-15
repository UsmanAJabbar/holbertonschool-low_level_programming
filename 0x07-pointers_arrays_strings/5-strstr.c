#include "holberton.h"

/**
 * _strstr - finds a string
 * then returns everything after it
 * @haystack: contains the string
 * @needle: contains the word to search
 * for.
 * Return: Returns needle
 */

char *_strstr(char *haystack, char *needle)
{
	int i;

	for (i = 0; *haystack; haystack++)
	{
		for (i = 0; haystack[i] == needle[i]; i++)
			;

		if (needle[i] == '\0')
			return (haystack);
	}
	return (0);
}
