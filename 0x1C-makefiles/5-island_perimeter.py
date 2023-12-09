#!/usr/bin/python3
""" Module """


def island_perimeter(grid):
    """
    island_perimeter - Returns the perimeter of the island
                        described in grid

    Parameter:
    ----------

    @grid: A 2D matrix list of integers

    Return: The perimeter of the island
    """
    if grid is None:
        return 0
    if not isinstance(grid, list) or len(grid) == 0:
        return 0
    height = 0
    width = 0
    r_size = len(grid[0])
    for i in range(len(grid)):
        for k in range(len(grid[i])):
            if grid[i][k] == 1:
                width += 1
                break
    for i in range(r_size):
        for row in grid:
            if row[i] == 1:
                height += 1
                break
    return 2 * (width + height)
