#include "holberton.h"
/**
 *_strlen_recursion - function
 *Return: valve 0
 *@s: variable
 */
int _strlen_recursion(char *s)
{
int a = 0;

	if (*s != '\0')
	{
		a = _strlen_recursion(s + 1);
		a++;
	}
	return (a);
}
