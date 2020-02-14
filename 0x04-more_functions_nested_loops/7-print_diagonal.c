#include "holberton.h"
/**
 *print_diagonal - show diagonal
 *@n: variable
 *Return: valve 0
 */
void print_diagonal(int n)
{
int i;
int a;
if (n <= 0)
{
_putchar('\n');
}
for (i = 0; i < n; i++)
{
for (a = 0; a <= i; a++)
{
if (a == i)
{
_putchar(92);
_putchar('\n');
}
else
{
_putchar(' ');
}
}
}
}
