#include "variadic_functions.h"
#include <stdio.h>
#include <string.h>
/**
  *print_all -  a function that prints anything.
  *@format: the lost of types of arguments passed to the function
  */
void print_all(const char * const format, ...)
{
va_list args;
char *s, c;
int i, x = 0;
float f;

va_start(args, format);
while (format != NULL && format[x] != '\0')
{
	char *sp;

	sp = ", ";
	if (format[x + 1] == '\0')
		sp = "";
	switch (format[x])
	{
		case 's':
			s = va_arg(args, char *);
			if (s == NULL)
				printf("(nil)");
			printf("%s%s", s, sp);
		break;
		case 'i':
			i = va_arg(args, int);
			printf("%d%s", i, sp);
		break;
		case 'f':
			f = va_arg(args, double);
			printf("%f%s", f, sp);
		break;
		case 'c':
			c = va_arg(args, int);
			printf("%c%s", c, sp);
		break;
		default:
		break;
	}
	x++;
}
printf("\n");
va_end(args);
}

