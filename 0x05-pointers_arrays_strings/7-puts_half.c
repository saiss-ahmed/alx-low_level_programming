#include "main.h"
/**
 *puts_half - function that prints from the malf of th string
 *@str: string from user
 */

void puts_half(char *str)
{
	int len	= _strlen(str);
	int half = (len - 1) / 2;
	if (half % 2 !=0)
	{
		half = ((len - 1) / 2) + 1;
	}

	while (str[half] != '\0')
	{
		_putchar(str[half]);
		half++;
	}
	_putchar('\n');
}
#include "main.h"
/**
 *_strlen - print the length of a string
 *@s: the first char of th string;
 *Return: len
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
}
