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
