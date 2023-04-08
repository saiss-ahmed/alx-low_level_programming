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
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
		printf("%i\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
