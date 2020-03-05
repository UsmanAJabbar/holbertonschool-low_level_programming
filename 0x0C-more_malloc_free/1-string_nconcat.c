#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * string_nconcat - concats second index upto a limit
 * @s1: first string
 * @s2: second string
 * @n: holds limiter for s2
 * Return: Returns catted string | Null
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *cattedstring;
	unsigned int s1len = 0;
	unsigned int s2len = 0;
	unsigned int index;
	unsigned int jindex; /* jindex = successor of index */

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[s1len] != '\0')
		s1len++;

	while (s2[s2len] != '\0')
		s2len++;

	cattedstring = malloc(sizeof(int) * (s1len + n + 1));

	printf("This is how much space was allocated %d", s1len + n + 1);

	if (cattedstring == NULL)
	{
		free(cattedstring);
		return (NULL);
	}

	for (index = 0; index < s1len; index++)
	{
		cattedstring[index] = s1[index];
	}

	for (jindex = 0; jindex <= n; jindex++, index++)
	{
		cattedstring[index] = s2[jindex];
	}
	*(cattedstring + index) = '\0';
	return (cattedstring);
}
