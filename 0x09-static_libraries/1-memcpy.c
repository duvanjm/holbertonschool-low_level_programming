#include "holberton.h"
/**
 *_memcpy - function
 *@dest: variable
 *@src: variable
 *@n: variable
 *Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int a;

	for (a = 0; a < n; a++)
	{
	dest[a] = src[a];
	}
	return (dest);
}
