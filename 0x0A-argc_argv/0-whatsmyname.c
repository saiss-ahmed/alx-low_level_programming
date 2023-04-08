#include <stdio.h>
/**
 *main - entry point
 *@argc: the length of the total command paramethers
 *@argv: the array of chars that are in the command
 *Return: always 0 (success)
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
