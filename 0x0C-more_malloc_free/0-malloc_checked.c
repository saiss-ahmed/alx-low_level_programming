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
	
	if (b > 0)
	{
		return(NULL);
	}

	arr = (int *) malloc(b);

	if (arr == NULL)
	{
		return ("98");
	}

	return (arr);
}
