#include "main.h"
/**
 *_isalpha - a function that checks for alphabetic character
 *@c: character in ascii
 *Return: 1 if c is a letter and 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else if ((c >= 'A' && c <= 'Z') || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
