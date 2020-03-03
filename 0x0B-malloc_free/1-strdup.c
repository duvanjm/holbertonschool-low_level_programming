#include <stdlib.h>
#include "holberton.h"
/**
 *_strdup - function
 *Return: pointer
 *@str: variable
 */
char *_strdup(char *str)
{
	int a;
	int i;
	char *d;

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)

	d = malloc(i * sizeof(char));

	if (d == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < i; a++)
	{
		d[a] = str[a];
	}
	return (d);
}
