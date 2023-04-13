#include "main.h"
/**
  *_calloc -  a function that allocates memory for an array
  *@nmemb: the length of the string
  *@size: the size in byte 
  *Return: either a pointer or NULL
  */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *arr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	arr = (void *) malloc(nmemb * size);
	if (!arr)
	{
		return (NULL);
	}
	return (arr);
}
