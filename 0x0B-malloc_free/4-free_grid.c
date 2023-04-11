#include "main.h"
/**
  *free_grid - a function that free a 2D array
  *@grid: the 2D array
  *@height: the height of the array
  **/
void free_grid(int **grid, int height)
{
	int i = 0;

	for (; i <  height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
