#include "holberton.h"
#include <stdlib.h>
/**
 *array_range - function
 *Return: pointer
 *@min: variable
 *@max: variable
 */
int *array_range(int min, int max)
{
	int *d;
	int i = 0;
	int a;

	if (min > max)
	{
		return (NULL);
	}

	d = malloc((max - min + 1) * sizeof(int));
		if (d == NULL)
		{
			return (NULL);
		}
	for (a = min; a <= max; a++)
	{
		d[i] = a;
		i++;
	}
	return (d);
}
