#include "main.h"

/**
 * print_alphabet - prints alphabets in lowercase followed by a new line.
 */
void print_alphabet(void)
{
	char c;

	for (c = 97; c <= 122; c++)
	{
		_putchar(c + 97);
	}
	_putchar('\n');
}
