#include "holberton.h"
/**
 * flip_bits  - function
 * @n: numbers
 * @m: index
 * Return: status
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int x = 0;
	unsigned int i;

	for (i = 0; i <= ((sizeof(n) * 8) - 1); i++)
	{
		if (((n ^ m) >> i) & 1)
			x++;
	}

	return (x);
}
