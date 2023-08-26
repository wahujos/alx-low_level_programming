#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"
/**
 * new_dog - function that creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: Null if function fails else dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *another_dog;
	another_dog =(struct dog *)malloc(sizeof(struct dog));
	if(another_dog == NULL)
	{
		return (NULL);
	}
	another_dog->name = malloc(strlen(name) + 1);
	if(another_dog->name == NULL)
	{
		free(another_dog);
		return (NULL);
	}
	another_dog->owner = malloc(strlen(name) + 1);
	if(another_dog->owner == NULL)
	{
		free(another_dog->name);
		free(another_dog);
		return (NULL);
	}
	strcpy(another_dog->name, name);
	strcpy(another_dog->owner, owner);
	another_dog->age = age;
	return another_dog;
}
