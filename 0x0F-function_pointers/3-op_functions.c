#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * op_add - adds two numbers
 * @a: first parameter
 * @b: second parameter
 * Return: Returns result
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts a and b
 * @a: first parameter
 * @b: second parameter
 * Return: Returns result
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_div - divides a and b
 * @a: first parameter
 * @b: second parameter
 * Return: Returns result
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mul - multiplies a and b
 * @a: first parameter
 * @b: second parameter
 * Return: Returns result
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_mod - gets the last digit
 * @a: first parameter
 * @b: second parameter
 * Return: Returns result
 */
int op_mod(int a, int b)
{
	return (a % b);
}
