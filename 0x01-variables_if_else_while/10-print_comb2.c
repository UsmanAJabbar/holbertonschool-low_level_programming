#include <stdio.h>

/**
 * main - Prints all the numbers between
 * 00 and 99 using putchar with ", " acting
 * as seperators.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int f_digit, l_digit;

	for (f_digit = '0'; f_digit <= '9'; f_digit++)
		for (l_digit = 48; l_digit <= 57; l_digit++)
		{
			putchar(f_digit), putchar(l_digit);

			if ((f_digit != '9') || (l_digit != '9'))
				putchar(','), putchar(' ');
		}

	putchar('\n');
	return (0);
}
