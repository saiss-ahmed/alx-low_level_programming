#include "main.h"
/**
 *_strncpy - used to copy a specified number of characters from one string
 *@dest: the destination string
 *@src: the source string
 *@n:the number of characters to copy
 *Return: always dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
