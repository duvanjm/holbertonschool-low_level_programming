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
unsigned int a;

 for(a = 0; src[a] <= n; a++)
   {
     dest[a] = src[a];
   }
 return(dest);
}
