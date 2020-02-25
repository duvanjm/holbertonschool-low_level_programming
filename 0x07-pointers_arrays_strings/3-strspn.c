#include "holberton.h"
/**
 *_strspn - function
 *@s: variable
 *@accept: variable
 *Return: dest
 */
unsigned int _strspn(char *s, char *accept)
{
int a = 0;
int b = 0;
int d = 0;
int x = 0;

	while (s[x] != '\0')
	{
		a = 0;
		b = 1;
		while (accept[a] != '\0')
	{
		if (s[x] == accept[a])
		{
		d++;
		b = 0;
		}
		a++;
	}
	if (b == 1)
	break;
		x++;
	}
	return (d);
}
