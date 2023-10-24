#include "main.h"

/**
 * rev_string -  reverses a string
 *
 * @s: pointer to the string
 *
 * Return: nothing
 */

void rev_string(char *s)
{
	int length = 0;
	int i;
	char tmp;

	while (s[length])
		length++;

	i = 0;
	length--;
	while (i < length / 2)
	{
		tmp = s[i];
		s[i] = s[length - i];
		s[length - i] = tmp;
		i++;
	}
}
