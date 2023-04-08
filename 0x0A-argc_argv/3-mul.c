#include <stdio.h>
#include <stdlib.h>
/**
  *main - entry point
  *@argc: the legnth of the string
  *@argv: the string
  *Return: always 0 (success)
  */

int main(int argc, char *argv[])
{
	int i;
	int x = 1;

	if (argc < 2)
	{
		printf("Error");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
		x = x * atoi(argv[i]);
		}
		printf("%i\n", x);
	}
	return (0);
}
