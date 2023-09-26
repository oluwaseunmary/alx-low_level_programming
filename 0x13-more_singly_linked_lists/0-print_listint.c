#include "lists.h"
/**
 * print_listint - the element of the listint list
 * @h: the pointer to the list
 * 
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t node = 0;

	if (h == NULL)
		return (0); 
	while (h != NULL) {
		printf("%d\n", h->n);
		h = h->next;
		node++;
	}
	return (node);
}
