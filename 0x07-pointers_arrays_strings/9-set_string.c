#include "holberton.h"

/**
 * set_string - points the pointer
 * to another pointer
 * @s: is a double pointer
 * @to: is what to would
 * have to save in s
 */

void set_string(char **s, char *to)
{
	*s = to;
}
