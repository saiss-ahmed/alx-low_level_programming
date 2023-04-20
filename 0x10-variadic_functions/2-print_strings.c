#include "variadic_functions.h"
#include <stdio.h>
/**
  *print_strings - a fucntion that prints a string + separator
  *@separator: the separator
  *@n: the count
  *Return: void
  */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *s;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(args, char *);
		if (s == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", s);
		}
		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
		printf("\n");
	va_end(args);

}
