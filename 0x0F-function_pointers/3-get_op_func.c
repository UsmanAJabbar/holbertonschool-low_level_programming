#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
#include <string.h>

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	int i = 0;

	while (i < 6)
	{
		if (!(strcmp(ops[i].op, s)))
			return (ops[i].f);
		else
			i++;
	}
return(NULL);
}
