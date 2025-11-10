#include "main.h"
#include <stdlib.h>

/**
 * free_grid - free a grid
 * @grid: the grid
 * @height: hauteur
 * 
 * Return: void
 */


 void free_grid(int **grid, int height)
 {
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
 }

