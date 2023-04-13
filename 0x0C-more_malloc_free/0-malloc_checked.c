#include "main.h"
/***/

void *malloc_checked(unsigned int b)
{
	int *arr;
	
	arr = (int *) malloc(b);
	
	if (arr == NULL)
	{
		return ("98");
	}
	
	return (arr);
}
