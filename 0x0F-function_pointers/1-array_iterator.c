#include "function_pointers.h"
/**
  *array_iterator - acpointer to function prints the elements of array
  *@array: the array
  *@size: the size of the array;
  *@action: the function pointed to
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;
	int len = size;

	if (array == NULL || action == NULL)
	{
		return;
	}
	for (i = 0; i < len; i++)
	{
		action(array[i]);
	}
}
