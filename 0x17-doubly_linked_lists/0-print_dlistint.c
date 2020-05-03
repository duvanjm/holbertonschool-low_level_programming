#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dlistint - function
 * @h: pointer to firts node of a list
 * Return: size_t
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		it++;
	}
	return (i);
}
