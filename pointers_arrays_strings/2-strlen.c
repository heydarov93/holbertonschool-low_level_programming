#include "main.h"

/**
 * _strlen -  returns the length of a string
 *
 * @s: pointer to the string
 *
 * Return: int (the length of string)
 */

int _strlen(char *s)
{
	int i = 1, sum = 0;
	int dec = *s;

	while (dec)
	{
		sum++;
		dec = *(s + i);
		i++;
	}
	return (sum);
}
