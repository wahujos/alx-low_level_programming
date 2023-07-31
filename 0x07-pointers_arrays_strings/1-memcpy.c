#include <stdio.h>

/**
 * *_memcpy - copies memory area
 * @dest: memory area destination
 * @src: memory area source
 * @n: number of bytes to be copied.
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
