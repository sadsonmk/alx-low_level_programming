#!/usr/bin/python3
"""defines a function that measures an island perimeter"""


def island_perimeter(grid):
    """returns the perimeter of the island described in grid

    Args:
        grid (list): is a list of list of integers
                0 represents a water zone
                1 represents a land zone
    Return:
        returns the perimeter of the island described in grid
    """

    height = len(grid)
    width = len(grid[0])
    edges = 0
    island_size = 0

    for x in range(height):
        for y in range(width):
            if grid[x][y] == 1:
                island_size += 1
                if (x > 0 and grid[x - 1][y] == 1):
                    edges += 1
                if (y > 0 and grid[x][y - 1] == 1):
                    edges += 1
    return island_size * 4 - edges * 2
