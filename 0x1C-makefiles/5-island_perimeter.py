#!/usr/bin/python3

def island_perimeter(grid):
    """Defining the function island_perimeter"""

    perimeter = 0
    directions = [(0, 1), (0, -1), (1, 0), (-1, 0)]

    for row in range(len(grid)):
        for col in range(len(grid[0])):
            if grid[row][col] == 1:
                perimeter += 4

                for next_row, next_col in directions:
                    new_row, new_col = row + next_row, col + next_col
                    if 0 <= new_row < len(grid)\
                        and 0 <= new_col < len(grid[0])\
                            and grid[new_row][new_col] == 1:
                        perimeter -= 1

    return perimeter
