#include "holberton.h"
#include <stdlib.h>
/**
 *string_nconcat - function
 *Return: int
 *@s1: variable
 *@s2: variable
 *@n: variable
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s, i, e, x, j, m;
	char *a;

	if (s1 == '\0')
	{
		s1 = "";
	}
	if (s2 == '\0')
	{
		s2 = "";
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
	}
	for (x = 0; s2[x] != '\0'; x++)
	{
		if (n >= x)
		s = x;
	}
	a = malloc((i + s + 1) * sizeof(char));
	if (a == NULL)
	{
		return (NULL);
	}
	for (j = 0; j < i; j++)
	{
		a[j] = s1[j];
	}
	m = 0;
	for (e = 0; e < n; e++)
	{
		a[e + j] = s2[m];
		m++;
	}
	a[e + j] = '\0';
	return (a);
}
