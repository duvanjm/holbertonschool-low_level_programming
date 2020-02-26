#include "holberton.h"
/**
 *_puts_recursion - function
 *Return: valve 0
 *@s: variable
 */
void _puts_recursion(char *s)
{
int p = 0;

	if (s[p] != '\0')
	{
		_putchar (s[p]);
		p++;
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
