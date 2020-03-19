#include "lists.h"
/**
 *print_list - function
 *@h: pointer
 *Return: size_t
 */
size_t print_list(const list_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		if (str == NULL)
		{
			printf("[0] (nil)");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->next);
		}
		h = h->next;
		i++;
	}
	return(i);
}
