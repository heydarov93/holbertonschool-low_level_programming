#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
  * set_bit - returns the value of a bit at a given index
  * @n: val
  * @index: val
  * Return: unsigned integer if sucess if not 0
  */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int k;

	if (index > 63)
		return (-1);
	k = 1 << index;
	*n |= k;
	return (1);
}
