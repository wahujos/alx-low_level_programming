#include <stdio.h>

/**
 * _strspn - gets the length of a prefix substring
 * @s: intial string
 * @accept: the string we aer looking for being prefixed in s
 * Return: number of bytes in the initial segment of s
 *  which consist only of bytes from accept
 */
/**
unsigned int _strspn(char *s, char *accept)
{
	int len = 0;
	unsigned int i = 0;

	while (s[i] == accept[i])
	{
		len = len + 1;
		i++;
	}
	return (len);
}
*/
unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int j = 0;
	int len = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j=0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
			len = len + 1;
			continue;
			}
		}
	}
	return (len);
}

