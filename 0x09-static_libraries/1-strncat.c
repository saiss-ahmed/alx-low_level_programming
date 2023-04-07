#include "main.h"
/**
 *_strncat - a function that append the n amount of chars to the next sring
 *@dest: the main string that will be appended to
 *@src: the string that will be taken the 'n' amount
 *@n: the value in bytes of how many chars that would be taken
 *Return: always dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	for (j = 0; src[j] != '\0' && j < n; j++)
	{
		dest[i + j] = src[j];
	}
	dest[i + j] = '\0';
	return (dest);
}
