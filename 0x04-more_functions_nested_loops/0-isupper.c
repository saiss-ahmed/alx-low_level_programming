#include "main.c"
/**
 *_isupper - a function that checks if the char is upper or lower
 *@c: the char trying to check
 *Return: either 0 or 1
 */

int _isupper(int c)
{

	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
