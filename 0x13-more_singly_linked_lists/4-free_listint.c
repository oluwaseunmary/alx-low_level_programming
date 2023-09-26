#include "lists.h"
/**
 * free_listint - free a linked list
 * @head: pointer to the list
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *tempo;

	while ((tempo = head) != NULL)
	{
		head = head->next;
		free(tempo);
	}
}
