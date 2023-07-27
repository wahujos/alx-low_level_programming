#include "main.h"

/**
 * *_strcat - concatenates two strings
 * @src: Source string
 * @dest: destination string
 * Return: Pointer to the resulting string
 */
char *_strcat(char *dest, char *src)
{
	int des_len = 0;
	int i;

	while (dest[des_len] != '\0')
	{
		des_len++;
	}
	for (i = 0; src[i] != '\0'; ++i)
	{
		dest[des_len + 1] = src[i];
	}
	dest[des_len + i] = '\0';
	return (dest);
}

