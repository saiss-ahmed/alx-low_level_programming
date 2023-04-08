#include <stdio.h>
/**
 *main - entry point
 *@argc: the string length
 *@argv:the string of chars after the command exec
 *Return: always 0 (success)
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
