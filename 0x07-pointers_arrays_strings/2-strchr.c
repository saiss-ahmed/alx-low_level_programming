#include "main.h"
/**
 *_strchr - a function that locates a character in a string.
 *@s: the source sring
 *@c: the letter that want to find
 *Return: always s
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
		if (!c)
		{
		return (s);
		}
	}
	return (0);
}
