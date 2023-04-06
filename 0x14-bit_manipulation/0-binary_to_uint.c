#include "main.h"
/**
 * binary_to_unit - converts a binary number to an unsigned int
 * @b:the binary number
 *
 * Return: the unsigned int
 */
unsigned int binary_to_unit(const char *b)
{
	int s;
	unsigned int dec_val = 0;

	if (!b)
		return (0);
	for (s = 0; b[s]; s++)
	{
		if (b[s] < '0' || b[s] > '1')
			return (0);
		dec_val = 2 * dec_val + (b[s] - '0');
	}
	return (dec_val);
}

