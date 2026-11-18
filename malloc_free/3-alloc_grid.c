#include <stdlib.h>
#include "main.h"

/**
* alloc_grid - returns a pointer to a 2D array of integers
* @width: number of columns
* @height: number of rows
*
* Return: pointer to the 2D array, or NULL if failed
*/

int **alloc_grid(int width, int height)
{
	int **grid;
	int row = 0, col = 0, cleanup = 0;

	if (width <= 0 || height <= 0)
		return (NULL);
	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
	{
		return (NULL);
	}
	while (row < height)
	{
		col = 0;
		grid[row] = malloc(width * sizeof(int));

		if (grid[row] == NULL)
		{
			while (cleanup < row)
			{
				free(grid[cleanup]);
				cleanup++;
			}
			free(grid);
			return (NULL);
		}
		while (col < width)
		{
			grid[row][col] = 0;
			++col;
		}
		++row;
	}
	return (grid);
}
