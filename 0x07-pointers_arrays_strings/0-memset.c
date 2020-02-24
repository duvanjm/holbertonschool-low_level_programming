#include "holberton.h"
/**
 *_memset - function
 *Return: value of '_memset
 *@b: variable
 *@s: variable
 *@n: variable
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}
	return (0);
}
