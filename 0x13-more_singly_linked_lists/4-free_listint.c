#include "lists.h"

/**
 *free_listint - function
 *@head: pointer
 *Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *d;

	if (head == NULL)
		return;

	while (head != NULL)
	{
		d = head;
		head = head->next;
		free(d);
	}
}
