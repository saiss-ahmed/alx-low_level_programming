#include <stdio.h>
#include <stdlib.h>
/**
  *main - entry point
  *@argc: the legnth of the string
  *@argv: the string
  *Return: 0 means success and 1 means its faulse
  */

int main(int argc, char *argv[])
{
	int i;
	int x = 1;

	if (argc < 2)
	{
		printf("Error");
		return (1);
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
