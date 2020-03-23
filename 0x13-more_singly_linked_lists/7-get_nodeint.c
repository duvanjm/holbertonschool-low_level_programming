#include "lists.h"

/**
 *get_nodeint_at_index - function
 *@head: pointer, beging of linked list
 *@index: index
 *Return: NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *d;
	unsigned int i = 0;

	if (head == NULL)
	{
		return (NULL);
	}
	while (head != NULL)
	{
		if (index == i)
		{
			d = head;
			return (d);
		}
		i++;
		head = head->next;
	}
	return (NULL);
}
