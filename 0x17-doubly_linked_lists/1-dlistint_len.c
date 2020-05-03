#include "lists.h"

/**
 * print_dlistint - function
 * @h: pointer to firts node of a list
 * Return: size_t
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}

	return (i);
}
