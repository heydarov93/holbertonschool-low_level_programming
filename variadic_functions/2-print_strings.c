#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints strings
 * @separator: separator string between strings
 * @n: number of args
 *
 * Return: nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	char *str;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char*);

		if (i == n - 1)
			printf("%s", str ? str : "(nil)");
		else
			printf("%s%s", str ? str : "(nil)", separator ? separator : "");
	}
	printf("\n");
}
