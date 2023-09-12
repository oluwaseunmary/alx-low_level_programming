#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - create a new dog
 * @name:name of dog
 * @age: age of the dog
 * @owner: owner
 * Returm: new_dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *bndog;
	int len1, len2;

	len1 = _strlen(name);
	len2 = _strlen(owner);

	bndog = malloc(sizeof(dog_t));
	if (bndog == NULL)
		return (NULL);
	bndog->name = malloc(sizeof(char) * (len1 + 1));
	if (bndog->name == NULL)
	{
		free(bndog);
		return (NULL);
	}
	bndog->owner = malloc(sizeof(char) * (len2 + 1));
	if (bndog->owner == NULL)
	{
		free(bndog->name);
		free(bndog);
		return (NULL);
	}
	_strcpy(bndog->name, name);
	_strcpy(bndog->owner, owner);
	bndog->age = age;
	return (bndog);
}
