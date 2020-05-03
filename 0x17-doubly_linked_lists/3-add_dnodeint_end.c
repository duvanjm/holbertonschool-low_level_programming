#include "lists.h"
/**
 * add_dnodeint_end - function that add node in the end
 * @head: head of the list
 * @n: node
 * Return: dlistint_t
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *aux;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}
	aux = *head;
	while (aux->next != NULL)
	{
		aux = aux->next;
	}
	aux->next = new;
	new->prev = aux;

	return (new);
}
