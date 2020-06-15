#include "holberton.h"

/**
 * string_toupper - changes all
 * letters to uppercase
 * @a: array from main
 * Return: Returns final value of a
 * for use in main.
 */

char *string_toupper(char *a)
{
	int i;

	for (i = 0; a[i] != '\0'; i++)
		if (a[i] >= 'a' && a[i] <= 'z')
			a[i] -= 32;

	return (a);
}




#include "holberton.h"

/**
 * _strlen - function prints length
 * @s: pointer imported from c
 * Return: (0)
 */

int _strlen(char *s)
{
	int len;

	for (len = 0; s[len] != '\0'; len++)
		continue;

	return (len);
}
