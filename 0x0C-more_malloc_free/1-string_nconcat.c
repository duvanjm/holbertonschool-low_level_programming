#include "holberton.h"
#include <stdlib.h>
/**
 *free_grid - function
 *Return: int
 *@grid: variable
 *@height: variable
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, e, x, j, d;
	char *a;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
	}
	for (x = 0; s2[x] != '\0'; x++)
	{
		if (x < n)
		{
			d++;
		}
	}
	a = malloc((i + d) * sizeof(char) + 1);
	if (a == NULL)
	{
		return (NULL);
	}
	for (j = 0; j < i; j++)
	{
		a[j] = s1[j];
	}
	for (e = 0; e < x; e++)
	{
		a[e + j] = s1[j] + s2[e];
	}
	a[e + j] = '\0';
	return (a);
}
