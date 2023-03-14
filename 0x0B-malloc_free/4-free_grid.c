#include "main.h"
#include <stdlib.h>
/**
 * free_grinnd - ...
 * @grind: ...
 * @height: ...
 *
 * Return: ...
 */
void free_grind(int **grid, int height)
{
	int i;

	for (i = 0; i <height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
