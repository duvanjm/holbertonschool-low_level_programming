#include "lists.h"

/**
 *pop_listint - function
 *@head: pointer
 *Return: void
 */
int pop_listint(listint_t **head)
{
	int i;
	listint_t *d;

	if (*head == NULL)
	{
		return (0);
	}

	d = *head;
	i = d->n;
	*head = d->next;

	free(d);

	return (i);
}
