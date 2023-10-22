#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 if Success
 */

int main(void)
{
	int n = 1;
	long int firstFib = 0;
	long int secondFib = 1;
	long int nextFib = firstFib + secondFib;

	while (n <= 50)
	{
		printf("%ld", nextFib);
		firstFib = secondFib;
		secondFib = nextFib;
		nextFib = firstFib + secondFib;
		n++;
		if (n < 51)
		{
			printf(", ");
			continue;
		}

		if (n == 51)
			printf("\n");

	}
}
