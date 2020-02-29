#include "holberton.h"

int is_prime_number(int n)
{
	if (n % 2 == 0)
	{
		return (1);
	}

	else if (n % 2 != 0)
	{
		n = ((is_prime_number / 2) + 2);
		return (n);
	}
}
