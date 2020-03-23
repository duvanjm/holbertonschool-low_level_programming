#include "lists.h"

/**
 *free_listint2 - function
 *@head: pointer
 *Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *d = NULL;
	listint_t *p = NULL;

	if (head == NULL)
	{
		return;
	}
	d = *head;

	while (d != NULL)
	{
		p = d;
		d = d->next;
		free(p);
	}
	*head = NULL;
}
