#include "main.h"

/**
 * more_numbers - prints 10 times the numbers from 0 to 14
 * followed by  new line
 */
void more_numbers(void)
{
	int s, r;

	for (s = 0; s < 10; s++)
	{
		for (r = 0; r < 15; r++)
		{
			if (r >= 10)
				_putchar(r / 10 + '0');
			_putchar(r % 10 + '0');
		}
		_putchar('\n');
	}
}
