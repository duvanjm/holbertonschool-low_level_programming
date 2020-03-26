#include "holberton.h"

/**
 * print_binary - function that print a binary
 * @n: number
 * Return: void
 */

void print_binary(unsigned long int n)
{
	if (n == 0 || n == 1)
	{
		_putchar(n + '0');
		return;
	}
	print_binary(n >> 1);

	_putchar((n & 1) + '0');
}
