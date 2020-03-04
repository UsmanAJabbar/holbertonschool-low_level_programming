#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - joins two strings
 * @s1: first string
 * @s2: second string
 * Return: Null | 0
 */

char *str_concat(char *s1, char *s2)
{
	char *NewString;
	int index;
	int jindex;
	int s1length = 0;
	int s2length = 0;
	int cattedlength;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[s1length] != '\0')
		s1length++;

	while (s2[s2length] != '\0')
		s2length++;

	cattedlength = s1length + s2length;

	NewString = (char *) malloc((sizeof(char) * cattedlength));

	if (NewString == NULL)
		return (NULL);

	for (index = 0; s1[index] != '\0'; index++)
	{
		NewString[index] = s1[index];
	}

	for (index = s1length, jindex = 0; index <= cattedlength; index++, jindex++)
	{
		NewString[index] = s2[jindex];
	}
	*(NewString + index) = '\0';

	return (NewString);
}
