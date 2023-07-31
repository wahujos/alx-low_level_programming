#include <stdio.h>

/**
 * *_memset - fills memory with a constant byte
 * @b: the constant byte used to fill the memory area.
 * @s: a pointer to some memory area
 * @n: number of bytes to be filled in in memory
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
