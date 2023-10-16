#include <stdio.h>

/**
  *main - prints two pairs of two-digit numbers
  *Return: 0
 */

int main(void)
{
	int n, n2;

	for (n = 0; n <= 99; n++)
	{
		for (n2 = n + 1; n2 <= 99; n2++)
		{
			putchar((n / 10) + '0');
			putchar((n % 10) + '0');
			putchar(' ');
			putchar((n2 / 10) + '0');
			putchar((n2 % 10) + '0');

			if (n < 98 || n2 < 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
