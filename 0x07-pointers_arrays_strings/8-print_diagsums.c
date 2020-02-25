#include "holberton.h"
#include <stdio.h>
/**
 *print_diagsums - function
 *@a: variable
 *@size: variable
 *Return: NULL
 */
void print_diagsums(int *a, int size)
{
int x = size * size, s1 = 0, s2 = 0, i;

	for (i = 0; i < x; i = size + 1)
	{
		s1 += *a;
	}
	for (i = x; i >= 0; i = size - 1)
	{
		s2 += *a;
	}
	printf("%d, %d", s1, s2);
}
