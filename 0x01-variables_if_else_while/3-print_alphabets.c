#include <stdio.h>
#include <string.h>
#include <ctype.h>
/**
 *main - Entry point
 *
 *Return: Always 0 (success)
 */

int main(void)
{
	int i = 0;
	int j = 0;
	char alpha[27] = "abcdefghijklmnopqrstuvwxyz";
	int k = strlen(alpha);

	do {
		putchar(tolower(alpha[i]));
		i++;
	} while (i < k);
	do {
		putchar(toupper(alpha[j]));
		j++;
	} while (j < k);

	putchar('\n');

	return (0);
}
