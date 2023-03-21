#include "main.h"
#include <stdio.h>
/**
 * print_to_98 -  a function that prints all numbers from n to 98
 * @n: the value you compare to 98
 *
 */

void print_to_98(int n)
{
	if (n > 98)
	{
		while (n > 98)
		{
			printf("%i,  ", n);
			n--;
		}
	}
	else if (n < 98)
	{
		while (n < 98)
		{
			printf("%i, ", n);
			n++;
		}
	}
	printf("98");
	printf("\n");
}
