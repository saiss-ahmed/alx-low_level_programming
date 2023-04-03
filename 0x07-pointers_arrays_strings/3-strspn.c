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
	int counter;
	int len1 = _strlen(s);
	int len2 = _strlen(accept);

	for (i = 0; i < len2; i++)
	{
		int x = 0;

		for (j = 0; j < len1; j++)
		{
			if (accept[i] == s[j])
			{
				counter++;
				x++;
			}
			else if (accept[i] != s[j] && x > 0)
			{
				break;
			}
		}
	}
	return (counter);
}

/**
 *_strlen - counts
 *@s: string or smtg
 *Return: counter
 */

int _strlen(char *s)
{
int counter = 0;
while (*s != '\0')
{
counter++;
s++;
}
return (counter);
}
