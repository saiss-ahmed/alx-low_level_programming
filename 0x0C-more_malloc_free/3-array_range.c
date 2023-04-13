#include "main.h"
/**
  *array_range -a function that creates an array of integers.
  *@min: the start
  *@max: the end
  *Return: either a pointer to  the array or NULL
  */

int *array_range(int min, int max)
{
	int i;
	int range;
	 int *arr;

	if (min > max)
	{
		return (NULL);
	}
	if (min == 0)
	{
		range = max + 1;
	}
	else
	{
		range = max - min + 1;
	}
	arr = (int *) malloc(range * sizeof(int));
	if (!arr)
	{
		return (NULL);
	}
	for (i = 0; i < range; i++)
	{
		arr[i] =  min;
		min++;
	}
	return (arr);
}
