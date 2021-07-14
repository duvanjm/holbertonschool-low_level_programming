#include "holberton.h"
#include <stdio.h>
/**
 * times_table - prints the 9 times table
 * Return: void
 **/

void times_table(void)
{
	int i = 0;
	int x = 0;

	for (i = 0; i <= 9; i++)
	{
		for (x = 0; x <= 9; x++)
		{
			_putchar(i * x / 10 + '0');
			_putchar(i * x % 10 + '0');
			if (x <= 8)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
