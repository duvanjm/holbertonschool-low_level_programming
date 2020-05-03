#include "lists.h"

/**
 * insert_dnodeint_at_index - function that add a node in a give position
 * @h: double pointer
 * @idx: index
 * @n: node
 * Return: dlistint_t
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *aux = *h;
	unsigned int i = 0;

	if (*h == NULL)
		return (NULL);

	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}
	while (i < idx - 1)
	{
		i++;
		aux = aux->next;
	}
	if (aux->next == NULL)
	{
		return (add_dnodeint_end(h, n));
	}
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = aux->next;
	new->next->prev = new;
	aux->next = new;
	new->prev = aux;

	return (new);
}
