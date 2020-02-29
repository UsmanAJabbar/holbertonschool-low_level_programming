#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int sum = 0;
	int index = 0;

	for(index = 0; index < argc; index++)
	{
		if (*argv[index] >= 0)
		{
			sum = sum + atoi(argv[index]);
		}

		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
}
