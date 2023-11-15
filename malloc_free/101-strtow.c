#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * strtow - splits a string into words
 * @str: string
 *
 * Return: pointer to an array of strings (words)
 */

char **strtow(char *str)
{
	int i, j, k, c = 0, str_length, w_count;
	char **str_arr;
	int *length_words;

	str_length = strlen(str);

	if (str == NULL || str_length == 0)
		return (NULL);

	for (i = 1; i < str_length; i++)
	{
		if (str[i] == ' ' && str[i - 1] != ' ')
			w_count++;

		if (str[i] != ' ' && str[i + 1] == '\0')
			w_count++;
	}

	str_arr = malloc(sizeof(char *) * (w_count + 1));
	length_words = malloc(sizeof(int) * w_count);

	if (!str_arr || !length_words)
	return (NULL);

	i = 0;
	j = 0;
	while (j < str_length)
	{
		if (str[j] != ' ')
		{
			c++;

			if (str[j + 1] == ' ' || str[j + 1] == '\0')
			{
				length_words[i] = c;
				c = 0;
				i++;
			}
		}
		j++;
	}

	c = 0;
	for (i = 0; i < w_count; i++)
	{
		str_arr[i] = malloc(sizeof(char) * length_words[i] + 1);

		if (str_arr[i] == NULL)
		{
			while (i >= 0)
				free(str_arr[i--]);

			return (NULL);
		}

		k = 0;
		for (j = c; j < str_length; j++)
		{
			if (str[j] != ' ')
			{
				str_arr[i][k] = str[j];
				if (str[j + 1] == ' ' || str[j + 1] == '\0')
					j = str_length;

				k++;
			}
			c++;
		}
	}
	str_arr[i] = NULL;
	return (str_arr);
}
