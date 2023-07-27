#include "main.h"

/**
 * *string_toupper - Function that changes all lowercase letters to uppercase.
 * @ptr: - pointer to the string
 * Returns: always 0
 */
char *string_toupper(char *ptr)
{
	int i;

	for (i = 0; ptr[i] != '\0'; i++)
	{
		if(ptr[i] >= 'a' && ptr[i] <= 'z')
		{
			ptr[i] = ptr[i] - ('a' -'A');
		}
	}
	return (ptr);
}

