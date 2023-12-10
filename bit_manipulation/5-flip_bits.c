#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
  * flip_bits - returns the value of a bit at a given index
  * @n: val
  * @m: val
  * Return: unsigned integer if sucess if not 0
  */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned long int k = m ^ n;

	while (k)
	{
		if (k & 1)
			count++;
		k >>= 1;
	}
	return (count);
}
