#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0 if Success
 *
 **/

int main(void)
{
	int i, n = 1024;
	int sum = 0;

	for (i = 3; i < n; i += 3)
	{
		sum += i;

		if ((i - 1) % 5 == 0)
		{
			sum += (i - 1);
			continue;
		}

		if (i + 1 != n && (i + 1) % 5 == 0)
		{
			sum += (i + 1);
			continue;
		}
	}
	printf("%d\n", sum);
	return (0);
}
