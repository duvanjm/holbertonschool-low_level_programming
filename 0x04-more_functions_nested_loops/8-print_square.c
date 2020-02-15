#include "holberton.h"
/**
 *print_square - show square
 *@size: variable
 *Return: valve 0
 */
void print_square(int size)
{
	int space;
	int i;

		if (size <= 0)
		{
			_putchar('\n');
		}

		for (space = 0; space < size; space++)
		{
		for (i = space; i <= space; i++)
			{
				if (space == i)
					{
						_putchar(35);
					}
			}
		}

	_putchar('\n');
}
