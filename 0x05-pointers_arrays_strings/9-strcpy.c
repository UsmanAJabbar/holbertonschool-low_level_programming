#include "holberton.h"

/**
 * _strcpy - copies string from dest to src
 * @src: first var
 * @dest: second var
 * Return: returns stored value in dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = '\0';

	return (dest);
}
