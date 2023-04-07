#include "main.h"
/**
 * _abs - a function that computes the absolute value of an integer.
 * @x: the value you want it abslute version
 * Return: the abaslue value that is always positive x
 */


int _abs(int x)
{
	if (x < 0)
	{
		x = x * -1;
		return (x);
	}
	else
	{
		return (x);
	}
}
