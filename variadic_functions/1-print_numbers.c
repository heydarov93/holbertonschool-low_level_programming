#include <stdarg.h>
#include <stdio.h>
#include <string.h>

/**
 * print_numbers - prints numbers
 * @separator: points to const char
 * @n: number of args
 *
 * Return: nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list params;

	va_start(params, n);

	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
			printf("%d", va_arg(params, int));
		else
			printf("%d%s", va_arg(params, int), separator ? separator : "");
	}

	printf("\n");
}
