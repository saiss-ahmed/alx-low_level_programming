#include "main.h"
/**
 *print_diagonal - a function that draws a diagonal line on the terminal.
 *@n: input from user
 */
void print_diagonal(int n)
{
	int i;
	int j = n - 1;
	int k;

	for (i = 0; i <= n; i++)
	{
		if (j > 0)
		{
			for (k = 0; k < i; k++)
			{
				_putchar(' ');
			}
		}
		if (n != 0)
		{
			_putchar('\\');
		}
	_putchar('\n');
	}
	if (n <0)
	{
	_putchar('\n');
	}
}
