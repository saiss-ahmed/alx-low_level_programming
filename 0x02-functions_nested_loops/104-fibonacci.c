#include <stdio.h>
/**
 *main - entry point
 *Return: always 0 (sucess)
 */
int main(void)
{
	unsigned long fib1 = 1, fib2 = 2, next;
	int i;

	printf("%lu, %lu", fib1, fib2);
	for (i = 3; i <= 47; i++)
	{
		next = fib1 + fib2;
		printf(", %lu", next);
		fib1 = fib2;
		fib2 = next;
	}
	printf("\n");
	return (0);
}
