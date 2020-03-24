#include "lists.h"

/**
 *insert_nodeint_at_index - function
 *@head: pointer, beging of linked list
 *@idx: index
 *@n: variable
 *Return: NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *d = NULL;
	listint_t *node = NULL;

	if (head == NULL)
	{
		return (NULL);
	}
	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	node->next = NULL;
	d = *head;
	if (d == NULL)
	{
		*head = node;
		node->next = NULL;
		return (node);
	}
	if (idx == 0)
	{
		node->next = *head;
		*head = node;
		return (node);
	}
	while (i != (idx - 1))
	{
		d = d->next;
		i++;
		if (d == NULL)
		{
			free(node);
			return (NULL);
		}
	}
	node->next = d->next;
	d->next = node;
	return (node);
}
