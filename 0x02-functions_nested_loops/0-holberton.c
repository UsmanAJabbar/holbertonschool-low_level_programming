#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

#define ZERO 48
#define NINE 57

int main(void)
{
	char c[] = "Holberton\n";
	int s;

	for (s = 0; s <= sizeof(c); s++)
	{
	_putchar(c[s]);
	}

return (0);
}
