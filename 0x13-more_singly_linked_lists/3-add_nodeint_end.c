#include "lists.h"
/**
 * add_nodeint_end - add a node at the end of the element
 * @head: a pointer to the head list
 * @n: new node to the list
 * Return: address of the element and NULL if failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newno;
	listint_t *tempo;

	(void) tempo;

	newno = malloc(sizeof(listint_t));
	if (newno == NULL)
		return (NULL);
	newno->n = n;
	newno->next = NULL;
	tempo = *head;
	if (*head == NULL)
	{
		*head = newno;
	}
	else
	{
		while (tempo->next != NULL)
		{
			tempo = tempo->next;
		}
		tempo->next = newno;
	}
	return (*head);
}
