#include "main.h"

/**
 *puts2 - prints every other character of a string
 *@str: - argument passed
 */
void puts2(char *str)
{
	int counter = 0;

	while (str[counter] != '\0')
	{
		_putchar(str[counter]);
		counter += 2;
	}
	_putchar('\n');
}

