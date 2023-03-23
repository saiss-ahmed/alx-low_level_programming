#include "main.h"
/**
 *print_line - a function that prints lines
 *@n: the amount of lines it should be printed;
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');

}
