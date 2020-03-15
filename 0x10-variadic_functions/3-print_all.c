#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * printf_c - prints characters
 * @formatter: list
 */
void printf_c(va_list formatter)
{
	printf("%c", va_arg(formatter, int));
}

/**
 * printf_i - prints integers
 * @formatter: list
 */
void printf_i(va_list formatter)
{
	printf("%d", va_arg(formatter, int));
}

/**
 * printf_f - prints floats
 * @formatter: list
 */
void printf_f(va_list formatter)
{
	printf("%f", va_arg(formatter, double));
}

/**
 * printf_str - prints strings
 * @formatter: list
 */
void printf_str(va_list formatter)
{
	char *shortcut = va_arg(formatter, char *);

	if (shortcut != NULL)
	{
		printf("%s", shortcut);
		return;
	}
	printf("(nil)");
}

/**
 * print_all - acts a printf function
 * @format: contains specifiers
 * Return: Void
 */
void print_all(const char * const format, ...)
{
	int index, jindex;
	va_list formatter;
	options modulus[] = {
		{'c', printf_c},
		{'i', printf_i},
		{'f', printf_f},
		{'s', printf_str},
	};
	char *separator = "";

	va_start(formatter, format);

	while (format && format[index]) /* while there's something to test */
	{
		jindex = 0;
		while (jindex < 4) /* while all of modulus hasn't been checked, check! */
		{
			if (format[index] == modulus[jindex].s) /* if match found */
			{
				printf("%s", separator);
				modulus[jindex].f(formatter); /* modulus masking printf func */
				separator = ", ";
				break; /* if found, break */
			}
			jindex++; /* if no match, check the next array in modulus */
		}
		index++; /* check the next specifier in format */
	}
	printf("\n");
	va_end(formatter); /* clear all + memory */
}
