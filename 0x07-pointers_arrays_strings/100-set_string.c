#include "main.h"
/**
 *set_string -  a function that sets the value of a pointer to a char.
 *@s: pointer that point to a pointer that point to a string
 *@to: the pointer that point to the string we wanna change
 */
void set_string(char **s, char *to)
{
	*s = to;
}
