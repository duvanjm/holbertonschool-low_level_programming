#include "holberton.h"
int _functiond(int x, int y);
/**
 *_sqrt_recursion - function
 *Return: valve 0
 *@n: variable
 */
int _sqrt_recursion(int n)
{

	if (n < 0)
	{
		return (-1);
	}
	else
		return (_functiond(n, 1));
}
/**
 * _functiond - function
 * @x: variable
 * @y: variable
 * Return: functiond
 */
int _functiond(int x, int y)
{
	if (y > x)
	{
		return (-1);
	}
	if (y * y == x)
	{
		return (y);
	}
	else

	return (_functiond(x, y + 1));
}
