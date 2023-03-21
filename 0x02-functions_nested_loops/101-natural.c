#include <stdio.h>
/**
 *main - entry point
 *Return: always 0 (success)
 */
int main(void)
{
	int x;
	int sum = 0;

	for (x = 0; x < 1024; x++)
	{
		if ((x % 3 == 0) || (x % 5 == 0))
		{
			sum += x;
		}
	}
	printf("%i\n", sum);
	return (0);
}
