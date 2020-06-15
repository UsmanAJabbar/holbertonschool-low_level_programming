#include "holberton.h"

/**
 * leet - replaces characters
 * from leet into normal strings
 * @l: pointer string importing
 * from main
 * Return: Returns final value
 * into the pointer
 */

char *leet(char *l)
{
	char l33t[11] = "4433007711";
	char real[11] = "aAeEoOtTlL";
	int i, j;

	for (i = 0; l[i] != '\0'; i++)
		for (j = 0; j < 11; j++)
			if (l[i] == real[j])
			{
				l[i] = l33t[j];
				break;
			}

	return (l);
}
