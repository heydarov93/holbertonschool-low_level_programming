#include <stddef.h>

/**
 * array_iterator - executes a function given as a parameter
 * on each element of an array
 *
 * @array: array (int)
 * @size: size of an array (size_t)
 * @action: callback function
 *
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (action)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
