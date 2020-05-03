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

	if (idx == 0)
	{
		return (NULL);
	}
	while (i < idx - 1)
	{
		i++;
		aux = aux->next;
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
