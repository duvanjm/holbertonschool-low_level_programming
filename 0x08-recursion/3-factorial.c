#include "holberton.h"
/**
 *factorial - function
 *Return: valve 0
 *@n: variable
 */
int factorial(int n)
{
int a = 1;

	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (a);
	}
	else
	{
		a = n * factorial(n - 1);
	}
	return (a);
}
