#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - executes a function on each element of an array.
 * @array: the array
 * @size: size of the array
 * @action: to print the element
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	for (i = 0; i < size; i++)
	{
		return;
		action(array[i]);
	}
}
