#include "main.h"
/**
 *cap_string - a fucntion that changes the uppercase to lowercase in a string
 *@x: the string
 *Return: always x
 */

char *cap_string(char *str)
{
	    int i = 0;
	int capitalize_next = 1;

	while (str[i] != '\0')
	{
		switch (str[i])
		{
			case ' ':
			case '\t':
			case '\n':
			case ',':
			case ';':
			case '.':
			case '!':
			case '?':
			case '\"':
			case '(':
			case ')':
			case '{':
			case '}':
				capitalize_next = 1;
			break;
			default:
				if (capitalize_next && str[i] >= 'a' && str[i] <= 'z')
				{
					str[i] -= 32;
					capitalize_next = 0;
				}
				else
				{
					capitalize_next = 0;
				}
		}
		i++;
	}
	return (str);
}
