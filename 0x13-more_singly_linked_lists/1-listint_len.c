#include "lists.h"

/**
 *listint_len - returns the number of elements in a linked lists
 *
 *@h:-head pointer of the linked list
 *
 *Return: number of element
 */
size_t listint_len(const listint_t *h)
{
 size_t numcount = 0;

 while (h)
 {
 numcount++;
 h = h->next;
 }

 return (numcount);
}
