#include "lists.h"

/**
 *listint_len - function
 *@h: pointer
 *Return: size_t
 */
size_t listint_len(const listint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
