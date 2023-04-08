#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
  *main - entry point
  *@argc: the length
  *@argv: the string
  *Return: either 0 or 1
  */

int main(int argc, char *argv[])
{
	int i, j, k;
	int sum = 0;

	if (argc == 0)
	{
		printf("0\n");
		return (1);
	}
	for (i = 1; i < argc; i++)
	{
		int len = strlen(argv[i]);

		for (j = 0 ; j < len; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	for (k = 0 ; k < argc; k++)
	{
		sum += atoi(argv[k]);
	}
	printf("%d\n", sum);
	return (0);
}
