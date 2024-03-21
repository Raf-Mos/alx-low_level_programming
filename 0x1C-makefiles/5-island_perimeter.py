#!/usr/bin/python3
"""Island perimeter calculator"""


def island_perimeter(grid):
    """Returns the perimeter of the island described in grid"""
    x = len(grid[0])
    y = len(grid)
    land = 0
    edge = 0

    for i in range(y):
        for j in range(x):
            if grid[i][j] == 1:
                land += 1
                if (j > 0 and grid[i][j - 1] == 1):
                    edge += 1
                if (i > 0 and grid[i - 1][j] == 1):
                    edge += 1

    return land * 4 - edge * 2
