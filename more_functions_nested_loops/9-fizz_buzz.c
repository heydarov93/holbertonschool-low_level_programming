#include <stdio.h>

/**
 * main - entry point
 *
 * Return: on Success 0
 *
 */

int main(void)
{
	int i = 3;

	printf("1 2 ");

	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf(" FizzBuzz");
		else
		{
			if (i % 3 == 0)
				printf(" Fizz");
			else
			{
				if (i % 5 == 0)
					printf(" Buzz");
				else
					printf(" %d", i);
			}
		}
		i++;
	}

	printf("\n");
	return (0);
}
