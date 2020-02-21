#include "holberton.h"
/**
 *_strcmp - function
 *@s1: variable
 *@s2: variable
 *Return: valve 0
 */
int _strcmp(char *s1, char *s2)
{
	if (*s1 == *s2)
	
		return (0);
	
	else
	
		return (*s1 - *s2);
	

}
