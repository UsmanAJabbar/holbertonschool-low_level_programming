#include "function_pointers.h"

/**
 * print_name - prints strings from main
 * @name: pointer to names
 * @f: calls on the functions from main
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		(*f)(name);
	}
}
