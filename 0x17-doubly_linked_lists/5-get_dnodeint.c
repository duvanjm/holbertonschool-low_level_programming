#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns the nth node of a dlistint_t linked list.
 * @head: head of the list (firts node)
 * @index: index
 * Return: returns the nth node of a dlistint_t linked list.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head != NULL)
	{
		if (i == index)
		{
			break;
		}
		i++;
		head = head->next;
	}

	return (head);
}
