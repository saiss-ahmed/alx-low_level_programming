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

	if (separator == NULL)
	{
		for (i = 0; i < n; i++)
		{
			s = va_arg(args, char *);
			printf("%s", s);
		}
		printf("\n");
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			s = va_arg(args, char *);
			if (i < n - 1)
			{
				if (s == NULL)
				{
					printf("(nil)%s", separator);
				}
				else 
				{
					printf("%s%s", s, separator);
				}
			}
			else
			{
				printf("%s", s);
			}
		}
		printf("\n");
	}
	va_end(args);

}
