#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: number of parameters
 *
 * Return: sum
 */


int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list params;

	if (n == 0)
		return (0);

	va_start(params, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(params, int);
	}

	va_end(params);

	return (sum);
}
