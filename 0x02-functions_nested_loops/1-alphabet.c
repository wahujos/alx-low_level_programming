#include "main.h"

/**
 * main - prints alphabets in lowercase followed by a new line.
 */
int main(void)
{
	char c;

	for (c = 0; c <= 'z'; c++)
	{
		_putchar(c + '0');
	}
	_putchar('\n');
	return (0);
}
