#include <stdio.h>

/**
 * _strstr - locates a substring
 * @haystack:  string we look for the subset
 * @needle: string we are looking for
 * Return: pointer to the beginning of the located string null otherwise.
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j = 0;

	for (i = 0; needle[i] != '\0'; i++)
	{
		for (j = 0; haystack[j] != '\0'; j++)
		{
			if (needle[i] == haystack[j])
			{
				return (&(haystack[j]));
			}
		}
	}
	return (NULL);
}

