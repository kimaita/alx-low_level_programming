#!/usr/bin/python3
"""Functions to get the perimeter of an island"""


def get_row_length(tiles: int):
    """Returns the length the tiles in a row.

    Since the tiles are horizontally linked, the number of sides reduces by two
    for each additional tile.

    Args:
        tiles: number of tiles in row(linked horizontally)

    Returns:
        int
    """
    if tiles:
        return 4 * tiles - 2*(tiles - 1)
    return 0


def island_perimeter(grid) -> int:
    """Returns the perimeter of an island

    Args:
        grid: list of list of ints representing the island

    Returns:
        int
    """
    length = 0
    prev_row_tiles = 0
    for i, row in enumerate(grid):
        row_tiles = sum(row)
        length += get_row_length(row_tiles)
        length -= (min(row_tiles, prev_row_tiles) * 2)

        prev_row_tiles = row_tiles
        if length and not row_tiles:
            # end of island - islands are contiguous
            break

    return length
