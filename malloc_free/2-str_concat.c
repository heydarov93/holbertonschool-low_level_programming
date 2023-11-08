#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatenates two strings
 * @s1: pointer to the char
 * @s2: poimter to the char
 *
 * Return: NULL on failure
  */

char *str_concat(char *s1, char *s2)
{
	char *new_str, *empty = "";
	unsigned int i = 0, sum_length, length1, length2;

	if (!s1)
		s1 = empty;

	if (!s2)
		s2 = empty;

	length1 = strlen(s1);
	length2 = strlen(s2);
	sum_length = length1 + length2;

	new_str = malloc(sizeof(char) * (sum_length + 1));

	if (new_str)
	{
		while (i < sum_length)
		{
			if (i < length1)
			{
				new_str[i] = s1[i];
				i++;
				continue;
			}

			new_str[i] = s2[i - length1];
			i++;
		}

		return (new_str);
	}

	return (NULL);
}
