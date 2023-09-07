#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - used to allocate memory using the malloc
 * @b: size of the memory
 * Return: pointer to new memory allocated
 */
void *malloc_checked(unsigned int b)
{
	char *outputs;

	outputs = malloc(b);
	if (outputs == NULL)
		exit(98);
	else
		return (outputs);
}
