#include "main.h"
#include <stdio.h>
/**
 *print_array - a function that prints the arrays of ints
 *@a: the array
 *@n: the lenth of the array;
 */

void print_array(int *a, int n)
{
	int x = 0;

	while (x < n - 1)
	{
		if (a[x] < 0)
		{
			a[x] = -a[x];
			printf("-%d, ", a[x]);
		}
		else
		{
			printf("%d, ", a[x]);
		}
		x++;
	}
	if (a[x] < 0)
	{
		a[x] = -a[x];
		printf("-%d", a[x]);
	}
	else
	{
	printf("%d", a[n]);
	}
	printf("\n");
}
