#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
  *main - entry point
  *@argc: the counter
  *@argv: the string
  *Return: always 0 (success)
  */

int main(int argc, char **argv)
{
	int result;
	int num1, num2;
	char *operator;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	operator = argv[2];
	if ((argv[2] == '/' && num2 == 0) || (argv[2] == '%' && num2 == 0))
	{
		printf("Error\n");
		exit(100);	
	}
	if (operator[1] != '\0' || get_op_func(operator) == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	result = get_op_func(operator)(num1, num2);
	printf("%d\n", result);
	return (0);
}
