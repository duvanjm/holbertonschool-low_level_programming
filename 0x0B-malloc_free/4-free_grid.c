#include <stdlib.h>
#include "holberton.h"

/**
 *free_grid - function
 *Return: int
 *@grid: variable
 *@height: variable
 */
void free_grid(int **grid, int height)
{
	int a;

	for (a = 0; a < height; a++)
		free(grid[a]);
	free(grid);
}
