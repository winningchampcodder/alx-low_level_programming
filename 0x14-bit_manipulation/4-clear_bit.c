#include "main.h"
/**
 * clear_bit - sets the value a given bit to 1
 * @n: points the number to be changed
 * @index: index of the bit to be cleared
 *
 * Return: 1 for success and -1 for failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int m;

	if (index > 63)
		return (-1);

	m = 1 << index;

	if (*n & m)
		*n ^= m;

	return (1);
}

