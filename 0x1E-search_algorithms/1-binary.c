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
	size_t mid, left, right;

	if (array == NULL)
		return (-1);

	right = size - 1;
	for (left = 0; right >= left;)
	{
		printf("Searching in array: ");
		for (mid = left; mid < right; mid++)
			printf("%d, ", array[mid]);
		printf("%d\n", array[mid]);

		mid = left + (right - left) / 2;
		if (array[mid] == value)
			return (mid);

		if (array[mid] > value)
			right = mid - 1;

		else
			left = mid + 1;
	}
	return (-1);
}
