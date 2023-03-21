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

		if (k / 10 == 0 && j != 0)
		{
			_putchar(' ');
		}
		else if (j != 0)
		{
			_putchar((k / 10) + '0');
		}
		_putchar((k % 10) + '0');
		if (j != 9)
		{
		_putchar(',');
		_putchar(' ');
		}
		else if (i == 9 && j == 9)
		{
		}
		j++;
		} while (j < 10);
	i++;
	_putchar('\n');
} while (i < 10);

}
