#include "holberton.h"
/**
 *_isdigit - check for a digit
 *@c: it's a variable
 *Return: valve 0
 */
int _isdigit(int c)
{
if (c >= 48 && c < 58)
{
return (1);
}
else
{
return (0);
}
}
