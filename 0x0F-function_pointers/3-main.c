#include "3-calc.h"

/**
 *main - main function
 *@argc: argument count
 *@argv: argument vector
 *Return: 0 for success
 */

int main(int argc, char *argv[])
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
	if (operator[1] != '\0' || get_op_func(operator) == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	result = (get_op_func(operator)(num1, num2));
	printf("%d\n", result);
	return (0);
}
