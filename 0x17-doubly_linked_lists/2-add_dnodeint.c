#include "lists.h"

/**
 * add_dnodeint - fuction that add a new node
 * @head: head of the list
 * @n: new node
 * Return: dlistint_t
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->n = n;
	new->prev = NULL;
	new->next = *head;
	*head = new;

	if (new->next != NULL)
	{
		(new->next)->prev = new;
	}

	return (new);
}
