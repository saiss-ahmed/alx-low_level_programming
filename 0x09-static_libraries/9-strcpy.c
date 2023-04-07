#include "main.h"
/**
 *_strcpy - a function that copy a string to an array
 *@dest: the array you will copy to
 *@src: the string you are copying
 *Return: the array you are copying to
 */

char *_strcpy(char *dest, char *src)
{
	int l = 0;
	int x = 0;


	while (*(src + l) != '\0')
	{
		l++;
	}
	for ( ; x < l ; x++)
	{
		dest[x] = src[x];
	}
	dest[l] = '\0';
	return (dest);

}
