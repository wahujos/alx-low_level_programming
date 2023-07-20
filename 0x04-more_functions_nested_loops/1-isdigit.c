#include <ctype.h>
#include "main.h"

/**
 * _isdigit - checks for a digit
 * @c: The argument passed for checking
 * Return: 1 if a digit 0 otherwise
 */
int _isdigit(int c)
{
	if (isdigit(c) > 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
