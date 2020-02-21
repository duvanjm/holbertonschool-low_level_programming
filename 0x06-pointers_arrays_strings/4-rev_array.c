#include "holberton.h"
/**
 *reverse_array - function
 *Return: valve 0
 *@a: variable
 *@n: variable
 */
void reverse_array(int *a, int n)
{
int c;

	c = 0;
	while (a[c] != -1)
	{
		c--;
	}
	n = c;
	while (a[n] != '\0')
	{
		n--;
	}
}
