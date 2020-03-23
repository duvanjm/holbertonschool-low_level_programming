#include "lists.h"

/**
 *add_nodeint_end - function
 *@head: double pointer to head
 *@n: variable
 *Return: head
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = NULL;
	listint_t *d;

	d = *head;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	if (*head == NULL)
	{
		*head = new;
		new->next = NULL;
		return (*head);
	}
	d = *head;
	while (d->next != NULL)
	{
		d = d->next;
	}
	d->next = new;
	new->next = NULL;
	return (*head);
}
