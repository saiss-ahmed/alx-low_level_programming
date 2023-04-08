#include <stdio.h>
/**
 *main - entry point
 *@argc: the length of the paramethers in the exec command
 *@argv: the string thet comes after the command exec
 *Return: always 0 (success)
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%i\n", argc);
	return (0);
}
