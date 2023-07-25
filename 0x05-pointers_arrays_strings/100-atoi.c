#include "main.h"

/**
 * _atoi - converts string to an integer
 * @s: string we need to convert to interger
 */
int _atoi(char *s)
{
	int result = 0;
	int sign = 1;
	int index = 0;

	if (s[0] == '-')
	{
		sign = -1;
		index++;
	}
	for (;s[index] != '\0'; ++index)
	{
		result = result * 10 + s[index] - '0';
	}
	return (result * sign);
}
