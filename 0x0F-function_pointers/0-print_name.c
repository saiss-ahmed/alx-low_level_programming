#include "function_pointers.h"
/**
  *print_name - a function that point to another function that prints a name
  *@name: the par of name we are printing
  *@f: the function we are pointing to
  */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL && name != NULL)
	{
		f(name);
	}
	else
	{
	return;
	}
}
