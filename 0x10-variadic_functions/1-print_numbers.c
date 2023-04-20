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

	if (separator == NULL)
	{
		for (i = 0; i < n; i++)
		{
			x = va_arg(args, int);
			printf("%d\n", x);
		}
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			x = va_arg(args, int);
			if(i < n - 1)
			{
				printf("%d%s", x, separator);
			}
			else
			{
				printf("%d\n", x);
			}
		}
	}
	va_end(args);
}

