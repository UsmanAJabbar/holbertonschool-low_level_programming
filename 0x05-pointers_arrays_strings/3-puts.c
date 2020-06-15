#include "holberton.h"

/**
 * _puts - prints out any string
 * @str: string imported from main file
 * Return: Always Void
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; str++)
		_putchar(str[i]);

	_putchar('\n');
}
