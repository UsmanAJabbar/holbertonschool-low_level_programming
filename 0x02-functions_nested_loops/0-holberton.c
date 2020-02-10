#include "holberton.h"

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
