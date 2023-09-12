#include <stdio.h>
#include "dog.h"
/**
 * init_dog - initializes the dog
 * @d: pointer to dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of the owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->owner = owner;
		d->age = age;
	}
}
