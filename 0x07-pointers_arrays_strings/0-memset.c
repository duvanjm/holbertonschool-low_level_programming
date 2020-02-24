#include "holberton.h"
/**
 *_memset - function
 *@b: variable
 *@s: variable
 *@n: variable
 *return - char
 */
char *_memset(char *s, char b, unsigned int n)
{
int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}
}
