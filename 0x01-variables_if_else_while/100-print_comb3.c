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
				if (l > f)
				{
					putchar(f);
					putchar(l);

					if ((f != 56) || (l != 57))
					{
                                                putchar(',');
                                                putchar(' ');
					}
				}
			}
		}
	putchar('\n');
	return (0);

}
