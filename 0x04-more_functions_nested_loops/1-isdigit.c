#include "main.h"
/**
 *_isdigit - a function that checks if the char is a number
 *@c: the char we are  testing
 *Return: either 1 or 0
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
