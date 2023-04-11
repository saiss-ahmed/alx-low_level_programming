#include "main.h"
/**
  *alloc_grid - a function that returns a 2 dimensional array of ints
  *@width: the width of the array
  *@height: the height of the array
  *Return: either the two dimentional array of NULL
  */

int **alloc_grid(int width, int height)
{
	int i = 0, j = 0, k = 0;
	int **arr = malloc(height * sizeof(int *));
	if (arr == NULL)
	{
		return (NULL);
	}

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	while (i < height)
	{
		arr[i] = malloc(width * sizeof(int));
		i++;
	}
	for (; j < height; j++)
	{
		for (; k < width; k++)
		{
			arr[j][k] = 0;
		}
	}
	return (arr);
}
