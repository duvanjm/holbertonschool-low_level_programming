#include "holberton.h"
/**
 *rev_string - function
 *Return: valve 0
 *@s: variable
 */
void puts2(char *str)
{
  int x;

  for(x = 0; str[x] != '\n'; x+=2)
    {
      _putchar(str[x] + 48);
    }
  _putchar('\n');
}
