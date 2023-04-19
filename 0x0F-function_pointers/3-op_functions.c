#include "3-calc.h"
/**
 *op_add - function that callculate the sum
 *@a: the first int
 *@b: the second int
 *Return: the sum
 */
int op_add(int a, int b)
{
	int result;

	result = a + b;
	return (result);
}
/**
 *op_sub - function that callculate the substraction
 *@a: the first int
 *@b: the second int
 *Return: the result
 */
int op_sub(int a, int b)
{
	int result;

	result = a - b;
	return (result);
}
/**
 *op_mul - function that callculate the multiplication
 *@a: the first int
 *@b: the second int
 *Return: the result
 */
int op_mul(int a, int b)
{
	int result;

	result = a * b;
	return (result);
}
/**
 *op_div - function that callculate the division
 *@a: the first int
 *@b: the second int
 *Return: the result
 */
int op_div(int a, int b)
{
	int result;
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	result = a / b;
	return (result);
}
/**
 *op_mod - function that callculate the modulus
 *@a: the first int
 *@b: the second int
 *Return: the result
 */
int op_mod(int a, int b)
{
	int result;
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	result = a % b;
	return (result);
}
