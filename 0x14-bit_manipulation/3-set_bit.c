#include "main.h"

/**
 * set_bit - sets the bit to 1
 * @n: pointer to the number to be changed
 * @index: index of the bit that is set to 1
 * Return: 1 if it worked, and -1 if it does not
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}

