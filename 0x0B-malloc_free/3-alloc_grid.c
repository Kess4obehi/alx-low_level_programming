#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - A function that returns a pointer to a
 * 2 dimensional array of integers.
 * @width: width input.
 * @height: height input.
 * Return: 0
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	/*Allocate memory for the array of pointers to rows*/
	grid = (int **)malloc(sizeof(int *) * height);
	if (grid == NULL)
		return (NULL);
	/**
	 * Allocate memory for each row (array of integers)
	 * and initialize elements to 0
	 */
	for (i = 0; i < height; i++)
	{
		grid[i] = (int *)malloc(sizeof(int) * width);
		if (grid[i] == NULL)
			/*clean up previous allocations on failure*/
		{
			for (j = 0; j < i; j++)
				free(grid[j]);
			free(grid);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}
	return (grid);
}
