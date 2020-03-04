#include "holberton.h"
#include <stdlib.h>
/**
 * strtow - function
 * @str: pointers
 * Return: value
 */
char **strtow(char *str)
{
	int i;
	char *a;
	int j;
	int e;

	if (str == NULL)
	{
		return (NULL);
	}
	/**if (str == "")*/
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
	}
	a = malloc((i + 1) * sizeof(char));
	if (a == NULL)
	{
		return (NULL);
	}
	for (j = 0; j < i; j++)
	{
		a[j] = str[j];
	}
	for (e = 0; e < i; e++)
	{
		a[e + j] = str[j] + str[e];
	}
	a[e + j] = '\0';
	return (0);
	free(a);
}
