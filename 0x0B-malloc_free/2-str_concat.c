#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * *str_concat - function that concatenates two strings
 * @s1: pointer to string 1
 * @s2: pointer to string 2
 * Return: pointer to concatinated string, null on failure
 */
char *str_concat(char *s1, char *s2)
{
	int len1, len2, lensum;
	char *concat;
	int i, j;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	len1 = strlen(s1);
	len2 = strlen(s2);
	lensum = len1 + len2;
	concat = malloc(sizeof(char) * (lensum + 1));
	if (concat == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		concat[i] = s1[i];
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
		concat[i] = s2[j];
		i++;
	}
	concat[i] = '\0';
	return (concat);
}


