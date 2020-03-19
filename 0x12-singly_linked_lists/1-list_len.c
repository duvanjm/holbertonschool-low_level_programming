#include "lists.h"
/**
  *print_list - function
  *@h: pointer
  *Return: size_t
  */
size_t list_len(const list_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
