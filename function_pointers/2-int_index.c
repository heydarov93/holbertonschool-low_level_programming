/**
 * int_index - searches for an integer
 * @array: given array to check
 * @size: size of an array
 * @cmp: callback function to compare
 *
 * Return: index of the first element for which the cmp
 * function does not return 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) > 0)
				return (i);
		}
	}

	return (-1);
}
