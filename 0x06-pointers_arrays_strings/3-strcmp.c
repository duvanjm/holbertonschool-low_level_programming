#include "holberton.h"
/**
 *_strcmp - function
 *@s1: variable
 *@s2: variable
 *Return: valve 0
 */
int _strcmp(char *s1, char *s2)
{
	int count = 0;

	for (count = 0; s1[count] != '\0'; count++)
	{
	if (s1[count] > s2[count])
	{
	return (s1[count] - s2[count]);
	}
	else if (s1[count] < s2[count])
	return (s1[count] - s2[count]);
	(count++);
	}
	return (0);
}
