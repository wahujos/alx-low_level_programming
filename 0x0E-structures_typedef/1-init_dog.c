#include "dog.h"
/**
 * init_dog - initializes a variable of type struct
 * @d:  pointer to the dog struct
 * @name: pointer to the name 
 * @age: float age of dog
 * @owner: pointer to the owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}	

