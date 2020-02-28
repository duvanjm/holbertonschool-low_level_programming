#include "holberton.h"
#include <stdio.h>
/**
 * _strstr - locates a substring
 * @haystack: input value pointer
 * @needle: input value pointer
 * Return: value char
 */

char *_strstr(char *haystack, char *needle)
{

	int i = 0, j = 0, k = 0;

	while (haystack[k] != '\0')
	{
		i = k;
		j = 0;
		while (haystack[i] != '\0' && needle[j] != '\0' && haystack[i] == needle[j])
		{
			i++;
			j++;
		}
		if (needle[j] == '\0')
			return (haystack + k);
		k++;
	}
	return ('\0');
}
