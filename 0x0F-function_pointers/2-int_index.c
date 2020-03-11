#include <stdio.h>
/**
 *int_index - function
 *Return: void
 *@array: pointer
 *@size: pointer to function
 *@cmp: pointer
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if ((array) && (cmp))
	{

		if (size <= 0)
		{
			return (-1);
		}
		else
		{
			for (a = 0; a < size; a++)
			{
				if (cmp(array[a]))
				{
					return (a);
				}
			}
		}
	}
	return (-1);
}
