#include "lists.h"
/**
  *free_list - function
  *@head: pointer
  *Return: void
  */
void free_list(list_t *head)
{
	list_t *d;

	if (head == NULL)
		return;

	while (head->next != NULL)
	{
		d = head->next;
		free(head->str);
		free(head);
		head = d;
	}
	free(head->str);
	free(head);
}
