#include "holberton.h"
/**
 *_memset - function
 *@b: variable
 *@s: variable
 *@n: variable
 *return - char
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
  int a; 

  for (a = 0; a < n; a++)
    {
      src[a] = dest;
    }
  return (0);
}
