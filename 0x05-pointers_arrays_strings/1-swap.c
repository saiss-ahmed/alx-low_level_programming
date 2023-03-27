#include "main.h"
#include <stdio.h>
/**
 *swap_int - a function that swaps two variables
 *@a: the first variable
 *@b: the second variable
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;

}
