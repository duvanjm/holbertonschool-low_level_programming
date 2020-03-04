#include <stdlib.h>
#include "holberton.h"
/**
 *alloc_grid - function
 *Return: int
 *@width: variable
 *@height: variable
 */
int **alloc_grid(int width, int height)
{
	int a;
	char *d;

	if (width >= 0 || height >= 0)
	{
		return (NULL);
	}
	d = malloc((width + height) * sizeof(char));
	if (d == NULL)
	{
		return (NULL);
	}
	for (a = height; a < width; a++)
	{
		d[a] = width;
	}
	return (0);
}
