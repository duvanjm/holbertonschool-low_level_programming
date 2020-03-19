#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *print_list - function
 *@h: pointer
 *Return: size_t
 */
size_t print_list(const list_t *h)
{
	int i = 0;

	if (h == NULL)
	{
		printf("[0] (nil)");
	}
	while (h != NULL)
	{
		i++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return(i);
}
