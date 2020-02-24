#include "holberton.h"
/**
 *_strchr - function
 *@s: variable
 *@c: variable
 *Return: NULL
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
	if (*s == c)
	{
	return (s);
	}
		s++;
	}
	if (c == '\0')
	{
	return (s);
	}
	return ('\0');
}
