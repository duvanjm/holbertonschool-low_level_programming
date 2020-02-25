#include "holberton.h"
/**
 *_strspn - function
 *@s: variable
 *@accept: variable
 *Return: dest
 */
char *_strpbrk(char *s, char *accept)
{
  while (*s != '\0')
    {
      if (*s == *accept)
	{
	  return (s);
	}
      s++;
    }
  if (accept == '\0')
    {
      return (s);
    }
  return ('\0');
}

