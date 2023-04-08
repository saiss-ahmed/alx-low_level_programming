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
	for (i = 1; i < argc; i++)
	{
		char *endptr;
		int num = strtol(argv[i], &endptr, 10);

		if (*endptr != '\0')
		{
		return (1);
		}
		x *= num;
	}
	printf("%i\n", x);

	return (0);
}
