#include "main.h"
#include <stdio.h>
/**
 *rot13 - a function that encodes a string using rot13.
 *@a: the string we gonna encode
 *Return: always the encoded string
 */

char *rot13(char *a)
{
	int i, x, hold;
	char check[] = "AaZz";
	char ntom[] = "NOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; *(a + i) != '\0'; i++)
		for (x = 0; x < 2; x++)
		{
			if (*(a + i) >= check[x] && *(a + i) <= check[x + 2])
			{
				hold = (*(a + i) - 65 - (x * 32));
				*(a + i) = (ntom[hold] + (x * 32));
			}
		}
	return (a);
}

