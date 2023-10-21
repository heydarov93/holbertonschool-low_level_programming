#include "main.h"
/**
 *print_times_table - prints the n times table, starting with 0.
 *@n: int
 *Return: nothing
 */

void print_times_table(int n)
{
	int i, j, result;

	if (n > 15 || n < 0)
		return;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			result = i * j;
			if (result >= 100)
				_putchar(result / 100 + '0');
			if (result >= 10)
				_putchar(result / 10 % 10 + '0');

			_putchar(result % 10 + '0');

			if (j == n)
			{
				_putchar('\n');
				continue;
			}

			_putchar(',');
			_putchar(' ');

			if (result + i >= 100)
				continue;

			if (result + i >= 10)
			{
				_putchar(' ');
				continue;
			}
			_putchar(' ');
			_putchar(' ');

		}
	}
}
