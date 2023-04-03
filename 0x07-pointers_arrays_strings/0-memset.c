#include "main.h"
/**
 *_memset - a function that fills memory with a constant byte.
 *@s: buffer
 *@b: source
 *@n: the times it gonna be filled
 *Return: always the changed file
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	while (n - i > 0)
		{
		s[i] = b;
		i++;
		}
	return (s);
}
