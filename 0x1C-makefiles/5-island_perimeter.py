#!/usr/bin/python3
"""A doc string"""


def island_perimeter(grid):
    """function documentation"""
    if not grid or not grid[0]:
        return 0
    rows, cols = len(grid), len(grid[0])
    perimeter = 0
    for i in range(rows):
        for j in range(cols):
            if grid[i][j] == 1:
                perimeter += 4
                if i > 0 and grid[i - 1][j] == 1:
                    perimeter -= 2
                if j > 0 and grid[i][j - 1] == 1:
                    perimeter -= 2
    return perimeter
