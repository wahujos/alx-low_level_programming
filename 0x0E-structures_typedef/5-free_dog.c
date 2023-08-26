#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - free memory
 * @d: a pointer to the dog element
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		return;
	}
	free(d->owner);
	free(d->name);
	free(d);
}
