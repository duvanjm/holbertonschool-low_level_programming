#include "holberton.h"
/**
 * clear_bit  - function
 * @n: numbers
 * @index: index position
 * Return: number
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
	{
		return (-1);
	}

	*n = (*n & ~(1 << index));
	return (1);
}
