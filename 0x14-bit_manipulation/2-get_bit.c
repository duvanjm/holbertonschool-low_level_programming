#include "holberton.h"
/**
 * get_bit  - function
 * @n: numbers
 * @index: index position
 * Return: number
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	if  (index > sizeof(n) * 8)
	{
		return (-1);
	}
	for (i = 0; i < index; i++)
	{
		n >>= 1;
	}

	return (n & 1);
}
