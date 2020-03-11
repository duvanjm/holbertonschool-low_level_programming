#include <stdio.h>
#include <stdlib.h>
/**
 *array_iterator - function
 *Return: void
 *@array: pointer
 *@size: size of array
 *@action: pointer
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a;

	if ((array) && (action))
	{
		for (a = 0; a < size; a++)
		{
			(*action)(array[a]);
		}
	}
}
