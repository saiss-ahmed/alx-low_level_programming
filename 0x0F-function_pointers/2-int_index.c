#include "function_pointers.h"
/**
  *int_index - a pointer to a function that searches of a number
  *@array: the array we are looking at
  *@size: the size of the array
  *@cmp: the function pointed to
  *Return: -1 for failing or counter for SUCCESS
  */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	int counter = 0;

	if (size <= 0)
	{
		return (-1);
	}

	if (array == NULL || cmp == NULL)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (counter);
		}
		counter++;
	}
	return (-1);
}
