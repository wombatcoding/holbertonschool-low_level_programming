#include <stdlib.h>
#include "main.h"

/**
* free_grid - frees the memory of alloc-grid
* @height: number of rows
*/

void free_grid(int **grid, int height)
{
	int row = 0;

	while (row < height)
	{
		free(grid[row]);
		row++;
	}
	free(grid);
}
