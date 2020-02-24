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
	int j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (needle[j] == needle[i])
			{
				return (needle + i);
			}
		}
	}

return (0);
}
