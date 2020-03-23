#include "lists.h"
/**
 *sum_listint - function
 *@head: pointer
 *Return: void
 */
int sum_listint(listint_t *head)
{
	int i = 0;

	if (head == NULL)
	{
		return (0);
	}
	while (head != NULL)
	{
		i += head->n;
		head = head->next;
	}
	return (i);
}
