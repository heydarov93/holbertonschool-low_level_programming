#include "main.h"

/**
 * more_numbers -  prints 10 times the numbers, from 0 to 14
 *
 * Return: nothing
 *
 */

void more_numbers(void)
{
	int row = 0;
	int n = 0;
	int i = 0;

	for (; row < 10; row++)
	{
		while (n < 15)
		{
			if (n > 9)
			{
				if (n == 10)
					i = 0;

				_putchar(n / 10 + '0');
			}

			_putchar(i + '0');
			i++;
			n++;
		}

		n = i = 0;
		_putchar('\n');
	}

}
