#include <stdio.h>
#include "lists.h"
/**
 * list_len - length of the element in a list
 * @h: pointer to the list
 * Return: number of element in the list
 */
size_t list_len(const list_t *h)
{
	size_t element = 0;

	while (h != NULL)
	{
		h = h->next;
		element++;
	}
	return (element);
}
