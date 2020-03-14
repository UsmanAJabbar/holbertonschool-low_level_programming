#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

void printf_c(va_list)
{
	printf("%c", v_arg(formatter, char);
}

void printf_i(va_list)
{
	printf("%d", v_arg(formatter, int)
}

void printf_f(va_list)
{
	printf("%f", va_arg(formatter, float)
}

void printf_str(va_list)
{
	printf("%s", va_arg(formatter, (char *))
}

typedef struct {
	char *s;
	int (*f)(int);
	} options;

options modulus [] = {
	{"c", printf_c},
	{"i", printf_i},
	{"f", printf_i},
	{"s", printf_str},
	{NULL, NULL},
	};

void print_all(const char * const format, ...)
{
	va_list formatter;
	va_start (formatter, format);

	if
