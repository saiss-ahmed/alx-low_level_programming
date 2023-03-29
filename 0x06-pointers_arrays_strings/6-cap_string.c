#include "main.h"
/**
 *cap_string - a fucntion that changes the uppercase to lowercase in a string
 *@x: the string
 *Return: always x
 */

char *cap_string(char *x)
{
	int i = 0;

	while (x[i] != '\0')
	{
		if (x[i] >= 65 && x[i] <= 90)
		{
			x[i] = x[i] + 32;
		}
		i++;
	}
	return (x);
}
