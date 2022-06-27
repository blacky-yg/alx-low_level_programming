#include "main.h"

/**
 * free_grid - free a double array
 * @grid: the double array
 * @height: the height of the array
 * Description: Free a double array
 * Return: void
 */
void free_grid(int **grid, int height)
{
	if (height > 0 && grid)
	{
		while (height >= 0)
		{
			free(grid[height]);
			height--;
		}
		free(grid);
	}
}
