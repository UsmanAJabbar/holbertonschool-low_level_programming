#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

#define ZERO 48
#define NINE 57

int main(void)
{
int f = 0, m = 0, l = 0;

	for (f = ZERO; f <= NINE; f++)
	{
		for (m = ZERO; m <= NINE; m++)
		{
			for (l = ZERO; l <= NINE; l++)
			{
				if ((f < m) && (m < l))
				{
				putchar(f);
				putchar(m);
				putchar(l);

					if (f != 55 || m != 56 || l != 57)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	return (0);
}
