#include "variadic_functions.h"
#include <stdio.h>
/**
  *print_numbers - a function that prints every argument + separator
  *@separator: the separator
  *@n: the count of args
  *Return: void
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int x;

	va_list args;

	va_start(args, n);

	for (i = 0; i < n - 1; i++)
	{
		x = va_arg(args, int);
		printf("%d%s", x, separator);
	}
	x = va_arg(args, int);
	printf("%d\n", x);
	va_end(args);
}

