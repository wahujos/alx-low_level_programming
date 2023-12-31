#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * *_calloc - function that allocates memory for an array
 * @nmemb: number of elements to allocate memory
 * @size: size of each element
 * Return: pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *ptr;
	unsigned int i;
	char *ptrchar;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr = malloc(size * nmemb);
	if (ptr == NULL)
	{
		return (NULL);
	}
	ptrchar = (char *)ptr;
	for (i = 0; i < (nmemb * size); i++)
	{
		ptrchar[i] = 0;
	}
	return (ptr);
}
