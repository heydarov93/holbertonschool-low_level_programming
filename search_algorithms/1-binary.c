#include "search_algos.h"

void print_array(int *array, int start, int end);

/**
 * binary_search - searches for a value in an array of integers using
 * the binary search algorithm
 *
 * @array: pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value:  the value to search for
 *
 * Return: first index where value is located on Success,
 * -1 otherwise
 */

int binary_search(int *array, size_t size, int value)
{
	int start, mid, end, length = size;
	int max_idx = size - 1;

	if (!array)
		return (-1);

	start = 0;
	mid = max_idx / 2;
	end = max_idx;

	while (length != 0)
	{
		printf("Searching in array: ");
		print_array(array, start, end);
		if (array[mid] == value)
			return (mid);

		if (array[mid] > value)
		{
			end = mid - 1;
			mid = start + (end - start) / 2;
			length = end - start + 1;
			continue;
		}

		start = mid + 1;
		mid = start + (end - start) / 2;
		length = end - start + 1;
	}
	return (-1);
}

/**
 * print_array - prints array
 * @array: array to print
 * @start: where to start
 * @end: where to end
 *
 */

void print_array(int *array, int start, int end)
{
	int i;

	for (i = start; i < end; i++)
		printf("%d, ", array[i]);

	printf("%d\n", array[end]);
}
