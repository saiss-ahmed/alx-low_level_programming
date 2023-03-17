#include <stdio.h>
#include <string.h>
/**
 *main - Entry point
 *
 *Return: Always 0 (success)
 */

int main(void)
{
	char alpha[28] = "abcdefghijklmnopqrstuvwxyz";
	int i = strlen(alpha);
	int j = 0;

	do {
		putchar(alpha[i]);
		i--;
	} while (i >= j);

	putchar('\n');

	return (0);
}
