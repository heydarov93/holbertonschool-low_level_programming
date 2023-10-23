#include "main.h"

/**
 * _puts - prints a string, followed by a new line, to stdout
 *
 * @str: pointer to the string
 *
 * Return: nothing
 */

void _puts(char *str)
{
	int i = 1;
	int dec = *str;

	while (dec)
	{
		_putchar(dec);
		dec = *(str + i);
		i++;
	}

	_putchar('\n');
}
