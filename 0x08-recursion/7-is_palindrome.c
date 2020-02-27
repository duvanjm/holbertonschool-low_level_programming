#include "holberton.h"
int _functiond(int y, int x);
/**
 * is_palindrome - function
 *Return: valve 0
 *@s: variable
 */
int is_palindrome(char *s)
{

	if (s != '\0')
	{
		return (1);
	}
	return (0);
}
/**
 * _functiond - function
 * @x: variable
 * @y: variable
 * Return: functiond
 */
int _functiond(int y, int x)
{
	if (x == 2)
	{
		return (1);
	}
	if (x <= 1)
	{
		return (0);
	}
	if (y % x == 0)
	{
		return (0);
	}
	else
	{
		return (_functiond(y, x - 1));
	}
}
