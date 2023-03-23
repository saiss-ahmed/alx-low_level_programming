#include "main.h"

/**
 * print_triangle - print backwards triangle of n size
 * @size: size of square
 */

void print_triangle(int size)
{
	int i, j, k;
	int l = 1;
	int x = size;
	
	if(size == 0)
	{
		_putchar('\n');
	}
	for (i = 0; i < x; i++)
	{
		for(j = 0; j < size; j++ )
		{
			_putchar(' ');
		}
		for (k = 0; k < l; k++ )
		{
			_putchar('#');
		}
		size--;
		l++;
		_putchar('\n');
	}
}
