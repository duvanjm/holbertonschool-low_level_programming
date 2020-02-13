#include "holberton.h"
/**
 *_isupper - checks for uppercase
 *@c: variable
 *Return: valve 0
 */
int _isupper(int c)
{
if (c >= 65 && c < 91)
{
return (1);
}
else
{
return (0);
}
}
