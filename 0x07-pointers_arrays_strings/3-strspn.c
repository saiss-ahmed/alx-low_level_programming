#include "main.h"
/**
 *_strspn - a function that gets the length of a prefix substring.
 *@s: The first argument, the big string
 *@accept: The second, the little one
 *Return: returns the length of the match,
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	unsigned int counter = 0;

	for (i = 0; accept[i] != '\0'; i++)
	{
		int x = 0;
		for (j = 0;s[j] != '\0'; j++)
		{
			if (accept[i] == s[j])
			{
				counter++;
				x++;
			}
			else if (x > 0)
			{
				break;
			}
		}
	}
	return (counter);
}
