#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
  * binary_to_uint - binary to unsigned int convertor
  * @b: binary data
  * Return: unsigned integer if sucess if not 0
  */
unsigned int binary_to_uint(const char *b)
{
	unsigned int x = 0;
	int size = 0, i = 0;

	if (!b)
		return (0);
	size = strlen(b);
	while (b[i])
	{
		if (b[i] == '0' || b[i] == '1')
			x += (b[i] - '0') << (size - i - 1);
		else
			return (0);
		i++;
	}
	return (x);
}
