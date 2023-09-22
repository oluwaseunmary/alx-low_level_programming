#include "lists.h"
#include <stdio.h>

/**
 * add_node_end - add a node to the end
 * @head: pointer to the first element
 * @str: string to print
 * Return: address of the new node if failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newno, *actualnode;
	unsigned int i, increment = 0;

	newno = malloc(sizeof(list_t));
	if (newno == NULL)
		return (NULL);
	newno->str = strdup(str);
	for (i = 0; str[i] != '\0'; i++)
		increment++;
	newno->len = increment;
	newno->next = NULL;
	actualnode = *head;

	if (actualnode == NULL)
		*head = newno;
	else
	{
		while (actualnode->next != NULL)
			actualnode = actualnode->next;
		actualnode->next = newno;
	}
	return (newno);
}
