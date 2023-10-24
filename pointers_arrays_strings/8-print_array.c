#include <stdio.h>

/**
 * print_array - prints half of a string, followed by a new line
 *
 * @a: pointer to the array of int
 * @n: number of elements that should be displayed
 *
 * Return: nothing
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != n - 1)
			printf("%d, ", a[i]);
		else
		{
			printf("%d\n", a[i]);
			return;
		}
	}

	printf("\n");
}
