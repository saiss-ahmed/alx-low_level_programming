#include "main.h"
/**
 *print_times_table - a function that prints the n times table;
 *@n: the amount of times you multiply
 */

void print_times_table(int n)
{
int row, column, result;
	if (n < 15 && n > 0)
	{
		for (row = 0; row <= n; row++)
		{
			for (column = 0; column <= n; column++)
			{
				result = (row * column);
				if (column == 0)
				{
					_putchar('0' + result);
				}
				else
				{
					_putchar(',');
					_putchar(' ');
					if (result <= 9)
					{
						_putchar(' ');
						_putchar(' ');
						_putchar('0' + result);
					}
					else if (result > 9 && result < 100)
					{
						_putchar(' ');
						_putchar('0' + (result / 10));
						_putchar('0' + (result % 10));
					}
					else if (result >= 100)
					{
						_putchar('0' + (result / 100));
						_putchar('0' + (result / 10) % 10);
						_putchar('0' + (result % 10));
					}
					if (column == 0 && row == 0)
					{
					_putchar(' ');
					_putchar(' ');
					}
				}
			}
			_putchar('\n');
		}
	}
}
