#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/* declarations */
void printf_c(va_list);
void printf_i(va_list);
void printf_f(va_list);
void printf_str(va_list);

/* functions */
void printf_c(va_list formatter)
{
	printf("%c", va_arg(formatter, int));
}

void printf_i(va_list formatter)
{
	printf("%d", va_arg(formatter, int));
}

void printf_f(va_list formatter)
{
	printf("%f", va_arg(formatter, double));
}

void printf_str(va_list formatter)
{
	printf("%s", va_arg(formatter, char *));
}

/* main file */
void print_all(const char * const format, ...)
{
	int index, jindex;
	va_list formatter;

	va_start (formatter, format);

	options modulus[] = {
		{'c', printf_c},
		{'i', printf_i},
		{'f', printf_f},
		{'s', printf_str},
	};

	while (format[index]) /* while there's something to test in format */
	{
		jindex = 0;

		while (jindex < 4) /* while all of modulus hasn't been checked, check! */
		{
			if (format[index] == modulus[jindex].s) /* if match found */
			{
				modulus[jindex].f(formatter); /* execute the func. (modulus) is making the printf func */

				if (format[index + 1] != '\0') /* if it isn't the last char, comma" */
				{
					printf(", ");
				}
				break; /* if found, break */
			}
			jindex++; /* if no match, check the next array in modulus */
		}
		index++; /* check the next specifier in format */
	}
	printf("\n");
	va_end (formatter); /* clear all + memory */
}
