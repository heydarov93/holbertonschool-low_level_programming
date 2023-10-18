#include "main.h"
/**
 *times_table - prints the 9 times table, starting with 0.
 *
 *Return: nothing
 */

void times_table(void)
{
	int i, j, result;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			result = i * j;

			if (result >= 10)
			{
				_putchar(result / 10 + '0');
				_putchar(result % 10 + '0');
			}
			else
				_putchar(result + '0');

			if (j == 9)
			{
				_putchar('\n');
				continue;
			}

			if (i * (j + 1) >= 10)
			{
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
		}
	}
}
