#include "main.h"

/**
 * reverse_array -  reverses a array
 *
 * @a: pointer to the array int
 * @n: length of array
 *
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int i;
	int tmp;

	if (n > 0)
	{
		i = 0;
		n--;
		while (i <= n / 2)
		{
			tmp = a[i];
			a[i] = a[n - i];
			a[n - i] = tmp;
			i++;
		}
	}
}
