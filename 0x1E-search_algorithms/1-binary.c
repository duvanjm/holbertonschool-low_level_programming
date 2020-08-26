#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array
 * @array: pointer to the first element of the array
 * @size: number of elements in array
 * @value: value to search for
 * Return: return the first index otherwise return -1
 **/

int binary_search(int *array, size_t size, int value)
{
	size_t 	left = 0, mid = (size - 1) / 2, right = size, i;

	if (array == NULL)
		return (-1);

	while (left < right)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
		{
			if (i == right)
				printf("%d ,", array[i]);
			else
				printf("%d, ", array[i]);
		}
		printf("\n");

		if (array[mid] == value)
			return (mid);

		if (array[mid] > value)
		{
            right = mid;
			mid = left + (right - left - 1) / 2;
		}

		else
		{
			left = mid + 1;
			mid = left + (right - left - 1) / 2;
		}
	}
	return (-1);
}
