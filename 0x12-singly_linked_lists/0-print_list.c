#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints the element of the list_t list
 * @h: pointer to the list
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t element = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		element++;
	}
	return (element);
}
