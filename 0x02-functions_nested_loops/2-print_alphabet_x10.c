#include "main.h"

/**
 * print_alphbet_x10 - prints 10 times the alphabet in lower case,
 * followed by a new line
 *
 * Description: printing alphabets 10 times in lower cas:e
 */
void print_alphabet_x10(void)
{
	char ch;
	int i;

	i = 0;

	while (i < 10)
	{
		ch = 'a';
		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
		i++;
	}
}
