#include "main.h"

/***/

int *array_range(int min, int max)
{
	int range;
	int *arr;

	if (min > max)
	{
		return (NULL);
	}
	if (min == 0)
	{
		range = max;
	}
	else 
	{
		range = max - min + 1 ;
	}
	arr = (int *) malloc(range * sizeof(int));
	if (!arr)
	{
		return(NULL);
	}
	memset(arr, 0, range * sizeof(int));
	return(arr);
}
