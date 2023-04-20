#include "variadic_functions.h"
#include <stdio.h>
#include <string.h>
void print_s(char *str, char *sp);
/**
  *print_all -  a function that prints anything.
  *@format: the lost of types of arguments passed to the function
  */
void print_all(const char * const format, ...)
{
va_list args;
char *sp, *arg;
int x = 0;

va_start(args, format);
while (format != NULL && format[x] != '\0')
{
	sp = ", ";
	if (format[x + 1] == '\0')
		sp = "";
	switch (format[x])
	{
		case 's':
			arg = va_arg(args, char *);
			if (arg == NULL)
			{
				printf("(nil)%s", sp);
				break;
			}
			printf("%s%s", arg, sp);
		break;
		case 'i':
			printf("%d%s", va_arg(args, int), sp);
		break;
		case 'f':
			printf("%f%s", va_arg(args, double), sp);
		break;
		case 'c':
			printf("%c%s", va_arg(args, int), sp);
		break;
		default:
		break;
	}
	x++;
}
printf("\n");
va_end(args);
}
