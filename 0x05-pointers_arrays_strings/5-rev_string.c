#include "holberton.h"
/**
 *rev_string - function
 *Return: valve 0
 *@s: variable
 */
void rev_string(char *s)
{
int a;
int d;
int i;
char aux[1024];
int m = 0;

	a = 0;
	while (s[a] != '\0')
	{
		a++;
	}
	a--;
	for (d = a; d > -1; d--)
	{
		aux[m] = s[d];
		m++;
	}
	for (i = 0; i < a + 1; i++)
	{
		s[i] = aux[i];
	}
}
