#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
  * clear_bit - returns the value of a bit at a given index
  * @n: val
  * @index: val
  * Return: unsigned integer if sucess if not 0
  */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int k;

	if (index > 63)
		return (-1);
	k = (*n >> index) & 1;
	if (index == 0)
		*n -= 1;
	else if (k)
		*n &= (0 << index);
	return (1);
}
