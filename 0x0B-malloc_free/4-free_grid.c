#include <stdlib.h>
#include "main.h"

/**
 * free_grid - releases the RAM set aside for the grid
 * alloc grid constructed ()
 * @grid: to free grid
 * @height: scale of the grid
 */
void free_grid(int **grid, int height)
{
	int x;

	if (grid == NULL || height == 0)
		return;

	int x = 0;
while (x < height) {
	free(grid[x]);
	grid[x] = NULL;
	x++;
}
free(grid);
grid = NULL;
}
