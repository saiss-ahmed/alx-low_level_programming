#include <stdio.h>
#include <string.h>
/**
 *main - Entry point
 *
 *Return: Always 1 (success)
 */

int main(void)
{
	char alpha[27] = "abcdefghijklmnopqrstuvwxyz";

	for (int i = 0, n = strlen(alpha); i < n ; i++)
	{
		putchar(alpha[i]);
	}
	putchar('\n');
	return (1);
}
