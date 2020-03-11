#include <stdio.h>
#include <stdlib.h>
/**
 *print_name - function
 *Return: void
 *@name: pointer
 *@f: pointer to function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a;

	for (a = 0; a < size; a++)
	{
		(*action)(array[a]);
	}
}
