#include "main.h"

/**
 * _islower - check if char is lower case
 * @c:P is the char to be checked
 * Return: 1 if char is lower case, otherwise 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
