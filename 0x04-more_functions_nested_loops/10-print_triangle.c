#include "holberton.h"
/**
 * print_triangle - function that print a triangle
 * @size: size of the triangle
 * Return: void
 **/
void print_triangle(int size)
{
	int i;
	int j;
	int x;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			x = size - i - 1;
			if (j < x)
			{
				_putchar(' ');
			}
			else
			{
				_putchar('#');
			}
		}
		_putchar('\n');
	}
}
