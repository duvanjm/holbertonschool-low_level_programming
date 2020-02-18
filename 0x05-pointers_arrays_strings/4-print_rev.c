#include "holberton.h"
/**
 *print_rev - function
 *Return: valve 0
 *@s: variable
 */
void print_rev(char *s)
{
int a;
int d;

	for (a = 0; s[a] != '\0'; a++)
	{
	}
		for (d = 62; s[d] != '\0'; d--)
		{
			_putchar(s[d]);
		}
	_putchar('\n');
}
