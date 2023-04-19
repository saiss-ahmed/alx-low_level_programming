#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/***/

int main(int argc, char **argv)
{
	int result;
	int num1, num2;
	char *operator;

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	operator = argv[argc - 1];
	
	result = get_op_func(operator)(num1, num2);
	printf("%d\n", result);
	return(0);
}
