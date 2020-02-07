#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
	{
	int l;

	for (l = 48; l <= 57; l++)
{
	putchar(l);

	if (l < 57)
	{
		putchar(44);
		putchar(32);
	}
}
	putchar ('\n');
	return (0);
}
