#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sums unlimited numbers
 * @n: number of elemented to be computed
 * Return: 0 | Returns final sum
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int index;
	int sum = 0;
	va_list input;

	if (n == 0)
	{
		return (0);
	}

	va_start(input, n);

	for (index = 0; index < n; index++)
	{
		sum += va_arg(input, const unsigned int);
	}

	va_end(input);
	return (sum);
}
