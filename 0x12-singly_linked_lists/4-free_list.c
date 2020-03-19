#include "lists.h"
/**
  *print_list - function
  *@h: pointer
  *Return: size_t
  */
void free_list(list_t *head)
{
	int i;

	for (i = 0; head[i] != NULL; i++)
	{
		free(head);
	}
	head->head = next;
}
