#include <stdlib.h>
#include "holberton.h"
/**
 *create_array - function
 *Return: pointer
 *@size: variable
 *@c: variable
 */
char *create_array(unsigned int size, char c)
{
	unsigned int a;
	char *d;

	if (size == 0)
	{
		return (NULL);
	}
	d = malloc(size * sizeof(char));
	if (d == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < size; a++)
	{
		d[a] = c;
	}
	return (d);
}
