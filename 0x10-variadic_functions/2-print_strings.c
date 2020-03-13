#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int index;
	va_list members;

	va_start(members, n); /* members have n arguments */

	if (separator != NULL)
	{
		for (index = 0; index < n; index++)
		{
			/* check if string itself is null */
			if (va_arg(members, char *) == NULL)
			{
				printf("(nil)");
			}

			printf("%s", va_arg(members, char *));

			if (index < n - 1) /* adds ", " after every string before the last one */
			{
				printf("%s", separator);
			}
		}
		printf("\n");
	}

	if (separator == NULL)
	{
		for(index = 0; index < n; index++)
		{
			/* check if string itself is null */
			if (va_arg(members, char *) == NULL)
			{
				printf("(nil)");
			}

			printf("%s", va_arg(members, char *));
		}
		printf("\n");
	}
	va_end(members);
}
