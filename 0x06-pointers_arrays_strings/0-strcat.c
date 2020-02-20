#include "holberton.h"
/**
 **_strcat - function
 *@src: variable
 *@dest: variable
 *Return: valve 0
 */
char *_strcat(char *dest, char *src)
{
int i;
int a;
int x;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	for (a = 0; src[a] != '\0'; a++)
	{
	}
	for (x = i; x <= (i + a); x++)
	{
	dest[x] = src[x - i];
	}
	return (dest);
}
