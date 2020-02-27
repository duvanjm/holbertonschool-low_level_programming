#include "holberton.h"
int _functiond(int y, int x);
/**
 *wildcmp - function
 *Return: valve 0
 *@s1: variable
 *@s2: variable
 */
int wildcmp(char *s1, char *s2)
{

	if (s1 != s2)
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
