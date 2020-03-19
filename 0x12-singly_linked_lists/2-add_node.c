#include "lists.h"
/**
  *print_list - function
  *@h: pointer
  *Return: size_t
  */
list_t *add_node(list_t **head, const char *str)
{
	list_t *node;
	int i;
	char *d;

	node = malloc(sizeof(list_t));
	if (node == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
	}
	d = strdup(str);
	node->str = d;
	node->len = i;
	node->next = *head;
	*head = node;

	return (node);
}
