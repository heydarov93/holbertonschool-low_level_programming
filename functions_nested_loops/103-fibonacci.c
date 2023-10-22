#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 if Success
 */

int main(void)
{
	long int sum = 0;
	long int firstFib = 0;
	long int secondFib = 1;
	long int nextFib = firstFib + secondFib;

	while (1)
	{
		if (nextFib > 4000000)
			break;

		if (nextFib % 2 == 0)
			sum += nextFib;

		firstFib = secondFib;
		secondFib = nextFib;
		nextFib = firstFib + secondFib;
	}

	printf("%ld\n", sum);
	return (0);
}
