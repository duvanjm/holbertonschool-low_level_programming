#include "holberton.h"
/**
 *print_line - print same number of lines
 *@n: variable
 *Return: valve 0
 */
void print_line(int n)
{
int i;
for (i = 0;  i < n; i++)
if (i > 0)
{
_putchar('_');
}
else if (n++ == i)
{
_putchar('_');
}
else if (n < 0)
{
_putchar('\n');
}
_putchar('\n');
}
