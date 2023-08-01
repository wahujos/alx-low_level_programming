#include <stdio.h>

/**
 * _strpbrk -  function locates the first occurrence in the strings
 * @s: string
 * @accept: string to match
 * Return:a pointer to the byte in s or NULL otherwise
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int j = 0;

	for (i = 0; accept[i] != '\0'; i++)
	{
		for (j = 0; s[j] != '\0'; j++)
		{
			if (accept[i] == s[j])
			{
				return (&s[j]);
			}
		}
	}
	return (NULL);
}
