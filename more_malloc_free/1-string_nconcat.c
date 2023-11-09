#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: pointer to the char
 * @s2: poimter to the char
 * @n: unsigned int
 *
 * Return: NULL on failure
  */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new_str;
	unsigned int i = 0, sum_length, length1, length2;

	if (!s1)
		s1 = "";

	if (!s2)
		s2 = "";

	length1 = strlen(s1);
	length2 = strlen(s2);

	if (n >= length2)
		sum_length = length1 + length2;
	else
		sum_length = length1 + n;

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
