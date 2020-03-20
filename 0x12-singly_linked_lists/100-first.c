#include <stdio.h>

void before_main(void) __attribute__ ((constructor));
/**
 * before_main - executes functions before main
 * NOTES: Constructor Attribute allows the function
 * to run before main... Whereas the Deconstructor
 * attribute pushes the executions after main.
 */
void before_main(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
