#include "holberton.h"
/**
 *puts_half - function
 *@str: function
 *Return: valve 0
 */
void puts_half(char *str)
{
int x;

	for (x = 5; str[x] != '\0'; x++)
	{
		_putchar(str[x]);
	}
	_putchar('\n');
}
