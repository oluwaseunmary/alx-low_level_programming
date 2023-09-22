#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * add_node - adds a new node at the begining
 * @head: the head of the nodes
 * @str: string to node
 * Return:address of new element if failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newno;
	unsigned int i, increment = 0;

	newno = malloc(sizeof(list_t));
	if (newno == NULL)
		return (NULL);
	newno->str = strdup(str);
	for (i = 0; str[i] != '\0'; i++)
		increment++;
	newno->len = increment;
	newno->next = *head;
	*head = newno;

	return (newno);
}
