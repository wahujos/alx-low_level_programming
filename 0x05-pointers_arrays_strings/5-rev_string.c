#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string passed to the function
 */
void rev_string(char *s)
{
	int i;
	int j;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	i--;
	j = 0;
	while (i >= j)
	{
		char temp = s[j];

		s[j] = s[i];
		s[i] = temp;
		i--;
		j++;
	}
}
