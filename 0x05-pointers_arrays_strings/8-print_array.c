#include "holberton.h"
#include <stdio.h>
/**
 * print_array - function that prints an array
 * @a: array
 * @n: elemets to print in the array
 * Return: void
 **/
void print_array(int *a, int n)
{
	int i;

	for (i = 0; a[i] != '\0'; i++)
	{
		if (i == n - 1)
		{
			printf("%d", a[i]);
			break;
		}
		printf("%d, ", a[i]);
	}
	printf("\n");
}
