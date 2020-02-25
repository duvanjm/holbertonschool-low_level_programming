#include "holberton.h"
#include <stdio.h>
/**
 *set_string - function
 *@s: variable
 *@to: variable
 *Return: NULL
 */
void print_diagsums(int *a, int size)
{
  int x = size*size, s1 = 0, s2 = 0, i;

  for(i = 0; i < x; i = size+1)
    {
      s1 +=*a;
    
  for(i = x; i >= 0; i = size-1)
    {
      s2+=*a;
    }
    }
  printf("%d, %d", s1, s2);
}
