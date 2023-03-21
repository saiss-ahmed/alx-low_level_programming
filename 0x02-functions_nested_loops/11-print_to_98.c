#include "main.h"
#include <stdio.h>
/**
 * print_to_98 -  a function that prints all numbers from n to 98
 * @n: the value you compare to 98
 *
 */

void print_to_98(int n)
{
	while (n > 98)
	{
		printf("%d, ", n);
		n--;
	}
	while (n < 98)
	{
		printf("%d, ", n);
		n++;
	}
	if (n == 98)
		printf("%d\n", n);
	
}
