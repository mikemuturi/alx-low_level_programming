#include "main.h"
#include <stdlib.h>
/**
 * free_grid - ...
 * @grind: ...
 * @height: ...
 *
 * Return: ...
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i <height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
