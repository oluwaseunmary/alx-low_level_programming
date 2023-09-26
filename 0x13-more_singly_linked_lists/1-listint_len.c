#include "lists.h"
/**
 * listint_len - length of the element in the lis
 * @h: pointer to the list
 * Return: number of element in the list
 */
size_t listint_len(const listint_t *h)
{
	size_t node = 0;

	while (h != NULL)
	{
		h = h->next;
		node++;
	}
	return (node);
}
