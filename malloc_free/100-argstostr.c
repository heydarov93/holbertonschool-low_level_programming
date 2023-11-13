#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - concatenates all args of the program
 * @ac: argument count
 * @av: argument values as an array
 *
 * Return: NULL on failure
  */

char *argstostr(int ac, char **av)
{
	char *new_str;
	int i, j, dec_sum, sum_length = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		sum_length += strlen(av[i]) + 1;
	}

	new_str = malloc(sizeof(char) * (sum_length + 1));
	dec_sum = sum_length;

	if (new_str)
	{
		for (i = 0; i < ac; i++)
		{
			for (j = 0; av[i][j] != '\0'; j++)
			{
				new_str[sum_length - (dec_sum--)] = av[i][j];

				if (av[i][j + 1] == '\0')
					new_str[sum_length - (dec_sum--)] = '\n';
			}
		}

		return (new_str);
	}

	free(new_str);
	return (NULL);
}
