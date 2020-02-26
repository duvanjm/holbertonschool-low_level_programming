#include "holberton.h"
/**
 *_print_rev_recursion - function
 *Return: valve 0
 *@s: variable
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
