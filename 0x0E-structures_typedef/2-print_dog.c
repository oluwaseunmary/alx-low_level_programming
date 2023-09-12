#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * print_dog - prinst dog details
 * @d: dog to print
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", (d->name) ? d->name) : "(nil)");
		printf("Age: %f\n", (d->age) : 0);
		printf("owner: %s\n. (d->owner) ? d->owner) : "(nil)");
	}
}
