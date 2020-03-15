#ifndef _VARIADIC_FUNCTIONS_H
#define _VARIADIC_FUNCTIONS_H

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct options - function picker
 * @s: imports character
 * @f: chooses the appropriate function
 * options: typedef
 */
typedef struct options
{
	char s;
	void (*f)(va_list);
} options;

/** Declarations For Task 3 **/
void printf_c(va_list);
void printf_i(va_list);
void printf_f(va_list);
void printf_str(va_list);

#endif
