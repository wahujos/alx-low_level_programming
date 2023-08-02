#include <stdio.h>
#include "main.h"
/**
 * _puts_recursion - function that prints a
 * string followed by a new line
 * @s: pointer to the string we need to print
 */
void _puts_recursion(char *s)
{

	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	else
	{
	_putchar(*s);
	_puts_recursion(s + 1);
	}
}
