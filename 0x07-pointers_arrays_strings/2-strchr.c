#include "main.h"
/**
 *_strchr - a function that locates a character in a string.
 *@s: the source sring
 *@c: the letter that want to find
 *Return: always s
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s + i);
		}
		s++;
	}
	return ('\0');
}
