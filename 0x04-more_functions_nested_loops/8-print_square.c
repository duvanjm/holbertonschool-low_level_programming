#include "holberton.h"
/**
 *print_square - show square
 *@size: variable
 *Return: valve 0
 */
void print_square(int size)
{
int a;
int i;

if (size <= 0)
{
_putchar('\n');
}
	for (a = 0; a < size; a++)
	{
		for (i = 1; i <= size; i++)
			{
				if (size == size)
				{
					_putchar(35);
				}
				else
					{
						_putchar(35);
					}
			}
		_putchar('\n');
	}
}
