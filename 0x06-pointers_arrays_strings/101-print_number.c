#include "main.h"
/**
 *print_number - a function that prints a number using only _putchar
 *@n: the number we wants to print
 */
void print_number(int n)
{
	int a = 0, b = 0;
	int c = 1000000000;
	int d = n;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
		d = n;
	}
	while (d > 0)
	{
		a = d % 10;
		b = b * 10 + a;
		d = d / 10;
	}
	if (n == 0)
	{
		_putchar('0');
	}
	else
	{
		while (b > 0)
		{
			_putchar(b % 10 + '0');
			b = b / 10;
		}
	}
	if (n > 0)
	{
		while (c >= 10)
		{
			if (n % c == 0)
			{
				_putchar('0');
			}
		c = c / 10;
		}
	}
}

