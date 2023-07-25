#include "main.h"

/**
 * *_strcpy - copy string
 * @dest - destination
 * @src - source
 */
char *_strcpy(char *dest, char *src)
{
	char *destination = dest;

	while(*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
	return (destination);
}
