#include "lists.h"
/**
 * add_nodeint - add a node to the element of the list
 * @head: pointer to the list
 * @n: new integer
 * Return: the address of the new element or NULL if failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));
	if (*head == NULL)
		newnode->next = NULL;
	else
		newnode->next = *head;
	newnode->n = n;
	*head = newnode;

	return (0);
}
