#include "holberton.h"
/**
 *puts_half - function
 *@str: function
 *Return: valve 0
 */
void puts_half(char *str)
{
int x;
int value;
int d;

	for (x = 0; str[x] != '\0'; x++)
	{
	}
	if (x % 2 == 0)
	{
		value = x / 2;
	}
	else
	{
		value = ((x - 1) / 2) + 1;
	}
	for (d = value; d < x; d++)
	{
		_putchar(str[d]);
	}
	_putchar('\n');
}
