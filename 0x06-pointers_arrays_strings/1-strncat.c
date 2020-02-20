#include "holberton.h"
/**
 **_strcat - function
 *@src: variable
 *@dest: variable
 *Return: valve 0
 */
char *_strncat(char *dest, char *src, int n)
{
  int i;
  int a;
  
  for (i = 0; dest[i] != '\0'; i++)
    ;
  for (a = 0; a < n && src[a] != '\0'; a++)
    {
    dest[a + i] = src[a];
    }
    
  return (dest);  
}
