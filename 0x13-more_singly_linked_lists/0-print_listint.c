#include "lists.h"

/**
  *print_listint - function
  *@h: pointer
  *Return: size_t
  */
size_t print_listint(const listint_t *h)
{
	int i = 0;

	while (h != NULL)
	{

		printf("%d\n", h->n);

		h = h->next;
		i++;
	}
	return (i);
}
