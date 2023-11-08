#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * alloc_grid - creates 2 dimensional array of integers
 * @width: int width of array
 * @height: int height of array
 *
 * Return: a pointer to a 2 dimensional array of integers
  */

int **alloc_grid(int width, int height)
{
	int **two_dim_arr;
	int i, j;

	if (width < 1 || height < 1)
		return (NULL);


	two_dim_arr = malloc(sizeof(int *) * height);

	if (two_dim_arr)
	{
		for (i = 0; i < height; i++)
		{
			two_dim_arr[i] = malloc(sizeof(int) * width);

			if (!two_dim_arr[i])
			{
				while (i >= 0)
					free(two_dim_arr[i--]);

				return (NULL);
			}

			for (j = 0; j < width; j++)
				two_dim_arr[i][j] = 0;
		}

		return (two_dim_arr);
	}

	free(two_dim_arr);
	return (NULL);
}
