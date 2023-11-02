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
	int i, sum = 0;

	if (argc < 2)
		printf("0\n");
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (*argv[i] < 48 || *argv[i] > 57)
			{
				printf("Error\n");
				return (1);
			}

			sum += atoi(argv[i]);
		}


		printf("%d\n", sum);
	}

	return (0);
}
