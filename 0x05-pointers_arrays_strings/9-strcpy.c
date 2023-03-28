#include "main.h"
/**
 *_strcpy - a function that copy a string to an array
 *@dest: the array you will copy to
 *@src: the string you are copying
 *Return: the array you are copying to
 */

char *_strcpy(char *dest, char *src)
{
	int len = _strlen(src);
	int i;

	for (i = 0; i <= len; i++)
	{
		dest[i] = src[i];
	}
	return (dest);

}
/**
 *_strlen - print the length of a string
 *@s: the first char of th string;
 *Return: len
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
}
