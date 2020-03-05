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
		free(a);
		return (NULL);
	}

	for (i = 0; i < size * nmemb; i++)
	{
		a[i] = 0;
	}
	return (a);
}
