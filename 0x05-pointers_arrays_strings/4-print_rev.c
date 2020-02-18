#include "holberton.h"
/**
 *print_rev - function
 *Return: valve 0
 *@s: variable
 */
void print_rev(char *s)
{
int d;

		for (d = 62; s[d] != '\0'; d--)
		{
			_putchar(s[d]);
		}
	_putchar('\n');
}
