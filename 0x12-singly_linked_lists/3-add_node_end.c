#include "lists.h"
/**
  *add_node_end - function
  *@head: double pointer
  *@str: pointer
  *Return: list_t
  */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *d;
	list_t *node;

	d = *head;
	
	if (head == NULL)
	{
		return (NULL);
	}
	node = newnode(str);
	if (node == NULL)
	{
		return (NULL);
	}
	if (*head == NULL)
	{
		*head = node;
		return (*head);
	}
	while (d->next != NULL)
	{
		d = d->next;
	}
	d->next = node;
	return (*head);
}


/**
  *newnode - function
  *@str: pointer
  *Return: pointer node
  */

list_t *newnode(const char *str)
{
	list_t *node;

	node = malloc(sizeof(list_t));

	if (node == NULL)
	{
		return (NULL);
	}

	node->str = strdup(str);
	node->len = lenght(str);
	node->next = NULL;
	return (node);
}

/**
  *lenght - function
  *@str: pointer
  *Return: int
  */

int lenght(const char *str)
{
	int i;

	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
