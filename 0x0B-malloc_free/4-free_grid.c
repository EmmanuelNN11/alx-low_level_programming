#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * free_grid - frees an array from a previously assigned one
 * @grid: the array to be freed
 * @heigth: width input
 * Return: nothing
 */

void free_grid(int **grid, int heigth)
{
	int x;

	for (x = 0; x < heigth; x++)
	{
		free(grid[x]);
	}
	free(grid);
}
