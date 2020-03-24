#include "lists.h"

/**
 *delete_nodeint_at_index - function
 *@head: pointer, beging of linked list
 *@index: index
 *Return: NULL
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *d = *head;
	listint_t *p;
	unsigned int i =  0;

	if (head  == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = d->next;
		free(d);
		return (1);
	}
	while (i != (index - 1))
	{
		d = d->next;
		i++;
		if (d == NULL)
			return (-1);
	}
	p = d->next;
	d->next = p->next;
	free(p);
	return (1);
}
