#include "holberton.h"
/**
 *_pow_recursion - function
 *Return: valve 0
 *@x: variable
 *@y: variable
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else

	return (x * _pow_recursion(x, y - 1));
}
