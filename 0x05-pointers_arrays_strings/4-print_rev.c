#include "main.h"

/**
 * print_rev - print reverse string
 * @s: - string passed to function
 */
void print_rev(char *s)
{
	int length = 0;
	int count;

	while (s[length] != '\0')
	{
		length++;
	}
	for (count = length - 1; count >= 0; count--)
	{
	_putchar(s[count]);
	}
_putchar('\n');
}
