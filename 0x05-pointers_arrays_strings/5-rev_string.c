#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string passed to the function
 */
void rev_string(char *s)
{
	int l = 0;
	int i;

	while (s[l] != '\0')
	{
		l++;
	}
	for (i = l - 1; i >= 0; i--)
	{
		_putchar(s[l]);
	}
}
