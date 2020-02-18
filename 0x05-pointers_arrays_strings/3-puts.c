#include "holberton.h"
/**
 *_puts - function
 *Return: valve 0
 *@str: variable
 */
void _puts(char *str)
{
int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
