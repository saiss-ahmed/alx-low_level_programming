#include "main.h"
/**
 *times_table - a function that prints the 9 times.
 *
 */

void times_table(void)
{
int i = 0;

do {
	int j = 0;

	do {
		int k = i * j;

		if (k / 10 == 0)
		{
			_putchar(' ');
		}
		else
		{
			_putchar((k / 10) + '0');
		}
		_putchar((k % 10) + '0');
		_putchar(',');
		_putchar(' ');
		j++;
		} while (j < 10);
	i++;
	_putchar('\n');
} while (i < 10);

}
