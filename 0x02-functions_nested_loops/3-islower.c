#include "main.h"
#include <ctype.h>
/**
 * _islower - checks for lowercase characters
 *@c: character to check.
 * Return: 1 when lowercase othewise 0
 */
int _islower(int c)
{
	if (islower(c) > 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
