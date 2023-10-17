#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet in lowercase but 10 time
 *
 *Return: nothing
 */

void print_alphabet_x10(void)
{
	char ch = 'a';
	int i = 0;

	while (i < 10)
	{
		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}

		_putchar('\n');
		ch = 'a';
		i++;
	}

}
