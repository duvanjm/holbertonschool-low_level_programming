#include "holberton.h"
/**
 *more_numbers - show numbers
 *Return: valve 0
 */
void more_numbers(void)
{
int n;
int x;

for (n = 0; n <= 9; n++)
{
for (x = 0; x <= 14; x++)
{
if (x > 9)
{
_putchar ((x / 10) + 48);
}
_putchar ((x % 10) + 48);
{
}
}
_putchar('\n');
}
}
