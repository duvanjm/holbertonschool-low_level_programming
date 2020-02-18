#include "holberton.h"
/**
 *swap_int - swap valves
 *@a: variable
 *@b: variable
 *Return: valve 0
 */
void swap_int(int *a, int *b)
{
  int d = *a;

  d = *a;
  *a = *b;
	*b = d;
}
