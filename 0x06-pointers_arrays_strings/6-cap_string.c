#include "main.h"
/**
 *cap_string - a fucntion that changes the uppercase to lowercase in a string
 *@x: the string
 *Return: always x
 */

char *cap_string(char *x)
{
	int i = 1;
	if (x[0] >= 'a' && x[0] <= 'z')
	{
		x[0] -= 32; 
	}

	while (x[i] != '\0')
	{
		if (x[i] >= 'a' && x[i] <= 'z' && (x[i - 1] == '\t' || x[i - 1] == ' ' || x[i - 1] == ',' || x[i - 1] == ';' || x[i - 1] == '.' || x[i - 1] == '!' || x[i - 1] == '?' || x[i - 1] == '"' || x[i - 1] == '(' || x[i - 1] == ')' || x[i - 1] == '{' || x[i - 1] == '}'))
		{
			x[i] -= 32;
		}
		i++;
	}
	return (x);
}
