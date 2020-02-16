#include "holberton.h"
/**
 *print_square - show square
 *@size: variable
 *Return: valve 0
 */
void print_square(int size)
{
int a;
	while (size < 6)
	{
		a = 0;
		{
			while (a < 10)
			{
				_putchar(35);
				a++;
			}
		}
		_putchar('\n');
		size++;
	}
}
