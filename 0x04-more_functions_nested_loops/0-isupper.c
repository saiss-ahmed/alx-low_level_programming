#include "main.c"
/**
 *_isupper - a function that checks if the char is upper or lower
 *@c: the char trying to check
 *Return: either 0 or 1
 */

int _isupper(int c)
{
	int val;

	if ((c >= 'a' && c <= 'z') || (c >= 97 && c <= 122))
	{
		val = 0;
	}
	else if ((c >= 'Z' && c <= 'Z') || (c >= 65 && c <= 90))
	{
		val = 1;
	}
	return (val);
}
