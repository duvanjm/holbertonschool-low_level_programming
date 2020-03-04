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
	int i;
	int **d;

	if (width <= 0)
	{
		return (NULL);
	}
	if (height <= 0)
	{
		return (NULL);
	}
	d = malloc(height * sizeof(int *));
	if (!d)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		d[i] = malloc(width * sizeof(int));
		if (d[i] == NULL)
		{
		for (a = 0; a < height; a++)
		{
			free(d[a]);
		}
			free(d);
			return (NULL);
		}
	for (a = 0; a < height; a++)
	{
	d[i][a] = 0;
	}
	}
	return (d);
}
