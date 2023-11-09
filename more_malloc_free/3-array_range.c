#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: int
 * @max: int
 *
 * Return: the pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *new_arr, *cp_new_arr;
	int length;

	if (min > max)
		return (NULL);

	length = max - min + 1;
	new_arr = malloc(sizeof(int) * length);
	cp_new_arr = new_arr;

	if (cp_new_arr)
	{
		while (min <= max)
			*cp_new_arr++ = min++;

		return (new_arr);
	}

	return (NULL);
}
