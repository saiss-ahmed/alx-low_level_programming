#include <stdio.h>
/**
 *main - entry point
 *Return: always 0 (success)
 */

int main(void)
{
int n;
int x = 52;
int sum = 1;
	for (n = 2; n < x ; n++)
	{
	sum += n;
	printf("%i, \n", sum);
	}
	return (0);
}
