#include "main.h"
/**
 *rev_string - a function that reverse a string
 *@s: the string we gonna reverse
 */
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

