#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int coins;
	int cents;

	if (argc >= 3 || argc == 1)
	{
		printf("Error\n");
		return (1);
	}

	coins = 0;
	cents = (atoi(argv[1]));

	if (cents < 0)
	{
		printf("0\n");
	}

	if (cents > 0)
	{
		while  (cents >= 25)
		{
			cents = cents - 25;
			coins++;
		}

		while  (cents >= 10)
		{
			cents = cents - 10;
			coins++;
		}

		while (cents >= 5)
		{
			cents = cents - 5;
			coins++;
		}

		while (cents >= 2)
		{
			cents = cents - 2;
			coins++;
		}

		while (cents >= 1)
		{
			cents = cents - 1;
			coins++;
		}

		printf("%d\n", coins);
		return (0);
	}
}
