#include "main.h"
#include <stdio.h>
/**
 * print_number - a function that prints an integer.
 *@n: input from user
 */

void print_number(int n)
{
	int rev;
	int rem = 0;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	while (n != 0)
	{
		rem = n % 10;
		rev = rev * 10 + rem;
		n = n / 10;
	}
	if (rev == 0)
	{
		_putchar('0');
	}
	do {
		if (rev > 0)
		{
			_putchar(rev % 10 + '0');
		}
		rev = rev / 10;

	} while (rev > 0);
}
