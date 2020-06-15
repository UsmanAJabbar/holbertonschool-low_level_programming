#include "holberton.h"

/**
 * print_most_numbers - prints 0-9 once
 * but excludes 2 and 4
 * @sdnums - variable abbre based off
 * single digit numbers for simplicity
 */

void print_most_numbers(void)
{
	int sdnums = 0;

	for (sdnums = '0'; sdnums <= '9'; sdnums++)
		if (sdnums != '2' && sdnums != '4')
			_putchar(sdnums);

	_putchar('\n');
}
