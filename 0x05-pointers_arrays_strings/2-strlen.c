#include <stdio.h>

/**
 * _strlen - gets length of a string
 * @s: string passed to the function
 * Return: return length of the string.
 */
int _strlen(char *s)
{
	int l = 0;

	while (*s != '\0')
	{
		l++;
		s++;
	}
	return (l);
}
