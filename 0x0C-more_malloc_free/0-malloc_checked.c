#include "main.h"
/**
  *malloc_checked - a function that allocate memory
  *@b: the amount of bytes its gonna be located
  *
  *Return: a pointer
  */

void *malloc_checked(unsigned int b)
{
	int *arr;

	arr = (int *) malloc(b);

	if (arr == NULL)
	{
		exit(98);
	}

	return (arr);
}
