#include "main.h"
#include <ctype.h>

/**
 * _isupper - checks for uppercase character
 * @c: - character passed for checking
 * Return: 1 if c is uppercase 0 otherwise
 */
int _isupper(int c)
{
	if (isupper(c) > 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
