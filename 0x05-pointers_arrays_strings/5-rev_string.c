#include "main.h"
void rev_string(char *s)
{
	int len = 0;
	char *end = s;
	char temp;
	while (*end != '\0')
	{
		len++;
		end++;
	}
	end--;
	while (s < end)
	{
		temp = *s;
		*s = *end;
		*end = temp;
		s++;
		end--;
	
	}
}

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

