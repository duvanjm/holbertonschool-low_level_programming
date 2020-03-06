#include "holberton.h"
#include <stdlib.h>
/**
 *_realloc - function
 *Return: pointer
 *@new_size: variable
 *@old_size: variable
 *@ptr: variable
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *a;
	unsigned int i;

	if (new_size == 0 || old_size == 0)
	{
		return (NULL);
	}
	a = malloc(old_size * new_size);
	if (a == NULL)
	{
		free(a);
		return (NULL);
	}

	for (i = 0; i < old_size * new_size; i++)
	{
		a[i] = 0;
	}
	return ((char *)ptr);
}
