#include "main.h"
/**
 *print_most_numbers - print the numbers from 1 to 9 without 2 or 4
 */

void print_most_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		if (i == 50 || i == 52)
		{

		}
		else
		{
			_putchar(i);
		}
	}
	_putchar('\n');
}
