#!/usr/bin/python3


def island_perimeter(grid):
    """calculate perimeter
    """
    peri, count = 0, 0
    len_grid = len(grid)
    for i in range(len_grid):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                count += 1
                if grid[i][j - 1] == 1:
                    peri += 1
                if grid[i - 1][j] == 1:
                    peri += 1
    return count * 4 - 2 * peri
