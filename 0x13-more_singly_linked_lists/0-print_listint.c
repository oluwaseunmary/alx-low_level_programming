#include "lists.h"
#include <stdio.h>

/**
 * print_listint - this prints all the elements of a listint_t list.
 *
 * @h - is the head of the linked list node
 *
 * Return: this return the number of nodes
 *
 */
size_t print_listint(const listint_t *h);
{
size_t numcount = 0;

while(h != NULL)	
{
 printf("%d\n", h->n);
 h = h->next;
 numcount++;
}
return (numcount);
}
