#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: argument passed to the function.
 */
void puts_half(char *str)
{
	int length = 0;
	int n;
	int j;

	while (str[length] != '\0')
	{
		length++;
	}
	if (length % 2 == 0)
	{
		for (j = length / 2; j < length; j++)
		{
			_putchar(str[j]);
		}
	}
	else
	{
		for (n = (length - 1) / 2; n < length; n++)
		{
			_putchar(str[n]);
		}
	}
	_putchar('\n');
}
