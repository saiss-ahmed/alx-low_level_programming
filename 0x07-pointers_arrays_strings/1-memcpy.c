#include "main.h"
/**
 *_memcpy - a function that copies memory area.
 *@dest: the main buffer
 *@src: the copied file
 *@n: the length
 *Return: always dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (n - i > 0)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
