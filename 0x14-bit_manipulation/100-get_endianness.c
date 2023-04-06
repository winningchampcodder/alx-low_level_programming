#include "main.h"
/**
 * get_endianness - checks the endianness
 * Return: 0 for a big endian and 1 for a little endian
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}

