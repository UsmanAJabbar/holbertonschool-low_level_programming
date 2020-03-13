#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints all of the numbers
 * @separator: . | NULL
 * @n: number of elements
 * Return: NULL
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int index = 0;
	va_list input;

	va_start(input, n); /* variable arguments start */

	if (separator != NULL)
	{
		for (index = 0; index < n; index++)
		{
			printf("%d", va_arg(input, int));

			if (index < n - 1)
			{
				printf("%s", separator);
			}
		}
		printf("\n");
	}

	if (separator == NULL)
	{
		for (index = 0; index < n; index++)
		{
			printf("%d", va_arg(input, int));
		}
		printf("\n");
	}
	va_end(input); /* variable arguments end | clears memory*/
}
