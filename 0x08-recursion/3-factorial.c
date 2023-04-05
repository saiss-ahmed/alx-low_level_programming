#include "main.h"
/**
 *factorial - a function that returns the factorial of a given number.
 *@n: the number we doing factorial to
 *Return: result
 */

int factorial(int n)
{
	if (n > 1)
	{
	n = n * factorial(n - 1);
	}
	else if (n < 0)
	{
	return (-1);
	}
	else if (n == 0)
	{
	return (1);
	}
	return (n);
}
