#include "holberton.h"
/**
 * get_endianness  - function
 * Return: 1 or 0
 */
int get_endianness(void)
{
	int x = 1;
	char *p = (char *)&x;

	if (*p)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
