#include "holberton.h"
/**
 *_strlen - function
 *Return: valve 0
 *@s: variable
 */
void print_rev(char *s)
{
int a;
int d;

	a = 0;
	while (s[a] != '\0')
	{
		a++;
	}
	a--;

	for (d = a; d != -1; --d)
		{
			_putchar(s[d]);
		}
	
	_putchar('\n');

}
