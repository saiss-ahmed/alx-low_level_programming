#include <stdio.h>
/**
 * main - Entry point
 * Description:prints the size of various types on the computer
 * printf:a command to output a string
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a;
	char b;
	long c;
	double f;
	float d;

	printf("Size of a char: %lu byte(s)\n", sizeof(b));
	printf("Size of an int: %lu byte(s)\n", sizeof(a));
	printf("Size of a long int: %lu byte(s)\n", sizeof(c));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(f));
	printf("Size of a float: %lu byte(s)\n", sizeof(d));
	return (0);
}
