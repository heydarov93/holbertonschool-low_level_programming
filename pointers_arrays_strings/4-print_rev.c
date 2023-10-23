#include "main.h"

/**
 * print_rev -  prints a string, in reverse, followed by a new line
 *
 * @s: pointer to the string
 *
 * Return: nothing
 */

void print_rev(char *s)
{
	int length = 0;
	int dec = *s;

	while (dec)
	{
		length++;
		dec = *(s + length);
	}

	dec = *s;

	while (dec)
	{

		length--;
		dec = *(s + length);
		_putchar(dec);
	}

	_putchar('\n');
}
