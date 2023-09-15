#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a function on each element of an array.
 * @array: the array
 * @size: size of the array
 * @action: to print the element
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		return;
		action(array[i]);
	}
}
