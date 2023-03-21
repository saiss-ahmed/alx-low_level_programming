#include "main.h"
/**
 * print_sign - a function that prints the sign of a number
 * @n: the number we trying to give it a sign
 * Return: 0 if a zero, 1 for possitive and -1 for negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}

}
