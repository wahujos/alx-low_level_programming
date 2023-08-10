#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
 * *string_nconcat - function concatenates two strings
 * @s1: pointer to string one
 * @s2: pointer to string two
 * @n: unsigned integer
 * Return: pointer to the newly allocated space in memory null otherwise
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int length;
	int len_s1 = 0;
	unsigned int len_s2 = 0;
	char *ptr;
	int k = 0;
	int j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len_s1 = strlen(s1);
	len_s2 = strlen(s2);
	if (n >= len_s2)
		length = len_s1 + len_s2 + 1;
	else
		length = len_s1 + n + 1;
	ptr = malloc(sizeof(char) * length);
	if (ptr == NULL)
		return (NULL);
	for (j = 0; j < len_s1; j++)
	{
		ptr[k] = s1[j];
		k++;
	}
	for (j = 0; j < (length - len_s1 - 1); j++)
	{
		ptr[k] = s2[j];
		k++;
	}
	ptr[k] = '\0';
	return (ptr);
}
