#include "main.h"
/**
 *print_triangle - a function that prints a triangle
 * @size: input from user
 */

void print_triangle(int size)
{
	int i;
	int j;
	int k;
	int x = size;

	for (i = 0; i < x; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar(' ');
		}
		for (k = 0; k <= i; k++)
		{
			_putchar('#');
		}
		_putchar('\n');
		size--;
	}
	if (x == 0)
	{
	_putchar('\n');
	}
}
