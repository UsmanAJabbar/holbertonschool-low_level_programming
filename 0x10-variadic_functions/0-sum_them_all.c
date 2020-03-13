#include <stdarg.h>
#include <stdio.h>

/**
 * sum_them_all - sums unlimited numbers
 * @n: number of elemented to be computed
 * Return: 0 | Returns final sum
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int index;
	unsigned int sum = 0;

	va_list input;

	va_start(input, n);

	if (n == 0)
	{
		return (0);
	}

	for (index = 0; index < n; index++)
	{
	/* continues adding everything into sum until index count < # of elements */
		sum += va_arg(input, int);
	}

	va_end(input);
	return (sum);
}
