#include <stdio.h>
#include <string.h>
/**
 *main - Entry point
 *
 *Return: Always 1 (success)
 */

int main(void)
{
	int i = 0;
	char alpha[27] = "abcdefghijklmnopqrstuvwxyz";
	int j = strlen(alpha);

	do {
		putchar(alpha[i]);
		i++;
	} while (i < j);

	putchar('\n');

	return (1);
}
