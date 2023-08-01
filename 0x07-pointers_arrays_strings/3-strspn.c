#include <stdio.h>

/**
 * _strspn - gets the length of a prefix substring
 * @s: intial string
 * @accept: the string we aer looking for being prefixed in s
 * Return: number of bytes in the initial segment of s
 *  which consist only of bytes from accept
 */
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
