#include "lists.h"

/**
 * free_dlistint - function that free the list
 * @head: head of the list (first node)
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *i;

	while (head != NULL)
	{
		i = head;
		head = head->next;
		free(i);
	}
}
