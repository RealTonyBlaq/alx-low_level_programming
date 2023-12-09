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
    if not isinstance(grid, list):
        return 0
    for row in grid:
        for i in row:
            if 
