#include "holberton.h"
#include <stdlib.h>
/**
 *malloc_checked - function
 *Return: int
 *@b: variable
 */

void *malloc_checked(unsigned int b)
{
	unsigned int **d;

	d = malloc(b * sizeof(unsigned int *));
	if  (d == NULL)
	{
		exit(98);
	}
	return (d);
}
