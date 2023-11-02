#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * @argc: int
 * @argv: char
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int i, res = 0, div, amount;
	int values[5] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	if (atoi(argv[1]) < 0)
		printf("0\n");
	else
	{
		amount = atoi(argv[1]);

		for (i = 0; i < 5; i++)
		{
			div = amount / values[i];
			if (div > 0)
			{
				amount -= values[i] * div;
				res += div;
			}

			if (amount == 0)
				break;

		}


		printf("%d\n", res);
	}

	return (0);
}
