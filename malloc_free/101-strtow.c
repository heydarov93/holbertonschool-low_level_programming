#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * create_int_arr - creates array of int
 * @str: original str in order to count it's words length
 * @str_length: length of the original str
 * @w_count: count of the words inside original str
 *
 *
 * Return: pointer to an array of int
 */

int *create_int_arr(char *str, int str_length, int w_count)
{
	int i, j, c;
	int *length_words;

	length_words = malloc(sizeof(int) * w_count);

	if (!length_words)
		return (NULL);

i = j = c = 0;
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

	return (length_words);
}

/**
 * create_str_arr - filles empty fileds of an array with str
 * @empty_arr: already created empty arr
 * @str: original str for split
 * @w_count: count of the words inside original str
 * @str_length: length of the original str
 *
 * Return: pointer to an array of strings (words)
 */

char **create_str_arr(char **empty_arr, char *str, int w_count, int str_length)
{
	int i, k, j, c = 0;
	int *length_words;

	length_words = create_int_arr(str, str_length, w_count);

	if (!length_words)
		return (NULL);

	for (i = 0; i < w_count; i++)
        {
                empty_arr[i] = malloc(sizeof(char) * length_words[i] + 1);

                if (empty_arr[i] == NULL)
                {
                        while (i >= 0)
                                free(empty_arr[i--]);

                        return (NULL);
                }

                k = 0;
                for (j = c; j < str_length; j++)
                {
                        if (str[j] != ' ')
                        {
                                empty_arr[i][k] = str[j];
                                if (str[j + 1] == ' ' || str[j + 1] == '\0')
                                        j = str_length;

                                k++;
                        }
                        c++;
                }
        }
        empty_arr[i] = NULL;
	return (empty_arr);
}
/**
 * strtow - splits a string into words
 * @str: string
 *
 * Return: pointer to an array of strings (words)
 */

char **strtow(char *str)
{
	int i, str_length, w_count;
	char **str_arr, **final_arr;

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

	if (!str_arr)
	return (NULL);

	final_arr = create_str_arr(str_arr, str, w_count, str_length);

	if (final_arr == NULL)
		return (NULL);

	return (final_arr);
}
