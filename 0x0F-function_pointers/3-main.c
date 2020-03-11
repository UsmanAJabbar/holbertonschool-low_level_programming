#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{

	int a = atoi(argv[1]);
	int (*calc)(int, int) = (*get_op_func(argv[2]));
	int b = atoi(argv[3]);

	if (argc != 4)
	{
		printf("Error");
		exit (98);
	}

	if (get_op_func(argv[2] == NULL))
	{
		printf("Error");
		exit (99);
	}

	if ((atoi(argv[3]) == 0) && (argv[2] == '/' || argv[2] == '%'))
	{
		printf("Error");
		exit (100);
	}

	printf("%d", calc(a, b));

return (0);
}
