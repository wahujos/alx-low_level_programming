#include "main.h"

/**
 * print_alphabet - prints alphabets in lowercase followed by a new line.
 */
void print_alphabet(void)
{
	char c = 'a'

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
