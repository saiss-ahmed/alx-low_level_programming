#include "main.c"
/**
 *_isupper - a function that checks if the char is upper or lower
 *@c: the char trying to check
 *Return: either 0 or 1
 */

int _isupper(int c)
{

	if ((c >= 65 && c <= 90) || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else if ((c >= 97  && c <= 122) || (c >= 'a' && c <= 'z'))
	{
		return (0);
	}
}
