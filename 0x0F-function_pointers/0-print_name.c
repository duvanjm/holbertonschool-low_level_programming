#include <stdio.h>
/**
 *print_name - function
 *Return: void
 *@name: pointer
 *@f: pointer to function
 */
void print_name(char *name, void (*f)(char *))
{
	if ((*f) != '\0')
	{
	(*f)(name);
	}
}
