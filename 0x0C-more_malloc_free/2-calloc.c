#include <stdlib.h>
#include "holberton.h"
/**
 *_calloc - function
 *Return: pointer
 *@size: variable
 *@nmemb: variable
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *a;
	unsigned int i;

	if (size == 0 || nmemb == 0)
	{
		return (NULL);
	}
	a = malloc(nmemb * size);
	if (a == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		a[i] = 0;
	}
	free(a[i]);
	return (a);
	free(a);
}
