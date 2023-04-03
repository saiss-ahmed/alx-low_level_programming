#include "main.h"

/**
 *_strstr - a function that locates a substring.
 *@haystack: the main string
 *@needle: the substring
 *Return: return a pointer
 */

char *_strstr(char *haystack, char *needle)
{
int x, b;

	for (a = 0; haystack[a]; a++)
	{
		for (y = 0; needle[y] && haystack[a + b]; b++)
		{
			if (haystack[a + b] != needle[b])
			{
				break;
			}
		}
		if (!needle[b])
		{
			return (haystack + a);
		}
	}
return (0);
}
