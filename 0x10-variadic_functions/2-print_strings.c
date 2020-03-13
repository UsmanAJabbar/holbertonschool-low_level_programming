#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int index;
	va_list members;

	va_start(members, n); /* members have n arguments */

	for (index = 0; index < n; index++)
	{
		/* check if string itself is null */
		if (va_arg(members, char *) == NULL)
		{
				printf("(nil)");
		}

		printf("%s", va_arg(members, char *));

		if (separator != NULL && index < (n - 1))
		{
			printf("%s", separator);
		}
	}
	printf("\n");

	va_end(members);
}
