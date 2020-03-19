#include "lists.h"
/**
  *free_list - function
  *@head: pointer
  *Return: void
  */
void free_list(list_t *head)
{
	while (head)
	{
		free(head);
		
	}
}
