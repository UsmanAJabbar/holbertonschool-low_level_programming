#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - prints all strings
 * @separator: ", " from main
 * @n: number of elements
 * Return: Void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int index;
	va_list members;
	char *simple; /* declaring it before it conflicts with va_start */

	va_start(members, n); /* members have n arguments */

	if (n < 1)
	{
		printf("\n");
		va_end(members);
		return;
	}

	else if (n >= 1)
	{
		for (index = 0; index < n; index++)
		{
			/*declared simple as a shortcut */
			simple = va_arg(members, char *);

			/* check if string itself is null */
			if (simple == NULL)
			{
				printf("(nil)");
			}

			printf("%s", simple);

			/* exclude seperator from last string */
			if (separator != NULL && index < (n - 1))
			{
				printf("%s", separator);
			}
		}
		printf("\n");
	}
	va_end(members);
}
