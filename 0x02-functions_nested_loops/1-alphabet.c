#include "main.h"

/**
 * print_alphabet - prints alphabets in lowercase followed by a new line.
 */
void print_alphabet(void)
{
	char c;

	for (c = 0; c <= 'z'; c++)
	{
		_putchar(c + '0');
	}
	_putchar('\n');
}
