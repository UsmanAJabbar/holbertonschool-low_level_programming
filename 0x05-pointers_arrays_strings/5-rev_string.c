#include "holberton.h"

/**
 * rev_string - reverses string
 * the string in reverse
 * @s: string imported from main
 * file.
 */

void rev_string(char *s)
{
	int b = 0;
	int e = _strlen(s) - 1;
	int tmp;

	while (b <= e)
	{
		tmp = s[b];
		s[b] = s[e];
		s[e] = tmp;
		b++;
		e--;
	}
}

/**
 * _strlen - reverses the string
 * @s: imported
 * Return: length to print_rev
 */

int _strlen(char *s)
{
	int len;

	for (len = 0; s[len] != '\0'; len++)
		continue;

	return (len);
}
