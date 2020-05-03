#include "lists.h"

/**
 * delete_dnodeint_at_index - function that delete a node in a give position
 * @head: head of the list (firts node)
 * @index: index
 * Return: integer
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *node;
	unsigned int i;


	if (head == NULL || *head == NULL)
		return (-1);
	node = *head;
	if (index == 0)
	{
		*head = node->next;
		if (node->next != NULL)
		{
			node->next->prev = NULL;
		}
		return (1);
	}
	for (i = 0; i < index; i++)
	{
		if (node->next == NULL)
			return (-1);
		node = node->next;
	}
	node->prev->next = node->next;
	if (node->next != NULL)
		node->next->prev = node->prev;
	return (1);
}
