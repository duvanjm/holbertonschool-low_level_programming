#include "holberton.h"
int _functiond(int y, int x);
/**
 *is_prime_number - function
 *Return: valve 0
 *@n: variable
 */
int is_prime_number(int n)
{

	if (n <= 0)
	{
		return (0);
	}
	return (_functiond(n, n - 1));
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
