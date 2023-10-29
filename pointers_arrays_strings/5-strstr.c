#include "main.h"
#include <string.h>
#include <stdbool.h>

/**
 * _strstr - locates a substring
 *
 * @haystack: pointer to char
 * @needle: pointer to char
 *
 * Return: pointer to the beginning of the located substring
 *		or NULL if the substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	char *nptr = NULL;
	int i, j;
	int length_needle = strlen(needle);
	bool is_match = false;

	for (i = 0; haystack[i] != '\0'; ++i)
	{
		if (haystack[i] == needle[0])
		{
			for (j = 1; j < length_needle; ++j)
			{
				if (haystack[j + i] != needle[j])
				{
					j = length_needle;
					is_match = false;
				}
				else
					is_match = true;
			}

			if (is_match)
				return (&haystack[i]);
		}
	}

	return (nptr);
}
