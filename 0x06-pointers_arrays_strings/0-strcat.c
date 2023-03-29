#include "main.h"
/**
 *_strcat - a fucntion that append two strings to one
 *@dest: the string that will be appended to
 *@src: the string that will be appanded
 *Return: always a string of chars
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
