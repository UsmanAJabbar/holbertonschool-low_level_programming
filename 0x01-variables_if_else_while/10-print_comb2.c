#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int f;
	int l;

	/* 48 = 0 | 57 = 9 */
	for (f = 48; f <= 57; f++)
	{
		for (l = 48; l <= 57; l++)
		{
		putchar(f);
		putchar(l);

		if ((f != '9') || (l != '9'))
			{
			putchar(',');
			putchar(' ');
			}
		}
	}
	return (0);
}
