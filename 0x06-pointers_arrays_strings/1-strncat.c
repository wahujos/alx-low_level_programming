#include "main.h"

/**
 * *_strncat - concatenates two strings.
 * @dest: destination string
 * @src: source string
 * @n: number of bytes to be concatinated from src
 * Return: pointer to resulting string.
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = 0;
	int src_len = 0;

	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}
	while (src[src_len] && src_len < n)
	{
		dest[dest_len] = src[src_len];
		dest_len++;
		src_len++;
	}
	dest[dest_len] = '\0';
	return (dest);
}
