#include "holberton.h"

/**
 * _strspn - func that counts
 * # of occurrences *2 has in *1
 * @s: contains the string
 * @accept: contains characters
 * Return: Returns the max index
 */

unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != s[i]; j++)
		{
			if (accept[j] == '\0')
			return (i);
		}
	}
return (i);
}
