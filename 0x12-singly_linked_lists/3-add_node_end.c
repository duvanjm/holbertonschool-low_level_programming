#include "lists.h"

/**
 *add_node_end - adds a new node at the end of a list_t list.
 *@head: pointer to head.
 *@str: string.
 *Return: the address of the new element, or NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	char *d;
	int i;
	list_t *node  = NULL, *a = *head;

	if (head == NULL)
	{
		return (NULL);
	}

	node = malloc(sizeof(list_t));
	if (node == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
	}

	d = strdup(str);
	node->str = d;
	node->len = i;
	node->next = NULL;
	if (*head == NULL)
	{
		*head = node;
		return (*head);
	}
	while (a->next != NULL)
	{
		a = a->next;
	}
	a->next = node;
	return (*head);
}
