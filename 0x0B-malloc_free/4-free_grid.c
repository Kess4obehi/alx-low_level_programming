#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - A function that frees a 2 dimensional grid
 * previously created by your alloc_grid function.
 * @grid: grid to be freed
 * @height: size of the array
 * Return: 0
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
